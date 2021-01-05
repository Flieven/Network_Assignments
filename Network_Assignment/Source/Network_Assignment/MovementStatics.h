#pragma once

#include "CoreMinimal.h"

class AActor;
class USceneComponent;

struct FFrameMovement
{
	FFrameMovement(const FVector& InStartLocation) :
		StartLocation(InStartLocation) {}

	FFrameMovement(AActor* InActor);
	FFrameMovement(USceneComponent* InSceneComponent);

	void AddDelta(const FVector& InDelta);

	FVector GetMovementDelta() const { return MovementDelta; }

	FHitResult Hit;

	FVector FinalLocation = FVector::ZeroVector;

private:
	FVector MovementDelta = FVector::ZeroVector;
	FVector StartLocation = FVector::ZeroVector;

};
