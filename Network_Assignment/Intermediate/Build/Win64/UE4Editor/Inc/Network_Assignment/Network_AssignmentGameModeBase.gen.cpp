// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network_Assignment/Network_AssignmentGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetwork_AssignmentGameModeBase() {}
// Cross Module References
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_ANetwork_AssignmentGameModeBase_NoRegister();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_ANetwork_AssignmentGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Network_Assignment();
// End Cross Module References
	void ANetwork_AssignmentGameModeBase::StaticRegisterNativesANetwork_AssignmentGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ANetwork_AssignmentGameModeBase_NoRegister()
	{
		return ANetwork_AssignmentGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANetwork_AssignmentGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetwork_AssignmentGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Network_Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetwork_AssignmentGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Network_AssignmentGameModeBase.h" },
		{ "ModuleRelativePath", "Network_AssignmentGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetwork_AssignmentGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetwork_AssignmentGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetwork_AssignmentGameModeBase_Statics::ClassParams = {
		&ANetwork_AssignmentGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANetwork_AssignmentGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetwork_AssignmentGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetwork_AssignmentGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetwork_AssignmentGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetwork_AssignmentGameModeBase, 4044395433);
	template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<ANetwork_AssignmentGameModeBase>()
	{
		return ANetwork_AssignmentGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetwork_AssignmentGameModeBase(Z_Construct_UClass_ANetwork_AssignmentGameModeBase, &ANetwork_AssignmentGameModeBase::StaticClass, TEXT("/Script/Network_Assignment"), TEXT("ANetwork_AssignmentGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetwork_AssignmentGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
