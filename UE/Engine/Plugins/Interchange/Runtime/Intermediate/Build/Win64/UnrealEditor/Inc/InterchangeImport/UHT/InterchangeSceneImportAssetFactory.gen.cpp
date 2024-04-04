// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scene/InterchangeSceneImportAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSceneImportAssetFactory() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeSceneImportAssetFactory::StaticRegisterNativesUInterchangeSceneImportAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSceneImportAssetFactory);
	UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactory_NoRegister()
	{
		return UInterchangeSceneImportAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Scene/InterchangeSceneImportAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeSceneImportAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSceneImportAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::ClassParams = {
		&UInterchangeSceneImportAssetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.OuterSingleton, Z_Construct_UClass_UInterchangeSceneImportAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeSceneImportAssetFactory>()
	{
		return UInterchangeSceneImportAssetFactory::StaticClass();
	}
	UInterchangeSceneImportAssetFactory::UInterchangeSceneImportAssetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSceneImportAssetFactory);
	UInterchangeSceneImportAssetFactory::~UInterchangeSceneImportAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneImportAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneImportAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSceneImportAssetFactory, UInterchangeSceneImportAssetFactory::StaticClass, TEXT("UInterchangeSceneImportAssetFactory"), &Z_Registration_Info_UClass_UInterchangeSceneImportAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSceneImportAssetFactory), 4238671966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneImportAssetFactory_h_487410668(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneImportAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneImportAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
