// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IStageMonitorSession.h"
#include "StageMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIStageMonitorSession() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageInstanceDescriptor();
	STAGEMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStageSessionProviderEntry();
	UPackage* Z_Construct_UPackage__Script_StageMonitor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageSessionProviderEntry;
class UScriptStruct* FStageSessionProviderEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageSessionProviderEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageSessionProviderEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageSessionProviderEntry, (UObject*)Z_Construct_UPackage__Script_StageMonitor(), TEXT("StageSessionProviderEntry"));
	}
	return Z_Registration_Info_UScriptStruct_StageSessionProviderEntry.OuterSingleton;
}
template<> STAGEMONITOR_API UScriptStruct* StaticStruct<FStageSessionProviderEntry>()
{
	return FStageSessionProviderEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Descriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Entry corresponding to a provider we are monitoring\n * Contains information related to the provider so we can communicate with it\n * and more dynamic information like last communication received\n */" },
		{ "ModuleRelativePath", "Public/IStageMonitorSession.h" },
		{ "ToolTip", "Entry corresponding to a provider we are monitoring\nContains information related to the provider so we can communicate with it\nand more dynamic information like last communication received" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageSessionProviderEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewProp_Identifier_MetaData[] = {
		{ "Comment", "/** Identifier of this provider */" },
		{ "ModuleRelativePath", "Public/IStageMonitorSession.h" },
		{ "ToolTip", "Identifier of this provider" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStageSessionProviderEntry, Identifier), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewProp_Identifier_MetaData), Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewProp_Identifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewProp_Descriptor_MetaData[] = {
		{ "Comment", "/** Detailed descriptor */" },
		{ "ModuleRelativePath", "Public/IStageMonitorSession.h" },
		{ "ToolTip", "Detailed descriptor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStageSessionProviderEntry, Descriptor), Z_Construct_UScriptStruct_FStageInstanceDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewProp_Descriptor_MetaData), Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewProp_Descriptor_MetaData) }; // 2987884521
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewProp_Descriptor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitor,
		nullptr,
		&NewStructOps,
		"StageSessionProviderEntry",
		Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::PropPointers),
		sizeof(FStageSessionProviderEntry),
		alignof(FStageSessionProviderEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStageSessionProviderEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_StageSessionProviderEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageSessionProviderEntry.InnerSingleton, Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageSessionProviderEntry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitor_Public_IStageMonitorSession_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitor_Public_IStageMonitorSession_h_Statics::ScriptStructInfo[] = {
		{ FStageSessionProviderEntry::StaticStruct, Z_Construct_UScriptStruct_FStageSessionProviderEntry_Statics::NewStructOps, TEXT("StageSessionProviderEntry"), &Z_Registration_Info_UScriptStruct_StageSessionProviderEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageSessionProviderEntry), 2373584055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitor_Public_IStageMonitorSession_h_376168413(TEXT("/Script/StageMonitor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitor_Public_IStageMonitorSession_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitor_Public_IStageMonitorSession_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
