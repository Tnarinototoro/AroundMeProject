// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDefinition_LensFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_LensFile() {}
// Cross Module References
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_LensFile();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_LensFile_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	void UAssetDefinition_LensFile::StaticRegisterNativesUAssetDefinition_LensFile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_LensFile);
	UClass* Z_Construct_UClass_UAssetDefinition_LensFile_NoRegister()
	{
		return UAssetDefinition_LensFile::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_LensFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_LensFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_LensFile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_LensFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_LensFile.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_LensFile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_LensFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_LensFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_LensFile_Statics::ClassParams = {
		&UAssetDefinition_LensFile::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_LensFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_LensFile_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_LensFile()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_LensFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_LensFile.OuterSingleton, Z_Construct_UClass_UAssetDefinition_LensFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_LensFile.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<UAssetDefinition_LensFile>()
	{
		return UAssetDefinition_LensFile::StaticClass();
	}
	UAssetDefinition_LensFile::UAssetDefinition_LensFile() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_LensFile);
	UAssetDefinition_LensFile::~UAssetDefinition_LensFile() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetDefinition_LensFile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetDefinition_LensFile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_LensFile, UAssetDefinition_LensFile::StaticClass, TEXT("UAssetDefinition_LensFile"), &Z_Registration_Info_UClass_UAssetDefinition_LensFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_LensFile), 3696812682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetDefinition_LensFile_h_1724388417(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetDefinition_LensFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetDefinition_LensFile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
