// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphLinearTimeStep.h"
#include "Graph/MovieGraphTimeStepData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphLinearTimeStep() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEngineTimeStep();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphEngineTimeStep_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphLinearTimeStep();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphLinearTimeStep_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphTimeStepBase();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieGraphTimeStepData();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphLinearTimeStep::StaticRegisterNativesUMovieGraphLinearTimeStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphLinearTimeStep);
	UClass* Z_Construct_UClass_UMovieGraphLinearTimeStep_NoRegister()
	{
		return UMovieGraphLinearTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTimeStepData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTimeStepData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevCustomTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrevCustomTimeStep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphTimeStepBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This class is responsible for calculating the time step of each tick of the engine during a\n* Movie Render Queue render using a linear strategy - the number of temporal sub-samples is\n* read from the graph for each output frame, and we then take the time the shutter is open\n* and break it into that many sub-samples. Time always advances forward until we reach the\n* end of the range of time we wish to render. This is useful for deferred rendering (where \n* we have a small number of temporal sub-samples and no feedback mechanism for measuring\n* noise in the final image) but is less useful for Path Traced images which have a varying\n* amount of noise (and thus want a varying amount of samples) based on their content.\n*/" },
		{ "IncludePath", "Graph/MovieGraphLinearTimeStep.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphLinearTimeStep.h" },
		{ "ToolTip", "This class is responsible for calculating the time step of each tick of the engine during a\nMovie Render Queue render using a linear strategy - the number of temporal sub-samples is\nread from the graph for each output frame, and we then take the time the shutter is open\nand break it into that many sub-samples. Time always advances forward until we reach the\nend of the range of time we wish to render. This is useful for deferred rendering (where\nwe have a small number of temporal sub-samples and no feedback mechanism for measuring\nnoise in the final image) but is less useful for Path Traced images which have a varying\namount of noise (and thus want a varying amount of samples) based on their content." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_CurrentTimeStepData_MetaData[] = {
		{ "Comment", "/** This is the output data needed by the rest of MRQ to produce a frame. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphLinearTimeStep.h" },
		{ "ToolTip", "This is the output data needed by the rest of MRQ to produce a frame." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_CurrentTimeStepData = { "CurrentTimeStepData", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphLinearTimeStep, CurrentTimeStepData), Z_Construct_UScriptStruct_FMovieGraphTimeStepData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_CurrentTimeStepData_MetaData), Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_CurrentTimeStepData_MetaData) }; // 705348522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_CustomTimeStep_MetaData[] = {
		{ "Comment", "/**\n\x09* A custom timestep owned by this object that is used to inform the engine what the delta time for each\n\x09* frame should be. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphLinearTimeStep.h" },
		{ "ToolTip", "A custom timestep owned by this object that is used to inform the engine what the delta time for each\nframe should be." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_CustomTimeStep = { "CustomTimeStep", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphLinearTimeStep, CustomTimeStep), Z_Construct_UClass_UMovieGraphEngineTimeStep_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_CustomTimeStep_MetaData), Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_CustomTimeStep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_PrevCustomTimeStep_MetaData[] = {
		{ "Comment", "/** The previous custom timestep the engine was using, if any. */" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphLinearTimeStep.h" },
		{ "ToolTip", "The previous custom timestep the engine was using, if any." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_PrevCustomTimeStep = { "PrevCustomTimeStep", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphLinearTimeStep, PrevCustomTimeStep), Z_Construct_UClass_UEngineCustomTimeStep_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_PrevCustomTimeStep_MetaData), Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_PrevCustomTimeStep_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_CurrentTimeStepData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_CustomTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::NewProp_PrevCustomTimeStep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphLinearTimeStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::ClassParams = {
		&UMovieGraphLinearTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphLinearTimeStep()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.OuterSingleton, Z_Construct_UClass_UMovieGraphLinearTimeStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphLinearTimeStep.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphLinearTimeStep>()
	{
		return UMovieGraphLinearTimeStep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphLinearTimeStep);
	UMovieGraphLinearTimeStep::~UMovieGraphLinearTimeStep() {}
	void UMovieGraphEngineTimeStep::StaticRegisterNativesUMovieGraphEngineTimeStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphEngineTimeStep);
	UClass* Z_Construct_UClass_UMovieGraphEngineTimeStep_NoRegister()
	{
		return UMovieGraphEngineTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/MovieGraphLinearTimeStep.h" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphLinearTimeStep.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphEngineTimeStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics::ClassParams = {
		&UMovieGraphEngineTimeStep::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphEngineTimeStep()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.OuterSingleton, Z_Construct_UClass_UMovieGraphEngineTimeStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphEngineTimeStep.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphEngineTimeStep>()
	{
		return UMovieGraphEngineTimeStep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphEngineTimeStep);
	UMovieGraphEngineTimeStep::~UMovieGraphEngineTimeStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphLinearTimeStep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphLinearTimeStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphLinearTimeStep, UMovieGraphLinearTimeStep::StaticClass, TEXT("UMovieGraphLinearTimeStep"), &Z_Registration_Info_UClass_UMovieGraphLinearTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphLinearTimeStep), 3438490229U) },
		{ Z_Construct_UClass_UMovieGraphEngineTimeStep, UMovieGraphEngineTimeStep::StaticClass, TEXT("UMovieGraphEngineTimeStep"), &Z_Registration_Info_UClass_UMovieGraphEngineTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphEngineTimeStep), 871210395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphLinearTimeStep_h_1974771280(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphLinearTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphLinearTimeStep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
