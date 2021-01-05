#pragma once

#include "GameFramework/Pawn.h"
#include "MyPlayer.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UMyMovementComponent;
class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class NETWORK_ASSIGNMENT_API AMyPlayer : public APawn
{
	GENERATED_BODY()
public:
	AMyPlayer();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(EditAnywhere, Category = Movement)
		float Acceleration = 500.0f;

	UPROPERTY(EditAnywhere, Category = Movement, meta = (DisplayName = "TurnSpeed"))
		float TurnSpeedDefault = 100.0f;

	UPROPERTY(EditAnywhere, Category = Movement)
		float MaxVelocity = 2000.0f;

	UPROPERTY(EditAnywhere, Category = Movement, meta = (ClampMin = 0.0, ClampMax = 1.0))
		float DefaultFriction = 0.75f;

	UPROPERTY(EditAnywhere, Category = Movement, meta = (ClampMin = 0.0, ClampMax = 1.0))
		float BrakingFriction = 0.001f;

	UFUNCTION(BlueprintPure)
		bool IsBraking() const { return bBreak; }

	UFUNCTION(BlueprintPure)
		int32 GetPing() const;

	UFUNCTION(Server, Unreliable)
	void Server_SendLocation(const FVector& location, float deltaTime);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_SendLocation(const FVector& location, float deltaTime);

	UFUNCTION(Server, Unreliable)
	void Server_SyncRotation(const FRotator& rotation, float deltaTime);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_SyncRotation(const FRotator& rotation, float deltaTime);

private:

	void Handle_Accelerate(float value);
	void Handle_Turn(float value);
	void Handle_BrakePressed();
	void Handle_BrakeReleased();

	//void Handle_DebugMenuPressed();
	//void Handle_DebugMenuReleased();

	float forward = 0.0f;
	float turn = 0.0f;

	float MovementVelocity = 0.0f;
	float Yaw = 0.0f;

	FVector newLoc = FVector::ZeroVector;
	FRotator newRot = FRotator::ZeroRotator;
	float newDelta = 0.0f;
	float transitionTime = 2.5f;

	bool bBreak = false;

	UPROPERTY(VisibleDefaultsOnly, Category = Collision)
		USphereComponent* CollisionComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Camera)
		USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Camera)
		UCameraComponent* CameraComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Movement)
		UMyMovementComponent* MovementComponent;

};