// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectComponents/BlockAbilityTagsGameplayEffectComponent.h"
#include "GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockAbilityTagsGameplayEffectComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FInheritedTagContainer();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UBlockAbilityTagsGameplayEffectComponent::StaticRegisterNativesUBlockAbilityTagsGameplayEffectComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlockAbilityTagsGameplayEffectComponent);
	UClass* Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_NoRegister()
	{
		return UBlockAbilityTagsGameplayEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritableBlockedAbilityTagsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableBlockedAbilityTagsContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Handles blocking the activation of Gameplay Abilities based on Gameplay Tags for the Target actor of the owner Gameplay Effect */" },
		{ "IncludePath", "GameplayEffectComponents/BlockAbilityTagsGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/BlockAbilityTagsGameplayEffectComponent.h" },
		{ "ToolTip", "Handles blocking the activation of Gameplay Abilities based on Gameplay Tags for the Target actor of the owner Gameplay Effect" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::NewProp_InheritableBlockedAbilityTagsContainer_MetaData[] = {
		{ "Category", "None" },
		{ "Comment", "/** These tags are applied to the target actor of the Gameplay Effect.  Blocked Ability Tags prevent Gameplay Abilities with these tags from executing. */" },
		{ "DisplayName", "Block Abilities w/ Tags" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/BlockAbilityTagsGameplayEffectComponent.h" },
		{ "ToolTip", "These tags are applied to the target actor of the Gameplay Effect.  Blocked Ability Tags prevent Gameplay Abilities with these tags from executing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::NewProp_InheritableBlockedAbilityTagsContainer = { "InheritableBlockedAbilityTagsContainer", nullptr, (EPropertyFlags)0x0040000000010011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockAbilityTagsGameplayEffectComponent, InheritableBlockedAbilityTagsContainer), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::NewProp_InheritableBlockedAbilityTagsContainer_MetaData), Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::NewProp_InheritableBlockedAbilityTagsContainer_MetaData) }; // 3013930984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::NewProp_InheritableBlockedAbilityTagsContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockAbilityTagsGameplayEffectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::ClassParams = {
		&UBlockAbilityTagsGameplayEffectComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::PropPointers),
		0,
		0x003130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent()
	{
		if (!Z_Registration_Info_UClass_UBlockAbilityTagsGameplayEffectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlockAbilityTagsGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlockAbilityTagsGameplayEffectComponent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UBlockAbilityTagsGameplayEffectComponent>()
	{
		return UBlockAbilityTagsGameplayEffectComponent::StaticClass();
	}
	UBlockAbilityTagsGameplayEffectComponent::UBlockAbilityTagsGameplayEffectComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockAbilityTagsGameplayEffectComponent);
	UBlockAbilityTagsGameplayEffectComponent::~UBlockAbilityTagsGameplayEffectComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_BlockAbilityTagsGameplayEffectComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_BlockAbilityTagsGameplayEffectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlockAbilityTagsGameplayEffectComponent, UBlockAbilityTagsGameplayEffectComponent::StaticClass, TEXT("UBlockAbilityTagsGameplayEffectComponent"), &Z_Registration_Info_UClass_UBlockAbilityTagsGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlockAbilityTagsGameplayEffectComponent), 2356417606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_BlockAbilityTagsGameplayEffectComponent_h_1811025243(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_BlockAbilityTagsGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_BlockAbilityTagsGameplayEffectComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
