// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectComponents/ChanceToApplyGameplayEffectComponent.h"
#include "GameplayEffect.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChanceToApplyGameplayEffectComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UChanceToApplyGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UChanceToApplyGameplayEffectComponent::StaticRegisterNativesUChanceToApplyGameplayEffectComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChanceToApplyGameplayEffectComponent);
	UClass* Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_NoRegister()
	{
		return UChanceToApplyGameplayEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToApplyToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChanceToApplyToTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Applies a probablity to the application conditions of the Gameplay Effect. */" },
		{ "IncludePath", "GameplayEffectComponents/ChanceToApplyGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/ChanceToApplyGameplayEffectComponent.h" },
		{ "ToolTip", "Applies a probablity to the application conditions of the Gameplay Effect." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::NewProp_ChanceToApplyToTarget_MetaData[] = {
		{ "Category", "Application" },
		{ "Comment", "/** Probability that this gameplay effect will be applied to the target actor (0.0 for never, 1.0 for always) */" },
		{ "GameplayAttribute", "True" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/ChanceToApplyGameplayEffectComponent.h" },
		{ "ToolTip", "Probability that this gameplay effect will be applied to the target actor (0.0 for never, 1.0 for always)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::NewProp_ChanceToApplyToTarget = { "ChanceToApplyToTarget", nullptr, (EPropertyFlags)0x0040000000010011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChanceToApplyGameplayEffectComponent, ChanceToApplyToTarget), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::NewProp_ChanceToApplyToTarget_MetaData), Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::NewProp_ChanceToApplyToTarget_MetaData) }; // 4070660376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::NewProp_ChanceToApplyToTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChanceToApplyGameplayEffectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::ClassParams = {
		&UChanceToApplyGameplayEffectComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::PropPointers),
		0,
		0x003130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UChanceToApplyGameplayEffectComponent()
	{
		if (!Z_Registration_Info_UClass_UChanceToApplyGameplayEffectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChanceToApplyGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UChanceToApplyGameplayEffectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChanceToApplyGameplayEffectComponent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UChanceToApplyGameplayEffectComponent>()
	{
		return UChanceToApplyGameplayEffectComponent::StaticClass();
	}
	UChanceToApplyGameplayEffectComponent::UChanceToApplyGameplayEffectComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChanceToApplyGameplayEffectComponent);
	UChanceToApplyGameplayEffectComponent::~UChanceToApplyGameplayEffectComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_ChanceToApplyGameplayEffectComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_ChanceToApplyGameplayEffectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChanceToApplyGameplayEffectComponent, UChanceToApplyGameplayEffectComponent::StaticClass, TEXT("UChanceToApplyGameplayEffectComponent"), &Z_Registration_Info_UClass_UChanceToApplyGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChanceToApplyGameplayEffectComponent), 189176761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_ChanceToApplyGameplayEffectComponent_h_768273292(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_ChanceToApplyGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_ChanceToApplyGameplayEffectComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
