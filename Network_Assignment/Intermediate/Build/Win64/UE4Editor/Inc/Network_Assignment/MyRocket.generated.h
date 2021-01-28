// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_ASSIGNMENT_MyRocket_generated_h
#error "MyRocket.generated.h already included, missing '#pragma once' in MyRocket.h"
#endif
#define NETWORK_ASSIGNMENT_MyRocket_generated_h

#define Network_Assignment_Source_Network_Assignment_MyRocket_h_14_SPARSE_DATA
#define Network_Assignment_Source_Network_Assignment_MyRocket_h_14_RPC_WRAPPERS
#define Network_Assignment_Source_Network_Assignment_MyRocket_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Network_Assignment_Source_Network_Assignment_MyRocket_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyRocket(); \
	friend struct Z_Construct_UClass_AMyRocket_Statics; \
public: \
	DECLARE_CLASS(AMyRocket, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AMyRocket)


#define Network_Assignment_Source_Network_Assignment_MyRocket_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyRocket(); \
	friend struct Z_Construct_UClass_AMyRocket_Statics; \
public: \
	DECLARE_CLASS(AMyRocket, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AMyRocket)


#define Network_Assignment_Source_Network_Assignment_MyRocket_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyRocket(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyRocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyRocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyRocket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyRocket(AMyRocket&&); \
	NO_API AMyRocket(const AMyRocket&); \
public:


#define Network_Assignment_Source_Network_Assignment_MyRocket_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyRocket(AMyRocket&&); \
	NO_API AMyRocket(const AMyRocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyRocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyRocket); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyRocket)


#define Network_Assignment_Source_Network_Assignment_MyRocket_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Explosion() { return STRUCT_OFFSET(AMyRocket, Explosion); } \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AMyRocket, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__bDebugDrawCorrection() { return STRUCT_OFFSET(AMyRocket, bDebugDrawCorrection); } \
	FORCEINLINE static uint32 __PPO__DamageDone() { return STRUCT_OFFSET(AMyRocket, DamageDone); } \
	FORCEINLINE static uint32 __PPO__MovementVelocity() { return STRUCT_OFFSET(AMyRocket, MovementVelocity); }


#define Network_Assignment_Source_Network_Assignment_MyRocket_h_11_PROLOG
#define Network_Assignment_Source_Network_Assignment_MyRocket_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyRocket_h_14_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyRocket_h_14_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyRocket_h_14_RPC_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyRocket_h_14_INCLASS \
	Network_Assignment_Source_Network_Assignment_MyRocket_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Network_Assignment_Source_Network_Assignment_MyRocket_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyRocket_h_14_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyRocket_h_14_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyRocket_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyRocket_h_14_INCLASS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyRocket_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<class AMyRocket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Network_Assignment_Source_Network_Assignment_MyRocket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
