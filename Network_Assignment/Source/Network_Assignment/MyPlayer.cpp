#include "MyPlayer.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/NetDriver.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"

#include "MyMovementComponent.h"
#include "MovementStatics.h"
#include "MyPlayerSettings.h"
#include "MyPickup.h"
#include "MyRocket.h"
#include "MyNetDebugWidget.h"

AMyPlayer::AMyPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	RootComponent = CollisionComponent;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(CollisionComponent);

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->bInheritYaw = false;
	SpringArmComponent->SetupAttachment(CollisionComponent);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);

	MovementComponent = CreateDefaultSubobject<UMyMovementComponent>(TEXT("MovementComponent"));

	SetReplicateMovement(false);
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();

	MovementComponent->SetUpdatedComponent(CollisionComponent);
	currentHealth = PlayerSettings->Health;

	CreateDebugWidget();
	if (DebugMenuInstance != nullptr)
	{
		DebugMenuInstance->SetVisibility(ESlateVisibility::Collapsed);
	}

	SpawnRockets();
	BP_OnHealthChanged(currentHealth);
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	fireCooldownElapsed -= DeltaTime;

	if (!ensure(PlayerSettings != nullptr)) return;

	if(IsLocallyControlled())
	{
		const float maxVelocity = PlayerSettings->MaxVelocity;
		const float acceleration = PlayerSettings->Acceleration;
		const float friction = IsBraking() ? PlayerSettings->BrakingFriction : PlayerSettings->Friction;
		const float alpha = FMath::Clamp(FMath::Abs(MovementVelocity / (PlayerSettings->MaxVelocity * 0.75f)), 0.0f, 1.0f);
		const float turnSpeed = FMath::InterpEaseOut(0.0f, PlayerSettings->TurnSpeedDefault, alpha, 5.0f);
		const float movementDirection = MovementVelocity > 0.0f ? turn : -turn;

		Yaw += (movementDirection * turnSpeed) * DeltaTime;
		FQuat WantedFacingDirection = FQuat(FVector::UpVector, FMath::DegreesToRadians(Yaw));
		MovementComponent->SetFacingRotation(WantedFacingDirection);

		FFrameMovement FrameMovement = MovementComponent->CreateFrameMovement();

		MovementVelocity += forward * acceleration * DeltaTime;
		MovementVelocity = FMath::Clamp(MovementVelocity, -maxVelocity, maxVelocity);
		MovementVelocity *= FMath::Pow(friction, DeltaTime);

		MovementComponent->ApplyGravity();
		FrameMovement.AddDelta(GetActorForwardVector() * MovementVelocity * DeltaTime);
		MovementComponent->Move(FrameMovement);

		Server_SyncLocation(GetActorLocation());
		Server_SyncRotation(MovementComponent->GetFacingRotation());
	}
	else
	{
		const FVector newLocation = FMath::VInterpTo(GetActorLocation(), replicatedLocation, DeltaTime, 10.f);
		SetActorLocation(newLocation);
		MovementComponent->SetFacingRotation(FRotator(0.0f, replicatedYaw, 0.0f), 7.0f);
		SetActorRotation(MovementComponent->GetFacingRotation());
	}
}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Accelerate"), this, &AMyPlayer::Handle_Accelerate);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMyPlayer::Handle_Turn);

	PlayerInputComponent->BindAction(TEXT("Brake"), IE_Pressed, this, &AMyPlayer::Handle_BrakePressed);
	PlayerInputComponent->BindAction(TEXT("Brake"), IE_Released, this, &AMyPlayer::Handle_BrakeReleased);

	PlayerInputComponent->BindAction(TEXT("DebugMenu"), IE_Pressed, this, &AMyPlayer::Handle_DebugMenuPressed);

	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &AMyPlayer::Handle_FirePressed);

}

int32 AMyPlayer::GetPing() const
{
	if (GetPlayerState())
	{
		return static_cast<int32>(GetPlayerState()->GetPing());
	}

	return 0;
}

void AMyPlayer::OnPickup(AMyPickup* pickup)
{
	if (IsLocallyControlled()) { Server_OnPickup(pickup); }
}

void AMyPlayer::Server_OnPickup_Implementation(AMyPickup* pickup)
{
	serverNumRockets += pickup->NumRockets;
	Client_OnPickupRockets(pickup->NumRockets);
}

void AMyPlayer::Client_OnPickupRockets_Implementation(int32 pickedupRockets)
{
	numRockets += pickedupRockets;
	BP_OnNumRocketsChanged(numRockets);
	Server_SyncRockets(numRockets);
}

void AMyPlayer::ShowDebugMenu()
{
	CreateDebugWidget();

	DebugMenuInstance->SetVisibility(ESlateVisibility::Visible);
	DebugMenuInstance->BP_OnShowWidget();
}

void AMyPlayer::HideDebugMenu()
{
	if (DebugMenuInstance == nullptr) { return; }

	DebugMenuInstance->SetVisibility(ESlateVisibility::Collapsed);
	DebugMenuInstance->BP_OnHideWidget();
}

void AMyPlayer::Server_SyncLocation_Implementation(const FVector& location)
{
	replicatedLocation = location;
}

void AMyPlayer::Server_SyncRotation_Implementation(const FRotator& rotation)
{
	replicatedYaw = rotation.Yaw;
}

void AMyPlayer::Server_SyncHealth_Implementation(const float& health)
{
	BP_OnHealthChanged(health);
	Multicast_SyncHealth(health);
}

void AMyPlayer::Multicast_SyncHealth_Implementation(const float& health)
{
	BP_OnHealthChanged(health);
}

void AMyPlayer::Server_SyncRockets_Implementation(const int32& rockets)
{
	BP_OnNumRocketsChanged(rockets);
	Multicast_SyncRockets(rockets);
}

