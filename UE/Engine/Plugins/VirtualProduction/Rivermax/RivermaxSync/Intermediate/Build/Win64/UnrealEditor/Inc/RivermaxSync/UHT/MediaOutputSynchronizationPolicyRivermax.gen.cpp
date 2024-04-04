// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaOutputSynchronizationPolicyRivermax.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaOutputSynchronizationPolicyRivermax() {}
// Cross Module References
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase();
	RIVERMAXSYNC_API UClass* Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax();
	RIVERMAXSYNC_API UClass* Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivermaxSync();
// End Cross Module References
	void UMediaOutputSynchronizationPolicyRivermax::StaticRegisterNativesUMediaOutputSynchronizationPolicyRivermax()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaOutputSynchronizationPolicyRivermax);
	UClass* Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax_NoRegister()
	{
		return UMediaOutputSynchronizationPolicyRivermax::StaticClass();
	}
	struct Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterMediaOutputSynchronizationPolicyThresholdBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RivermaxSync,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Rivermax media synchronization policy implementation\n */" },
		{ "DisplayName", "Rivermax (PTP)" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "MediaOutputSynchronizationPolicyRivermax.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MediaOutputSynchronizationPolicyRivermax.h" },
		{ "ToolTip", "* Rivermax media synchronization policy implementation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaOutputSynchronizationPolicyRivermax>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax_Statics::ClassParams = {
		&UMediaOutputSynchronizationPolicyRivermax::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax()
	{
		if (!Z_Registration_Info_UClass_UMediaOutputSynchronizationPolicyRivermax.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaOutputSynchronizationPolicyRivermax.OuterSingleton, Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaOutputSynchronizationPolicyRivermax.OuterSingleton;
	}
	template<> RIVERMAXSYNC_API UClass* StaticClass<UMediaOutputSynchronizationPolicyRivermax>()
	{
		return UMediaOutputSynchronizationPolicyRivermax::StaticClass();
	}
	UMediaOutputSynchronizationPolicyRivermax::UMediaOutputSynchronizationPolicyRivermax(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaOutputSynchronizationPolicyRivermax);
	UMediaOutputSynchronizationPolicyRivermax::~UMediaOutputSynchronizationPolicyRivermax() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxSync_Source_RivermaxSync_Public_MediaOutputSynchronizationPolicyRivermax_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxSync_Source_RivermaxSync_Public_MediaOutputSynchronizationPolicyRivermax_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaOutputSynchronizationPolicyRivermax, UMediaOutputSynchronizationPolicyRivermax::StaticClass, TEXT("UMediaOutputSynchronizationPolicyRivermax"), &Z_Registration_Info_UClass_UMediaOutputSynchronizationPolicyRivermax, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaOutputSynchronizationPolicyRivermax), 4136046015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxSync_Source_RivermaxSync_Public_MediaOutputSynchronizationPolicyRivermax_h_3740235870(TEXT("/Script/RivermaxSync"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxSync_Source_RivermaxSync_Public_MediaOutputSynchronizationPolicyRivermax_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxSync_Source_RivermaxSync_Public_MediaOutputSynchronizationPolicyRivermax_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
