// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetReferencingPolicySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetReferencingPolicySettings() {}
// Cross Module References
	ASSETREFERENCERESTRICTIONS_API UClass* Z_Construct_UClass_UAssetReferencingPolicySettings();
	ASSETREFERENCERESTRICTIONS_API UClass* Z_Construct_UClass_UAssetReferencingPolicySettings_NoRegister();
	ASSETREFERENCERESTRICTIONS_API UEnum* Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode();
	ASSETREFERENCERESTRICTIONS_API UEnum* Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode();
	ASSETREFERENCERESTRICTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules();
	ASSETREFERENCERESTRICTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules();
	ASSETREFERENCERESTRICTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot();
	ASSETREFERENCERESTRICTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins();
	ASSETREFERENCERESTRICTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AssetReferenceRestrictions();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARPDefaultPluginDomainRules;
class UScriptStruct* FARPDefaultPluginDomainRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARPDefaultPluginDomainRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARPDefaultPluginDomainRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules, (UObject*)Z_Construct_UPackage__Script_AssetReferenceRestrictions(), TEXT("ARPDefaultPluginDomainRules"));
	}
	return Z_Registration_Info_UScriptStruct_ARPDefaultPluginDomainRules.OuterSingleton;
}
template<> ASSETREFERENCERESTRICTIONS_API UScriptStruct* StaticStruct<FARPDefaultPluginDomainRules>()
{
	return FARPDefaultPluginDomainRules::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_CanReferenceTheseDomains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanReferenceTheseDomains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CanReferenceTheseDomains;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanProjectAccessThesePlugins_MetaData[];
#endif
		static void NewProp_bCanProjectAccessThesePlugins_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanProjectAccessThesePlugins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeSeenByOtherDomainsWithoutDependency_MetaData[];
#endif
		static void NewProp_bCanBeSeenByOtherDomainsWithoutDependency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeSeenByOtherDomainsWithoutDependency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPDefaultPluginDomainRules>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_CanReferenceTheseDomains_Inner = { "CanReferenceTheseDomains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_CanReferenceTheseDomains_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The list of additional domains always visible from a plugin\n// (EngineContent is always visible, as is content from other plugins that are explicitly referenced)\n" },
		{ "GetOptions", "GetListOfDomains_NoPluginsOrEngine" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The list of additional domains always visible from a plugin\n(EngineContent is always visible, as is content from other plugins that are explicitly referenced)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_CanReferenceTheseDomains = { "CanReferenceTheseDomains", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDefaultPluginDomainRules, CanReferenceTheseDomains), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_CanReferenceTheseDomains_MetaData), Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_CanReferenceTheseDomains_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanProjectAccessThesePlugins_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Can content in the ProjectContent domain access plugin content automatically (for plugins that don't match a specific rule)?\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "Can content in the ProjectContent domain access plugin content automatically (for plugins that don't match a specific rule)?" },
	};
