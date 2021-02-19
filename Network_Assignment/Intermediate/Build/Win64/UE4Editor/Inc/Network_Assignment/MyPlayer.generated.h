// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyRocket;
struct FVector;
struct FRotator;
class AMyPlayer;
class AMyPickup;
#ifdef NETWORK_ASSIGNMENT_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define NETWORK_ASSIGNMENT_MyPlayer_generated_h

#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_SPARSE_DATA
#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_RPC_WRAPPERS \
	virtual void Client_RemoveRocket_Implementation(AMyRocket* RocketToRemove); \
	virtual void Multicast_FireRocket_Implementation(AMyRocket* NewRocket, FVector const& RocketStartLocation, FRotator const& RocketFacingRotation); \
	virtual void Server_FireRocket_Implementation(AMyRocket* NewRocket, FVector const& RocketStartLocation, FRotator const& RocketFacingRotation); \
	virtual void Multicast_SyncRockets_Implementation(int32 const& rockets); \
	virtual void Server_SyncRockets_Implementation(int32 const& rockets); \
	virtual void Multicast_SyncHealth_Implementation(float const& health); \
	virtual void Server_SyncHealth_Implementation(float const& health); \
	virtual void Multicast_PlayerIsHit_Implementation(AMyPlayer* Player, float const& damage); \
	virtual void Server_PlayerIsHit_Implementation(AMyPlayer* player, float const& damage); \
	virtual void Server_SyncRotation_Implementation(FRotator const& rotation); \
	virtual void Server_SyncLocation_Implementation(FVector const& location); \
	virtual void Client_OnPickupRockets_Implementation(int32 pickedupRockets); \
	virtual void Server_OnPickup_Implementation(AMyPickup* pickup); \
 \
	DECLARE_FUNCTION(execCheat_ChangeHealth); \
	DECLARE_FUNCTION(execCheat_IncreaseRocket); \
	DECLARE_FUNCTION(execClient_RemoveRocket); \
	DECLARE_FUNCTION(execMulticast_FireRocket); \
	DECLARE_FUNCTION(execServer_FireRocket); \
	DECLARE_FUNCTION(execGetNumRockets); \
	DECLARE_FUNCTION(execMulticast_SyncRockets); \
	DECLARE_FUNCTION(execServer_SyncRockets); \
	DECLARE_FUNCTION(execMulticast_SyncHealth); \
	DECLARE_FUNCTION(execServer_SyncHealth); \
	DECLARE_FUNCTION(execMulticast_PlayerIsHit); \
	DECLARE_FUNCTION(execServer_PlayerIsHit); \
	DECLARE_FUNCTION(execServer_SyncRotation); \
	DECLARE_FUNCTION(execServer_SyncLocation); \
	DECLARE_FUNCTION(execClient_OnPickupRockets); \
	DECLARE_FUNCTION(execServer_OnPickup); \
	DECLARE_FUNCTION(execGetPing); \
	DECLARE_FUNCTION(execIsBraking);


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_RemoveRocket_Implementation(AMyRocket* RocketToRemove); \
	virtual void Multicast_FireRocket_Implementation(AMyRocket* NewRocket, FVector const& RocketStartLocation, FRotator const& RocketFacingRotation); \
	virtual void Server_FireRocket_Implementation(AMyRocket* NewRocket, FVector const& RocketStartLocation, FRotator const& RocketFacingRotation); \
	virtual void Multicast_SyncRockets_Implementation(int32 const& rockets); \
	virtual void Server_SyncRockets_Implementation(int32 const& rockets); \
	virtual void Multicast_SyncHealth_Implementation(float const& health); \
	virtual void Server_SyncHealth_Implementation(float const& health); \
	virtual void Multicast_PlayerIsHit_Implementation(AMyPlayer* Player, float const& damage); \
	virtual void Server_PlayerIsHit_Implementation(AMyPlayer* player, float const& damage); \
	virtual void Server_SyncRotation_Implementation(FRotator const& rotation); \
	virtual void Server_SyncLocation_Implementation(FVector const& location); \
	virtual void Client_OnPickupRockets_Implementation(int32 pickedupRockets); \
	virtual void Server_OnPickup_Implementation(AMyPickup* pickup); \
 \
	DECLARE_FUNCTION(execCheat_ChangeHealth); \
	DECLARE_FUNCTION(execCheat_IncreaseRocket); \
	DECLARE_FUNCTION(execClient_RemoveRocket); \
	DECLARE_FUNCTION(execMulticast_FireRocket); \
	DECLARE_FUNCTION(execServer_FireRocket); \
	DECLARE_FUNCTION(execGetNumRockets); \
	DECLARE_FUNCTION(execMulticast_SyncRockets); \
	DECLARE_FUNCTION(execServer_SyncRockets); \
	DECLARE_FUNCTION(execMulticast_SyncHealth); \
	DECLARE_FUNCTION(execServer_SyncHealth); \
	DECLARE_FUNCTION(execMulticast_PlayerIsHit); \
	DECLARE_FUNCTION(execServer_PlayerIsHit); \
	DECLARE_FUNCTION(execServer_SyncRotation); \
	DECLARE_FUNCTION(execServer_SyncLocation); \
	DECLARE_FUNCTION(execClient_OnPickupRockets); \
	DECLARE_FUNCTION(execServer_OnPickup); \
	DECLARE_FUNCTION(execGetPing); \
	DECLARE_FUNCTION(execIsBraking);


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_EVENT_PARMS \
	struct MyPlayer_eventBP_OnHealthChanged_Parms \
	{ \
		float newHealth; \
	}; \
	struct MyPlayer_eventBP_OnNumRocketsChanged_Parms \
	{ \
		int32 newNumRockets; \
	}; \
	struct MyPlayer_eventClient_OnPickupRockets_Parms \
	{ \
		int32 pickedupRockets; \
	}; \
	struct MyPlayer_eventClient_RemoveRocket_Parms \
	{ \
		AMyRocket* RocketToRemove; \
	}; \
	struct MyPlayer_eventMulticast_FireRocket_Parms \
	{ \
		AMyRocket* NewRocket; \
		FVector RocketStartLocation; \
		FRotator RocketFacingRotation; \
	}; \
	struct MyPlayer_eventMulticast_PlayerIsHit_Parms \
	{ \
		AMyPlayer* Player; \
		float damage; \
	}; \
	struct MyPlayer_eventMulticast_SyncHealth_Parms \
	{ \
		float health; \
	}; \
	struct MyPlayer_eventMulticast_SyncRockets_Parms \
	{ \
		int32 rockets; \
	}; \
	struct MyPlayer_eventServer_FireRocket_Parms \
	{ \
		AMyRocket* NewRocket; \
		FVector RocketStartLocation; \
		FRotator RocketFacingRotation; \
	}; \
	struct MyPlayer_eventServer_OnPickup_Parms \
	{ \
		AMyPickup* pickup; \
	}; \
	struct MyPlayer_eventServer_PlayerIsHit_Parms \
	{ \
		AMyPlayer* player; \
		float damage; \
	}; \
	struct MyPlayer_eventServer_SyncHealth_Parms \
	{ \
		float health; \
	}; \
	struct MyPlayer_eventServer_SyncLocation_Parms \
	{ \
		FVector location; \
	}; \
	struct MyPlayer_eventServer_SyncRockets_Parms \
	{ \
		int32 rockets; \
	}; \
	struct MyPlayer_eventServer_SyncRotation_Parms \
	{ \
		FRotator rotation; \
	};


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_CALLBACK_WRAPPERS
#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		currentHealth=NETFIELD_REP_START, \
		numRockets, \
		rocketInstances, \
		replicatedYaw, \
		replicatedLocation, \
		NETFIELD_REP_END=replicatedLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		currentHealth=NETFIELD_REP_START, \
		numRockets, \
		rocketInstances, \
		replicatedYaw, \
		replicatedLocation, \
		NETFIELD_REP_END=replicatedLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public:


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer)


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__currentHealth() { return STRUCT_OFFSET(AMyPlayer, currentHealth); } \
	FORCEINLINE static uint32 __PPO__numRockets() { return STRUCT_OFFSET(AMyPlayer, numRockets); } \
	FORCEINLINE static uint32 __PPO__rocketInstances() { return STRUCT_OFFSET(AMyPlayer, rocketInstances); } \
	FORCEINLINE static uint32 __PPO__rocketClass() { return STRUCT_OFFSET(AMyPlayer, rocketClass); } \
	FORCEINLINE static uint32 __PPO__bUnlimitedRockets() { return STRUCT_OFFSET(AMyPlayer, bUnlimitedRockets); } \
	FORCEINLINE static uint32 __PPO__bUnlimitedHealth() { return STRUCT_OFFSET(AMyPlayer, bUnlimitedHealth); } \
	FORCEINLINE static uint32 __PPO__DebugMenuInstance() { return STRUCT_OFFSET(AMyPlayer, DebugMenuInstance); } \
	FORCEINLINE static uint32 __PPO__replicatedYaw() { return STRUCT_OFFSET(AMyPlayer, replicatedYaw); } \
	FORCEINLINE static uint32 __PPO__replicatedLocation() { return STRUCT_OFFSET(AMyPlayer, replicatedLocation); } \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(AMyPlayer, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AMyPlayer, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__SpringArmComponent() { return STRUCT_OFFSET(AMyPlayer, SpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AMyPlayer, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(AMyPlayer, MovementComponent); }


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_17_PROLOG \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_EVENT_PARMS


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_RPC_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_CALLBACK_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_INCLASS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_CALLBACK_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_INCLASS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<class AMyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Network_Assignment_Source_Network_Assignment_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
