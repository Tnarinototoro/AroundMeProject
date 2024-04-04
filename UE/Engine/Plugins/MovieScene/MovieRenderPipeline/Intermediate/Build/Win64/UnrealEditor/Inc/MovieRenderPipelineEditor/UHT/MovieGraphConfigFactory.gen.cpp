// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphConfigFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphConfigFactory() {}
// Cross Module References
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieGraphConfigFactory();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieGraphConfigFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMovieGraphConfigFactory::StaticRegisterNativesUMovieGraphConfigFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphConfigFactory);
	UClass* Z_Construct_UClass_UMovieGraphConfigFactory_NoRegister()
	{
		return UMovieGraphConfigFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphConfigFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphConfigFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfigFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphConfigFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Graph/MovieGraphConfigFactory.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphConfigFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphConfigFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphConfigFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphConfigFactory_Statics::ClassParams = {
		&UMovieGraphConfigFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphConfigFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphConfigFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphConfigFactory()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphConfigFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphConfigFactory.OuterSingleton, Z_Construct_UClass_UMovieGraphConfigFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphConfigFactory.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMovieGraphConfigFactory>()
	{
		return UMovieGraphConfigFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphConfigFactory);
	UMovieGraphConfigFactory::~UMovieGraphConfigFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphConfigFactory, UMovieGraphConfigFactory::StaticClass, TEXT("UMovieGraphConfigFactory"), &Z_Registration_Info_UClass_UMovieGraphConfigFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphConfigFactory), 6308113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h_2219623993(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_Graph_MovieGraphConfigFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
