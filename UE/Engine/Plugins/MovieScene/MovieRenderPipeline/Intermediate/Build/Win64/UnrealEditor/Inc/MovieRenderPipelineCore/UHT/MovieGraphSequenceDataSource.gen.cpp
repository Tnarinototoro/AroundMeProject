// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphSequenceDataSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphSequenceDataSource() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphDataSourceBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSequenceDataSource();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphSequenceDataSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphSequenceDataSource::StaticRegisterNativesUMovieGraphSequenceDataSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphSequenceDataSource);
	UClass* Z_Construct_UClass_UMovieGraphSequenceDataSource_NoRegister()
	{
		return UMovieGraphSequenceDataSource::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelSequenceActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphDataSourceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* The UMovieGraphSequenceDataSource allows using a ULevelSequence as the external datasource for the Movie Graph.\n* It will build the range of shots based on the contents of the level sequence (one shot per camera cut found inside\n* the sequence hierarchy, not allowing overlapping Camera Cut sections), and then it will evaluate the level sequence\n* for the given time when rendering.\n*/" },
		{ "IncludePath", "Graph/MovieGraphSequenceDataSource.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphSequenceDataSource.h" },
		{ "ToolTip", "The UMovieGraphSequenceDataSource allows using a ULevelSequence as the external datasource for the Movie Graph.\nIt will build the range of shots based on the contents of the level sequence (one shot per camera cut found inside\nthe sequence hierarchy, not allowing overlapping Camera Cut sections), and then it will evaluate the level sequence\nfor the given time when rendering." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::NewProp_LevelSequenceActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MovieGraphSequenceDataSource.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::NewProp_LevelSequenceActor = { "LevelSequenceActor", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphSequenceDataSource, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::NewProp_LevelSequenceActor_MetaData), Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::NewProp_LevelSequenceActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::NewProp_LevelSequenceActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphSequenceDataSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::ClassParams = {
		&UMovieGraphSequenceDataSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphSequenceDataSource()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.OuterSingleton, Z_Construct_UClass_UMovieGraphSequenceDataSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphSequenceDataSource>()
	{
		return UMovieGraphSequenceDataSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphSequenceDataSource);
	UMovieGraphSequenceDataSource::~UMovieGraphSequenceDataSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphSequenceDataSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphSequenceDataSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphSequenceDataSource, UMovieGraphSequenceDataSource::StaticClass, TEXT("UMovieGraphSequenceDataSource"), &Z_Registration_Info_UClass_UMovieGraphSequenceDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphSequenceDataSource), 3057038439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphSequenceDataSource_h_1921054544(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphSequenceDataSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphSequenceDataSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
