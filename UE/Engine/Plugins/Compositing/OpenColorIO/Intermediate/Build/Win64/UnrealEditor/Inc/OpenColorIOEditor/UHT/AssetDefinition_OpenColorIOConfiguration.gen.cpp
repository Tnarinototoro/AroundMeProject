// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_OpenColorIOConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_OpenColorIOConfiguration() {}
// Cross Module References
	OPENCOLORIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration();
	OPENCOLORIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_OpenColorIOEditor();
// End Cross Module References
	void UAssetDefinition_OpenColorIOConfiguration::StaticRegisterNativesUAssetDefinition_OpenColorIOConfiguration()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_OpenColorIOConfiguration);
	UClass* Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration_NoRegister()
	{
		return UAssetDefinition_OpenColorIOConfiguration::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIOEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_OpenColorIOConfiguration.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_OpenColorIOConfiguration.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_OpenColorIOConfiguration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration_Statics::ClassParams = {
		&UAssetDefinition_OpenColorIOConfiguration::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_OpenColorIOConfiguration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_OpenColorIOConfiguration.OuterSingleton, Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_OpenColorIOConfiguration.OuterSingleton;
	}
	template<> OPENCOLORIOEDITOR_API UClass* StaticClass<UAssetDefinition_OpenColorIOConfiguration>()
	{
		return UAssetDefinition_OpenColorIOConfiguration::StaticClass();
	}
	UAssetDefinition_OpenColorIOConfiguration::UAssetDefinition_OpenColorIOConfiguration() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_OpenColorIOConfiguration);
	UAssetDefinition_OpenColorIOConfiguration::~UAssetDefinition_OpenColorIOConfiguration() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_AssetDefinition_OpenColorIOConfiguration_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_AssetDefinition_OpenColorIOConfiguration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_OpenColorIOConfiguration, UAssetDefinition_OpenColorIOConfiguration::StaticClass, TEXT("UAssetDefinition_OpenColorIOConfiguration"), &Z_Registration_Info_UClass_UAssetDefinition_OpenColorIOConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_OpenColorIOConfiguration), 1273752776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_AssetDefinition_OpenColorIOConfiguration_h_3003604356(TEXT("/Script/OpenColorIOEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_AssetDefinition_OpenColorIOConfiguration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_AssetDefinition_OpenColorIOConfiguration_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
