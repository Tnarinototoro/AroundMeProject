// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Synchronization/DisplayClusterMediaOutputSynchronizationPolicyVblank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterMediaOutputSynchronizationPolicyVblank() {}
// Cross Module References
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase();
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank();
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMedia();
// End Cross Module References
	void UDisplayClusterMediaOutputSynchronizationPolicyVblank::StaticRegisterNativesUDisplayClusterMediaOutputSynchronizationPolicyVblank()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterMediaOutputSynchronizationPolicyVblank);
	UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank_NoRegister()
	{
		return UDisplayClusterMediaOutputSynchronizationPolicyVblank::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMedia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Vblank media synchronization policy config\n */" },
		{ "DisplayName", "V-blank" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Synchronization/DisplayClusterMediaOutputSynchronizationPolicyVblank.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Synchronization/DisplayClusterMediaOutputSynchronizationPolicyVblank.h" },
		{ "ToolTip", "* Vblank media synchronization policy config" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterMediaOutputSynchronizationPolicyVblank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank_Statics::ClassParams = {
		&UDisplayClusterMediaOutputSynchronizationPolicyVblank::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank.OuterSingleton, Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMEDIA_API UClass* StaticClass<UDisplayClusterMediaOutputSynchronizationPolicyVblank>()
	{
		return UDisplayClusterMediaOutputSynchronizationPolicyVblank::StaticClass();
	}
	UDisplayClusterMediaOutputSynchronizationPolicyVblank::UDisplayClusterMediaOutputSynchronizationPolicyVblank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterMediaOutputSynchronizationPolicyVblank);
	UDisplayClusterMediaOutputSynchronizationPolicyVblank::~UDisplayClusterMediaOutputSynchronizationPolicyVblank() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyVblank_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyVblank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank, UDisplayClusterMediaOutputSynchronizationPolicyVblank::StaticClass, TEXT("UDisplayClusterMediaOutputSynchronizationPolicyVblank"), &Z_Registration_Info_UClass_UDisplayClusterMediaOutputSynchronizationPolicyVblank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterMediaOutputSynchronizationPolicyVblank), 4204651255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyVblank_h_2964119593(TEXT("/Script/DisplayClusterMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyVblank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_Synchronization_DisplayClusterMediaOutputSynchronizationPolicyVblank_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
