// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network_Assignment/MyPlayerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerSettings() {}
// Cross Module References
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_UMyPlayerSettings_NoRegister();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_UMyPlayerSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Network_Assignment();
// End Cross Module References
	void UMyPlayerSettings::StaticRegisterNativesUMyPlayerSettings()
	{
	}
	UClass* Z_Construct_UClass_UMyPlayerSettings_NoRegister()
	{
		return UMyPlayerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMyPlayerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakingFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeedDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeedDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyPlayerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Network_Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyPlayerSettings.h" },
		{ "ModuleRelativePath", "MyPlayerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "MyPlayerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerSettings, Health), METADATA_PARAMS(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_FireCooldown_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "MyPlayerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_FireCooldown = { "FireCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerSettings, FireCooldown), METADATA_PARAMS(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_FireCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_FireCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_BrakingFriction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "MyPlayerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_BrakingFriction = { "BrakingFriction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerSettings, BrakingFriction), METADATA_PARAMS(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_BrakingFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_BrakingFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "MyPlayerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerSettings, Friction), METADATA_PARAMS(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_MaxVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyPlayerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerSettings, MaxVelocity), METADATA_PARAMS(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_MaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_MaxVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_TurnSpeedDefault_MetaData[] = {
		{ "Category", "Movement" },
		{ "DisplayName", "TurnSpeed" },
		{ "ModuleRelativePath", "MyPlayerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_TurnSpeedDefault = { "TurnSpeedDefault", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerSettings, TurnSpeedDefault), METADATA_PARAMS(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_TurnSpeedDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_TurnSpeedDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyPlayerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerSettings, Acceleration), METADATA_PARAMS(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Acceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyPlayerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_FireCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_BrakingFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_MaxVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_TurnSpeedDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerSettings_Statics::NewProp_Acceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyPlayerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPlayerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyPlayerSettings_Statics::ClassParams = {
		&UMyPlayerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyPlayerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyPlayerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyPlayerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyPlayerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyPlayerSettings, 2825462791);
	template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<UMyPlayerSettings>()
	{
		return UMyPlayerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyPlayerSettings(Z_Construct_UClass_UMyPlayerSettings, &UMyPlayerSettings::StaticClass, TEXT("/Script/Network_Assignment"), TEXT("UMyPlayerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPlayerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
