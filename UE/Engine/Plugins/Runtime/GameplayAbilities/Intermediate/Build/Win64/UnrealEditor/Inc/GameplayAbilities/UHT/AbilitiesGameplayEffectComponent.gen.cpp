// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectComponents/AbilitiesGameplayEffectComponent.h"
#include "GameplayEffect.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitiesGameplayEffectComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitiesGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitiesGameplayEffectComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig;
class UScriptStruct* FGameplayAbilitySpecConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecConfig>()
{
	return FGameplayAbilitySpecConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelScalableFloat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelScalableFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemovalPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovalPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemovalPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Options on how to configure a GameplayAbilitySpec to grant an Actor */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
		{ "ToolTip", "Options on how to configure a GameplayAbilitySpec to grant an Actor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** What ability to grant */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
		{ "ToolTip", "What ability to grant" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilitySpecConfig, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_Ability_MetaData), Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_Ability_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_LevelScalableFloat_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** What level to grant this ability at */" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
		{ "ToolTip", "What level to grant this ability at" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_LevelScalableFloat = { "LevelScalableFloat", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilitySpecConfig, LevelScalableFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_LevelScalableFloat_MetaData), Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_LevelScalableFloat_MetaData) }; // 4070660376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_InputID_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** Input ID to bind this ability to */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
		{ "ToolTip", "Input ID to bind this ability to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilitySpecConfig, InputID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_InputID_MetaData), Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_InputID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_RemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_RemovalPolicy_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** What will remove this ability later */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
		{ "ToolTip", "What will remove this ability later" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_RemovalPolicy = { "RemovalPolicy", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilitySpecConfig, RemovalPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_RemovalPolicy_MetaData), Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_RemovalPolicy_MetaData) }; // 381376444
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_LevelScalableFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_InputID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_RemovalPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewProp_RemovalPolicy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilitySpecConfig",
		Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::PropPointers),
		sizeof(FGameplayAbilitySpecConfig),
		alignof(FGameplayAbilitySpecConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig.InnerSingleton;
	}
	void UAbilitiesGameplayEffectComponent::StaticRegisterNativesUAbilitiesGameplayEffectComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitiesGameplayEffectComponent);
	UClass* Z_Construct_UClass_UAbilitiesGameplayEffectComponent_NoRegister()
	{
		return UAbilitiesGameplayEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantAbilityConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantAbilityConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantAbilityConfigs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Grants additional Gameplay Abilities to the Target of a Gameplay Effect while active\n */" },
		{ "IncludePath", "GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
		{ "ToolTip", "Grants additional Gameplay Abilities to the Target of a Gameplay Effect while active" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::NewProp_GrantAbilityConfigs_Inner = { "GrantAbilityConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig, METADATA_PARAMS(0, nullptr) }; // 2539796818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::NewProp_GrantAbilityConfigs_MetaData[] = {
		{ "Category", "GrantAbilities" },
		{ "Comment", "/** Abilities to Grant to the Target while this Gameplay Effect is active */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AbilitiesGameplayEffectComponent.h" },
		{ "ToolTip", "Abilities to Grant to the Target while this Gameplay Effect is active" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::NewProp_GrantAbilityConfigs = { "GrantAbilityConfigs", nullptr, (EPropertyFlags)0x0020080000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitiesGameplayEffectComponent, GrantAbilityConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::NewProp_GrantAbilityConfigs_MetaData), Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::NewProp_GrantAbilityConfigs_MetaData) }; // 2539796818
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::NewProp_GrantAbilityConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::NewProp_GrantAbilityConfigs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitiesGameplayEffectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::ClassParams = {
		&UAbilitiesGameplayEffectComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::PropPointers),
		0,
		0x003130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilitiesGameplayEffectComponent()
	{
		if (!Z_Registration_Info_UClass_UAbilitiesGameplayEffectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitiesGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UAbilitiesGameplayEffectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilitiesGameplayEffectComponent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilitiesGameplayEffectComponent>()
	{
		return UAbilitiesGameplayEffectComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitiesGameplayEffectComponent);
	UAbilitiesGameplayEffectComponent::~UAbilitiesGameplayEffectComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics::ScriptStructInfo[] = {
		{ FGameplayAbilitySpecConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecConfig_Statics::NewStructOps, TEXT("GameplayAbilitySpecConfig"), &Z_Registration_Info_UScriptStruct_GameplayAbilitySpecConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilitySpecConfig), 2539796818U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitiesGameplayEffectComponent, UAbilitiesGameplayEffectComponent::StaticClass, TEXT("UAbilitiesGameplayEffectComponent"), &Z_Registration_Info_UClass_UAbilitiesGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitiesGameplayEffectComponent), 2939238913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_3850632007(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AbilitiesGameplayEffectComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
