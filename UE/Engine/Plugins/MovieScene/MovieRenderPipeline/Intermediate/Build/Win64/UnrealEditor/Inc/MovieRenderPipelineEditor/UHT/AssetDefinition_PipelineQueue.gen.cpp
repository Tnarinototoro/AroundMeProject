// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_PipelineQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_PipelineQueue() {}
// Cross Module References
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_PipelineQueue();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_PipelineQueue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UAssetDefinition_PipelineQueue::StaticRegisterNativesUAssetDefinition_PipelineQueue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_PipelineQueue);
	UClass* Z_Construct_UClass_UAssetDefinition_PipelineQueue_NoRegister()
	{
		return UAssetDefinition_PipelineQueue::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_PipelineQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_PipelineQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_PipelineQueue_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_PipelineQueue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_PipelineQueue.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_PipelineQueue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_PipelineQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_PipelineQueue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_PipelineQueue_Statics::ClassParams = {
		&UAssetDefinition_PipelineQueue::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_PipelineQueue_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetDefinition_PipelineQueue_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetDefinition_PipelineQueue()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_PipelineQueue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_PipelineQueue.OuterSingleton, Z_Construct_UClass_UAssetDefinition_PipelineQueue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_PipelineQueue.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UAssetDefinition_PipelineQueue>()
	{
		return UAssetDefinition_PipelineQueue::StaticClass();
	}
	UAssetDefinition_PipelineQueue::UAssetDefinition_PipelineQueue() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_PipelineQueue);
	UAssetDefinition_PipelineQueue::~UAssetDefinition_PipelineQueue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_AssetDefinition_PipelineQueue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_AssetDefinition_PipelineQueue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_PipelineQueue, UAssetDefinition_PipelineQueue::StaticClass, TEXT("UAssetDefinition_PipelineQueue"), &Z_Registration_Info_UClass_UAssetDefinition_PipelineQueue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_PipelineQueue), 3948682180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_AssetDefinition_PipelineQueue_h_2545882503(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_AssetDefinition_PipelineQueue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_AssetDefinition_PipelineQueue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
