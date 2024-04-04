// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectComponents/AssetTagsGameplayEffectComponent.h"
#include "GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetTagsGameplayEffectComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAssetTagsGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAssetTagsGameplayEffectComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FInheritedTagContainer();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UAssetTagsGameplayEffectComponent::StaticRegisterNativesUAssetTagsGameplayEffectComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetTagsGameplayEffectComponent);
	UClass* Z_Construct_UClass_UAssetTagsGameplayEffectComponent_NoRegister()
	{
		return UAssetTagsGameplayEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritableAssetTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableAssetTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** These are tags that the Gameplay Effect Asset itself 'has' (owns). These do _not_ transfer to any Actors */" },
		{ "IncludePath", "GameplayEffectComponents/AssetTagsGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AssetTagsGameplayEffectComponent.h" },
		{ "ToolTip", "These are tags that the Gameplay Effect Asset itself 'has' (owns). These do _not_ transfer to any Actors" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::NewProp_InheritableAssetTags_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** The GameplayEffect's Tags: tags the the GE *has* and DOES NOT give to the actor. */" },
		{ "DisplayName", "AssetTags" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AssetTagsGameplayEffectComponent.h" },
		{ "ToolTip", "The GameplayEffect's Tags: tags the the GE *has* and DOES NOT give to the actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::NewProp_InheritableAssetTags = { "InheritableAssetTags", nullptr, (EPropertyFlags)0x0040000000010011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetTagsGameplayEffectComponent, InheritableAssetTags), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::NewProp_InheritableAssetTags_MetaData), Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::NewProp_InheritableAssetTags_MetaData) }; // 3013930984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::NewProp_InheritableAssetTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetTagsGameplayEffectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::ClassParams = {
		&UAssetTagsGameplayEffectComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::PropPointers),
		0,
		0x003130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAssetTagsGameplayEffectComponent()
	{
		if (!Z_Registration_Info_UClass_UAssetTagsGameplayEffectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetTagsGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UAssetTagsGameplayEffectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetTagsGameplayEffectComponent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAssetTagsGameplayEffectComponent>()
	{
		return UAssetTagsGameplayEffectComponent::StaticClass();
	}
	UAssetTagsGameplayEffectComponent::UAssetTagsGameplayEffectComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetTagsGameplayEffectComponent);
	UAssetTagsGameplayEffectComponent::~UAssetTagsGameplayEffectComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AssetTagsGameplayEffectComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AssetTagsGameplayEffectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetTagsGameplayEffectComponent, UAssetTagsGameplayEffectComponent::StaticClass, TEXT("UAssetTagsGameplayEffectComponent"), &Z_Registration_Info_UClass_UAssetTagsGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetTagsGameplayEffectComponent), 146434807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AssetTagsGameplayEffectComponent_h_1679381201(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AssetTagsGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AssetTagsGameplayEffectComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
