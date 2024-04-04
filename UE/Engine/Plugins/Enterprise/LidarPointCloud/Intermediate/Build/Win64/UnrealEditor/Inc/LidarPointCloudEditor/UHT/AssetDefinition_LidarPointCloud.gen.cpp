// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_LidarPointCloud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_LidarPointCloud() {}
// Cross Module References
	LIDARPOINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_LidarPointCloud();
	LIDARPOINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_LidarPointCloud_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudEditor();
// End Cross Module References
	void UAssetDefinition_LidarPointCloud::StaticRegisterNativesUAssetDefinition_LidarPointCloud()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_LidarPointCloud);
	UClass* Z_Construct_UClass_UAssetDefinition_LidarPointCloud_NoRegister()
	{
		return UAssetDefinition_LidarPointCloud::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_LidarPointCloud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_LidarPointCloud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_LidarPointCloud_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_LidarPointCloud_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_LidarPointCloud.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_LidarPointCloud.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_LidarPointCloud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_LidarPointCloud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_LidarPointCloud_Statics::ClassParams = {
		&UAssetDefinition_LidarPointCloud::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_LidarPointCloud_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_LidarPointCloud_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_LidarPointCloud()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_LidarPointCloud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_LidarPointCloud.OuterSingleton, Z_Construct_UClass_UAssetDefinition_LidarPointCloud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_LidarPointCloud.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDEDITOR_API UClass* StaticClass<UAssetDefinition_LidarPointCloud>()
	{
		return UAssetDefinition_LidarPointCloud::StaticClass();
	}
	UAssetDefinition_LidarPointCloud::UAssetDefinition_LidarPointCloud() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_LidarPointCloud);
	UAssetDefinition_LidarPointCloud::~UAssetDefinition_LidarPointCloud() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_LidarPointCloud, UAssetDefinition_LidarPointCloud::StaticClass, TEXT("UAssetDefinition_LidarPointCloud"), &Z_Registration_Info_UClass_UAssetDefinition_LidarPointCloud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_LidarPointCloud), 1317879229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h_2588010471(TEXT("/Script/LidarPointCloudEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudEditor_Private_AssetDefinition_LidarPointCloud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
