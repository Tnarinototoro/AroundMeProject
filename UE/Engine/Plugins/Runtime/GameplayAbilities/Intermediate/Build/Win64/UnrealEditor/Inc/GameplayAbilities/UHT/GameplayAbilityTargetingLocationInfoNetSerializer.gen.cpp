// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Serialization/GameplayAbilityTargetingLocationInfoNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetingLocationInfoNetSerializer() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfoNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

static_assert(std::is_polymorphic<FGameplayAbilityTargetingLocationInfoNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FGameplayAbilityTargetingLocationInfoNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfoNetSerializerConfig;
class UScriptStruct* FGameplayAbilityTargetingLocationInfoNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfoNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfoNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfoNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetingLocationInfoNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfoNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetingLocationInfoNetSerializerConfig>()
{
	return FGameplayAbilityTargetingLocationInfoNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfoNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfoNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Serialization/GameplayAbilityTargetingLocationInfoNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfoNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetingLocationInfoNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfoNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"GameplayAbilityTargetingLocationInfoNetSerializerConfig",
		nullptr,
		0,
		sizeof(FGameplayAbilityTargetingLocationInfoNetSerializerConfig),
		alignof(FGameplayAbilityTargetingLocationInfoNetSerializerConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfoNetSerializerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfoNetSerializerConfig_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfoNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfoNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfoNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfoNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfoNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayAbilityTargetingLocationInfoNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayAbilityTargetingLocationInfoNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FGameplayAbilityTargetingLocationInfoNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfoNetSerializerConfig_Statics::NewStructOps, TEXT("GameplayAbilityTargetingLocationInfoNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_GameplayAbilityTargetingLocationInfoNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityTargetingLocationInfoNetSerializerConfig), 1007854701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayAbilityTargetingLocationInfoNetSerializer_h_3183038684(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayAbilityTargetingLocationInfoNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayAbilityTargetingLocationInfoNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
