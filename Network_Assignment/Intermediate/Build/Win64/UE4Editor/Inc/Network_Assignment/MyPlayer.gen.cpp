// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network_Assignment/MyPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayer() {}
// Cross Module References
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_AMyPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Network_Assignment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_UMyMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyPlayer::execMulticast_SyncRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SyncRotation_Implementation(Z_Param_rotation,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execServer_SyncRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SyncRotation_Implementation(Z_Param_rotation,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execMulticast_SendLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SendLocation_Implementation(Z_Param_location,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execServer_SendLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SendLocation_Implementation(Z_Param_location,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execGetPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execIsBraking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBraking();
		P_NATIVE_END;
	}
	static FName NAME_AMyPlayer_Multicast_SendLocation = FName(TEXT("Multicast_SendLocation"));
	void AMyPlayer::Multicast_SendLocation(FVector const& location, float deltaTime)
	{
		MyPlayer_eventMulticast_SendLocation_Parms Parms;
		Parms.location=location;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Multicast_SendLocation),&Parms);
	}
	static FName NAME_AMyPlayer_Multicast_SyncRotation = FName(TEXT("Multicast_SyncRotation"));
	void AMyPlayer::Multicast_SyncRotation(FRotator const& rotation, float deltaTime)
	{
		MyPlayer_eventMulticast_SyncRotation_Parms Parms;
		Parms.rotation=rotation;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Multicast_SyncRotation),&Parms);
	}
	static FName NAME_AMyPlayer_Server_SendLocation = FName(TEXT("Server_SendLocation"));
	void AMyPlayer::Server_SendLocation(FVector const& location, float deltaTime)
	{
		MyPlayer_eventServer_SendLocation_Parms Parms;
		Parms.location=location;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Server_SendLocation),&Parms);
	}
	static FName NAME_AMyPlayer_Server_SyncRotation = FName(TEXT("Server_SyncRotation"));
	void AMyPlayer::Server_SyncRotation(FRotator const& rotation, float deltaTime)
	{
		MyPlayer_eventServer_SyncRotation_Parms Parms;
		Parms.rotation=rotation;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Server_SyncRotation),&Parms);
	}
	void AMyPlayer::StaticRegisterNativesAMyPlayer()
	{
		UClass* Class = AMyPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPing", &AMyPlayer::execGetPing },
			{ "IsBraking", &AMyPlayer::execIsBraking },
			{ "Multicast_SendLocation", &AMyPlayer::execMulticast_SendLocation },
			{ "Multicast_SyncRotation", &AMyPlayer::execMulticast_SyncRotation },
			{ "Server_SendLocation", &AMyPlayer::execServer_SendLocation },
			{ "Server_SyncRotation", &AMyPlayer::execServer_SyncRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPlayer_GetPing_Statics
	{
		struct MyPlayer_eventGetPing_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPlayer_GetPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventGetPing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_GetPing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_GetPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_GetPing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_GetPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "GetPing", nullptr, nullptr, sizeof(MyPlayer_eventGetPing_Parms), Z_Construct_UFunction_AMyPlayer_GetPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_GetPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_GetPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_GetPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_GetPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_GetPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_IsBraking_Statics
	{
		struct MyPlayer_eventIsBraking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyPlayer_eventIsBraking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyPlayer_eventIsBraking_Parms), &Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "IsBraking", nullptr, nullptr, sizeof(MyPlayer_eventIsBraking_Parms), Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_IsBraking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_IsBraking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventMulticast_SendLocation_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventMulticast_SendLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Multicast_SendLocation", nullptr, nullptr, sizeof(MyPlayer_eventMulticast_SendLocation_Parms), Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventMulticast_SyncRotation_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventMulticast_SyncRotation_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::NewProp_rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Multicast_SyncRotation", nullptr, nullptr, sizeof(MyPlayer_eventMulticast_SyncRotation_Parms), Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_SendLocation_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_SendLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Server_SendLocation", nullptr, nullptr, sizeof(MyPlayer_eventServer_SendLocation_Parms), Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Server_SendLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Server_SendLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_SyncRotation_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_SyncRotation_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::NewProp_rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Server_SyncRotation", nullptr, nullptr, sizeof(MyPlayer_eventServer_SyncRotation_Parms), Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Server_SyncRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPlayer_NoRegister()
	{
		return AMyPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakingFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakingFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFriction;
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
	UObject* (*const Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Network_Assignment,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayer_GetPing, "GetPing" }, // 1306242325
		{ &Z_Construct_UFunction_AMyPlayer_IsBraking, "IsBraking" }, // 494724785
		{ &Z_Construct_UFunction_AMyPlayer_Multicast_SendLocation, "Multicast_SendLocation" }, // 153265850
		{ &Z_Construct_UFunction_AMyPlayer_Multicast_SyncRotation, "Multicast_SyncRotation" }, // 1542856118
		{ &Z_Construct_UFunction_AMyPlayer_Server_SendLocation, "Server_SendLocation" }, // 3690951510
		{ &Z_Construct_UFunction_AMyPlayer_Server_SyncRotation, "Server_SyncRotation" }, // 1491835717
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayer.h" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, MovementComponent), Z_Construct_UClass_UMyMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_BrakingFriction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_BrakingFriction = { "BrakingFriction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, BrakingFriction), METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_BrakingFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_BrakingFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_DefaultFriction_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_DefaultFriction = { "DefaultFriction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, DefaultFriction), METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_DefaultFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_DefaultFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_MaxVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, MaxVelocity), METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_MaxVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_MaxVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_TurnSpeedDefault_MetaData[] = {
		{ "Category", "Movement" },
		{ "DisplayName", "TurnSpeed" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_TurnSpeedDefault = { "TurnSpeedDefault", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, TurnSpeedDefault), METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_TurnSpeedDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_TurnSpeedDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, Acceleration), METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_Acceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_CollisionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_BrakingFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_DefaultFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_MaxVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_TurnSpeedDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_Acceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayer_Statics::ClassParams = {
		&AMyPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayer, 3501109621);
	template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<AMyPlayer>()
	{
		return AMyPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayer(Z_Construct_UClass_AMyPlayer, &AMyPlayer::StaticClass, TEXT("/Script/Network_Assignment"), TEXT("AMyPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
