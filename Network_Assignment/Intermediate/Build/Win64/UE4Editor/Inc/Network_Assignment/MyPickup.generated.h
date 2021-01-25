// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef NETWORK_ASSIGNMENT_MyPickup_generated_h
#error "MyPickup.generated.h already included, missing '#pragma once' in MyPickup.h"
#endif
#define NETWORK_ASSIGNMENT_MyPickup_generated_h

#define Network_Assignment_Source_Network_Assignment_MyPickup_h_19_SPARSE_DATA
#define Network_Assignment_Source_Network_Assignment_MyPickup_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapBegin); \
	DECLARE_FUNCTION(execReActivatePickup);


#define Network_Assignment_Source_Network_Assignment_MyPickup_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapBegin); \
	DECLARE_FUNCTION(execReActivatePickup);


#define Network_Assignment_Source_Network_Assignment_MyPickup_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPickup(); \
	friend struct Z_Construct_UClass_AMyPickup_Statics; \
public: \
	DECLARE_CLASS(AMyPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AMyPickup)


#define Network_Assignment_Source_Network_Assignment_MyPickup_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMyPickup(); \
	friend struct Z_Construct_UClass_AMyPickup_Statics; \
public: \
	DECLARE_CLASS(AMyPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(AMyPickup)


#define Network_Assignment_Source_Network_Assignment_MyPickup_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPickup(AMyPickup&&); \
	NO_API AMyPickup(const AMyPickup&); \
public:


#define Network_Assignment_Source_Network_Assignment_MyPickup_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPickup(AMyPickup&&); \
	NO_API AMyPickup(const AMyPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPickup)


#define Network_Assignment_Source_Network_Assignment_MyPickup_h_19_PRIVATE_PROPERTY_OFFSET
#define Network_Assignment_Source_Network_Assignment_MyPickup_h_16_PROLOG
#define Network_Assignment_Source_Network_Assignment_MyPickup_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyPickup_h_19_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyPickup_h_19_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyPickup_h_19_RPC_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyPickup_h_19_INCLASS \
	Network_Assignment_Source_Network_Assignment_MyPickup_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Network_Assignment_Source_Network_Assignment_MyPickup_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyPickup_h_19_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyPickup_h_19_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyPickup_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyPickup_h_19_INCLASS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyPickup_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<class AMyPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Network_Assignment_Source_Network_Assignment_MyPickup_h


#define FOREACH_ENUM_EMYPICKUPTYPE(op) \
	op(EMyPickupType::Rocket) \
	op(EMyPickupType::Health) 

enum class EMyPickupType : uint8;
template<> NETWORK_ASSIGNMENT_API UEnum* StaticEnum<EMyPickupType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
