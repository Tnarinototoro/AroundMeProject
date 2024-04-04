// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Settings/SearchProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSearchProjectSettings() {}
// Cross Module References
	ASSETSEARCH_API UClass* Z_Construct_UClass_USearchProjectSettings();
	ASSETSEARCH_API UClass* Z_Construct_UClass_USearchProjectSettings_NoRegister();
	ASSETSEARCH_API UEnum* Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AssetSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESearchIntermediateStorage;
	static UEnum* ESearchIntermediateStorage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESearchIntermediateStorage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESearchIntermediateStorage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage, (UObject*)Z_Construct_UPackage__Script_AssetSearch(), TEXT("ESearchIntermediateStorage"));
		}
		return Z_Registration_Info_UEnum_ESearchIntermediateStorage.OuterSingleton;
	}
	template<> ASSETSEARCH_API UEnum* StaticEnum<ESearchIntermediateStorage>()
	{
		return ESearchIntermediateStorage_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage_Statics::Enumerators[] = {
		{ "ESearchIntermediateStorage::DerivedDataCache", (int64)ESearchIntermediateStorage::DerivedDataCache },
		{ "ESearchIntermediateStorage::AssetTagData", (int64)ESearchIntermediateStorage::AssetTagData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage_Statics::Enum_MetaDataParams[] = {
		{ "AssetTagData.Comment", "// Stores the json snippets and the json hash in the tag data for the asset.  This increases the size of all \n// assets that are indexed, but can be a great benefit to teams that don't have a large shared DDC.\n" },
		{ "AssetTagData.Name", "ESearchIntermediateStorage::AssetTagData" },
		{ "AssetTagData.ToolTip", "Stores the json snippets and the json hash in the tag data for the asset.  This increases the size of all\nassets that are indexed, but can be a great benefit to teams that don't have a large shared DDC." },
		{ "DerivedDataCache.Comment", "// Stores the json snippets of indexable data in the DDC so that they can be downloaded as needed.\n" },
		{ "DerivedDataCache.Name", "ESearchIntermediateStorage::DerivedDataCache" },
		{ "DerivedDataCache.ToolTip", "Stores the json snippets of indexable data in the DDC so that they can be downloaded as needed." },
		{ "ModuleRelativePath", "Private/Settings/SearchProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetSearch,
		nullptr,
		"ESearchIntermediateStorage",
		"ESearchIntermediateStorage",
		Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage()
	{
		if (!Z_Registration_Info_UEnum_ESearchIntermediateStorage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESearchIntermediateStorage.InnerSingleton, Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESearchIntermediateStorage.InnerSingleton;
	}
	void USearchProjectSettings::StaticRegisterNativesUSearchProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USearchProjectSettings);
	UClass* Z_Construct_UClass_USearchProjectSettings_NoRegister()
	{
		return USearchProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_USearchProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IntermediateStorage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateStorage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IntermediateStorage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoredPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USearchProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USearchProjectSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Search" },
		{ "IncludePath", "Settings/SearchProjectSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/SearchProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IntermediateStorage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IntermediateStorage_MetaData[] = {
		{ "Category", "General" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/Settings/SearchProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IntermediateStorage = { "IntermediateStorage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USearchProjectSettings, IntermediateStorage), Z_Construct_UEnum_AssetSearch_ESearchIntermediateStorage, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IntermediateStorage_MetaData), Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IntermediateStorage_MetaData) }; // 2745678515
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths_Inner = { "IgnoredPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/Settings/SearchProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths = { "IgnoredPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USearchProjectSettings, IgnoredPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths_MetaData), Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USearchProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IntermediateStorage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IntermediateStorage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USearchProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USearchProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USearchProjectSettings_Statics::ClassParams = {
		&USearchProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USearchProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USearchProjectSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USearchProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USearchProjectSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USearchProjectSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USearchProjectSettings()
	{
		if (!Z_Registration_Info_UClass_USearchProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USearchProjectSettings.OuterSingleton, Z_Construct_UClass_USearchProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USearchProjectSettings.OuterSingleton;
	}
	template<> ASSETSEARCH_API UClass* StaticClass<USearchProjectSettings>()
	{
		return USearchProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USearchProjectSettings);
	USearchProjectSettings::~USearchProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_Statics::EnumInfo[] = {
		{ ESearchIntermediateStorage_StaticEnum, TEXT("ESearchIntermediateStorage"), &Z_Registration_Info_UEnum_ESearchIntermediateStorage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2745678515U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USearchProjectSettings, USearchProjectSettings::StaticClass, TEXT("USearchProjectSettings"), &Z_Registration_Info_UClass_USearchProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USearchProjectSettings), 2838460275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_2386078444(TEXT("/Script/AssetSearch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
