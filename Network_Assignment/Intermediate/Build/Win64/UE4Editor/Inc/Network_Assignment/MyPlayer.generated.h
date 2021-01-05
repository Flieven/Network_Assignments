// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
#ifdef NETWORK_ASSIGNMENT_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define NETWORK_ASSIGNMENT_MyPlayer_generated_h

#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_SPARSE_DATA
#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_RPC_WRAPPERS \
	virtual void Multicast_SyncRotation_Implementation(FRotator const& rotation, float deltaTime); \
	virtual void Server_SyncRotation_Implementation(FRotator const& rotation, float deltaTime); \
	virtual void Multicast_SendLocation_Implementation(FVector const& location, float deltaTime); \
	virtual void Server_SendLocation_Implementation(FVector const& location, float deltaTime); \
 \
	DECLARE_FUNCTION(execMulticast_SyncRotation); \
	DECLARE_FUNCTION(execServer_SyncRotation); \
	DECLARE_FUNCTION(execMulticast_SendLocation); \
	DECLARE_FUNCTION(execServer_SendLocation); \
	DECLARE_FUNCTION(execGetPing); \
	DECLARE_FUNCTION(execIsBraking);


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SyncRotation_Implementation(FRotator const& rotation, float deltaTime); \
	virtual void Server_SyncRotation_Implementation(FRotator const& rotation, float deltaTime); \
	virtual void Multicast_SendLocation_Implementation(FVector const& location, float deltaTime); \
	virtual void Server_SendLocation_Implementation(FVector const& location, float deltaTime); \
 \
	DECLARE_FUNCTION(execMulticast_SyncRotation); \
	DECLARE_FUNCTION(execServer_SyncRotation); \
	DECLARE_FUNCTION(execMulticast_SendLocation); \
	DECLARE_FUNCTION(execServer_SendLocation); \
	DECLARE_FUNCTION(execGetPing); \
	DECLARE_FUNCTION(execIsBraking);


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_EVENT_PARMS \
	struct MyPlayer_eventMulticast_SendLocation_Parms \
	{ \
		FVector location; \
		float deltaTime; \
	}; \
	struct MyPlayer_eventMulticast_SyncRotation_Parms \
	{ \
		FRotator rotation; \
		float deltaTime; \
	}; \
	struct MyPlayer_eventServer_SendLocation_Parms \
	{ \
		FVector location; \
		float deltaTime; \
	}; \
	struct MyPlayer_eventServer_SyncRotation_Parms \
	{ \
		FRotator rotation; \
		float deltaTime; \
	};


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_CALLBACK_WRAPPERS
#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_STANDARD_CONSTRUCTORS \
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


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer)


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(AMyPlayer, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AMyPlayer, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__SpringArmComponent() { return STRUCT_OFFSET(AMyPlayer, SpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AMyPlayer, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(AMyPlayer, MovementComponent); }


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_12_PROLOG \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_EVENT_PARMS


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_RPC_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_CALLBACK_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_INCLASS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_CALLBACK_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_INCLASS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<class AMyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Network_Assignment_Source_Network_Assignment_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
