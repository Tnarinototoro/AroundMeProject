// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h"
#include "GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetTagsGameplayEffectComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UTargetTagsGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UTargetTagsGameplayEffectComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FInheritedTagContainer();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UTargetTagsGameplayEffectComponent::StaticRegisterNativesUTargetTagsGameplayEffectComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetTagsGameplayEffectComponent);
	UClass* Z_Construct_UClass_UTargetTagsGameplayEffectComponent_NoRegister()
	{
		return UTargetTagsGameplayEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritableGrantedTagsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableGrantedTagsContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Handles granting Tags to the Target (sometimes referred to as the Owner) of the Gameplay Effect */" },
		{ "IncludePath", "GameplayEffectComponents/TargetTagsGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/TargetTagsGameplayEffectComponent.h" },
		{ "ToolTip", "Handles granting Tags to the Target (sometimes referred to as the Owner) of the Gameplay Effect" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::NewProp_InheritableGrantedTagsContainer_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "None" },
		{ "Comment", "/** These tags are applied (granted) to the target actor of the Gameplay Effect.  The Target would then \"own\" these Tags. */" },
		{ "DisplayName", "Add Tags" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/TargetTagsGameplayEffectComponent.h" },
		{ "ToolTip", "These tags are applied (granted) to the target actor of the Gameplay Effect.  The Target would then \"own\" these Tags." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::NewProp_InheritableGrantedTagsContainer = { "InheritableGrantedTagsContainer", nullptr, (EPropertyFlags)0x0040000000010011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetTagsGameplayEffectComponent, InheritableGrantedTagsContainer), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::NewProp_InheritableGrantedTagsContainer_MetaData), Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::NewProp_InheritableGrantedTagsContainer_MetaData) }; // 3013930984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::NewProp_InheritableGrantedTagsContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetTagsGameplayEffectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::ClassParams = {
		&UTargetTagsGameplayEffectComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::PropPointers),
		0,
		0x003130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTargetTagsGameplayEffectComponent()
	{
		if (!Z_Registration_Info_UClass_UTargetTagsGameplayEffectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetTagsGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UTargetTagsGameplayEffectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetTagsGameplayEffectComponent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UTargetTagsGameplayEffectComponent>()
	{
		return UTargetTagsGameplayEffectComponent::StaticClass();
	}
	UTargetTagsGameplayEffectComponent::UTargetTagsGameplayEffectComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetTagsGameplayEffectComponent);
	UTargetTagsGameplayEffectComponent::~UTargetTagsGameplayEffectComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagsGameplayEffectComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagsGameplayEffectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetTagsGameplayEffectComponent, UTargetTagsGameplayEffectComponent::StaticClass, TEXT("UTargetTagsGameplayEffectComponent"), &Z_Registration_Info_UClass_UTargetTagsGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetTagsGameplayEffectComponent), 1502129844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagsGameplayEffectComponent_h_3236859216(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagsGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagsGameplayEffectComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
