// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synchronization/DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy();
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase();
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMedia();
// End Cross Module References
	void UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase::StaticRegisterNativesUDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase);
	UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_NoRegister()
	{
		return UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarrierTimeoutMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BarrierTimeoutMs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMedia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Base class for Ethernet barrier based media synchronization policies.\n * \n * It encapsulates network barriers related settings.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Synchronization/DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase.h" },
		{ "ModuleRelativePath", "Public/Synchronization/DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase.h" },
		{ "ToolTip", "* Base class for Ethernet barrier based media synchronization policies.\n*\n* It encapsulates network barriers related settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::NewProp_BarrierTimeoutMs_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Barrier timeout (ms) */" },
		{ "DisplayName", "Barrier Timeout (ms)" },
		{ "ModuleRelativePath", "Public/Synchronization/DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase.h" },
		{ "ToolTip", "Barrier timeout (ms)" },
		{ "UIMax", "10000" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::NewProp_BarrierTimeoutMs = { "BarrierTimeoutMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase, BarrierTimeoutMs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::NewProp_BarrierTimeoutMs_MetaData), Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::NewProp_BarrierTimeoutMs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::NewProp_BarrierTimeoutMs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::ClassParams = {
		&UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase.OuterSingleton, Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMEDIA_API UClass* StaticClass<UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase>()
	{
		return UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase::StaticClass();
	}
	UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase::UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase);
	UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase::~UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase, UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase::StaticClass, TEXT("UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase"), &Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase), 2616952185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_h_1186765510(TEXT("/Script/DisplayClusterMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
