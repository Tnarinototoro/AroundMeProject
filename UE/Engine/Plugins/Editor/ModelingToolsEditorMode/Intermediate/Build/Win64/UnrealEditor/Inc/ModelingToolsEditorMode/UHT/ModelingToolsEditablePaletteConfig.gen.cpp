// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ModelingToolsEditablePaletteConfig.h"
#include "ToolkitBuilderConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelingToolsEditablePaletteConfig() {}
// Cross Module References
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingModeEditableToolPaletteConfig();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingToolsEditorMode();
	WIDGETREGISTRATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditableToolPaletteSettings();
// End Cross Module References
	void UModelingModeEditableToolPaletteConfig::StaticRegisterNativesUModelingModeEditableToolPaletteConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelingModeEditableToolPaletteConfig);
	UClass* Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_NoRegister()
	{
		return UModelingModeEditableToolPaletteConfig::StaticClass();
	}
	struct Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditableToolPalettes_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EditableToolPalettes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableToolPalettes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EditableToolPalettes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Implementation of IEditableToolPaletteConfigManager specific to ModelingMode, currently needed because we cannot have\n * one at the FModeToolkit level due to EditorConfig depending on UnrealEd which is where the mode toolkit lives\n */" },
		{ "EditorConfig", "EditableToolPalette" },
		{ "IncludePath", "ModelingToolsEditablePaletteConfig.h" },
		{ "ModuleRelativePath", "Private/ModelingToolsEditablePaletteConfig.h" },
		{ "ToolTip", "Implementation of IEditableToolPaletteConfigManager specific to ModelingMode, currently needed because we cannot have\n* one at the FModeToolkit level due to EditorConfig depending on UnrealEd which is where the mode toolkit lives" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::NewProp_EditableToolPalettes_ValueProp = { "EditableToolPalettes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FEditableToolPaletteSettings, METADATA_PARAMS(0, nullptr) }; // 4106357384
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::NewProp_EditableToolPalettes_Key_KeyProp = { "EditableToolPalettes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::NewProp_EditableToolPalettes_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Private/ModelingToolsEditablePaletteConfig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::NewProp_EditableToolPalettes = { "EditableToolPalettes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModelingModeEditableToolPaletteConfig, EditableToolPalettes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::NewProp_EditableToolPalettes_MetaData), Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::NewProp_EditableToolPalettes_MetaData) }; // 4106357384
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::NewProp_EditableToolPalettes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::NewProp_EditableToolPalettes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::NewProp_EditableToolPalettes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelingModeEditableToolPaletteConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::ClassParams = {
		&UModelingModeEditableToolPaletteConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UModelingModeEditableToolPaletteConfig()
	{
		if (!Z_Registration_Info_UClass_UModelingModeEditableToolPaletteConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelingModeEditableToolPaletteConfig.OuterSingleton, Z_Construct_UClass_UModelingModeEditableToolPaletteConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModelingModeEditableToolPaletteConfig.OuterSingleton;
	}
	template<> MODELINGTOOLSEDITORMODE_API UClass* StaticClass<UModelingModeEditableToolPaletteConfig>()
	{
		return UModelingModeEditableToolPaletteConfig::StaticClass();
	}
	UModelingModeEditableToolPaletteConfig::UModelingModeEditableToolPaletteConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelingModeEditableToolPaletteConfig);
	UModelingModeEditableToolPaletteConfig::~UModelingModeEditableToolPaletteConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Private_ModelingToolsEditablePaletteConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Private_ModelingToolsEditablePaletteConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModelingModeEditableToolPaletteConfig, UModelingModeEditableToolPaletteConfig::StaticClass, TEXT("UModelingModeEditableToolPaletteConfig"), &Z_Registration_Info_UClass_UModelingModeEditableToolPaletteConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelingModeEditableToolPaletteConfig), 1272717801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Private_ModelingToolsEditablePaletteConfig_h_667557562(TEXT("/Script/ModelingToolsEditorMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Private_ModelingToolsEditablePaletteConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Private_ModelingToolsEditablePaletteConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
