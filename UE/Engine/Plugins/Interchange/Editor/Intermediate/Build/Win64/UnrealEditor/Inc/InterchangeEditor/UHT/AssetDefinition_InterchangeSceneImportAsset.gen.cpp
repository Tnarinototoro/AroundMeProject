// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_InterchangeSceneImportAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_InterchangeSceneImportAsset() {}
// Cross Module References
	INTERCHANGEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset();
	INTERCHANGEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_InterchangeEditor();
// End Cross Module References
	void UAssetDefinition_InterchangeSceneImportAsset::StaticRegisterNativesUAssetDefinition_InterchangeSceneImportAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_InterchangeSceneImportAsset);
	UClass* Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset_NoRegister()
	{
		return UAssetDefinition_InterchangeSceneImportAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_InterchangeSceneImportAsset.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_InterchangeSceneImportAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_InterchangeSceneImportAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset_Statics::ClassParams = {
		&UAssetDefinition_InterchangeSceneImportAsset::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_InterchangeSceneImportAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_InterchangeSceneImportAsset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_InterchangeSceneImportAsset.OuterSingleton;
	}
	template<> INTERCHANGEEDITOR_API UClass* StaticClass<UAssetDefinition_InterchangeSceneImportAsset>()
	{
		return UAssetDefinition_InterchangeSceneImportAsset::StaticClass();
	}
	UAssetDefinition_InterchangeSceneImportAsset::UAssetDefinition_InterchangeSceneImportAsset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_InterchangeSceneImportAsset);
	UAssetDefinition_InterchangeSceneImportAsset::~UAssetDefinition_InterchangeSceneImportAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Private_AssetDefinition_InterchangeSceneImportAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Private_AssetDefinition_InterchangeSceneImportAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_InterchangeSceneImportAsset, UAssetDefinition_InterchangeSceneImportAsset::StaticClass, TEXT("UAssetDefinition_InterchangeSceneImportAsset"), &Z_Registration_Info_UClass_UAssetDefinition_InterchangeSceneImportAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_InterchangeSceneImportAsset), 514162115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Private_AssetDefinition_InterchangeSceneImportAsset_h_3062892008(TEXT("/Script/InterchangeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Private_AssetDefinition_InterchangeSceneImportAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_InterchangeEditor_Private_AssetDefinition_InterchangeSceneImportAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
