// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectComponents/ImmunityGameplayEffectComponent.h"
#include "GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImmunityGameplayEffectComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UImmunityGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UImmunityGameplayEffectComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectQuery();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UImmunityGameplayEffectComponent::StaticRegisterNativesUImmunityGameplayEffectComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImmunityGameplayEffectComponent);
	UClass* Z_Construct_UClass_UImmunityGameplayEffectComponent_NoRegister()
	{
		return UImmunityGameplayEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImmunityQueries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImmunityQueries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImmunityQueries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Immunity is blocking the application of _other_ GameplayEffectSpecs.\n * This registers a global handler on the ASC to block the application of other GameplayEffectSpecs.\n */" },
		{ "IncludePath", "GameplayEffectComponents/ImmunityGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/ImmunityGameplayEffectComponent.h" },
		{ "ToolTip", "Immunity is blocking the application of _other_ GameplayEffectSpecs.\nThis registers a global handler on the ASC to block the application of other GameplayEffectSpecs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::NewProp_ImmunityQueries_Inner = { "ImmunityQueries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectQuery, METADATA_PARAMS(0, nullptr) }; // 789866029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::NewProp_ImmunityQueries_MetaData[] = {
		{ "Category", "None" },
		{ "Comment", "/** Grants immunity to GameplayEffects that match this query. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/ImmunityGameplayEffectComponent.h" },
		{ "ToolTip", "Grants immunity to GameplayEffects that match this query." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::NewProp_ImmunityQueries = { "ImmunityQueries", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImmunityGameplayEffectComponent, ImmunityQueries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::NewProp_ImmunityQueries_MetaData), Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::NewProp_ImmunityQueries_MetaData) }; // 789866029
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::NewProp_ImmunityQueries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::NewProp_ImmunityQueries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImmunityGameplayEffectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::ClassParams = {
		&UImmunityGameplayEffectComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::PropPointers),
		0,
		0x00B130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UImmunityGameplayEffectComponent()
	{
		if (!Z_Registration_Info_UClass_UImmunityGameplayEffectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImmunityGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UImmunityGameplayEffectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImmunityGameplayEffectComponent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UImmunityGameplayEffectComponent>()
	{
		return UImmunityGameplayEffectComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImmunityGameplayEffectComponent);
	UImmunityGameplayEffectComponent::~UImmunityGameplayEffectComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_ImmunityGameplayEffectComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_ImmunityGameplayEffectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImmunityGameplayEffectComponent, UImmunityGameplayEffectComponent::StaticClass, TEXT("UImmunityGameplayEffectComponent"), &Z_Registration_Info_UClass_UImmunityGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImmunityGameplayEffectComponent), 840253637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_ImmunityGameplayEffectComponent_h_2081592698(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_ImmunityGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_ImmunityGameplayEffectComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
