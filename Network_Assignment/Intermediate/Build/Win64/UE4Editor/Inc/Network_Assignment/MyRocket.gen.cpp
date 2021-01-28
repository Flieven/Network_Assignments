// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network_Assignment/MyRocket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyRocket() {}
// Cross Module References
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_AMyRocket_NoRegister();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_AMyRocket();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Network_Assignment();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AMyRocket::StaticRegisterNativesAMyRocket()
	{
	}
	UClass* Z_Construct_UClass_AMyRocket_NoRegister()
	{
		return AMyRocket::StaticClass();
	}
	struct Z_Construct_UClass_AMyRocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawCorrection_MetaData[];
#endif
		static void NewProp_bDebugDrawCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Explosion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Explosion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyRocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Network_Assignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRocket_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyRocket.h" },
		{ "ModuleRelativePath", "MyRocket.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRocket_Statics::NewProp_MovementVelocity_MetaData[] = {
		{ "Category", "MyRocket" },
		{ "ModuleRelativePath", "MyRocket.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyRocket_Statics::NewProp_MovementVelocity = { "MovementVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyRocket, MovementVelocity), METADATA_PARAMS(Z_Construct_UClass_AMyRocket_Statics::NewProp_MovementVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyRocket_Statics::NewProp_MovementVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRocket_Statics::NewProp_DamageDone_MetaData[] = {
		{ "Category", "Explosion" },
		{ "ModuleRelativePath", "MyRocket.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyRocket_Statics::NewProp_DamageDone = { "DamageDone", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyRocket, DamageDone), METADATA_PARAMS(Z_Construct_UClass_AMyRocket_Statics::NewProp_DamageDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyRocket_Statics::NewProp_DamageDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRocket_Statics::NewProp_bDebugDrawCorrection_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "MyRocket.h" },
	};
#endif
	void Z_Construct_UClass_AMyRocket_Statics::NewProp_bDebugDrawCorrection_SetBit(void* Obj)
	{
		((AMyRocket*)Obj)->bDebugDrawCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyRocket_Statics::NewProp_bDebugDrawCorrection = { "bDebugDrawCorrection", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyRocket), &Z_Construct_UClass_AMyRocket_Statics::NewProp_bDebugDrawCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyRocket_Statics::NewProp_bDebugDrawCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyRocket_Statics::NewProp_bDebugDrawCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRocket_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "VFX" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyRocket.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyRocket_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyRocket, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyRocket_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyRocket_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRocket_Statics::NewProp_Explosion_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "MyRocket.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyRocket_Statics::NewProp_Explosion = { "Explosion", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyRocket, Explosion), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyRocket_Statics::NewProp_Explosion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyRocket_Statics::NewProp_Explosion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRocket_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "Explosion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyRocket.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyRocket_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyRocket, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyRocket_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyRocket_Statics::NewProp_SphereComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyRocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRocket_Statics::NewProp_MovementVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRocket_Statics::NewProp_DamageDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRocket_Statics::NewProp_bDebugDrawCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRocket_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRocket_Statics::NewProp_Explosion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRocket_Statics::NewProp_SphereComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyRocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyRocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyRocket_Statics::ClassParams = {
		&AMyRocket::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyRocket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyRocket_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyRocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyRocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyRocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyRocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyRocket, 1953079605);
	template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<AMyRocket>()
	{
		return AMyRocket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyRocket(Z_Construct_UClass_AMyRocket, &AMyRocket::StaticClass, TEXT("/Script/Network_Assignment"), TEXT("AMyRocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyRocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
