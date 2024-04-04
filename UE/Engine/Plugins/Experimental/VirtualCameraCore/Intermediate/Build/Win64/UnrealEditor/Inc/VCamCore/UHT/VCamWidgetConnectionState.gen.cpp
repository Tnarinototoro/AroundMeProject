// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Switcher/VCamWidgetConnectionState.h"
#include "UI/Switcher/WidgetConnectionConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamWidgetConnectionState() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamWidgetConnectionState();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetConnectionConfig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamWidgetConnectionState;
class UScriptStruct* FVCamWidgetConnectionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamWidgetConnectionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamWidgetConnectionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamWidgetConnectionState, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("VCamWidgetConnectionState"));
	}
	return Z_Registration_Info_UScriptStruct_VCamWidgetConnectionState.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FVCamWidgetConnectionState>()
{
	return FVCamWidgetConnectionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetConfigs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamWidgetConnectionState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamWidgetConnectionState>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::NewProp_WidgetConfigs_Inner = { "WidgetConfigs", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWidgetConnectionConfig, METADATA_PARAMS(0, nullptr) }; // 1578101573
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::NewProp_WidgetConfigs_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/** A list of widgets to update */" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamWidgetConnectionState.h" },
		{ "ToolTip", "A list of widgets to update" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::NewProp_WidgetConfigs = { "WidgetConfigs", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVCamWidgetConnectionState, WidgetConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::NewProp_WidgetConfigs_MetaData), Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::NewProp_WidgetConfigs_MetaData) }; // 1578101573
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::NewProp_WidgetConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::NewProp_WidgetConfigs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"VCamWidgetConnectionState",
		Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::PropPointers),
		sizeof(FVCamWidgetConnectionState),
		alignof(FVCamWidgetConnectionState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVCamWidgetConnectionState()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamWidgetConnectionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamWidgetConnectionState.InnerSingleton, Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamWidgetConnectionState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamWidgetConnectionState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamWidgetConnectionState_h_Statics::ScriptStructInfo[] = {
		{ FVCamWidgetConnectionState::StaticStruct, Z_Construct_UScriptStruct_FVCamWidgetConnectionState_Statics::NewStructOps, TEXT("VCamWidgetConnectionState"), &Z_Registration_Info_UScriptStruct_VCamWidgetConnectionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamWidgetConnectionState), 3791747693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamWidgetConnectionState_h_2300876802(TEXT("/Script/VCamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamWidgetConnectionState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamWidgetConnectionState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
