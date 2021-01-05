#include "MyPlayer.h"
#include "Components/InputComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/NetDriver.h"
#include "GameFramework/PlayerState.h"
#include "MyMovementComponent.h"
#include "MovementStatics.h"

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
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(IsLocallyControlled())
	{
		const float Friction = IsBraking() ? BrakingFriction : DefaultFriction;
		const float Alpha = FMath::Clamp(FMath::Abs(MovementVelocity / (MaxVelocity * 0.75f)), 0.0f, 1.0f);
		const float TurnSpeed = FMath::InterpEaseOut(0.0f, TurnSpeedDefault, Alpha, 5.0f);
		const float MovementDirection = MovementVelocity > 0.0f ? turn : -turn;

		Yaw += (MovementDirection * TurnSpeed) * DeltaTime;
		FQuat WantedFacingDirection = FQuat(FVector::UpVector, FMath::DegreesToRadians(Yaw));
		MovementComponent->SetFacingRotation(WantedFacingDirection);

		FFrameMovement FrameMovement = MovementComponent->CreateFrameMovement();

		MovementVelocity += forward * Acceleration * DeltaTime;
		MovementVelocity = FMath::Clamp(MovementVelocity, -MaxVelocity, MaxVelocity);
		MovementVelocity *= FMath::Pow(Friction, DeltaTime);

		MovementComponent->ApplyGravity();
		FrameMovement.AddDelta(GetActorForwardVector() * MovementVelocity * DeltaTime);
		MovementComponent->Move(FrameMovement);

		Server_SendLocation(GetActorLocation(), DeltaTime);
		Server_SyncRotation(GetActorRotation(), DeltaTime);
	}
	else
	{
		if (GetActorLocation() != newLoc)
		{
			SetActorLocation(FMath::VInterpTo(GetActorLocation(), newLoc, newDelta, transitionTime));
		}
		if (GetActorRotation() != newRot)
		{
			SetActorRotation(FMath::RInterpTo(GetActorRotation(), newRot, newDelta, transitionTime));
		}
	}
}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Accelerate"), this, &AMyPlayer::Handle_Accelerate);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMyPlayer::Handle_Turn);

	PlayerInputComponent->BindAction(TEXT("Brake"), IE_Pressed, this, &AMyPlayer::Handle_BrakePressed);
	PlayerInputComponent->BindAction(TEXT("Brake"), IE_Released, this, &AMyPlayer::Handle_BrakeReleased);

	//PlayerInputComponent->BindAction(TEXT("DebugMenu"), IE_Pressed, this, &AMyPlayer::Handle_DebugMenuPressed);

}

int32 AMyPlayer::GetPing() const
{
	if (GetPlayerState())
	{
		return static_cast<int32>(GetPlayerState()->GetPing());
	}

	return 0;
}

void AMyPlayer::Server_SendLocation_Implementation(const FVector& location, float deltaTime)
{
	Multicast_SendLocation(location, deltaTime);
}


void AMyPlayer::Multicast_SendLocation_Implementation(const FVector& location, float deltaTime)
{
	if(!IsLocallyControlled())
	{ 
		if (!IsLocallyControlled())
		{
			newLoc = location;
			newDelta = deltaTime;
		}
	}
}


void AMyPlayer::Server_SyncRotation_Implementation(const FRotator& rotation, float deltaTime)
{
	Multicast_SyncRotation(rotation, deltaTime);
}

void AMyPlayer::Multicast_SyncRotation_Implementation(const FRotator& rotation, float deltaTime)
{
	if (!IsLocallyControlled())
	{
		if (!IsLocallyControlled())
		{
			newRot = rotation;
			newDelta = deltaTime;
		}
	}
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

