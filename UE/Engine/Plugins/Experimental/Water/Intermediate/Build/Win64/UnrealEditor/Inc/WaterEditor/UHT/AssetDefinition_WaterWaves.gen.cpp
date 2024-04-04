// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_WaterWaves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_WaterWaves() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_WaterWaves();
	WATEREDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_WaterWaves_NoRegister();
// End Cross Module References
	void UAssetDefinition_WaterWaves::StaticRegisterNativesUAssetDefinition_WaterWaves()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_WaterWaves);
	UClass* Z_Construct_UClass_UAssetDefinition_WaterWaves_NoRegister()
	{
		return UAssetDefinition_WaterWaves::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_WaterWaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_WaterWaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_WaterWaves_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_WaterWaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_WaterWaves.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_WaterWaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_WaterWaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_WaterWaves>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_WaterWaves_Statics::ClassParams = {
		&UAssetDefinition_WaterWaves::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_WaterWaves_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_WaterWaves_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_WaterWaves()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_WaterWaves.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_WaterWaves.OuterSingleton, Z_Construct_UClass_UAssetDefinition_WaterWaves_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_WaterWaves.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UAssetDefinition_WaterWaves>()
	{
		return UAssetDefinition_WaterWaves::StaticClass();
	}
	UAssetDefinition_WaterWaves::UAssetDefinition_WaterWaves() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_WaterWaves);
	UAssetDefinition_WaterWaves::~UAssetDefinition_WaterWaves() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_AssetDefinition_WaterWaves_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_AssetDefinition_WaterWaves_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_WaterWaves, UAssetDefinition_WaterWaves::StaticClass, TEXT("UAssetDefinition_WaterWaves"), &Z_Registration_Info_UClass_UAssetDefinition_WaterWaves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_WaterWaves), 989414270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_AssetDefinition_WaterWaves_h_3088473425(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_AssetDefinition_WaterWaves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_AssetDefinition_WaterWaves_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
