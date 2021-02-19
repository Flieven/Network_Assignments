#pragma once

#include "GameFramework/Pawn.h"
#include "MyPlayer.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UMyMovementComponent;
class UStaticMeshComponent;
class USphereComponent;

class UMyPlayerSettings;
class UMyNetDebugWidget;
class AMyPickup;
class AMyRocket;

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

	UPROPERTY(EditAnywhere, Category = Settings)
		UMyPlayerSettings* PlayerSettings = nullptr;

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

	void OnPickup(AMyPickup* pickup);

	UFUNCTION(Server, Reliable)
		void Server_OnPickup(AMyPickup* pickup);

	UFUNCTION(Client, Reliable)
		void Client_OnPickupRockets(int32 pickedupRockets);

	UPROPERTY(EditAnywhere, Category = Debug)
		TSubclassOf<UMyNetDebugWidget> DebugMenuClass;

	UFUNCTION(Server, Unreliable)
		void Server_SyncLocation(const FVector& location);

	UFUNCTION(Server, Unreliable)
		void Server_SyncRotation(const FRotator& rotation);

	UFUNCTION(Server, Reliable)
		void Server_PlayerIsHit(AMyPlayer* player, const float& damage);

	UFUNCTION(NetMulticast, Reliable)
		void Multicast_PlayerIsHit(AMyPlayer* Player, const float& damage);

	UFUNCTION(Server, Reliable)
		void Server_SyncHealth(const float& health);

	UFUNCTION(NetMulticast, Reliable)
		void Multicast_SyncHealth(const float& health);

	UFUNCTION(Server, Unreliable)
		void Server_SyncRockets(const int32& rockets);

	UFUNCTION(NetMulticast, Unreliable)
		void Multicast_SyncRockets(const int32& rockets);

	void ShowDebugMenu();
	void HideDebugMenu();

	UFUNCTION(BlueprintPure)
		int32 GetNumRockets() const { return numRockets; }

	UFUNCTION(BlueprintImplementableEvent, Category = Player, meta = (DisplayName = "On Num Rockets Changed"))
		void BP_OnNumRocketsChanged(int32 newNumRockets);

	UFUNCTION(BlueprintImplementableEvent, Category = Player, meta = (DisplayName = "On Health Changed"))
		void BP_OnHealthChanged(float newHealth);

	int32 GetNumActiveRockets() const;

	void FireRocket();

	void SpawnRockets();

	void IsHit(float amount);

private:

	bool bShowDebugMenu = false;
	bool bBreak = false;

	UPROPERTY(Replicated)
	float currentHealth = 0.0f;

	float fireCooldownElapsed = 3;

	float forward = 0.0f;
	float turn = 0.0f;

	float MovementVelocity = 0.0f;
	float Yaw = 0.0f;

	int32 serverNumRockets = 0;

	UPROPERTY(Replicated, Transient)
	int32 numRockets = 0;

	int32 maxActiveRockets = 3;

	FVector GetRocketStartLocation() const;
	AMyRocket* GetFreeRocket() const;

	void Handle_Accelerate(float value);
	void Handle_Turn(float value);
	void Handle_BrakePressed();
	void Handle_BrakeReleased();

	void Handle_DebugMenuPressed();
	//void Handle_DebugMenuReleased();

	void Handle_FirePressed();

	void CreateDebugWidget();

	UFUNCTION(Server, Reliable)
		void Server_FireRocket(AMyRocket* NewRocket, const FVector& RocketStartLocation, const FRotator& RocketFacingRotation);

	UFUNCTION(NetMulticast, Reliable)
		void Multicast_FireRocket(AMyRocket* NewRocket, const FVector& RocketStartLocation, const FRotator& RocketFacingRotation);

	UFUNCTION(Client, Reliable)
		void Client_RemoveRocket(AMyRocket* RocketToRemove);

	UFUNCTION(BlueprintCallable)
		void Cheat_IncreaseRocket(int32 InNumRockets);

	UFUNCTION(BlueprintCallable)
		void Cheat_ChangeHealth(float amount);

	UPROPERTY(Replicated, Transient)
		TArray<AMyRocket*> rocketInstances;

	UPROPERTY(EditAnywhere, Category = "Weapon")
		TSubclassOf<AMyRocket> rocketClass;

	UPROPERTY(EditAnywhere, Category = "Weapon")
		bool bUnlimitedRockets = false;

	UPROPERTY(EditAnywhere, Category = "Player")
		bool bUnlimitedHealth = false;

	UPROPERTY(Transient)
		UMyNetDebugWidget* DebugMenuInstance = nullptr;

	UPROPERTY(Replicated)
		float replicatedYaw = 0.0f;

	UPROPERTY(Replicated)
		FVector replicatedLocation;

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