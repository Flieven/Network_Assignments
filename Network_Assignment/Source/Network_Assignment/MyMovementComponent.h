#pragma once

#include "GameFramework/MovementComponent.h"
#include "MyMovementComponent.generated.h"

struct FFrameMovement;

UCLASS()
class NETWORK_ASSIGNMENT_API UMyMovementComponent : public UMovementComponent
{
	GENERATED_BODY()
public:

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	FFrameMovement CreateFrameMovement() const;

	void Move(FFrameMovement& FrameMovement);
	void ApplyGravity();

	UPROPERTY(EditAnywhere, Category = Movement)
		float Gravity = 30.0f;

	FVector GetGravityAsVector() const { return FVector(0.0f, 0.0f, AccumulatedGravity); }
	FRotator GetFacingRotation() const { return FacingRotationCurrent; }
	FVector GetFacingDirection() const { return FacingRotationCurrent.Vector(); }

	void SetFacingRotation(const FRotator& InFaceingRotation, float InRotationSpeed = -1.0f);
	void SetFacingRotation(const FQuat& InFacingRotation, float InRotationSPeed = -1.0f);
	void SetFacingDirection(const FVector& InFacingDirection, float InRotationSpeed = -1.0f);

private:
	void Internal_SetFacingRotation(const FRotator& InFacintRotation, float InROtationSpeed);
	FVector GetMovementDelta(const FFrameMovement& FrameMovement) const;

	FHitResult Hit;
	FRotator FacingRotationCurrent;
	FRotator FacingRotationTarget;
	float AccumulatedGravity = 0.0f;
	float FacingRotationSpeed = 1.0f;

};