void AMyPlayer::Multicast_SyncRockets_Implementation(const int32& rockets)
{
	BP_OnNumRocketsChanged(rockets);
}


void AMyPlayer::Handle_Accelerate(float value)
{
	forward = value;
}

void AMyPlayer::Handle_Turn(float value)
{
	turn = value;
}

void AMyPlayer::Handle_BrakePressed()
{
	bBreak = true;
}

void AMyPlayer::Handle_BrakeReleased()
{
	bBreak = false;
}

void AMyPlayer::Handle_DebugMenuPressed()
{
	bShowDebugMenu = !bShowDebugMenu;

	if (bShowDebugMenu) { ShowDebugMenu(); }
	else { HideDebugMenu(); }
}

void AMyPlayer::Handle_FirePressed()
{
	FireRocket();
}

int32 AMyPlayer::GetNumActiveRockets() const
{
	int32 NumActive = 0;
	for (AMyRocket* Rocket : rocketInstances)
	{
		if (!Rocket->IsFree()) { NumActive++; }
	}
	return NumActive;
}


void AMyPlayer::FireRocket()
{
	if (fireCooldownElapsed > 0.0f) { return; }
	if (numRockets <= 0 && !bUnlimitedRockets) { return; }
	if (GetNumActiveRockets() >= maxActiveRockets) { return; }

	AMyRocket* newRocket = GetFreeRocket();

	if(!ensure(newRocket != nullptr)) { return; }

	fireCooldownElapsed = PlayerSettings->FireCooldown;
	numRockets--;
	Server_SyncRockets(numRockets);

	if (GetLocalRole() >= ROLE_AutonomousProxy)
	{
		if (HasAuthority())
		{
			Server_FireRocket(newRocket, GetRocketStartLocation(), GetActorRotation());
		}
		else
		{
			newRocket->StartMoving(GetActorForwardVector(), GetRocketStartLocation());
			Server_FireRocket(newRocket, GetRocketStartLocation(), GetActorRotation());
		}
	}
}

void AMyPlayer::SpawnRockets()
{
	if (HasAuthority() && rocketClass != nullptr)
	{
		const int32 rocketCache = 8;

		for (int32 index = 0; index < rocketCache; ++index)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
			SpawnParams.ObjectFlags = RF_Transient;
			SpawnParams.Instigator = this;
			SpawnParams.Owner = this;
			AMyRocket* newRocketInstance = GetWorld()->SpawnActor<AMyRocket>(rocketClass, GetActorLocation(), GetActorRotation(), SpawnParams);
			rocketInstances.Add(newRocketInstance);
		}
	}
}

void AMyPlayer::TakeDamage(float amount)
{
	currentHealth -= amount;
	BP_OnHealthChanged(currentHealth);
	Server_SyncHealth(currentHealth);
}

FVector AMyPlayer::GetRocketStartLocation() const
{
	const FVector startLoc = GetActorLocation() + GetActorForwardVector() * 100.0f;
	return startLoc;
}

AMyRocket* AMyPlayer::GetFreeRocket() const
{
	for (AMyRocket* rocket : rocketInstances)
	{
		if (rocket == nullptr) { continue; }
		if (rocket->IsFree()) { return rocket;}
	}
	return nullptr;
}

void AMyPlayer::Server_FireRocket_Implementation(AMyRocket* newRocket, const FVector& rocketStartLocation, const FRotator& rocketFacingRotation)
{
	if ((serverNumRockets - 1) < 0 && !bUnlimitedRockets)
	{
		Client_RemoveRocket(newRocket);
	}
	else
	{
		const float DeltaYaw = FMath::FindDeltaAngleDegrees(rocketFacingRotation.Yaw, GetActorForwardVector().Rotation().Yaw) * 0.5f;
		const FRotator NewFacingRotation = rocketFacingRotation + FRotator(0.0f, DeltaYaw, 0.0f);
		Multicast_FireRocket(newRocket, rocketStartLocation, NewFacingRotation);
	}
}

void AMyPlayer::Multicast_FireRocket_Implementation(AMyRocket* newRocket, const FVector& rocketStartLocation, const FRotator& rocketFacingRotation)
{
	if (!ensure(newRocket != nullptr)) { return; }

	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		newRocket->ApplyCorrection(rocketFacingRotation.Vector());
	}
	else
	{
		newRocket->StartMoving(rocketFacingRotation.Vector(), rocketStartLocation);
	}
}

void AMyPlayer::Client_RemoveRocket_Implementation(AMyRocket* rocketToRemove)
{
	rocketToRemove->MakeFree();
}

void AMyPlayer::Cheat_IncreaseRocket(int32 inNumRockets)
{
	if (IsLocallyControlled()) { numRockets += inNumRockets; }
}

void AMyPlayer::Cheat_ChangeHealth(float amount)
{
	currentHealth += amount;
	if (IsLocallyControlled()) { Server_SyncHealth(currentHealth); }
}

void AMyPlayer::CreateDebugWidget()
{
	if (DebugMenuClass == nullptr) { return; }
	if (!IsLocallyControlled()) { return; }

	if (DebugMenuInstance == nullptr)
	{
		DebugMenuInstance = CreateWidget<UMyNetDebugWidget>(GetWorld(), DebugMenuClass);
		DebugMenuInstance->AddToViewport();
	}
}

void AMyPlayer ::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyPlayer, replicatedYaw);
	DOREPLIFETIME(AMyPlayer, replicatedLocation);
	DOREPLIFETIME(AMyPlayer, currentHealth);
	DOREPLIFETIME(AMyPlayer, rocketInstances);
	DOREPLIFETIME(AMyPlayer, numRockets);
}