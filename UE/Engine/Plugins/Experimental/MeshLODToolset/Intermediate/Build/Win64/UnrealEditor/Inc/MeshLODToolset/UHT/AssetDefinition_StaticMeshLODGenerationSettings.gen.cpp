// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDefinition_StaticMeshLODGenerationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_StaticMeshLODGenerationSettings() {}
// Cross Module References
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_MeshLODToolset();
// End Cross Module References
	void UAssetDefinition_StaticMeshLODGenerationSettings::StaticRegisterNativesUAssetDefinition_StaticMeshLODGenerationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_StaticMeshLODGenerationSettings);
	UClass* Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings_NoRegister()
	{
		return UAssetDefinition_StaticMeshLODGenerationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Asset Definition for UStaticMeshLODGenerationSettings Assets\n */" },
		{ "IncludePath", "AssetDefinition_StaticMeshLODGenerationSettings.h" },
		{ "ModuleRelativePath", "Public/AssetDefinition_StaticMeshLODGenerationSettings.h" },
		{ "ToolTip", "Asset Definition for UStaticMeshLODGenerationSettings Assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_StaticMeshLODGenerationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings_Statics::ClassParams = {
		&UAssetDefinition_StaticMeshLODGenerationSettings::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_StaticMeshLODGenerationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_StaticMeshLODGenerationSettings.OuterSingleton, Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_StaticMeshLODGenerationSettings.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<UAssetDefinition_StaticMeshLODGenerationSettings>()
	{
		return UAssetDefinition_StaticMeshLODGenerationSettings::StaticClass();
	}
	UAssetDefinition_StaticMeshLODGenerationSettings::UAssetDefinition_StaticMeshLODGenerationSettings() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_StaticMeshLODGenerationSettings);
	UAssetDefinition_StaticMeshLODGenerationSettings::~UAssetDefinition_StaticMeshLODGenerationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_AssetDefinition_StaticMeshLODGenerationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_AssetDefinition_StaticMeshLODGenerationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_StaticMeshLODGenerationSettings, UAssetDefinition_StaticMeshLODGenerationSettings::StaticClass, TEXT("UAssetDefinition_StaticMeshLODGenerationSettings"), &Z_Registration_Info_UClass_UAssetDefinition_StaticMeshLODGenerationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_StaticMeshLODGenerationSettings), 1975355265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_AssetDefinition_StaticMeshLODGenerationSettings_h_644411656(TEXT("/Script/MeshLODToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_AssetDefinition_StaticMeshLODGenerationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_AssetDefinition_StaticMeshLODGenerationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
