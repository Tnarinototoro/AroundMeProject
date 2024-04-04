// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomActions() {}
// Cross Module References
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_GroomAsset();
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_GroomAsset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_HairStrandsEditor();
// End Cross Module References
	void UAssetDefinition_GroomAsset::StaticRegisterNativesUAssetDefinition_GroomAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_GroomAsset);
	UClass* Z_Construct_UClass_UAssetDefinition_GroomAsset_NoRegister()
	{
		return UAssetDefinition_GroomAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_GroomAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_GroomAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_GroomAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_GroomAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomActions.h" },
		{ "ModuleRelativePath", "Public/GroomActions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_GroomAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_GroomAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_GroomAsset_Statics::ClassParams = {
		&UAssetDefinition_GroomAsset::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_GroomAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_GroomAsset_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_GroomAsset()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_GroomAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_GroomAsset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_GroomAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_GroomAsset.OuterSingleton;
	}
	template<> HAIRSTRANDSEDITOR_API UClass* StaticClass<UAssetDefinition_GroomAsset>()
	{
		return UAssetDefinition_GroomAsset::StaticClass();
	}
	UAssetDefinition_GroomAsset::UAssetDefinition_GroomAsset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_GroomAsset);
	UAssetDefinition_GroomAsset::~UAssetDefinition_GroomAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_GroomAsset, UAssetDefinition_GroomAsset::StaticClass, TEXT("UAssetDefinition_GroomAsset"), &Z_Registration_Info_UClass_UAssetDefinition_GroomAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_GroomAsset), 2656526677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActions_h_933942133(TEXT("/Script/HairStrandsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
