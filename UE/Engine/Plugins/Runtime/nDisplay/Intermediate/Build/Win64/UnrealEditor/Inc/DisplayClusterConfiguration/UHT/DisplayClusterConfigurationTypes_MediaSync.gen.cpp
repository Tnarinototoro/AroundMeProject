// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterConfigurationTypes_MediaSync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationTypes_MediaSync() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy();
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	void UDisplayClusterMediaOutputSynchronizationPolicy::StaticRegisterNativesUDisplayClusterMediaOutputSynchronizationPolicy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMediaOutputSynchronizationPolicy);
	UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_NoRegister()
	{
		return UDisplayClusterMediaOutputSynchronizationPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Base media output synchronization policy class settings\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "DisplayClusterConfigurationTypes_MediaSync.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_MediaSync.h" },
		{ "ToolTip", "* Base media output synchronization policy class settings" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMediaOutputSynchronizationPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_Statics::ClassParams = {
		&UDisplayClusterMediaOutputSynchronizationPolicy::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicy.OuterSingleton, Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicy.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UClass* StaticClass<UDisplayClusterMediaOutputSynchronizationPolicy>()
	{
		return UDisplayClusterMediaOutputSynchronizationPolicy::StaticClass();
	}
	UDisplayClusterMediaOutputSynchronizationPolicy::UDisplayClusterMediaOutputSynchronizationPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMediaOutputSynchronizationPolicy);
	UDisplayClusterMediaOutputSynchronizationPolicy::~UDisplayClusterMediaOutputSynchronizationPolicy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_MediaSync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_MediaSync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicy, UDisplayClusterMediaOutputSynchronizationPolicy::StaticClass, TEXT("UDisplayClusterMediaOutputSynchronizationPolicy"), &Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMediaOutputSynchronizationPolicy), 2735912552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_MediaSync_h_248495895(TEXT("/Script/DisplayClusterConfiguration"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_MediaSync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_MediaSync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
