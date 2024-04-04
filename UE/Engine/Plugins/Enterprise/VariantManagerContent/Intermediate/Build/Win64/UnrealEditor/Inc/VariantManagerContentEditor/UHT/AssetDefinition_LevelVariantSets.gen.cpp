// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_LevelVariantSets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_LevelVariantSets() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContentEditor();
	VARIANTMANAGERCONTENTEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_LevelVariantSets();
	VARIANTMANAGERCONTENTEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_LevelVariantSets_NoRegister();
// End Cross Module References
	void UAssetDefinition_LevelVariantSets::StaticRegisterNativesUAssetDefinition_LevelVariantSets()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_LevelVariantSets);
	UClass* Z_Construct_UClass_UAssetDefinition_LevelVariantSets_NoRegister()
	{
		return UAssetDefinition_LevelVariantSets::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_LevelVariantSets_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_LevelVariantSets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContentEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_LevelVariantSets_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_LevelVariantSets_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_LevelVariantSets.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_LevelVariantSets.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_LevelVariantSets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_LevelVariantSets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_LevelVariantSets_Statics::ClassParams = {
		&UAssetDefinition_LevelVariantSets::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_LevelVariantSets_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_LevelVariantSets_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_LevelVariantSets()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_LevelVariantSets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_LevelVariantSets.OuterSingleton, Z_Construct_UClass_UAssetDefinition_LevelVariantSets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_LevelVariantSets.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENTEDITOR_API UClass* StaticClass<UAssetDefinition_LevelVariantSets>()
	{
		return UAssetDefinition_LevelVariantSets::StaticClass();
	}
	UAssetDefinition_LevelVariantSets::UAssetDefinition_LevelVariantSets() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_LevelVariantSets);
	UAssetDefinition_LevelVariantSets::~UAssetDefinition_LevelVariantSets() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Private_AssetDefinition_LevelVariantSets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Private_AssetDefinition_LevelVariantSets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_LevelVariantSets, UAssetDefinition_LevelVariantSets::StaticClass, TEXT("UAssetDefinition_LevelVariantSets"), &Z_Registration_Info_UClass_UAssetDefinition_LevelVariantSets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_LevelVariantSets), 3900241526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Private_AssetDefinition_LevelVariantSets_h_27116640(TEXT("/Script/VariantManagerContentEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Private_AssetDefinition_LevelVariantSets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Private_AssetDefinition_LevelVariantSets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
