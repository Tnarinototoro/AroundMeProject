// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomBindingActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomBindingActions() {}
// Cross Module References
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_GroomBindingAsset();
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_GroomBindingAsset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_HairStrandsEditor();
// End Cross Module References
	void UAssetDefinition_GroomBindingAsset::StaticRegisterNativesUAssetDefinition_GroomBindingAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_GroomBindingAsset);
	UClass* Z_Construct_UClass_UAssetDefinition_GroomBindingAsset_NoRegister()
	{
		return UAssetDefinition_GroomBindingAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_GroomBindingAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_GroomBindingAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_GroomBindingAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_GroomBindingAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomBindingActions.h" },
		{ "ModuleRelativePath", "Public/GroomBindingActions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_GroomBindingAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_GroomBindingAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_GroomBindingAsset_Statics::ClassParams = {
		&UAssetDefinition_GroomBindingAsset::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_GroomBindingAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_GroomBindingAsset_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_GroomBindingAsset()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_GroomBindingAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_GroomBindingAsset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_GroomBindingAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_GroomBindingAsset.OuterSingleton;
	}
	template<> HAIRSTRANDSEDITOR_API UClass* StaticClass<UAssetDefinition_GroomBindingAsset>()
	{
		return UAssetDefinition_GroomBindingAsset::StaticClass();
	}
	UAssetDefinition_GroomBindingAsset::UAssetDefinition_GroomBindingAsset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_GroomBindingAsset);
	UAssetDefinition_GroomBindingAsset::~UAssetDefinition_GroomBindingAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomBindingActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomBindingActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_GroomBindingAsset, UAssetDefinition_GroomBindingAsset::StaticClass, TEXT("UAssetDefinition_GroomBindingAsset"), &Z_Registration_Info_UClass_UAssetDefinition_GroomBindingAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_GroomBindingAsset), 3999179523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomBindingActions_h_258567835(TEXT("/Script/HairStrandsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomBindingActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomBindingActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
