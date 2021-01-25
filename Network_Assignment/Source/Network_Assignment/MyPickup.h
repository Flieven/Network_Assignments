#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyPickup.generated.h"

class USphereComponent;

UENUM(BlueprintType)
enum class EMyPickupType : uint8
{
	Rocket,
	Health
};

UCLASS()
class NETWORK_ASSIGNMENT_API AMyPickup : public AActor
{
	GENERATED_BODY()

public:
	AMyPickup();

	UPROPERTY(VisibleDefaultsOnly, Category = "Collision")
		USphereComponent* SphereComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
		UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
		EMyPickupType PickupType = EMyPickupType::Rocket;

	UPROPERTY(EditAnywhere)
		int32 NumRockets;

	UPROPERTY(EditAnywhere)
		float ReActivateTime = 5.0f;

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void Tick(float DeltaTime) override;

	FVector CachedMeshRelativeLocation = FVector::ZeroVector;
	FTimerHandle ReActivateHandle;

	UFUNCTION()
		void ReActivatePickup();

	UFUNCTION()
		void OverlapBegin(UPrimitiveComponent* OverlappedComponet, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	bool bPickedUp = false;
};