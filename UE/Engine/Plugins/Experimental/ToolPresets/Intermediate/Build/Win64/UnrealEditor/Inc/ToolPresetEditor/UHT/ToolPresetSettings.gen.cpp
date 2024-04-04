// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolPresetSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolPresetSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	TOOLPRESETEDITOR_API UClass* Z_Construct_UClass_UToolPresetProjectSettings();
	TOOLPRESETEDITOR_API UClass* Z_Construct_UClass_UToolPresetProjectSettings_NoRegister();
	TOOLPRESETEDITOR_API UClass* Z_Construct_UClass_UToolPresetUserSettings();
	TOOLPRESETEDITOR_API UClass* Z_Construct_UClass_UToolPresetUserSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToolPresetEditor();
// End Cross Module References
	void UToolPresetUserSettings::StaticRegisterNativesUToolPresetUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolPresetUserSettings);
	UClass* Z_Construct_UClass_UToolPresetUserSettings_NoRegister()
	{
		return UToolPresetUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UToolPresetUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnabledPresetCollections_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledPresetCollections_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_EnabledPresetCollections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultCollectionEnabled_MetaData[];
#endif
		static void NewProp_bDefaultCollectionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultCollectionEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolPresetUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolPresetEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetUserSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolPresetUserSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the PresetEditor.\n */" },
		{ "EditorConfig", "UToolPresetUserSettings" },
		{ "IncludePath", "ToolPresetSettings.h" },
		{ "ModuleRelativePath", "Public/ToolPresetSettings.h" },
		{ "ToolTip", "Implements the settings for the PresetEditor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_EnabledPresetCollections_ElementProp = { "EnabledPresetCollections", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_EnabledPresetCollections_MetaData[] = {
		{ "AllowedClasses", "/Script/ToolPresetAsset.InteractiveToolsPresetCollectionAsset" },
		{ "Category", "Interactive Tool Presets|Collections" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/ToolPresetSettings.h" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FSoftObjectPath>, "The structure 'FSoftObjectPath' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_EnabledPresetCollections = { "EnabledPresetCollections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolPresetUserSettings, EnabledPresetCollections), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_EnabledPresetCollections_MetaData), Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_EnabledPresetCollections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_bDefaultCollectionEnabled_MetaData[] = {
		{ "Category", "Interactive Tool Presets|Collections" },
		{ "Comment", "//~ Ideally the above property would be able to store if the default collection was enabled or not.\n//~ \n//~ However, the default collection itself is stored via an alternative JSON representation, accessed through the PresetAssetSubsystem,\n//~ to avoid issues with automatic asset generation. Therefore it doesn't have a \"path\" in the traditional sense that the other collections\n//~ do, requiring a separate tracking of it's enabled/disabled status.\n" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/ToolPresetSettings.h" },
	};
#endif
	void Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_bDefaultCollectionEnabled_SetBit(void* Obj)
	{
		((UToolPresetUserSettings*)Obj)->bDefaultCollectionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_bDefaultCollectionEnabled = { "bDefaultCollectionEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UToolPresetUserSettings), &Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_bDefaultCollectionEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_bDefaultCollectionEnabled_MetaData), Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_bDefaultCollectionEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolPresetUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_EnabledPresetCollections_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_EnabledPresetCollections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolPresetUserSettings_Statics::NewProp_bDefaultCollectionEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolPresetUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolPresetUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolPresetUserSettings_Statics::ClassParams = {
		&UToolPresetUserSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UToolPresetUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetUserSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolPresetUserSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetUserSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UToolPresetUserSettings()
	{
		if (!Z_Registration_Info_UClass_UToolPresetUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolPresetUserSettings.OuterSingleton, Z_Construct_UClass_UToolPresetUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolPresetUserSettings.OuterSingleton;
	}
	template<> TOOLPRESETEDITOR_API UClass* StaticClass<UToolPresetUserSettings>()
	{
		return UToolPresetUserSettings::StaticClass();
	}
	UToolPresetUserSettings::UToolPresetUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolPresetUserSettings);
	UToolPresetUserSettings::~UToolPresetUserSettings() {}
	void UToolPresetProjectSettings::StaticRegisterNativesUToolPresetProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolPresetProjectSettings);
	UClass* Z_Construct_UClass_UToolPresetProjectSettings_NoRegister()
	{
		return UToolPresetProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UToolPresetProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedPresetCollections_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedPresetCollections_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LoadedPresetCollections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolPresetProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolPresetEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetProjectSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolPresetProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Tool Project Preset Collections.\n */" },
		{ "IncludePath", "ToolPresetSettings.h" },
		{ "ModuleRelativePath", "Public/ToolPresetSettings.h" },
		{ "ToolTip", "Implements the settings for the Tool Project Preset Collections." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UToolPresetProjectSettings_Statics::NewProp_LoadedPresetCollections_ElementProp = { "LoadedPresetCollections", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolPresetProjectSettings_Statics::NewProp_LoadedPresetCollections_MetaData[] = {
		{ "AllowedClasses", "/Script/ToolPresetAsset.InteractiveToolsPresetCollectionAsset" },
		{ "Category", "Interactive Tool Presets|Collections" },
		{ "Comment", "/* Controls which preset collection assets are to be loaded for this project.  */" },
		{ "ModuleRelativePath", "Public/ToolPresetSettings.h" },
		{ "ToolTip", "Controls which preset collection assets are to be loaded for this project." },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FSoftObjectPath>, "The structure 'FSoftObjectPath' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UToolPresetProjectSettings_Statics::NewProp_LoadedPresetCollections = { "LoadedPresetCollections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UToolPresetProjectSettings, LoadedPresetCollections), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetProjectSettings_Statics::NewProp_LoadedPresetCollections_MetaData), Z_Construct_UClass_UToolPresetProjectSettings_Statics::NewProp_LoadedPresetCollections_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolPresetProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolPresetProjectSettings_Statics::NewProp_LoadedPresetCollections_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolPresetProjectSettings_Statics::NewProp_LoadedPresetCollections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolPresetProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolPresetProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolPresetProjectSettings_Statics::ClassParams = {
		&UToolPresetProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UToolPresetProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetProjectSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolPresetProjectSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolPresetProjectSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UToolPresetProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UToolPresetProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolPresetProjectSettings.OuterSingleton, Z_Construct_UClass_UToolPresetProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolPresetProjectSettings.OuterSingleton;
	}
	template<> TOOLPRESETEDITOR_API UClass* StaticClass<UToolPresetProjectSettings>()
	{
		return UToolPresetProjectSettings::StaticClass();
	}
	UToolPresetProjectSettings::UToolPresetProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolPresetProjectSettings);
	UToolPresetProjectSettings::~UToolPresetProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetEditor_Public_ToolPresetSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetEditor_Public_ToolPresetSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolPresetUserSettings, UToolPresetUserSettings::StaticClass, TEXT("UToolPresetUserSettings"), &Z_Registration_Info_UClass_UToolPresetUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolPresetUserSettings), 2787591757U) },
		{ Z_Construct_UClass_UToolPresetProjectSettings, UToolPresetProjectSettings::StaticClass, TEXT("UToolPresetProjectSettings"), &Z_Registration_Info_UClass_UToolPresetProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolPresetProjectSettings), 3787727694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetEditor_Public_ToolPresetSettings_h_1052486034(TEXT("/Script/ToolPresetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetEditor_Public_ToolPresetSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetEditor_Public_ToolPresetSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
