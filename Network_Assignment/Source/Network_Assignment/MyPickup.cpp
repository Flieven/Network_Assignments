#include "MyPickup.h"

#include "DrawDebugHelpers.h"
#include "MyPlayer.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"

AMyPickup::AMyPickup()
{
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	SphereComponent->SetupAttachment(RootComponent);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComponent->SetupAttachment(RootComponent);
	MeshComponent->SetGenerateOverlapEvents(false);
	MeshComponent->SetCollisionProfileName(TEXT("NoCollision"));

	SetReplicates(true);
}

void AMyPickup::BeginPlay()
{
	Super::BeginPlay();

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AMyPickup::OverlapBegin);
	CachedMeshRelativeLocation = MeshComponent->GetRelativeLocation();
}

void AMyPickup::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (const UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(ReActivateHandle);
	}
}

void AMyPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const float PulsatingValue = FMath::MakePulsatingValue(GetWorld()->GetTimeSeconds(), 0.65f) * 30.0f;
	const FVector NewLocation = CachedMeshRelativeLocation + FVector(0.0f, 0.0f, PulsatingValue);
	FHitResult Hit;
	MeshComponent->SetRelativeLocation(NewLocation, false, &Hit, ETeleportType::TeleportPhysics);
	MeshComponent->AddRelativeRotation(FRotator(0.0f, 20.0f * DeltaTime, 0.0f), false, &Hit, ETeleportType::TeleportPhysics);
}

void AMyPickup::ReActivatePickup()
{
	bPickedUp = false;
	RootComponent->SetVisibility(true, true);
	SphereComponent->SetCollisionProfileName(TEXT("CustomOverlapAll"));
}

void AMyPickup::OverlapBegin(UPrimitiveComponent* OverlappedComponet, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) 
{
	if (bPickedUp) { return; }

	if (AMyPlayer* Player = Cast<AMyPlayer>(OtherActor))
	{
		Player->OnPickup(this);
		bPickedUp = true;
		SphereComponent->SetCollisionProfileName(TEXT("NoCollision"));

		RootComponent->SetVisibility(false, true);

		GetWorldTimerManager().SetTimer(ReActivateHandle, this, &AMyPickup::ReActivatePickup, ReActivateTime, false);
	}
}
