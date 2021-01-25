#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyRocket.generated.h"

class UStaticMeshComponent;

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

private:

	void SetRocketVisibility(bool bVisible);
	FCollisionQueryParams CachedCollisionQuaryParams;

	UPROPERTY(EditAnywhere, Category = "VFX")
		UParticleSystem* Explosion = nullptr;

	UPROPERTY(EditAnywhere, Category = "VFX")
		UStaticMeshComponent* MeshComponent = nullptr;

	UPROPERTY(EditAnywhere, Category = "Debug")
		bool bDebugDrawCorrection = true;

	FVector OriginalFacingDirection = FVector::ZeroVector;

	FVector FacingRotationStart = FVector::ZeroVector;
	FQuat FacingRotationCorrection = FQuat::Identity;

	FVector RocketStartLocation = FVector::ZeroVector;

	float LifeTime = 2.0f;
	float LifeTimeElapsed = 0.0f;

	float DistanceMoved = 0.0f;

	UPROPERTY(EditAnywhere)
		float MovementVelocity = 1300.0f;

	bool bIsFree = true;
};
