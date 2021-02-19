#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyRocket.generated.h"

class UStaticMeshComponent;
class USphereComponent;
class AMyPlayer;

UCLASS()
class NETWORK_ASSIGNMENT_API AMyRocket : public AActor
{
	GENERATED_BODY()

public:
	AMyRocket();
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void StartMoving(const FVector& Forward, const FVector& InStartLocation);
	void ApplyCorrection(const FVector& Forward);

	void Explode();
	void MakeFree();

	bool IsFree() const { return bIsFree; }

	bool bIsActive = false;
	AMyPlayer* owner;

private:

	void SetRocketVisibility(bool bVisible);
	FCollisionQueryParams CachedCollisionQuaryParams;

	UPROPERTY(EditAnywhere, Category = "VFX")
		UParticleSystem* Explosion = nullptr;

	UPROPERTY(EditAnywhere, Category = "VFX")
		UStaticMeshComponent* MeshComponent = nullptr;

	UPROPERTY(EditAnywhere, Category = "Debug")
		bool bDebugDrawCorrection = true;

	UPROPERTY(EditAnywhere, Category = "Explosion")
		float explosionRadius = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Explosion")
		float damageDone = 5.0f;

	UPROPERTY(EditAnywhere)
		float movementVelocity = 1300.0f;

	FVector originalFacingDirection = FVector::ZeroVector;

	FVector FacingRotationStart = FVector::ZeroVector;
	FQuat FacingRotationCorrection = FQuat::Identity;

	FVector RocketStartLocation = FVector::ZeroVector;

	TArray<FOverlapResult> overlappingPlayers;

	FCollisionShape collisionSphere;

	float LifeTime = 2.0f;
	float LifeTimeElapsed = 0.0f;

	float DistanceMoved = 0.0f;

	bool bIsFree = true;
};
