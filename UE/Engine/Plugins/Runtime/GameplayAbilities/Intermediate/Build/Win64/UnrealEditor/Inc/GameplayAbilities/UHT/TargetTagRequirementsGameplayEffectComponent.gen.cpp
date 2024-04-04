// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetTagRequirementsGameplayEffectComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UTargetTagRequirementsGameplayEffectComponent::StaticRegisterNativesUTargetTagRequirementsGameplayEffectComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetTagRequirementsGameplayEffectComponent);
	UClass* Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_NoRegister()
	{
		return UTargetTagRequirementsGameplayEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationTagRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationTagRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OngoingTagRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OngoingTagRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovalTagRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalTagRequirements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Specifies tag requirements that the Target (owner of the Gameplay Effect) must have if this GE should apply or continue to execute */" },
		{ "IncludePath", "GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h" },
		{ "ToolTip", "Specifies tag requirements that the Target (owner of the Gameplay Effect) must have if this GE should apply or continue to execute" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_ApplicationTagRequirements_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/** Tag requirements for this GameplayEffect to be applied to a target. This is pass/fail at the time of application. If fail, this GE fails to apply. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h" },
		{ "ToolTip", "Tag requirements for this GameplayEffect to be applied to a target. This is pass/fail at the time of application. If fail, this GE fails to apply." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_ApplicationTagRequirements = { "ApplicationTagRequirements", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetTagRequirementsGameplayEffectComponent, ApplicationTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_ApplicationTagRequirements_MetaData), Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_ApplicationTagRequirements_MetaData) }; // 3703454900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_OngoingTagRequirements_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/** Once Applied, these tags requirements are used to determined if the GameplayEffect is \"on\" or \"off\". A GameplayEffect can be off and do nothing, but still applied. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h" },
		{ "ToolTip", "Once Applied, these tags requirements are used to determined if the GameplayEffect is \"on\" or \"off\". A GameplayEffect can be off and do nothing, but still applied." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_OngoingTagRequirements = { "OngoingTagRequirements", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetTagRequirementsGameplayEffectComponent, OngoingTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_OngoingTagRequirements_MetaData), Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_OngoingTagRequirements_MetaData) }; // 3703454900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_RemovalTagRequirements_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/** Tag requirements that if met will remove this effect. Also prevents effect application. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/TargetTagRequirementsGameplayEffectComponent.h" },
		{ "ToolTip", "Tag requirements that if met will remove this effect. Also prevents effect application." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_RemovalTagRequirements = { "RemovalTagRequirements", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetTagRequirementsGameplayEffectComponent, RemovalTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_RemovalTagRequirements_MetaData), Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_RemovalTagRequirements_MetaData) }; // 3703454900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_ApplicationTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_OngoingTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::NewProp_RemovalTagRequirements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetTagRequirementsGameplayEffectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::ClassParams = {
		&UTargetTagRequirementsGameplayEffectComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::PropPointers),
		0,
		0x003130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent()
	{
		if (!Z_Registration_Info_UClass_UTargetTagRequirementsGameplayEffectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetTagRequirementsGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetTagRequirementsGameplayEffectComponent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UTargetTagRequirementsGameplayEffectComponent>()
	{
		return UTargetTagRequirementsGameplayEffectComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetTagRequirementsGameplayEffectComponent);
	UTargetTagRequirementsGameplayEffectComponent::~UTargetTagRequirementsGameplayEffectComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagRequirementsGameplayEffectComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagRequirementsGameplayEffectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetTagRequirementsGameplayEffectComponent, UTargetTagRequirementsGameplayEffectComponent::StaticClass, TEXT("UTargetTagRequirementsGameplayEffectComponent"), &Z_Registration_Info_UClass_UTargetTagRequirementsGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetTagRequirementsGameplayEffectComponent), 1017494387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagRequirementsGameplayEffectComponent_h_3704183749(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagRequirementsGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_TargetTagRequirementsGameplayEffectComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
