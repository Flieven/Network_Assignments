// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMyBPNetworkSimulationSettings;
struct FMyBPNetworkSimulationSettingsText;
#ifdef NETWORK_ASSIGNMENT_MyNetDebugWidget_generated_h
#error "MyNetDebugWidget.generated.h already included, missing '#pragma once' in MyNetDebugWidget.h"
#endif
#define NETWORK_ASSIGNMENT_MyNetDebugWidget_generated_h

#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics; \
	NETWORK_ASSIGNMENT_API static class UScriptStruct* StaticStruct();


template<> NETWORK_ASSIGNMENT_API UScriptStruct* StaticStruct<struct FMyBPNetworkSimulationSettingsText>();

#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_9_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics; \
	NETWORK_ASSIGNMENT_API static class UScriptStruct* StaticStruct();


template<> NETWORK_ASSIGNMENT_API UScriptStruct* StaticStruct<struct FMyBPNetworkSimulationSettings>();

#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_SPARSE_DATA
#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateNetworkSimulationSettings);


#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateNetworkSimulationSettings);


#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_EVENT_PARMS \
	struct MyNetDebugWidget_eventBP_OnUpdateNetworkSimulationSettings_Parms \
	{ \
		FMyBPNetworkSimulationSettingsText Packets; \
	}; \
	struct MyNetDebugWidget_eventBP_UpdatePing_Parms \
	{ \
		int32 Ping; \
	};


#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_CALLBACK_WRAPPERS
#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyNetDebugWidget(); \
	friend struct Z_Construct_UClass_UMyNetDebugWidget_Statics; \
public: \
	DECLARE_CLASS(UMyNetDebugWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(UMyNetDebugWidget)


#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUMyNetDebugWidget(); \
	friend struct Z_Construct_UClass_UMyNetDebugWidget_Statics; \
public: \
	DECLARE_CLASS(UMyNetDebugWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Network_Assignment"), NO_API) \
	DECLARE_SERIALIZER(UMyNetDebugWidget)


#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyNetDebugWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyNetDebugWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyNetDebugWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyNetDebugWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyNetDebugWidget(UMyNetDebugWidget&&); \
	NO_API UMyNetDebugWidget(const UMyNetDebugWidget&); \
public:


#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyNetDebugWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyNetDebugWidget(UMyNetDebugWidget&&); \
	NO_API UMyNetDebugWidget(const UMyNetDebugWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyNetDebugWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyNetDebugWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyNetDebugWidget)


#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_PRIVATE_PROPERTY_OFFSET
#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_35_PROLOG \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_EVENT_PARMS


#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_RPC_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_CALLBACK_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_INCLASS \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_PRIVATE_PROPERTY_OFFSET \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_SPARSE_DATA \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_CALLBACK_WRAPPERS \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_INCLASS_NO_PURE_DECLS \
	Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<class UMyNetDebugWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Network_Assignment_Source_Network_Assignment_MyNetDebugWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
