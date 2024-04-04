// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectComponents/CustomCanApplyGameplayEffectComponent.h"
#include "GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomCanApplyGameplayEffectComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UCustomCanApplyGameplayEffectComponent::StaticRegisterNativesUCustomCanApplyGameplayEffectComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomCanApplyGameplayEffectComponent);
	UClass* Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_NoRegister()
	{
		return UCustomCanApplyGameplayEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ApplicationRequirements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplicationRequirements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Handles configuration of a CustomApplicationRequirement function to see if this GameplayEffect should apply */" },
		{ "IncludePath", "GameplayEffectComponents/CustomCanApplyGameplayEffectComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/CustomCanApplyGameplayEffectComponent.h" },
		{ "ToolTip", "Handles configuration of a CustomApplicationRequirement function to see if this GameplayEffect should apply" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::NewProp_ApplicationRequirements_Inner = { "ApplicationRequirements", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::NewProp_ApplicationRequirements_MetaData[] = {
		{ "Category", "Application" },
		{ "Comment", "/** Custom application requirements */" },
		{ "DisplayName", "Custom Application Requirement" },
		{ "ModuleRelativePath", "Public/GameplayEffectComponents/CustomCanApplyGameplayEffectComponent.h" },
		{ "ToolTip", "Custom application requirements" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::NewProp_ApplicationRequirements = { "ApplicationRequirements", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomCanApplyGameplayEffectComponent, ApplicationRequirements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::NewProp_ApplicationRequirements_MetaData), Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::NewProp_ApplicationRequirements_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::NewProp_ApplicationRequirements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::NewProp_ApplicationRequirements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomCanApplyGameplayEffectComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::ClassParams = {
		&UCustomCanApplyGameplayEffectComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::PropPointers),
		0,
		0x003130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent()
	{
		if (!Z_Registration_Info_UClass_UCustomCanApplyGameplayEffectComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomCanApplyGameplayEffectComponent.OuterSingleton, Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomCanApplyGameplayEffectComponent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UCustomCanApplyGameplayEffectComponent>()
	{
		return UCustomCanApplyGameplayEffectComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomCanApplyGameplayEffectComponent);
	UCustomCanApplyGameplayEffectComponent::~UCustomCanApplyGameplayEffectComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CustomCanApplyGameplayEffectComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CustomCanApplyGameplayEffectComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomCanApplyGameplayEffectComponent, UCustomCanApplyGameplayEffectComponent::StaticClass, TEXT("UCustomCanApplyGameplayEffectComponent"), &Z_Registration_Info_UClass_UCustomCanApplyGameplayEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomCanApplyGameplayEffectComponent), 3119805998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CustomCanApplyGameplayEffectComponent_h_1817548418(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CustomCanApplyGameplayEffectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectComponents_CustomCanApplyGameplayEffectComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
