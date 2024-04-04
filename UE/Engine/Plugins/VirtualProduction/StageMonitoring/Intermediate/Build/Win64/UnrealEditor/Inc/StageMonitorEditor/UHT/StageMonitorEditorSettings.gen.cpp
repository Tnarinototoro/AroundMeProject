// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StageMonitorEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageMonitorEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STAGEMONITOREDITOR_API UClass* Z_Construct_UClass_UStageMonitorEditorSettings();
	STAGEMONITOREDITOR_API UClass* Z_Construct_UClass_UStageMonitorEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StageMonitorEditor();
// End Cross Module References
	void UStageMonitorEditorSettings::StaticRegisterNativesUStageMonitorEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStageMonitorEditorSettings);
	UClass* Z_Construct_UClass_UStageMonitorEditorSettings_NoRegister()
	{
		return UStageMonitorEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStageMonitorEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnVisibilitySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnVisibilitySettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStageMonitorEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitorEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitorEditorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageMonitorEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the editor aspect of the StageMonitoring plugin modules. \n */" },
		{ "IncludePath", "StageMonitorEditorSettings.h" },
		{ "ModuleRelativePath", "Private/StageMonitorEditorSettings.h" },
		{ "ToolTip", "Settings for the editor aspect of the StageMonitoring plugin modules." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageMonitorEditorSettings_Statics::NewProp_RefreshRate_MetaData[] = {
		{ "Category", "UI" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Refresh rate in seconds for the StageMonitor panel. */" },
		{ "ModuleRelativePath", "Private/StageMonitorEditorSettings.h" },
		{ "ToolTip", "Refresh rate in seconds for the StageMonitor panel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStageMonitorEditorSettings_Statics::NewProp_RefreshRate = { "RefreshRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStageMonitorEditorSettings, RefreshRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitorEditorSettings_Statics::NewProp_RefreshRate_MetaData), Z_Construct_UClass_UStageMonitorEditorSettings_Statics::NewProp_RefreshRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageMonitorEditorSettings_Statics::NewProp_ColumnVisibilitySettings_MetaData[] = {
		{ "Comment", "/** Stores the state of the visibility settings in JSON format. */" },
		{ "ModuleRelativePath", "Private/StageMonitorEditorSettings.h" },
		{ "ToolTip", "Stores the state of the visibility settings in JSON format." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStageMonitorEditorSettings_Statics::NewProp_ColumnVisibilitySettings = { "ColumnVisibilitySettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStageMonitorEditorSettings, ColumnVisibilitySettings), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitorEditorSettings_Statics::NewProp_ColumnVisibilitySettings_MetaData), Z_Construct_UClass_UStageMonitorEditorSettings_Statics::NewProp_ColumnVisibilitySettings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStageMonitorEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageMonitorEditorSettings_Statics::NewProp_RefreshRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageMonitorEditorSettings_Statics::NewProp_ColumnVisibilitySettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStageMonitorEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStageMonitorEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStageMonitorEditorSettings_Statics::ClassParams = {
		&UStageMonitorEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStageMonitorEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitorEditorSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitorEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStageMonitorEditorSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitorEditorSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStageMonitorEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UStageMonitorEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStageMonitorEditorSettings.OuterSingleton, Z_Construct_UClass_UStageMonitorEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStageMonitorEditorSettings.OuterSingleton;
	}
	template<> STAGEMONITOREDITOR_API UClass* StaticClass<UStageMonitorEditorSettings>()
	{
		return UStageMonitorEditorSettings::StaticClass();
	}
	UStageMonitorEditorSettings::UStageMonitorEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStageMonitorEditorSettings);
	UStageMonitorEditorSettings::~UStageMonitorEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorEditor_Private_StageMonitorEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorEditor_Private_StageMonitorEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStageMonitorEditorSettings, UStageMonitorEditorSettings::StaticClass, TEXT("UStageMonitorEditorSettings"), &Z_Registration_Info_UClass_UStageMonitorEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStageMonitorEditorSettings), 4157757682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorEditor_Private_StageMonitorEditorSettings_h_1714837504(TEXT("/Script/StageMonitorEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorEditor_Private_StageMonitorEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorEditor_Private_StageMonitorEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
