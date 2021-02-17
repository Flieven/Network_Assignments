// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network_Assignment/MyMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMovementComponent() {}
// Cross Module References
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_UMyMovementComponent_NoRegister();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_UMyMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Network_Assignment();
// End Cross Module References
	void UMyMovementComponent::StaticRegisterNativesUMyMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UMyMovementComponent_NoRegister()
	{
		return UMyMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Network_Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyMovementComponent.h" },
		{ "ModuleRelativePath", "MyMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMovementComponent_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyMovementComponent_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyMovementComponent, Gravity), METADATA_PARAMS(Z_Construct_UClass_UMyMovementComponent_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMovementComponent_Statics::NewProp_Gravity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMovementComponent_Statics::NewProp_Gravity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyMovementComponent_Statics::ClassParams = {
		&UMyMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyMovementComponent, 4134097820);
	template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<UMyMovementComponent>()
	{
		return UMyMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyMovementComponent(Z_Construct_UClass_UMyMovementComponent, &UMyMovementComponent::StaticClass, TEXT("/Script/Network_Assignment"), TEXT("UMyMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
