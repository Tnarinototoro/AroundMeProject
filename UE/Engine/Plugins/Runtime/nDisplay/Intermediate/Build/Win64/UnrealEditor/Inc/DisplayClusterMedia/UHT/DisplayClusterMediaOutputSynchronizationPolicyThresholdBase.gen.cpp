// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synchronization/DisplayClusterMediaOutputSynchronizationPolicyThresholdBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterMediaOutputSynchronizationPolicyThresholdBase() {}
// Cross Module References
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase();
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase();
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMedia();
// End Cross Module References
	void UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase::StaticRegisterNativesUDisplayClusterMediaOutputSynchronizationPolicyThresholdBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase);
	UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_NoRegister()
	{
		return UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarginMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MarginMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMedia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Base class for threshold based media synchronization policies.\n * \n * Basically it uses the same approach that we use in 'Ethernet' sync policy where v-blanks are used as the timepoints.\n */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Synchronization/DisplayClusterMediaOutputSynchronizationPolicyThresholdBase.h" },
		{ "ModuleRelativePath", "Public/Synchronization/DisplayClusterMediaOutputSynchronizationPolicyThresholdBase.h" },
		{ "ToolTip", "* Base class for threshold based media synchronization policies.\n*\n* Basically it uses the same approach that we use in 'Ethernet' sync policy where v-blanks are used as the timepoints." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::NewProp_MarginMs_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "20" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Synchronization margin (ms) */" },
		{ "DisplayName", "Margin (ms)" },
		{ "ModuleRelativePath", "Public/Synchronization/DisplayClusterMediaOutputSynchronizationPolicyThresholdBase.h" },
		{ "ToolTip", "Synchronization margin (ms)" },
		{ "UIMax", "20" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::NewProp_MarginMs = { "MarginMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase, MarginMs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::NewProp_MarginMs_MetaData), Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::NewProp_MarginMs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::NewProp_MarginMs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::ClassParams = {
		&UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase.OuterSingleton, Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMEDIA_API UClass* StaticClass<UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase>()
	{
		return UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase::StaticClass();
	}
	UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase::UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase);
	UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase::~UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyThresholdBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyThresholdBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase, UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase::StaticClass, TEXT("UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase"), &Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase), 3316777477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyThresholdBase_h_1349984367(TEXT("/Script/DisplayClusterMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyThresholdBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyThresholdBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
