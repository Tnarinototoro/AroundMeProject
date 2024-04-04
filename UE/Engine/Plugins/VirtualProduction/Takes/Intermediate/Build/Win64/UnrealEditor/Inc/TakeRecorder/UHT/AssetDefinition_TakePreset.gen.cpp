// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_TakePreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_TakePreset() {}
// Cross Module References
	TAKERECORDER_API UClass* Z_Construct_UClass_UAssetDefinition_TakePreset();
	TAKERECORDER_API UClass* Z_Construct_UClass_UAssetDefinition_TakePreset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_TakeRecorder();
// End Cross Module References
	void UAssetDefinition_TakePreset::StaticRegisterNativesUAssetDefinition_TakePreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_TakePreset);
	UClass* Z_Construct_UClass_UAssetDefinition_TakePreset_NoRegister()
	{
		return UAssetDefinition_TakePreset::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_TakePreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_TakePreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorder,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_TakePreset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_TakePreset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_TakePreset.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_TakePreset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_TakePreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_TakePreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_TakePreset_Statics::ClassParams = {
		&UAssetDefinition_TakePreset::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_TakePreset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_TakePreset_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_TakePreset()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_TakePreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_TakePreset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_TakePreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_TakePreset.OuterSingleton;
	}
	template<> TAKERECORDER_API UClass* StaticClass<UAssetDefinition_TakePreset>()
	{
		return UAssetDefinition_TakePreset::StaticClass();
	}
	UAssetDefinition_TakePreset::UAssetDefinition_TakePreset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_TakePreset);
	UAssetDefinition_TakePreset::~UAssetDefinition_TakePreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_AssetDefinition_TakePreset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_AssetDefinition_TakePreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_TakePreset, UAssetDefinition_TakePreset::StaticClass, TEXT("UAssetDefinition_TakePreset"), &Z_Registration_Info_UClass_UAssetDefinition_TakePreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_TakePreset), 1722850774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_AssetDefinition_TakePreset_h_2384516291(TEXT("/Script/TakeRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_AssetDefinition_TakePreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Private_AssetDefinition_TakePreset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
