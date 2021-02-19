#include "MyRocket.h"

#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"
#include "Kismet//GameplayStatics.h"
#include "MyPlayer.h"
#include "DrawDebugHelpers.h"

AMyRocket::AMyRocket()
{
	PrimaryActorTick.bStartWithTickEnabled = false;
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneCompRoot"));

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComponent->SetupAttachment(RootComponent);
	MeshComponent->SetGenerateOverlapEvents(false);
	MeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

	collisionSphere = FCollisionShape::MakeSphere(explosionRadius);

	SetReplicates(true);
}

void AMyRocket::BeginPlay()
{
	Super::BeginPlay();

	CachedCollisionQuaryParams.AddIgnoredActor(this);
	CachedCollisionQuaryParams.AddIgnoredActor(GetOwner());

	SetRocketVisibility(false);
}

void AMyRocket::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	LifeTimeElapsed -= DeltaTime;
	DistanceMoved += movementVelocity * DeltaTime;

	FacingRotationStart = FQuat::Slerp(FacingRotationStart.ToOrientationQuat(), FacingRotationCorrection, 0.09f * DeltaTime).Vector();

#if !UE_BUILD_SHIPPING
	if (bDebugDrawCorrection)
	{
		const float ArrowLength = 3000.0f;
		const float ArrowSize = 50.0f;

		DrawDebugDirectionalArrow(GetWorld(), RocketStartLocation, RocketStartLocation + originalFacingDirection * ArrowLength, ArrowSize, FColor::Red);

		DrawDebugDirectionalArrow(GetWorld(), RocketStartLocation, RocketStartLocation + FacingRotationStart * ArrowLength, ArrowSize, FColor::Green);
	}

#endif //UE_BUILD_SHIPPING

	const FVector NewLocation = RocketStartLocation + FacingRotationStart * DistanceMoved;

	SetActorLocation(NewLocation);

	FHitResult Hit;
	const FVector StartLoc = NewLocation;
	const FVector EndLoc = StartLoc + FacingRotationStart * 100.0f;
	GetWorld()->LineTraceSingleByChannel(Hit, StartLoc, EndLoc, ECC_Visibility, CachedCollisionQuaryParams);

	if (Hit.bBlockingHit) { Explode(); }

	if (LifeTimeElapsed < 0.0f) { Explode(); }
}

void AMyRocket::StartMoving(const FVector& forward, const FVector& inStartLocation)
{
	FacingRotationStart = forward;
	FacingRotationCorrection = FacingRotationStart.ToOrientationQuat();
	RocketStartLocation = inStartLocation;
	SetActorLocationAndRotation(inStartLocation, forward.Rotation());
	bIsFree = false;
	SetActorTickEnabled(true);
	SetRocketVisibility(true);
	LifeTimeElapsed = LifeTime;
	DistanceMoved = 0.0f;
	originalFacingDirection = FacingRotationStart;
}

void AMyRocket::ApplyCorrection(const FVector& forward)
{
	FacingRotationCorrection = forward.ToOrientationQuat();
}

void AMyRocket::Explode()
{
	if (Explosion != nullptr)
	{	
		if (bIsActive)
		{
			UE_LOG(LogTemp, Warning, TEXT("Exploding Rocket: %s is %s"), *GetName(), bIsActive ? TEXT("true") : TEXT("false"));
			GetWorld()->OverlapMultiByChannel
			(overlappingPlayers, GetActorLocation(), FQuat::Identity, ECC_WorldDynamic, collisionSphere);

			//DrawDebugSphere(GetWorld(), GetActorLocation(), explosionRadius, 16, FColor::Red, true, .5f);

			TArray<AMyPlayer*> uniqueHits;

			for (FOverlapResult result : overlappingPlayers)
			{
				if (AMyPlayer* playerActor = Cast<AMyPlayer>(result.GetActor()))
				{
					uniqueHits.AddUnique(playerActor);
				}
			}

			for (AMyPlayer* player : uniqueHits)
			{
				owner->Server_PlayerIsHit(player, damageDone);
			}
		}

		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion, GetActorLocation(), GetActorRotation(), true);
	}
	overlappingPlayers.Empty();
	MakeFree();
}


void AMyRocket::MakeFree()
{
	bIsFree = true;
	bIsActive = false;
	SetActorTickEnabled(false);
	SetRocketVisibility(false);
}

void AMyRocket::SetRocketVisibility(bool bVisible)
{
	RootComponent->SetVisibility(bVisible, true);
}