#include "MyMovementComponent.h"
#include "MovementStatics.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

void UMyMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FacingRotationCurrent = FQuat::Slerp(FacingRotationCurrent.Quaternion(), FacingRotationTarget.Quaternion(), FacingRotationSpeed * DeltaTime).Rotator();

	if (FacingRotationCurrent.Equals(FacingRotationTarget))
	{
		FacingRotationCurrent = FacingRotationTarget;
		SetComponentTickEnabled(false);
	}
}

FFrameMovement UMyMovementComponent::CreateFrameMovement() const
{
	return FFrameMovement(UpdatedComponent);
}

void UMyMovementComponent::Move(FFrameMovement& FrameMovement)
{
	Hit.Reset();

	FVector Delta = GetMovementDelta(FrameMovement);
	MoveUpdatedComponent(Delta, FacingRotationCurrent, true, &Hit);

	if (Hit.bBlockingHit && FVector::DotProduct(FVector::UpVector, Hit.Normal) > 0.0f)
	{
		AccumulatedGravity = 0.0f;
		Delta = GetMovementDelta(FrameMovement);
	}

	SlideAlongSurface(Delta, 1.0f - Hit.Time, Hit.Normal, Hit);

	FrameMovement.Hit = Hit;
	FrameMovement.FinalLocation = UpdatedComponent->GetComponentLocation();
}

void UMyMovementComponent::ApplyGravity()
{
	AccumulatedGravity += Gravity * GetWorld()->GetDeltaSeconds();
}

void UMyMovementComponent::SetFacingRotation(const FRotator& InFacingRotation, float InRotationSpeed)
{
	Internal_SetFacingRotation(InFacingRotation, InRotationSpeed);
}

void UMyMovementComponent::SetFacingRotation(const FQuat& InFacingDirection, float InRotationSpeed)
{
	Internal_SetFacingRotation(InFacingDirection.Rotator(), InRotationSpeed);
}

void UMyMovementComponent::SetFacingDirection(const FVector& InFacingDirection, float InRotationSpeed)
{
	Internal_SetFacingRotation(InFacingDirection.Rotation(), InRotationSpeed);
}

void UMyMovementComponent::Internal_SetFacingRotation(const FRotator& InFacingRotation, float InRotationSpeed)
{
	FRotator NewRotation = InFacingRotation;
	NewRotation.Roll = 0.0f;
	NewRotation.Pitch = 0.0f;
	FacingRotationTarget = NewRotation;

	if (InRotationSpeed < 0.0f)
	{
		FacingRotationCurrent = NewRotation;
		SetComponentTickEnabled(false);
	}
	else 
	{ 
		SetComponentTickEnabled(true); 
		FacingRotationSpeed = InRotationSpeed;
	}
}

FVector UMyMovementComponent::GetMovementDelta(const FFrameMovement& FrameMovement) const
{
	return FrameMovement.GetMovementDelta() - GetGravityAsVector();
}
