#include "MovementStatics.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"

FFrameMovement::FFrameMovement(AActor* InActor)
{
	StartLocation = InActor->GetActorLocation();
}

FFrameMovement::FFrameMovement(USceneComponent* InSceneComponent)
{
	StartLocation = InSceneComponent->GetComponentLocation();
}

void FFrameMovement::AddDelta(const FVector& InDelta)
{
	MovementDelta += InDelta;
}
