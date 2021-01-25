// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_ASSIGNMENT_MyPlayerSettings_generated_h
#error "MyPlayerSettings.generated.h already included, missing '#pragma once' in MyPlayerSettings.h"
#endif
#define NETWORK_ASSIGNMENT_MyPlayerSettings_generated_h

#define Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_SPARSE_DATA
#define Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_RPC_WRAPPERS
#define Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyPlayerSettings(); \
	friend struct Z_Construct_UClass_UMyPlayerSettings_Statics; \
public: \
	DECLARE_CLASS(UMyPlayerSettings, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(UMyPlayerSettings)


#define Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUMyPlayerSettings(); \
	friend struct Z_Construct_UClass_UMyPlayerSettings_Statics; \
public: \
	DECLARE_CLASS(UMyPlayerSettings, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(UMyPlayerSettings)


#define Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPlayerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPlayerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPlayerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPlayerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPlayerSettings(UMyPlayerSettings&&); \
	NO_API UMyPlayerSettings(const UMyPlayerSettings&); \
public:


#define Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPlayerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPlayerSettings(UMyPlayerSettings&&); \
	NO_API UMyPlayerSettings(const UMyPlayerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPlayerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPlayerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPlayerSettings)


#define Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_PRIVATE_PROPERTY_OFFSET
#define Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_8_PROLOG
#define Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_RPC_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_INCLASS \
	Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_INCLASS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<class UMyPlayerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Network_Assignment_Source_Network_Assignment_MyPlayerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
