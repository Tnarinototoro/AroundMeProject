// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h"
#include "GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdditionalEffectsGameplayEffectComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UAdditionalEffectsGameplayEffectComponent::StaticRegisterNativesUAdditionalEffectsGameplayEffectComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdditionalEffectsGameplayEffectComponent);
	UClass* Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_NoRegister()
	{
		return UAdditionalEffectsGameplayEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnApplicationCopyDataFromOriginalSpec_MetaData[];
#endif
		static void NewProp_bOnApplicationCopyDataFromOriginalSpec_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnApplicationCopyDataFromOriginalSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnApplicationGameplayEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnApplicationGameplayEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnApplicationGameplayEffects;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OnCompleteAlways_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleteAlways_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnCompleteAlways;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OnCompleteNormal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleteNormal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnCompleteNormal;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OnCompletePrematurely_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompletePrematurely_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnCompletePrematurely;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Add additional Gameplay Effects that attempt to activate under certain conditions (or no conditions) */" },
		{ "IncludePath", "GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h" },
		{ "ToolTip", "Add additional Gameplay Effects that attempt to activate under certain conditions (or no conditions)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_bOnApplicationCopyDataFromOriginalSpec_MetaData[] = {
		{ "Category", "OnApplication" },
		{ "Comment", "/**\n\x09 * This will copy all of the data (e.g. SetByCallerMagnitudes) from the GESpec that Applied this GameplayEffect to the new OnApplicationGameplayEffect Specs.\n\x09 * One would think this is normally desirable (and how OnComplete works by default), but we default to false here for backwards compatability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h" },
		{ "ToolTip", "This will copy all of the data (e.g. SetByCallerMagnitudes) from the GESpec that Applied this GameplayEffect to the new OnApplicationGameplayEffect Specs.\nOne would think this is normally desirable (and how OnComplete works by default), but we default to false here for backwards compatability." },
	};
#endif
	void Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_bOnApplicationCopyDataFromOriginalSpec_SetBit(void* Obj)
	{
		((UAdditionalEffectsGameplayEffectComponent*)Obj)->bOnApplicationCopyDataFromOriginalSpec = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_bOnApplicationCopyDataFromOriginalSpec = { "bOnApplicationCopyDataFromOriginalSpec", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAdditionalEffectsGameplayEffectComponent), &Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_bOnApplicationCopyDataFromOriginalSpec_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_bOnApplicationCopyDataFromOriginalSpec_MetaData), Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_bOnApplicationCopyDataFromOriginalSpec_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnApplicationGameplayEffects_Inner = { "OnApplicationGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConditionalGameplayEffect, METADATA_PARAMS(0, nullptr) }; // 3966782288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnApplicationGameplayEffects_MetaData[] = {
		{ "Category", "OnApplication" },
		{ "Comment", "/** Other gameplay effects that will be applied to the target of this effect if the owning effect applies */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h" },
		{ "ToolTip", "Other gameplay effects that will be applied to the target of this effect if the owning effect applies" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnApplicationGameplayEffects = { "OnApplicationGameplayEffects", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdditionalEffectsGameplayEffectComponent, OnApplicationGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnApplicationGameplayEffects_MetaData), Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnApplicationGameplayEffects_MetaData) }; // 3966782288
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteAlways_Inner = { "OnCompleteAlways", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteAlways_MetaData[] = {
		{ "Category", "OnComplete" },
		{ "Comment", "/** Effects to apply when this effect completes, regardless of how it ends */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h" },
		{ "ToolTip", "Effects to apply when this effect completes, regardless of how it ends" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteAlways = { "OnCompleteAlways", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdditionalEffectsGameplayEffectComponent, OnCompleteAlways), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteAlways_MetaData), Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteAlways_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteNormal_Inner = { "OnCompleteNormal", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteNormal_MetaData[] = {
		{ "Category", "OnComplete" },
		{ "Comment", "/** Effects to apply when this effect expires naturally via its duration */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h" },
		{ "ToolTip", "Effects to apply when this effect expires naturally via its duration" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteNormal = { "OnCompleteNormal", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdditionalEffectsGameplayEffectComponent, OnCompleteNormal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteNormal_MetaData), Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteNormal_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompletePrematurely_Inner = { "OnCompletePrematurely", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompletePrematurely_MetaData[] = {
		{ "Category", "OnComplete" },
		{ "Comment", "/** Effects to apply when this effect is made to expire prematurely (e.g. via a forced removal, clear tags, etc.) */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h" },
		{ "ToolTip", "Effects to apply when this effect is made to expire prematurely (e.g. via a forced removal, clear tags, etc.)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompletePrematurely = { "OnCompletePrematurely", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAdditionalEffectsGameplayEffectComponent, OnCompletePrematurely), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompletePrematurely_MetaData), Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompletePrematurely_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_bOnApplicationCopyDataFromOriginalSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnApplicationGameplayEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnApplicationGameplayEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteAlways_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteAlways,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteNormal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompleteNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompletePrematurely_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::NewProp_OnCompletePrematurely,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdditionalEffectsGameplayEffectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::ClassParams = {
		&UAdditionalEffectsGameplayEffectComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::PropPointers),
		0,
		0x003130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent()
	{
		if (!Z_Registration_Info_UClass_UAdditionalEffectsGameplayEffectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdditionalEffectsGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdditionalEffectsGameplayEffectComponent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAdditionalEffectsGameplayEffectComponent>()
	{
		return UAdditionalEffectsGameplayEffectComponent::StaticClass();
	}
	UAdditionalEffectsGameplayEffectComponent::UAdditionalEffectsGameplayEffectComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdditionalEffectsGameplayEffectComponent);
	UAdditionalEffectsGameplayEffectComponent::~UAdditionalEffectsGameplayEffectComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AdditionalEffectsGameplayEffectComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AdditionalEffectsGameplayEffectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdditionalEffectsGameplayEffectComponent, UAdditionalEffectsGameplayEffectComponent::StaticClass, TEXT("UAdditionalEffectsGameplayEffectComponent"), &Z_Registration_Info_UClass_UAdditionalEffectsGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdditionalEffectsGameplayEffectComponent), 4147094103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AdditionalEffectsGameplayEffectComponent_h_1388562781(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AdditionalEffectsGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_AdditionalEffectsGameplayEffectComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
