// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_DatasmithScene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_DatasmithScene() {}
// Cross Module References
	DATASMITHCONTENTEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_DatasmithScene();
	DATASMITHCONTENTEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_DatasmithScene_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_DatasmithContentEditor();
// End Cross Module References
	void UAssetDefinition_DatasmithScene::StaticRegisterNativesUAssetDefinition_DatasmithScene()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_DatasmithScene);
	UClass* Z_Construct_UClass_UAssetDefinition_DatasmithScene_NoRegister()
	{
		return UAssetDefinition_DatasmithScene::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_DatasmithScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_DatasmithScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContentEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_DatasmithScene_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_DatasmithScene_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_DatasmithScene.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_DatasmithScene.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_DatasmithScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_DatasmithScene>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_DatasmithScene_Statics::ClassParams = {
		&UAssetDefinition_DatasmithScene::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_DatasmithScene_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_DatasmithScene_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_DatasmithScene()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_DatasmithScene.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_DatasmithScene.OuterSingleton, Z_Construct_UClass_UAssetDefinition_DatasmithScene_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_DatasmithScene.OuterSingleton;
	}
	template<> DATASMITHCONTENTEDITOR_API UClass* StaticClass<UAssetDefinition_DatasmithScene>()
	{
		return UAssetDefinition_DatasmithScene::StaticClass();
	}
	UAssetDefinition_DatasmithScene::UAssetDefinition_DatasmithScene() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_DatasmithScene);
	UAssetDefinition_DatasmithScene::~UAssetDefinition_DatasmithScene() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContentEditor_Private_AssetDefinition_DatasmithScene_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContentEditor_Private_AssetDefinition_DatasmithScene_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_DatasmithScene, UAssetDefinition_DatasmithScene::StaticClass, TEXT("UAssetDefinition_DatasmithScene"), &Z_Registration_Info_UClass_UAssetDefinition_DatasmithScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_DatasmithScene), 3076864732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContentEditor_Private_AssetDefinition_DatasmithScene_h_3807133403(TEXT("/Script/DatasmithContentEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContentEditor_Private_AssetDefinition_DatasmithScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContentEditor_Private_AssetDefinition_DatasmithScene_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
