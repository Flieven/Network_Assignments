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
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_AMyRocket_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_AMyPickup_NoRegister();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_UMyMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_UMyNetDebugWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_UMyPlayerSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyPlayer::execCheat_ChangeHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cheat_ChangeHealth(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execCheat_IncreaseRocket)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumRockets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cheat_IncreaseRocket(Z_Param_InNumRockets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execClient_RemoveRocket)
	{
		P_GET_OBJECT(AMyRocket,Z_Param_RocketToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_RemoveRocket_Implementation(Z_Param_RocketToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execMulticast_FireRocket)
	{
		P_GET_OBJECT(AMyRocket,Z_Param_NewRocket);
		P_GET_STRUCT(FVector,Z_Param_RocketStartLocation);
		P_GET_STRUCT(FRotator,Z_Param_RocketFacingRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_FireRocket_Implementation(Z_Param_NewRocket,Z_Param_RocketStartLocation,Z_Param_RocketFacingRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execServer_FireRocket)
	{
		P_GET_OBJECT(AMyRocket,Z_Param_NewRocket);
		P_GET_STRUCT(FVector,Z_Param_RocketStartLocation);
		P_GET_STRUCT(FRotator,Z_Param_RocketFacingRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_FireRocket_Implementation(Z_Param_NewRocket,Z_Param_RocketStartLocation,Z_Param_RocketFacingRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execGetNumRockets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumRockets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execMulticast_SyncRockets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rockets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SyncRockets_Implementation(Z_Param_rockets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execServer_SyncRockets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rockets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SyncRockets_Implementation(Z_Param_rockets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execMulticast_SyncHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_health);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SyncHealth_Implementation(Z_Param_health);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execServer_SyncHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_health);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SyncHealth_Implementation(Z_Param_health);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execServer_SyncRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SyncRotation_Implementation(Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execServer_SyncLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SyncLocation_Implementation(Z_Param_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execClient_OnPickupRockets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_pickedupRockets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_OnPickupRockets_Implementation(Z_Param_pickedupRockets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayer::execServer_OnPickup)
	{
		P_GET_OBJECT(AMyPickup,Z_Param_pickup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_OnPickup_Implementation(Z_Param_pickup);
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
	static FName NAME_AMyPlayer_BP_OnHealthChanged = FName(TEXT("BP_OnHealthChanged"));
	void AMyPlayer::BP_OnHealthChanged(float newHealth)
	{
		MyPlayer_eventBP_OnHealthChanged_Parms Parms;
		Parms.newHealth=newHealth;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_BP_OnHealthChanged),&Parms);
	}
	static FName NAME_AMyPlayer_BP_OnNumRocketsChanged = FName(TEXT("BP_OnNumRocketsChanged"));
	void AMyPlayer::BP_OnNumRocketsChanged(int32 newNumRockets)
	{
		MyPlayer_eventBP_OnNumRocketsChanged_Parms Parms;
		Parms.newNumRockets=newNumRockets;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_BP_OnNumRocketsChanged),&Parms);
	}
	static FName NAME_AMyPlayer_Client_OnPickupRockets = FName(TEXT("Client_OnPickupRockets"));
	void AMyPlayer::Client_OnPickupRockets(int32 pickedupRockets)
	{
		MyPlayer_eventClient_OnPickupRockets_Parms Parms;
		Parms.pickedupRockets=pickedupRockets;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Client_OnPickupRockets),&Parms);
	}
	static FName NAME_AMyPlayer_Client_RemoveRocket = FName(TEXT("Client_RemoveRocket"));
	void AMyPlayer::Client_RemoveRocket(AMyRocket* RocketToRemove)
	{
		MyPlayer_eventClient_RemoveRocket_Parms Parms;
		Parms.RocketToRemove=RocketToRemove;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Client_RemoveRocket),&Parms);
	}
	static FName NAME_AMyPlayer_Multicast_FireRocket = FName(TEXT("Multicast_FireRocket"));
	void AMyPlayer::Multicast_FireRocket(AMyRocket* NewRocket, FVector const& RocketStartLocation, FRotator const& RocketFacingRotation)
	{
		MyPlayer_eventMulticast_FireRocket_Parms Parms;
		Parms.NewRocket=NewRocket;
		Parms.RocketStartLocation=RocketStartLocation;
		Parms.RocketFacingRotation=RocketFacingRotation;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Multicast_FireRocket),&Parms);
	}
	static FName NAME_AMyPlayer_Multicast_SyncHealth = FName(TEXT("Multicast_SyncHealth"));
	void AMyPlayer::Multicast_SyncHealth(float const& health)
	{
		MyPlayer_eventMulticast_SyncHealth_Parms Parms;
		Parms.health=health;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Multicast_SyncHealth),&Parms);
	}
	static FName NAME_AMyPlayer_Multicast_SyncRockets = FName(TEXT("Multicast_SyncRockets"));
	void AMyPlayer::Multicast_SyncRockets(int32 const& rockets)
	{
		MyPlayer_eventMulticast_SyncRockets_Parms Parms;
		Parms.rockets=rockets;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Multicast_SyncRockets),&Parms);
	}
	static FName NAME_AMyPlayer_Server_FireRocket = FName(TEXT("Server_FireRocket"));
	void AMyPlayer::Server_FireRocket(AMyRocket* NewRocket, FVector const& RocketStartLocation, FRotator const& RocketFacingRotation)
	{
		MyPlayer_eventServer_FireRocket_Parms Parms;
		Parms.NewRocket=NewRocket;
		Parms.RocketStartLocation=RocketStartLocation;
		Parms.RocketFacingRotation=RocketFacingRotation;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Server_FireRocket),&Parms);
	}
	static FName NAME_AMyPlayer_Server_OnPickup = FName(TEXT("Server_OnPickup"));
	void AMyPlayer::Server_OnPickup(AMyPickup* pickup)
	{
		MyPlayer_eventServer_OnPickup_Parms Parms;
		Parms.pickup=pickup;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Server_OnPickup),&Parms);
	}
	static FName NAME_AMyPlayer_Server_SyncHealth = FName(TEXT("Server_SyncHealth"));
	void AMyPlayer::Server_SyncHealth(float const& health)
	{
		MyPlayer_eventServer_SyncHealth_Parms Parms;
		Parms.health=health;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Server_SyncHealth),&Parms);
	}
	static FName NAME_AMyPlayer_Server_SyncLocation = FName(TEXT("Server_SyncLocation"));
	void AMyPlayer::Server_SyncLocation(FVector const& location)
	{
		MyPlayer_eventServer_SyncLocation_Parms Parms;
		Parms.location=location;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Server_SyncLocation),&Parms);
	}
	static FName NAME_AMyPlayer_Server_SyncRockets = FName(TEXT("Server_SyncRockets"));
	void AMyPlayer::Server_SyncRockets(int32 const& rockets)
	{
		MyPlayer_eventServer_SyncRockets_Parms Parms;
		Parms.rockets=rockets;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Server_SyncRockets),&Parms);
	}
	static FName NAME_AMyPlayer_Server_SyncRotation = FName(TEXT("Server_SyncRotation"));
	void AMyPlayer::Server_SyncRotation(FRotator const& rotation)
	{
		MyPlayer_eventServer_SyncRotation_Parms Parms;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_AMyPlayer_Server_SyncRotation),&Parms);
	}
	void AMyPlayer::StaticRegisterNativesAMyPlayer()
	{
		UClass* Class = AMyPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cheat_ChangeHealth", &AMyPlayer::execCheat_ChangeHealth },
			{ "Cheat_IncreaseRocket", &AMyPlayer::execCheat_IncreaseRocket },
			{ "Client_OnPickupRockets", &AMyPlayer::execClient_OnPickupRockets },
			{ "Client_RemoveRocket", &AMyPlayer::execClient_RemoveRocket },
			{ "GetNumRockets", &AMyPlayer::execGetNumRockets },
			{ "GetPing", &AMyPlayer::execGetPing },
			{ "IsBraking", &AMyPlayer::execIsBraking },
			{ "Multicast_FireRocket", &AMyPlayer::execMulticast_FireRocket },
			{ "Multicast_SyncHealth", &AMyPlayer::execMulticast_SyncHealth },
			{ "Multicast_SyncRockets", &AMyPlayer::execMulticast_SyncRockets },
			{ "Server_FireRocket", &AMyPlayer::execServer_FireRocket },
			{ "Server_OnPickup", &AMyPlayer::execServer_OnPickup },
			{ "Server_SyncHealth", &AMyPlayer::execServer_SyncHealth },
			{ "Server_SyncLocation", &AMyPlayer::execServer_SyncLocation },
			{ "Server_SyncRockets", &AMyPlayer::execServer_SyncRockets },
			{ "Server_SyncRotation", &AMyPlayer::execServer_SyncRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged_Statics::NewProp_newHealth = { "newHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventBP_OnHealthChanged_Parms, newHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged_Statics::NewProp_newHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "DisplayName", "On Health Changed" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "BP_OnHealthChanged", nullptr, nullptr, sizeof(MyPlayer_eventBP_OnHealthChanged_Parms), Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newNumRockets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged_Statics::NewProp_newNumRockets = { "newNumRockets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventBP_OnNumRocketsChanged_Parms, newNumRockets), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged_Statics::NewProp_newNumRockets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "DisplayName", "On Num Rockets Changed" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "BP_OnNumRocketsChanged", nullptr, nullptr, sizeof(MyPlayer_eventBP_OnNumRocketsChanged_Parms), Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth_Statics
	{
		struct MyPlayer_eventCheat_ChangeHealth_Parms
		{
			float amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventCheat_ChangeHealth_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Cheat_ChangeHealth", nullptr, nullptr, sizeof(MyPlayer_eventCheat_ChangeHealth_Parms), Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket_Statics
	{
		struct MyPlayer_eventCheat_IncreaseRocket_Parms
		{
			int32 InNumRockets;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNumRockets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket_Statics::NewProp_InNumRockets = { "InNumRockets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventCheat_IncreaseRocket_Parms, InNumRockets), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket_Statics::NewProp_InNumRockets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Cheat_IncreaseRocket", nullptr, nullptr, sizeof(MyPlayer_eventCheat_IncreaseRocket_Parms), Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pickedupRockets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets_Statics::NewProp_pickedupRockets = { "pickedupRockets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventClient_OnPickupRockets_Parms, pickedupRockets), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets_Statics::NewProp_pickedupRockets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Client_OnPickupRockets", nullptr, nullptr, sizeof(MyPlayer_eventClient_OnPickupRockets_Parms), Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RocketToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket_Statics::NewProp_RocketToRemove = { "RocketToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventClient_RemoveRocket_Parms, RocketToRemove), Z_Construct_UClass_AMyRocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket_Statics::NewProp_RocketToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Client_RemoveRocket", nullptr, nullptr, sizeof(MyPlayer_eventClient_RemoveRocket_Parms), Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_GetNumRockets_Statics
	{
		struct MyPlayer_eventGetNumRockets_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPlayer_GetNumRockets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventGetNumRockets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_GetNumRockets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_GetNumRockets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_GetNumRockets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_GetNumRockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "GetNumRockets", nullptr, nullptr, sizeof(MyPlayer_eventGetNumRockets_Parms), Z_Construct_UFunction_AMyPlayer_GetNumRockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_GetNumRockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_GetNumRockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_GetNumRockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_GetNumRockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_GetNumRockets_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RocketFacingRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RocketFacingRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RocketStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RocketStartLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewRocket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_RocketFacingRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_RocketFacingRotation = { "RocketFacingRotation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventMulticast_FireRocket_Parms, RocketFacingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_RocketFacingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_RocketFacingRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_RocketStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_RocketStartLocation = { "RocketStartLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventMulticast_FireRocket_Parms, RocketStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_RocketStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_RocketStartLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_NewRocket = { "NewRocket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventMulticast_FireRocket_Parms, NewRocket), Z_Construct_UClass_AMyRocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_RocketFacingRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_RocketStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::NewProp_NewRocket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Multicast_FireRocket", nullptr, nullptr, sizeof(MyPlayer_eventMulticast_FireRocket_Parms), Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::NewProp_health_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventMulticast_SyncHealth_Parms, health), METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::NewProp_health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::NewProp_health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Multicast_SyncHealth", nullptr, nullptr, sizeof(MyPlayer_eventMulticast_SyncHealth_Parms), Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rockets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::NewProp_rockets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::NewProp_rockets = { "rockets", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventMulticast_SyncRockets_Parms, rockets), METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::NewProp_rockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::NewProp_rockets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::NewProp_rockets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Multicast_SyncRockets", nullptr, nullptr, sizeof(MyPlayer_eventMulticast_SyncRockets_Parms), Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RocketFacingRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RocketFacingRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RocketStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RocketStartLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewRocket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_RocketFacingRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_RocketFacingRotation = { "RocketFacingRotation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_FireRocket_Parms, RocketFacingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_RocketFacingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_RocketFacingRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_RocketStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_RocketStartLocation = { "RocketStartLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_FireRocket_Parms, RocketStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_RocketStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_RocketStartLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_NewRocket = { "NewRocket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_FireRocket_Parms, NewRocket), Z_Construct_UClass_AMyRocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_RocketFacingRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_RocketStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::NewProp_NewRocket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Server_FireRocket", nullptr, nullptr, sizeof(MyPlayer_eventServer_FireRocket_Parms), Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Server_FireRocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Server_FireRocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Server_OnPickup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pickup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_Server_OnPickup_Statics::NewProp_pickup = { "pickup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_OnPickup_Parms, pickup), Z_Construct_UClass_AMyPickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Server_OnPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Server_OnPickup_Statics::NewProp_pickup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_OnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Server_OnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Server_OnPickup", nullptr, nullptr, sizeof(MyPlayer_eventServer_OnPickup_Parms), Z_Construct_UFunction_AMyPlayer_Server_OnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_OnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_OnPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_OnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Server_OnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Server_OnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::NewProp_health_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_SyncHealth_Parms, health), METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::NewProp_health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::NewProp_health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Server_SyncHealth", nullptr, nullptr, sizeof(MyPlayer_eventServer_SyncHealth_Parms), Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Server_SyncHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Server_SyncHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics
	{
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_SyncLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Server_SyncLocation", nullptr, nullptr, sizeof(MyPlayer_eventServer_SyncLocation_Parms), Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Server_SyncLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Server_SyncLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rockets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::NewProp_rockets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::NewProp_rockets = { "rockets", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_SyncRockets_Parms, rockets), METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::NewProp_rockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::NewProp_rockets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::NewProp_rockets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "Server_SyncRockets", nullptr, nullptr, sizeof(MyPlayer_eventServer_SyncRockets_Parms), Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayer_Server_SyncRockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPlayer_Server_SyncRockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics
	{
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayer_eventServer_SyncRotation_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::NewProp_rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_Server_SyncRotation_Statics::PropPointers[] = {
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replicatedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_replicatedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replicatedYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_replicatedYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMenuInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugMenuInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnlimitedHealth_MetaData[];
#endif
		static void NewProp_bUnlimitedHealth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnlimitedHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnlimitedRockets_MetaData[];
#endif
		static void NewProp_bUnlimitedRockets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnlimitedRockets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rocketClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_rocketClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rocketInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rocketInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rocketInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numRockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numRockets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMenuClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DebugMenuClass;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Network_Assignment,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayer_BP_OnHealthChanged, "BP_OnHealthChanged" }, // 2121820089
		{ &Z_Construct_UFunction_AMyPlayer_BP_OnNumRocketsChanged, "BP_OnNumRocketsChanged" }, // 3064034800
		{ &Z_Construct_UFunction_AMyPlayer_Cheat_ChangeHealth, "Cheat_ChangeHealth" }, // 3874242538
		{ &Z_Construct_UFunction_AMyPlayer_Cheat_IncreaseRocket, "Cheat_IncreaseRocket" }, // 3234199174
		{ &Z_Construct_UFunction_AMyPlayer_Client_OnPickupRockets, "Client_OnPickupRockets" }, // 745334112
		{ &Z_Construct_UFunction_AMyPlayer_Client_RemoveRocket, "Client_RemoveRocket" }, // 3007209674
		{ &Z_Construct_UFunction_AMyPlayer_GetNumRockets, "GetNumRockets" }, // 2419387933
		{ &Z_Construct_UFunction_AMyPlayer_GetPing, "GetPing" }, // 1306242325
		{ &Z_Construct_UFunction_AMyPlayer_IsBraking, "IsBraking" }, // 494724785
		{ &Z_Construct_UFunction_AMyPlayer_Multicast_FireRocket, "Multicast_FireRocket" }, // 575034206
		{ &Z_Construct_UFunction_AMyPlayer_Multicast_SyncHealth, "Multicast_SyncHealth" }, // 557643936
		{ &Z_Construct_UFunction_AMyPlayer_Multicast_SyncRockets, "Multicast_SyncRockets" }, // 578060923
		{ &Z_Construct_UFunction_AMyPlayer_Server_FireRocket, "Server_FireRocket" }, // 172238461
		{ &Z_Construct_UFunction_AMyPlayer_Server_OnPickup, "Server_OnPickup" }, // 3797793517
		{ &Z_Construct_UFunction_AMyPlayer_Server_SyncHealth, "Server_SyncHealth" }, // 1487911139
		{ &Z_Construct_UFunction_AMyPlayer_Server_SyncLocation, "Server_SyncLocation" }, // 2170578161
		{ &Z_Construct_UFunction_AMyPlayer_Server_SyncRockets, "Server_SyncRockets" }, // 3880847750
		{ &Z_Construct_UFunction_AMyPlayer_Server_SyncRotation, "Server_SyncRotation" }, // 1664267912
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_replicatedLocation_MetaData[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_replicatedLocation = { "replicatedLocation", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, replicatedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_replicatedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_replicatedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_replicatedYaw_MetaData[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_replicatedYaw = { "replicatedYaw", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, replicatedYaw), METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_replicatedYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_replicatedYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_DebugMenuInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_DebugMenuInstance = { "DebugMenuInstance", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, DebugMenuInstance), Z_Construct_UClass_UMyNetDebugWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_DebugMenuInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_DebugMenuInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedHealth_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedHealth_SetBit(void* Obj)
	{
		((AMyPlayer*)Obj)->bUnlimitedHealth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedHealth = { "bUnlimitedHealth", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyPlayer), &Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedHealth_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedRockets_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	void Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedRockets_SetBit(void* Obj)
	{
		((AMyPlayer*)Obj)->bUnlimitedRockets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedRockets = { "bUnlimitedRockets", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyPlayer), &Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedRockets_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedRockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedRockets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketClass = { "rocketClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, rocketClass), Z_Construct_UClass_AMyRocket_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketInstances_MetaData[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketInstances = { "rocketInstances", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, rocketInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketInstances_Inner = { "rocketInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMyRocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_numRockets_MetaData[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_numRockets = { "numRockets", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, numRockets), METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_numRockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_numRockets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_currentHealth_MetaData[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, currentHealth), METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_currentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_currentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_DebugMenuClass_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_DebugMenuClass = { "DebugMenuClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, DebugMenuClass), Z_Construct_UClass_UMyNetDebugWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_DebugMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_DebugMenuClass_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayer_Statics::NewProp_PlayerSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_PlayerSettings = { "PlayerSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPlayer, PlayerSettings), Z_Construct_UClass_UMyPlayerSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayer_Statics::NewProp_PlayerSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::NewProp_PlayerSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_CollisionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_replicatedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_replicatedYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_DebugMenuInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_bUnlimitedRockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_rocketInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_numRockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_currentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_DebugMenuClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_BrakingFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_DefaultFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_MaxVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_TurnSpeedDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_PlayerSettings,
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
	IMPLEMENT_CLASS(AMyPlayer, 3424749104);
	template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<AMyPlayer>()
	{
		return AMyPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayer(Z_Construct_UClass_AMyPlayer, &AMyPlayer::StaticClass, TEXT("/Script/Network_Assignment"), TEXT("AMyPlayer"), false, nullptr, nullptr, nullptr);

	void AMyPlayer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_currentHealth(TEXT("currentHealth"));
		static const FName Name_numRockets(TEXT("numRockets"));
		static const FName Name_rocketInstances(TEXT("rocketInstances"));
		static const FName Name_replicatedYaw(TEXT("replicatedYaw"));
		static const FName Name_replicatedLocation(TEXT("replicatedLocation"));

		const bool bIsValid = true
			&& Name_currentHealth == ClassReps[(int32)ENetFields_Private::currentHealth].Property->GetFName()
			&& Name_numRockets == ClassReps[(int32)ENetFields_Private::numRockets].Property->GetFName()
			&& Name_rocketInstances == ClassReps[(int32)ENetFields_Private::rocketInstances].Property->GetFName()
			&& Name_replicatedYaw == ClassReps[(int32)ENetFields_Private::replicatedYaw].Property->GetFName()
			&& Name_replicatedLocation == ClassReps[(int32)ENetFields_Private::replicatedLocation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMyPlayer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
