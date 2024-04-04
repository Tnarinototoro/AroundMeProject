// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Switcher/WidgetConnectionConfig.h"
#include "UI/VCamConnectionStructs.h"
#include "Util/WidgetReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetConnectionConfig() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamChildWidgetReference();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamConnectionTargetSettings();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetConnectionConfig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetConnectionConfig;
class UScriptStruct* FWidgetConnectionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetConnectionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetConnectionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetConnectionConfig, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("WidgetConnectionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetConnectionConfig.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FWidgetConnectionConfig>()
{
	return FWidgetConnectionConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionTargets_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionTargets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionTargets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ConnectionTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Switcher/WidgetConnectionConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetConnectionConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_Widget_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/**\n\x09 * Defines the widget whose connections should be updated. Must be a VCamWidget.\n\x09 * This is the name of a child widget and can be used as argument to UWidgetTree::FindWidget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Switcher/WidgetConnectionConfig.h" },
		{ "ToolTip", "Defines the widget whose connections should be updated. Must be a VCamWidget.\nThis is the name of a child widget and can be used as argument to UWidgetTree::FindWidget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetConnectionConfig, Widget), Z_Construct_UScriptStruct_FVCamChildWidgetReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_Widget_MetaData), Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_Widget_MetaData) }; // 491024086
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_ConnectionTargets_ValueProp = { "ConnectionTargets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVCamConnectionTargetSettings, METADATA_PARAMS(0, nullptr) }; // 1107605184
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_ConnectionTargets_Key_KeyProp = { "ConnectionTargets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_ConnectionTargets_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/**\n\x09 * Key: A valid key of in UVCamWidget::Connections of the widget identified via WidgetProperty.\n\x09 * Value: The settings to use for this connection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Switcher/WidgetConnectionConfig.h" },
		{ "ToolTip", "Key: A valid key of in UVCamWidget::Connections of the widget identified via WidgetProperty.\nValue: The settings to use for this connection." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_ConnectionTargets = { "ConnectionTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetConnectionConfig, ConnectionTargets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_ConnectionTargets_MetaData), Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_ConnectionTargets_MetaData) }; // 1107605184
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_ConnectionTargets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_ConnectionTargets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewProp_ConnectionTargets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"WidgetConnectionConfig",
		Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::PropPointers),
		sizeof(FWidgetConnectionConfig),
		alignof(FWidgetConnectionConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetConnectionConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetConnectionConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetConnectionConfig.InnerSingleton, Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetConnectionConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_WidgetConnectionConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_WidgetConnectionConfig_h_Statics::ScriptStructInfo[] = {
		{ FWidgetConnectionConfig::StaticStruct, Z_Construct_UScriptStruct_FWidgetConnectionConfig_Statics::NewStructOps, TEXT("WidgetConnectionConfig"), &Z_Registration_Info_UScriptStruct_WidgetConnectionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetConnectionConfig), 1578101573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_WidgetConnectionConfig_h_3377507171(TEXT("/Script/VCamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_WidgetConnectionConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_WidgetConnectionConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
