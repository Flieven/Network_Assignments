// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network_Assignment/MyNetDebugWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNetDebugWidget() {}
// Cross Module References
	NETWORK_ASSIGNMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText();
	UPackage* Z_Construct_UPackage__Script_Network_Assignment();
	NETWORK_ASSIGNMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_UMyNetDebugWidget_NoRegister();
	NETWORK_ASSIGNMENT_API UClass* Z_Construct_UClass_UMyNetDebugWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
class UScriptStruct* FMyBPNetworkSimulationSettingsText::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NETWORK_ASSIGNMENT_API uint32 Get_Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText, Z_Construct_UPackage__Script_Network_Assignment(), TEXT("MyBPNetworkSimulationSettingsText"), sizeof(FMyBPNetworkSimulationSettingsText), Get_Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Hash());
	}
	return Singleton;
}
template<> NETWORK_ASSIGNMENT_API UScriptStruct* StaticStruct<FMyBPNetworkSimulationSettingsText>()
{
	return FMyBPNetworkSimulationSettingsText::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMyBPNetworkSimulationSettingsText(FMyBPNetworkSimulationSettingsText::StaticStruct, TEXT("/Script/Network_Assignment"), TEXT("MyBPNetworkSimulationSettingsText"), false, nullptr, nullptr);
static struct FScriptStruct_Network_Assignment_StaticRegisterNativesFMyBPNetworkSimulationSettingsText
{
	FScriptStruct_Network_Assignment_StaticRegisterNativesFMyBPNetworkSimulationSettingsText()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MyBPNetworkSimulationSettingsText")),new UScriptStruct::TCppStructOps<FMyBPNetworkSimulationSettingsText>);
	}
} ScriptStruct_Network_Assignment_StaticRegisterNativesFMyBPNetworkSimulationSettingsText;
	struct Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketLossPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PacketLossPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MaxLatency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MinLatency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyBPNetworkSimulationSettingsText>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_PacketLossPercentage_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_PacketLossPercentage = { "PacketLossPercentage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyBPNetworkSimulationSettingsText, PacketLossPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_PacketLossPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_PacketLossPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_MaxLatency_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "DisplayName", "Maximum Latency" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_MaxLatency = { "MaxLatency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyBPNetworkSimulationSettingsText, MaxLatency), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_MaxLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_MaxLatency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_MinLatency_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "DisplayName", "Minimum Latency" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_MinLatency = { "MinLatency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyBPNetworkSimulationSettingsText, MinLatency), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_MinLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_MinLatency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_PacketLossPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_MaxLatency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::NewProp_MinLatency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Network_Assignment,
		nullptr,
		&NewStructOps,
		"MyBPNetworkSimulationSettingsText",
		sizeof(FMyBPNetworkSimulationSettingsText),
		alignof(FMyBPNetworkSimulationSettingsText),
		Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Network_Assignment();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MyBPNetworkSimulationSettingsText"), sizeof(FMyBPNetworkSimulationSettingsText), Get_Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText_Hash() { return 1218811123U; }
class UScriptStruct* FMyBPNetworkSimulationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NETWORK_ASSIGNMENT_API uint32 Get_Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings, Z_Construct_UPackage__Script_Network_Assignment(), TEXT("MyBPNetworkSimulationSettings"), sizeof(FMyBPNetworkSimulationSettings), Get_Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Hash());
	}
	return Singleton;
}
template<> NETWORK_ASSIGNMENT_API UScriptStruct* StaticStruct<FMyBPNetworkSimulationSettings>()
{
	return FMyBPNetworkSimulationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMyBPNetworkSimulationSettings(FMyBPNetworkSimulationSettings::StaticStruct, TEXT("/Script/Network_Assignment"), TEXT("MyBPNetworkSimulationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Network_Assignment_StaticRegisterNativesFMyBPNetworkSimulationSettings
{
	FScriptStruct_Network_Assignment_StaticRegisterNativesFMyBPNetworkSimulationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MyBPNetworkSimulationSettings")),new UScriptStruct::TCppStructOps<FMyBPNetworkSimulationSettings>);
	}
} ScriptStruct_Network_Assignment_StaticRegisterNativesFMyBPNetworkSimulationSettings;
	struct Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketLossPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PacketLossPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLatency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLatency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyBPNetworkSimulationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_PacketLossPercentage_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_PacketLossPercentage = { "PacketLossPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyBPNetworkSimulationSettings, PacketLossPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_PacketLossPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_PacketLossPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_MaxLatency_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Maximum Latency" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_MaxLatency = { "MaxLatency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyBPNetworkSimulationSettings, MaxLatency), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_MaxLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_MaxLatency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_MinLatency_MetaData[] = {
		{ "Category", "Network Settings" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Minimum Latency" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_MinLatency = { "MinLatency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMyBPNetworkSimulationSettings, MinLatency), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_MinLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_MinLatency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_PacketLossPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_MaxLatency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::NewProp_MinLatency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Network_Assignment,
		nullptr,
		&NewStructOps,
		"MyBPNetworkSimulationSettings",
		sizeof(FMyBPNetworkSimulationSettings),
		alignof(FMyBPNetworkSimulationSettings),
		Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Network_Assignment();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MyBPNetworkSimulationSettings"), sizeof(FMyBPNetworkSimulationSettings), Get_Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings_Hash() { return 2240036976U; }
	DEFINE_FUNCTION(UMyNetDebugWidget::execUpdateNetworkSimulationSettings)
	{
		P_GET_STRUCT_REF(FMyBPNetworkSimulationSettings,Z_Param_Out_InPackets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNetworkSimulationSettings(Z_Param_Out_InPackets);
		P_NATIVE_END;
	}
	static FName NAME_UMyNetDebugWidget_BP_OnHideWidget = FName(TEXT("BP_OnHideWidget"));
	void UMyNetDebugWidget::BP_OnHideWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMyNetDebugWidget_BP_OnHideWidget),NULL);
	}
	static FName NAME_UMyNetDebugWidget_BP_OnShowWidget = FName(TEXT("BP_OnShowWidget"));
	void UMyNetDebugWidget::BP_OnShowWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMyNetDebugWidget_BP_OnShowWidget),NULL);
	}
	static FName NAME_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings = FName(TEXT("BP_OnUpdateNetworkSimulationSettings"));
	void UMyNetDebugWidget::BP_OnUpdateNetworkSimulationSettings(FMyBPNetworkSimulationSettingsText const& Packets)
	{
		MyNetDebugWidget_eventBP_OnUpdateNetworkSimulationSettings_Parms Parms;
		Parms.Packets=Packets;
		ProcessEvent(FindFunctionChecked(NAME_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings),&Parms);
	}
	static FName NAME_UMyNetDebugWidget_BP_UpdatePing = FName(TEXT("BP_UpdatePing"));
	void UMyNetDebugWidget::BP_UpdatePing(int32 Ping)
	{
		MyNetDebugWidget_eventBP_UpdatePing_Parms Parms;
		Parms.Ping=Ping;
		ProcessEvent(FindFunctionChecked(NAME_UMyNetDebugWidget_BP_UpdatePing),&Parms);
	}
	void UMyNetDebugWidget::StaticRegisterNativesUMyNetDebugWidget()
	{
		UClass* Class = UMyNetDebugWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateNetworkSimulationSettings", &UMyNetDebugWidget::execUpdateNetworkSimulationSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyNetDebugWidget_BP_OnHideWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyNetDebugWidget_BP_OnHideWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "On Hide Widget" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyNetDebugWidget_BP_OnHideWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyNetDebugWidget, nullptr, "BP_OnHideWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyNetDebugWidget_BP_OnHideWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetDebugWidget_BP_OnHideWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyNetDebugWidget_BP_OnHideWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyNetDebugWidget_BP_OnHideWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyNetDebugWidget_BP_OnShowWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyNetDebugWidget_BP_OnShowWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "On Show Widget" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyNetDebugWidget_BP_OnShowWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyNetDebugWidget, nullptr, "BP_OnShowWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyNetDebugWidget_BP_OnShowWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetDebugWidget_BP_OnShowWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyNetDebugWidget_BP_OnShowWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyNetDebugWidget_BP_OnShowWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Packets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Packets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::NewProp_Packets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::NewProp_Packets = { "Packets", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyNetDebugWidget_eventBP_OnUpdateNetworkSimulationSettings_Parms, Packets), Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettingsText, METADATA_PARAMS(Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::NewProp_Packets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::NewProp_Packets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::NewProp_Packets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "On Update Network Simulation Settings" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyNetDebugWidget, nullptr, "BP_OnUpdateNetworkSimulationSettings", nullptr, nullptr, sizeof(MyNetDebugWidget_eventBP_OnUpdateNetworkSimulationSettings_Parms), Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyNetDebugWidget_eventBP_UpdatePing_Parms, Ping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing_Statics::NewProp_Ping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "DisplayName", "On Update Ping" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyNetDebugWidget, nullptr, "BP_UpdatePing", nullptr, nullptr, sizeof(MyNetDebugWidget_eventBP_UpdatePing_Parms), Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics
	{
		struct MyNetDebugWidget_eventUpdateNetworkSimulationSettings_Parms
		{
			FMyBPNetworkSimulationSettings InPackets;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPackets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::NewProp_InPackets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::NewProp_InPackets = { "InPackets", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyNetDebugWidget_eventUpdateNetworkSimulationSettings_Parms, InPackets), Z_Construct_UScriptStruct_FMyBPNetworkSimulationSettings, METADATA_PARAMS(Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::NewProp_InPackets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::NewProp_InPackets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::NewProp_InPackets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyNetDebugWidget, nullptr, "UpdateNetworkSimulationSettings", nullptr, nullptr, sizeof(MyNetDebugWidget_eventUpdateNetworkSimulationSettings_Parms), Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyNetDebugWidget_NoRegister()
	{
		return UMyNetDebugWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMyNetDebugWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyNetDebugWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Network_Assignment,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyNetDebugWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyNetDebugWidget_BP_OnHideWidget, "BP_OnHideWidget" }, // 1464306062
		{ &Z_Construct_UFunction_UMyNetDebugWidget_BP_OnShowWidget, "BP_OnShowWidget" }, // 123029320
		{ &Z_Construct_UFunction_UMyNetDebugWidget_BP_OnUpdateNetworkSimulationSettings, "BP_OnUpdateNetworkSimulationSettings" }, // 2481409502
		{ &Z_Construct_UFunction_UMyNetDebugWidget_BP_UpdatePing, "BP_UpdatePing" }, // 120331052
		{ &Z_Construct_UFunction_UMyNetDebugWidget_UpdateNetworkSimulationSettings, "UpdateNetworkSimulationSettings" }, // 2202071573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyNetDebugWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyNetDebugWidget.h" },
		{ "ModuleRelativePath", "MyNetDebugWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyNetDebugWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyNetDebugWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyNetDebugWidget_Statics::ClassParams = {
		&UMyNetDebugWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyNetDebugWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyNetDebugWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyNetDebugWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyNetDebugWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyNetDebugWidget, 1737337441);
	template<> NETWORK_ASSIGNMENT_API UClass* StaticClass<UMyNetDebugWidget>()
	{
		return UMyNetDebugWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyNetDebugWidget(Z_Construct_UClass_UMyNetDebugWidget, &UMyNetDebugWidget::StaticClass, TEXT("/Script/Network_Assignment"), TEXT("UMyNetDebugWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyNetDebugWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