#endif
	void Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanProjectAccessThesePlugins_SetBit(void* Obj)
	{
		((FARPDefaultPluginDomainRules*)Obj)->bCanProjectAccessThesePlugins = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanProjectAccessThesePlugins = { "bCanProjectAccessThesePlugins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FARPDefaultPluginDomainRules), &Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanProjectAccessThesePlugins_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanProjectAccessThesePlugins_MetaData), Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanProjectAccessThesePlugins_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanBeSeenByOtherDomainsWithoutDependency_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Can content in other domains access plugin content automatically (for plugins that don't match a specific rule)?\n// Note: This rule may be deprecated in the future!\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "Can content in other domains access plugin content automatically (for plugins that don't match a specific rule)?\nNote: This rule may be deprecated in the future!" },
	};
#endif
	void Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanBeSeenByOtherDomainsWithoutDependency_SetBit(void* Obj)
	{
		((FARPDefaultPluginDomainRules*)Obj)->bCanBeSeenByOtherDomainsWithoutDependency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanBeSeenByOtherDomainsWithoutDependency = { "bCanBeSeenByOtherDomainsWithoutDependency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FARPDefaultPluginDomainRules), &Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanBeSeenByOtherDomainsWithoutDependency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanBeSeenByOtherDomainsWithoutDependency_MetaData), Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanBeSeenByOtherDomainsWithoutDependency_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_CanReferenceTheseDomains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_CanReferenceTheseDomains,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanProjectAccessThesePlugins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewProp_bCanBeSeenByOtherDomainsWithoutDependency,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetReferenceRestrictions,
		nullptr,
		&NewStructOps,
		"ARPDefaultPluginDomainRules",
		Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::PropPointers),
		sizeof(FARPDefaultPluginDomainRules),
		alignof(FARPDefaultPluginDomainRules),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules()
	{
		if (!Z_Registration_Info_UScriptStruct_ARPDefaultPluginDomainRules.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARPDefaultPluginDomainRules.InnerSingleton, Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARPDefaultPluginDomainRules.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARPPluginMatchMode;
	static UEnum* EARPPluginMatchMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARPPluginMatchMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARPPluginMatchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode, (UObject*)Z_Construct_UPackage__Script_AssetReferenceRestrictions(), TEXT("EARPPluginMatchMode"));
		}
		return Z_Registration_Info_UEnum_EARPPluginMatchMode.OuterSingleton;
	}
	template<> ASSETREFERENCERESTRICTIONS_API UEnum* StaticEnum<EARPPluginMatchMode>()
	{
		return EARPPluginMatchMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode_Statics::Enumerators[] = {
		{ "EARPPluginMatchMode::MatchByCategory", (int64)EARPPluginMatchMode::MatchByCategory },
		{ "EARPPluginMatchMode::MatchByPathPrefix", (int64)EARPPluginMatchMode::MatchByPathPrefix },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode_Statics::Enum_MetaDataParams[] = {
		{ "MatchByCategory.Name", "EARPPluginMatchMode::MatchByCategory" },
		{ "MatchByPathPrefix.Name", "EARPPluginMatchMode::MatchByPathPrefix" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetReferenceRestrictions,
		nullptr,
		"EARPPluginMatchMode",
		"EARPPluginMatchMode",
		Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode()
	{
		if (!Z_Registration_Info_UEnum_EARPPluginMatchMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARPPluginMatchMode.InnerSingleton, Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARPPluginMatchMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARPDomainDefinitionForMatchingPlugins;
class UScriptStruct* FARPDomainDefinitionForMatchingPlugins::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARPDomainDefinitionForMatchingPlugins.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARPDomainDefinitionForMatchingPlugins.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins, (UObject*)Z_Construct_UPackage__Script_AssetReferenceRestrictions(), TEXT("ARPDomainDefinitionForMatchingPlugins"));
	}
	return Z_Registration_Info_UScriptStruct_ARPDomainDefinitionForMatchingPlugins.OuterSingleton;
}
template<> ASSETREFERENCERESTRICTIONS_API UScriptStruct* StaticStruct<FARPDomainDefinitionForMatchingPlugins>()
{
	return FARPDomainDefinitionForMatchingPlugins::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessageIfUsedElsewhere_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorMessageIfUsedElsewhere;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MatchRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginPathPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginPathPrefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginCategoryPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginCategoryPrefix;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CanReferenceTheseDomains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanReferenceTheseDomains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CanReferenceTheseDomains;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPDomainDefinitionForMatchingPlugins>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The display name of this rule (used in error message when attempting to reference content incorrectly)\n// The token {0} will be replaced with the plugin name\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The display name of this rule (used in error message when attempting to reference content incorrectly)\nThe token {0} will be replaced with the plugin name" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionForMatchingPlugins, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_DisplayName_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_ErrorMessageIfUsedElsewhere_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The error message if something that is not allowed to attempts to reference content from this domain\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The error message if something that is not allowed to attempts to reference content from this domain" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_ErrorMessageIfUsedElsewhere = { "ErrorMessageIfUsedElsewhere", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionForMatchingPlugins, ErrorMessageIfUsedElsewhere), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_ErrorMessageIfUsedElsewhere_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_ErrorMessageIfUsedElsewhere_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_MatchRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_MatchRule_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Type of matching for this rule\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "Type of matching for this rule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_MatchRule = { "MatchRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionForMatchingPlugins, MatchRule), Z_Construct_UEnum_AssetReferenceRestrictions_EARPPluginMatchMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_MatchRule_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_MatchRule_MetaData) }; // 3416129696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_PluginPathPrefix_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If set, a plugin with the same rooted directory path will match this rule\n// (use \"/FirstFolder/SecondFolder/\" to match a plugin like $YourProjectDir/Plugins/FirstFolder/SecondFolder/MyCoolPlugin/MyCoolPlugin.uplugin)\n" },
		{ "EditCondition", "MatchRule==EARPPluginMatchMode::MatchByPathPrefix" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "If set, a plugin with the same rooted directory path will match this rule\n(use \"/FirstFolder/SecondFolder/\" to match a plugin like $YourProjectDir/Plugins/FirstFolder/SecondFolder/MyCoolPlugin/MyCoolPlugin.uplugin)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_PluginPathPrefix = { "PluginPathPrefix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionForMatchingPlugins, PluginPathPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_PluginPathPrefix_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_PluginPathPrefix_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_PluginCategoryPrefix_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If set, a plugin with a matching Category will match this rule\n" },
		{ "EditCondition", "MatchRule==EARPPluginMatchMode::MatchByCategory" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "If set, a plugin with a matching Category will match this rule" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_PluginCategoryPrefix = { "PluginCategoryPrefix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionForMatchingPlugins, PluginCategoryPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_PluginCategoryPrefix_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_PluginCategoryPrefix_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_CanReferenceTheseDomains_Inner = { "CanReferenceTheseDomains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_CanReferenceTheseDomains_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The list of additional domains always visible from a plugin\n// (EngineContent is always visible, as is content from other plugins that are explicitly referenced)\n" },
		{ "GetOptions", "GetListOfDomains_NoPluginsOrEngine" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The list of additional domains always visible from a plugin\n(EngineContent is always visible, as is content from other plugins that are explicitly referenced)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_CanReferenceTheseDomains = { "CanReferenceTheseDomains", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionForMatchingPlugins, CanReferenceTheseDomains), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_CanReferenceTheseDomains_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_CanReferenceTheseDomains_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_ErrorMessageIfUsedElsewhere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_MatchRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_MatchRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_PluginPathPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_PluginCategoryPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_CanReferenceTheseDomains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewProp_CanReferenceTheseDomains,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetReferenceRestrictions,
		nullptr,
		&NewStructOps,
		"ARPDomainDefinitionForMatchingPlugins",
		Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::PropPointers),
		sizeof(FARPDomainDefinitionForMatchingPlugins),
		alignof(FARPDomainDefinitionForMatchingPlugins),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins()
	{
		if (!Z_Registration_Info_UScriptStruct_ARPDomainDefinitionForMatchingPlugins.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARPDomainDefinitionForMatchingPlugins.InnerSingleton, Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARPDomainDefinitionForMatchingPlugins.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARPDomainSettingsForPlugins;
class UScriptStruct* FARPDomainSettingsForPlugins::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARPDomainSettingsForPlugins.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARPDomainSettingsForPlugins.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins, (UObject*)Z_Construct_UPackage__Script_AssetReferenceRestrictions(), TEXT("ARPDomainSettingsForPlugins"));
	}
	return Z_Registration_Info_UScriptStruct_ARPDomainSettingsForPlugins.OuterSingleton;
}
template<> ASSETREFERENCERESTRICTIONS_API UScriptStruct* StaticStruct<FARPDomainSettingsForPlugins>()
{
	return FARPDomainSettingsForPlugins::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRule_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultRule;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalRules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPDomainSettingsForPlugins>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_DefaultRule_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The default rule if a more specific plugin rule doesn't apply\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The default rule if a more specific plugin rule doesn't apply" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_DefaultRule = { "DefaultRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainSettingsForPlugins, DefaultRule), Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_DefaultRule_MetaData), Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_DefaultRule_MetaData) }; // 2337650690
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_AdditionalRules_Inner = { "AdditionalRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins, METADATA_PARAMS(0, nullptr) }; // 2791181620
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_AdditionalRules_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Discovered plugins will be matched against these templates\n// Priority rules (a path match is preferred to a category match, and within each the longest match wins):\n//   Highest: The most specific path match\n//            Any path match\n//            The most specific category match\n//            Any category match\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "TitleProperty", "DisplayName" },
		{ "ToolTip", "Discovered plugins will be matched against these templates\nPriority rules (a path match is preferred to a category match, and within each the longest match wins):\n  Highest: The most specific path match\n           Any path match\n           The most specific category match\n           Any category match" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_AdditionalRules = { "AdditionalRules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainSettingsForPlugins, AdditionalRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_AdditionalRules_MetaData), Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_AdditionalRules_MetaData) }; // 2791181620
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_DefaultRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_AdditionalRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewProp_AdditionalRules,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetReferenceRestrictions,
		nullptr,
		&NewStructOps,
		"ARPDomainSettingsForPlugins",
		Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::PropPointers),
		sizeof(FARPDomainSettingsForPlugins),
		alignof(FARPDomainSettingsForPlugins),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins()
	{
		if (!Z_Registration_Info_UScriptStruct_ARPDomainSettingsForPlugins.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARPDomainSettingsForPlugins.InnerSingleton, Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARPDomainSettingsForPlugins.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARPDefaultProjectDomainRules;
class UScriptStruct* FARPDefaultProjectDomainRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARPDefaultProjectDomainRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARPDefaultProjectDomainRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules, (UObject*)Z_Construct_UPackage__Script_AssetReferenceRestrictions(), TEXT("ARPDefaultProjectDomainRules"));
	}
	return Z_Registration_Info_UScriptStruct_ARPDefaultProjectDomainRules.OuterSingleton;
}
template<> ASSETREFERENCERESTRICTIONS_API UScriptStruct* StaticStruct<FARPDefaultProjectDomainRules>()
{
	return FARPDefaultProjectDomainRules::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_CanReferenceTheseDomains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanReferenceTheseDomains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CanReferenceTheseDomains;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPDefaultProjectDomainRules>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::NewProp_CanReferenceTheseDomains_Inner = { "CanReferenceTheseDomains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::NewProp_CanReferenceTheseDomains_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The list of additional domains always visible from this domain.\n\x09 * EngineContent and Project Content in the '/Game/' directory are always visible\n\x09 */" },
		{ "GetOptions", "GetListOfDomains_NoEngineOrGame" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The list of additional domains always visible from this domain.\nEngineContent and Project Content in the '/Game/' directory are always visible" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::NewProp_CanReferenceTheseDomains = { "CanReferenceTheseDomains", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDefaultProjectDomainRules, CanReferenceTheseDomains), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::NewProp_CanReferenceTheseDomains_MetaData), Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::NewProp_CanReferenceTheseDomains_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::NewProp_CanReferenceTheseDomains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::NewProp_CanReferenceTheseDomains,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetReferenceRestrictions,
		nullptr,
		&NewStructOps,
		"ARPDefaultProjectDomainRules",
		Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::PropPointers),
		sizeof(FARPDefaultProjectDomainRules),
		alignof(FARPDefaultProjectDomainRules),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules()
	{
		if (!Z_Registration_Info_UScriptStruct_ARPDefaultProjectDomainRules.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARPDefaultProjectDomainRules.InnerSingleton, Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARPDefaultProjectDomainRules.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARPDomainAllowedToReferenceMode;
	static UEnum* EARPDomainAllowedToReferenceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARPDomainAllowedToReferenceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARPDomainAllowedToReferenceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode, (UObject*)Z_Construct_UPackage__Script_AssetReferenceRestrictions(), TEXT("EARPDomainAllowedToReferenceMode"));
		}
		return Z_Registration_Info_UEnum_EARPDomainAllowedToReferenceMode.OuterSingleton;
	}
	template<> ASSETREFERENCERESTRICTIONS_API UEnum* StaticEnum<EARPDomainAllowedToReferenceMode>()
	{
		return EARPDomainAllowedToReferenceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode_Statics::Enumerators[] = {
		{ "EARPDomainAllowedToReferenceMode::AdditionalDomains", (int64)EARPDomainAllowedToReferenceMode::AdditionalDomains },
		{ "EARPDomainAllowedToReferenceMode::AllDomains", (int64)EARPDomainAllowedToReferenceMode::AllDomains },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode_Statics::Enum_MetaDataParams[] = {
		{ "AdditionalDomains.Name", "EARPDomainAllowedToReferenceMode::AdditionalDomains" },
		{ "AllDomains.DisplayName", "All Domains (DANGER)" },
		{ "AllDomains.Name", "EARPDomainAllowedToReferenceMode::AllDomains" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetReferenceRestrictions,
		nullptr,
		"EARPDomainAllowedToReferenceMode",
		"EARPDomainAllowedToReferenceMode",
		Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode()
	{
		if (!Z_Registration_Info_UEnum_EARPDomainAllowedToReferenceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARPDomainAllowedToReferenceMode.InnerSingleton, Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARPDomainAllowedToReferenceMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARPDomainDefinitionByContentRoot;
class UScriptStruct* FARPDomainDefinitionByContentRoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARPDomainDefinitionByContentRoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARPDomainDefinitionByContentRoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot, (UObject*)Z_Construct_UPackage__Script_AssetReferenceRestrictions(), TEXT("ARPDomainDefinitionByContentRoot"));
	}
	return Z_Registration_Info_UScriptStruct_ARPDomainDefinitionByContentRoot.OuterSingleton;
}
template<> ASSETREFERENCERESTRICTIONS_API UScriptStruct* StaticStruct<FARPDomainDefinitionByContentRoot>()
{
	return FARPDomainDefinitionByContentRoot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomainName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DomainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DomainDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DomainDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessageIfUsedElsewhere_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorMessageIfUsedElsewhere;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentRoots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentRoots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContentRoots;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpecificAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecificAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecificAssets;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReferenceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReferenceMode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CanReferenceTheseDomains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanReferenceTheseDomains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CanReferenceTheseDomains;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARPDomainDefinitionByContentRoot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_DomainName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The name of this domain\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The name of this domain" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_DomainName = { "DomainName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionByContentRoot, DomainName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_DomainName_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_DomainName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_DomainDisplayName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The display name of this domain (used in error message when attempting to reference content incorrectly)\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The display name of this domain (used in error message when attempting to reference content incorrectly)" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_DomainDisplayName = { "DomainDisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionByContentRoot, DomainDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_DomainDisplayName_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_DomainDisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ErrorMessageIfUsedElsewhere_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The error message if something that is not allowed to attempts to reference content from this domain\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The error message if something that is not allowed to attempts to reference content from this domain" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ErrorMessageIfUsedElsewhere = { "ErrorMessageIfUsedElsewhere", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionByContentRoot, ErrorMessageIfUsedElsewhere), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ErrorMessageIfUsedElsewhere_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ErrorMessageIfUsedElsewhere_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ContentRoots_Inner = { "ContentRoots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ContentRoots_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The list of content root paths considered to be part of this domain\n" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The list of content root paths considered to be part of this domain" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ContentRoots = { "ContentRoots", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionByContentRoot, ContentRoots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ContentRoots_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ContentRoots_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_SpecificAssets_Inner = { "SpecificAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_SpecificAssets_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// A list of specific assets considered to be part of this domain\n" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "A list of specific assets considered to be part of this domain" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_SpecificAssets = { "SpecificAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionByContentRoot, SpecificAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_SpecificAssets_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_SpecificAssets_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ReferenceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ReferenceMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// What content is this domain allowed to access?\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "What content is this domain allowed to access?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ReferenceMode = { "ReferenceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionByContentRoot, ReferenceMode), Z_Construct_UEnum_AssetReferenceRestrictions_EARPDomainAllowedToReferenceMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ReferenceMode_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ReferenceMode_MetaData) }; // 594495841
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_CanReferenceTheseDomains_Inner = { "CanReferenceTheseDomains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_CanReferenceTheseDomains_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The list of additional domains always visible from this domain\n// (EngineContent is always visible)\n" },
		{ "EditCondition", "ReferenceMode==EARPDomainAllowedToReferenceMode::AdditionalDomains" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetListOfDomains_NoEngine" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The list of additional domains always visible from this domain\n(EngineContent is always visible)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_CanReferenceTheseDomains = { "CanReferenceTheseDomains", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FARPDomainDefinitionByContentRoot, CanReferenceTheseDomains), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_CanReferenceTheseDomains_MetaData), Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_CanReferenceTheseDomains_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_DomainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_DomainDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ErrorMessageIfUsedElsewhere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ContentRoots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ContentRoots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_SpecificAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_SpecificAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ReferenceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_ReferenceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_CanReferenceTheseDomains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewProp_CanReferenceTheseDomains,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetReferenceRestrictions,
		nullptr,
		&NewStructOps,
		"ARPDomainDefinitionByContentRoot",
		Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::PropPointers),
		sizeof(FARPDomainDefinitionByContentRoot),
		alignof(FARPDomainDefinitionByContentRoot),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot()
	{
		if (!Z_Registration_Info_UScriptStruct_ARPDomainDefinitionByContentRoot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARPDomainDefinitionByContentRoot.InnerSingleton, Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARPDomainDefinitionByContentRoot.InnerSingleton;
	}
	DEFINE_FUNCTION(UAssetReferencingPolicySettings::execGetListOfDomains_NoPluginsOrEngine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetListOfDomains_NoPluginsOrEngine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetReferencingPolicySettings::execGetListOfDomains_NoEngineOrGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetListOfDomains_NoEngineOrGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetReferencingPolicySettings::execGetListOfDomains_NoEngine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetListOfDomains_NoEngine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetReferencingPolicySettings::execGetListOfDomains_All)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetListOfDomains_All();
		P_NATIVE_END;
	}
	void UAssetReferencingPolicySettings::StaticRegisterNativesUAssetReferencingPolicySettings()
	{
		UClass* Class = UAssetReferencingPolicySettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetListOfDomains_All", &UAssetReferencingPolicySettings::execGetListOfDomains_All },
			{ "GetListOfDomains_NoEngine", &UAssetReferencingPolicySettings::execGetListOfDomains_NoEngine },
			{ "GetListOfDomains_NoEngineOrGame", &UAssetReferencingPolicySettings::execGetListOfDomains_NoEngineOrGame },
			{ "GetListOfDomains_NoPluginsOrEngine", &UAssetReferencingPolicySettings::execGetListOfDomains_NoPluginsOrEngine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics
	{
		struct AssetReferencingPolicySettings_eventGetListOfDomains_All_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetReferencingPolicySettings_eventGetListOfDomains_All_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetReferencingPolicySettings, nullptr, "GetListOfDomains_All", nullptr, nullptr, Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::AssetReferencingPolicySettings_eventGetListOfDomains_All_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::AssetReferencingPolicySettings_eventGetListOfDomains_All_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics
	{
		struct AssetReferencingPolicySettings_eventGetListOfDomains_NoEngine_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetReferencingPolicySettings_eventGetListOfDomains_NoEngine_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetReferencingPolicySettings, nullptr, "GetListOfDomains_NoEngine", nullptr, nullptr, Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::AssetReferencingPolicySettings_eventGetListOfDomains_NoEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::AssetReferencingPolicySettings_eventGetListOfDomains_NoEngine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics
	{
		struct AssetReferencingPolicySettings_eventGetListOfDomains_NoEngineOrGame_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetReferencingPolicySettings_eventGetListOfDomains_NoEngineOrGame_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetReferencingPolicySettings, nullptr, "GetListOfDomains_NoEngineOrGame", nullptr, nullptr, Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::AssetReferencingPolicySettings_eventGetListOfDomains_NoEngineOrGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::AssetReferencingPolicySettings_eventGetListOfDomains_NoEngineOrGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics
	{
		struct AssetReferencingPolicySettings_eventGetListOfDomains_NoPluginsOrEngine_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetReferencingPolicySettings_eventGetListOfDomains_NoPluginsOrEngine_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetReferencingPolicySettings, nullptr, "GetListOfDomains_NoPluginsOrEngine", nullptr, nullptr, Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::AssetReferencingPolicySettings_eventGetListOfDomains_NoPluginsOrEngine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::AssetReferencingPolicySettings_eventGetListOfDomains_NoPluginsOrEngine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetReferencingPolicySettings);
	UClass* Z_Construct_UClass_UAssetReferencingPolicySettings_NoRegister()
	{
		return UAssetReferencingPolicySettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetReferencingPolicySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnginePlugins_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnginePlugins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectPlugins_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectPlugins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProjectContentRule_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultProjectContentRule;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalDomains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalDomains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalDomains;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreEditorOnlyReferences_MetaData[];
#endif
		static void NewProp_bIgnoreEditorOnlyReferences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreEditorOnlyReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetReferenceRestrictions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_All, "GetListOfDomains_All" }, // 905483593
		{ &Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngine, "GetListOfDomains_NoEngine" }, // 2721868254
		{ &Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoEngineOrGame, "GetListOfDomains_NoEngineOrGame" }, // 3529406348
		{ &Z_Construct_UFunction_UAssetReferencingPolicySettings_GetListOfDomains_NoPluginsOrEngine, "GetListOfDomains_NoPluginsOrEngine" }, // 2306198208
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Asset Referencing Policy, these settings are used to determine which plugins and game folders can reference content from each other */" },
		{ "DisplayName", "Asset Referencing Policy" },
		{ "IncludePath", "AssetReferencingPolicySettings.h" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings for the Asset Referencing Policy, these settings are used to determine which plugins and game folders can reference content from each other" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_EnginePlugins_MetaData[] = {
		{ "Category", "Engine Plugins" },
		{ "Comment", "// Settings/rules for engine plugins\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "Settings/rules for engine plugins" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_EnginePlugins = { "EnginePlugins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetReferencingPolicySettings, EnginePlugins), Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_EnginePlugins_MetaData), Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_EnginePlugins_MetaData) }; // 3128042415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_ProjectPlugins_MetaData[] = {
		{ "Category", "Project Plugins" },
		{ "Comment", "// Settings/rules for project plugins\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "Settings/rules for project plugins" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_ProjectPlugins = { "ProjectPlugins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetReferencingPolicySettings, ProjectPlugins), Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_ProjectPlugins_MetaData), Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_ProjectPlugins_MetaData) }; // 3128042415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_DefaultProjectContentRule_MetaData[] = {
		{ "Category", "Project Content" },
		{ "Comment", "// The default rules for project content (if a more specific rule doesn't apply)\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "The default rules for project content (if a more specific rule doesn't apply)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_DefaultProjectContentRule = { "DefaultProjectContentRule", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetReferencingPolicySettings, DefaultProjectContentRule), Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_DefaultProjectContentRule_MetaData), Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_DefaultProjectContentRule_MetaData) }; // 241104229
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_AdditionalDomains_Inner = { "AdditionalDomains", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot, METADATA_PARAMS(0, nullptr) }; // 1660909930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_AdditionalDomains_MetaData[] = {
		{ "Category", "Project Content" },
		{ "Comment", "// List of additional domains to carve out from the project content folder\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "TitleProperty", "DomainName" },
		{ "ToolTip", "List of additional domains to carve out from the project content folder" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_AdditionalDomains = { "AdditionalDomains", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetReferencingPolicySettings, AdditionalDomains), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_AdditionalDomains_MetaData), Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_AdditionalDomains_MetaData) }; // 1660909930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_bIgnoreEditorOnlyReferences_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If true, ignore any editor-only domain references that will not affect the cooked game\n" },
		{ "ModuleRelativePath", "Public/AssetReferencingPolicySettings.h" },
		{ "ToolTip", "If true, ignore any editor-only domain references that will not affect the cooked game" },
	};
#endif
	void Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_bIgnoreEditorOnlyReferences_SetBit(void* Obj)
	{
		((UAssetReferencingPolicySettings*)Obj)->bIgnoreEditorOnlyReferences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_bIgnoreEditorOnlyReferences = { "bIgnoreEditorOnlyReferences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetReferencingPolicySettings), &Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_bIgnoreEditorOnlyReferences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_bIgnoreEditorOnlyReferences_MetaData), Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_bIgnoreEditorOnlyReferences_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_EnginePlugins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_ProjectPlugins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_DefaultProjectContentRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_AdditionalDomains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_AdditionalDomains,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::NewProp_bIgnoreEditorOnlyReferences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetReferencingPolicySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::ClassParams = {
		&UAssetReferencingPolicySettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAssetReferencingPolicySettings()
	{
		if (!Z_Registration_Info_UClass_UAssetReferencingPolicySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetReferencingPolicySettings.OuterSingleton, Z_Construct_UClass_UAssetReferencingPolicySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetReferencingPolicySettings.OuterSingleton;
	}
	template<> ASSETREFERENCERESTRICTIONS_API UClass* StaticClass<UAssetReferencingPolicySettings>()
	{
		return UAssetReferencingPolicySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetReferencingPolicySettings);
	UAssetReferencingPolicySettings::~UAssetReferencingPolicySettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_Statics::EnumInfo[] = {
		{ EARPPluginMatchMode_StaticEnum, TEXT("EARPPluginMatchMode"), &Z_Registration_Info_UEnum_EARPPluginMatchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3416129696U) },
		{ EARPDomainAllowedToReferenceMode_StaticEnum, TEXT("EARPDomainAllowedToReferenceMode"), &Z_Registration_Info_UEnum_EARPDomainAllowedToReferenceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 594495841U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_Statics::ScriptStructInfo[] = {
		{ FARPDefaultPluginDomainRules::StaticStruct, Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics::NewStructOps, TEXT("ARPDefaultPluginDomainRules"), &Z_Registration_Info_UScriptStruct_ARPDefaultPluginDomainRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARPDefaultPluginDomainRules), 2337650690U) },
		{ FARPDomainDefinitionForMatchingPlugins::StaticStruct, Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics::NewStructOps, TEXT("ARPDomainDefinitionForMatchingPlugins"), &Z_Registration_Info_UScriptStruct_ARPDomainDefinitionForMatchingPlugins, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARPDomainDefinitionForMatchingPlugins), 2791181620U) },
		{ FARPDomainSettingsForPlugins::StaticStruct, Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics::NewStructOps, TEXT("ARPDomainSettingsForPlugins"), &Z_Registration_Info_UScriptStruct_ARPDomainSettingsForPlugins, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARPDomainSettingsForPlugins), 3128042415U) },
		{ FARPDefaultProjectDomainRules::StaticStruct, Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics::NewStructOps, TEXT("ARPDefaultProjectDomainRules"), &Z_Registration_Info_UScriptStruct_ARPDefaultProjectDomainRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARPDefaultProjectDomainRules), 241104229U) },
		{ FARPDomainDefinitionByContentRoot::StaticStruct, Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics::NewStructOps, TEXT("ARPDomainDefinitionByContentRoot"), &Z_Registration_Info_UScriptStruct_ARPDomainDefinitionByContentRoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARPDomainDefinitionByContentRoot), 1660909930U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetReferencingPolicySettings, UAssetReferencingPolicySettings::StaticClass, TEXT("UAssetReferencingPolicySettings"), &Z_Registration_Info_UClass_UAssetReferencingPolicySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetReferencingPolicySettings), 4036655380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_3886253925(TEXT("/Script/AssetReferenceRestrictions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Public_AssetReferencingPolicySettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
