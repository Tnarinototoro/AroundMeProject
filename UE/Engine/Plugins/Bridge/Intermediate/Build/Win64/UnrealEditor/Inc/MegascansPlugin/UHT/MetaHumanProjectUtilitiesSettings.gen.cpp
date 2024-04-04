// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MetaHumanProjectUtilities/MetaHumanProjectUtilitiesSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetaHumanProjectUtilitiesSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings();
	MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MegascansPlugin();
// End Cross Module References
	void UMetaHumanProjectUtilitiesSettings::StaticRegisterNativesUMetaHumanProjectUtilitiesSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaHumanProjectUtilitiesSettings);
	UClass* Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_NoRegister()
	{
		return UMetaHumanProjectUtilitiesSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionServiceBaseUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VersionServiceBaseUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MetaHumanProjectUtilities/MetaHumanProjectUtilitiesSettings.h" },
		{ "ModuleRelativePath", "Private/MetaHumanProjectUtilities/MetaHumanProjectUtilitiesSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::NewProp_VersionServiceBaseUrl_MetaData[] = {
		{ "Comment", "// The URL for fetching version information and release notes\n" },
		{ "ModuleRelativePath", "Private/MetaHumanProjectUtilities/MetaHumanProjectUtilitiesSettings.h" },
		{ "ToolTip", "The URL for fetching version information and release notes" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::NewProp_VersionServiceBaseUrl = { "VersionServiceBaseUrl", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetaHumanProjectUtilitiesSettings, VersionServiceBaseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::NewProp_VersionServiceBaseUrl_MetaData), Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::NewProp_VersionServiceBaseUrl_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::NewProp_VersionServiceBaseUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaHumanProjectUtilitiesSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::ClassParams = {
		&UMetaHumanProjectUtilitiesSettings::StaticClass,
		"Bridge",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings()
	{
		if (!Z_Registration_Info_UClass_UMetaHumanProjectUtilitiesSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaHumanProjectUtilitiesSettings.OuterSingleton, Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaHumanProjectUtilitiesSettings.OuterSingleton;
	}
	template<> MEGASCANSPLUGIN_API UClass* StaticClass<UMetaHumanProjectUtilitiesSettings>()
	{
		return UMetaHumanProjectUtilitiesSettings::StaticClass();
	}
	UMetaHumanProjectUtilitiesSettings::UMetaHumanProjectUtilitiesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaHumanProjectUtilitiesSettings);
	UMetaHumanProjectUtilitiesSettings::~UMetaHumanProjectUtilitiesSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Private_MetaHumanProjectUtilities_MetaHumanProjectUtilitiesSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Private_MetaHumanProjectUtilities_MetaHumanProjectUtilitiesSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetaHumanProjectUtilitiesSettings, UMetaHumanProjectUtilitiesSettings::StaticClass, TEXT("UMetaHumanProjectUtilitiesSettings"), &Z_Registration_Info_UClass_UMetaHumanProjectUtilitiesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaHumanProjectUtilitiesSettings), 4127530083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Private_MetaHumanProjectUtilities_MetaHumanProjectUtilitiesSettings_h_3061999371(TEXT("/Script/MegascansPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Private_MetaHumanProjectUtilities_MetaHumanProjectUtilitiesSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_MegascansPlugin_Private_MetaHumanProjectUtilities_MetaHumanProjectUtilitiesSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
