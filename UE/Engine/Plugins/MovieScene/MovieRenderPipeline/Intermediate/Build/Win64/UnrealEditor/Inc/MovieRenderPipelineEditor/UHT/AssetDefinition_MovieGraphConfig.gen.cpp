// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/AssetDefinition_MovieGraphConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_MovieGraphConfig() {}
// Cross Module References
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_MovieGraphConfig();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_MovieGraphConfig_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UAssetDefinition_MovieGraphConfig::StaticRegisterNativesUAssetDefinition_MovieGraphConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_MovieGraphConfig);
	UClass* Z_Construct_UClass_UAssetDefinition_MovieGraphConfig_NoRegister()
	{
		return UAssetDefinition_MovieGraphConfig::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_MovieGraphConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_MovieGraphConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_MovieGraphConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_MovieGraphConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/AssetDefinition_MovieGraphConfig.h" },
		{ "ModuleRelativePath", "Private/Graph/AssetDefinition_MovieGraphConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_MovieGraphConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_MovieGraphConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_MovieGraphConfig_Statics::ClassParams = {
		&UAssetDefinition_MovieGraphConfig::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_MovieGraphConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_MovieGraphConfig_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_MovieGraphConfig()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_MovieGraphConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_MovieGraphConfig.OuterSingleton, Z_Construct_UClass_UAssetDefinition_MovieGraphConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_MovieGraphConfig.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UAssetDefinition_MovieGraphConfig>()
	{
		return UAssetDefinition_MovieGraphConfig::StaticClass();
	}
	UAssetDefinition_MovieGraphConfig::UAssetDefinition_MovieGraphConfig() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_MovieGraphConfig);
	UAssetDefinition_MovieGraphConfig::~UAssetDefinition_MovieGraphConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_AssetDefinition_MovieGraphConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_AssetDefinition_MovieGraphConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_MovieGraphConfig, UAssetDefinition_MovieGraphConfig::StaticClass, TEXT("UAssetDefinition_MovieGraphConfig"), &Z_Registration_Info_UClass_UAssetDefinition_MovieGraphConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_MovieGraphConfig), 2807645129U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_AssetDefinition_MovieGraphConfig_h_854650776(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_AssetDefinition_MovieGraphConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_AssetDefinition_MovieGraphConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
