// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/UIActionBindingHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIActionBindingHandle() {}
// Cross Module References
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputMode();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FUIInputConfig();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIInputConfig;
class UScriptStruct* FUIInputConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIInputConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIInputConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIInputConfig, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("UIInputConfig"));
	}
	return Z_Registration_Info_UScriptStruct_UIInputConfig.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FUIInputConfig>()
{
	return FUIInputConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIInputConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMoveInput_MetaData[];
#endif
		static void NewProp_bIgnoreMoveInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMoveInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreLookInput_MetaData[];
#endif
		static void NewProp_bIgnoreLookInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreLookInput;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MouseCaptureMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseCaptureMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseCaptureMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideCursorDuringViewportCapture_MetaData[];
#endif
		static void NewProp_bHideCursorDuringViewportCapture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCursorDuringViewportCapture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIInputConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Input Config that can be applied on widget activation. Allows for input setup  (Mouse capture, \n * UI-only input, move / look ignore, etc), to be controlled by widget activation.\n */" },
		{ "ModuleRelativePath", "Public/Input/UIActionBindingHandle.h" },
		{ "ToolTip", "Input Config that can be applied on widget activation. Allows for input setup  (Mouse capture,\nUI-only input, move / look ignore, etc), to be controlled by widget activation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIInputConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreMoveInput_MetaData[] = {
		{ "Category", "InputConfig" },
		{ "ModuleRelativePath", "Public/Input/UIActionBindingHandle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreMoveInput_SetBit(void* Obj)
	{
		((FUIInputConfig*)Obj)->bIgnoreMoveInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreMoveInput = { "bIgnoreMoveInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUIInputConfig), &Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreMoveInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreMoveInput_MetaData), Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreMoveInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreLookInput_MetaData[] = {
		{ "Category", "InputConfig" },
		{ "ModuleRelativePath", "Public/Input/UIActionBindingHandle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreLookInput_SetBit(void* Obj)
	{
		((FUIInputConfig*)Obj)->bIgnoreLookInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreLookInput = { "bIgnoreLookInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUIInputConfig), &Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreLookInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreLookInput_MetaData), Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreLookInput_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "InputConfig" },
		{ "ModuleRelativePath", "Public/Input/UIActionBindingHandle.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIInputConfig, InputMode), Z_Construct_UEnum_CommonInput_ECommonInputMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_InputMode_MetaData), Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_InputMode_MetaData) }; // 1467923478
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_MouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_MouseCaptureMode_MetaData[] = {
		{ "Category", "InputConfig" },
		{ "ModuleRelativePath", "Public/Input/UIActionBindingHandle.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_MouseCaptureMode = { "MouseCaptureMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIInputConfig, MouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_MouseCaptureMode_MetaData), Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_MouseCaptureMode_MetaData) }; // 477614184
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bHideCursorDuringViewportCapture_MetaData[] = {
		{ "Category", "InputConfig" },
		{ "ModuleRelativePath", "Public/Input/UIActionBindingHandle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bHideCursorDuringViewportCapture_SetBit(void* Obj)
	{
		((FUIInputConfig*)Obj)->bHideCursorDuringViewportCapture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bHideCursorDuringViewportCapture = { "bHideCursorDuringViewportCapture", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUIInputConfig), &Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bHideCursorDuringViewportCapture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bHideCursorDuringViewportCapture_MetaData), Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bHideCursorDuringViewportCapture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIInputConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreMoveInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bIgnoreLookInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_InputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_MouseCaptureMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_MouseCaptureMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewProp_bHideCursorDuringViewportCapture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIInputConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"UIInputConfig",
		Z_Construct_UScriptStruct_FUIInputConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputConfig_Statics::PropPointers),
		sizeof(FUIInputConfig),
		alignof(FUIInputConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIInputConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUIInputConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_UIInputConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIInputConfig.InnerSingleton, Z_Construct_UScriptStruct_FUIInputConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIInputConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_UIActionBindingHandle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_UIActionBindingHandle_h_Statics::ScriptStructInfo[] = {
		{ FUIInputConfig::StaticStruct, Z_Construct_UScriptStruct_FUIInputConfig_Statics::NewStructOps, TEXT("UIInputConfig"), &Z_Registration_Info_UScriptStruct_UIInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIInputConfig), 3586523180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_UIActionBindingHandle_h_3285413837(TEXT("/Script/CommonUI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_UIActionBindingHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_Input_UIActionBindingHandle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
