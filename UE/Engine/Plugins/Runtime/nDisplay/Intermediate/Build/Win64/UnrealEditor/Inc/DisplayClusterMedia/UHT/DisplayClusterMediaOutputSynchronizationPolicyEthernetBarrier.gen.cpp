// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synchronization/DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier() {}
// Cross Module References
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier();
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_NoRegister();
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMedia();
// End Cross Module References
	void UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier::StaticRegisterNativesUDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier);
	UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_NoRegister()
	{
		return UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrierBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMedia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * EthernetBarrier media synchronization policy implementation\n */" },
		{ "DisplayName", "Ethernet Barrier" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Synchronization/DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Synchronization/DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier.h" },
		{ "ToolTip", "* EthernetBarrier media synchronization policy implementation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_Statics::ClassParams = {
		&UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier.OuterSingleton, Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMEDIA_API UClass* StaticClass<UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier>()
	{
		return UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier::StaticClass();
	}
	UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier::UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier);
	UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier::~UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier, UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier::StaticClass, TEXT("UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier"), &Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier), 2047100978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_h_2437894497(TEXT("/Script/DisplayClusterMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyEthernetBarrier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
