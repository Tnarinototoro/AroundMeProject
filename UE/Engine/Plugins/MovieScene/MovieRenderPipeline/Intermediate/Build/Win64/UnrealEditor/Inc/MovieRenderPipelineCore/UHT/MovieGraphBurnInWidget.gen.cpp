// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphBurnInWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphBurnInWidget() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBurnInWidget();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphPipeline_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	struct MovieGraphBurnInWidget_eventUpdateForGraph_Parms
	{
		UMovieGraphPipeline* InGraphPipeline;
	};
	static FName NAME_UMovieGraphBurnInWidget_UpdateForGraph = FName(TEXT("UpdateForGraph"));
	void UMovieGraphBurnInWidget::UpdateForGraph(UMovieGraphPipeline* InGraphPipeline)
	{
		MovieGraphBurnInWidget_eventUpdateForGraph_Parms Parms;
		Parms.InGraphPipeline=InGraphPipeline;
		ProcessEvent(FindFunctionChecked(NAME_UMovieGraphBurnInWidget_UpdateForGraph),&Parms);
	}
	void UMovieGraphBurnInWidget::StaticRegisterNativesUMovieGraphBurnInWidget()
	{
	}
	struct Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGraphPipeline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::NewProp_InGraphPipeline = { "InGraphPipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieGraphBurnInWidget_eventUpdateForGraph_Parms, InGraphPipeline), Z_Construct_UClass_UMovieGraphPipeline_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::NewProp_InGraphPipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09* Called on the first temporal and first spatial sample of each output frame.\n\x09* @param\x09InGraphPipeline\x09\x09The graph pipeline the burn-in is for. This will be consistent throughout a burn-in widget's life.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphBurnInWidget.h" },
		{ "ToolTip", "Called on the first temporal and first spatial sample of each output frame.\n@param        InGraphPipeline         The graph pipeline the burn-in is for. This will be consistent throughout a burn-in widget's life." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieGraphBurnInWidget, nullptr, "UpdateForGraph", nullptr, nullptr, Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::PropPointers), sizeof(MovieGraphBurnInWidget_eventUpdateForGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(MovieGraphBurnInWidget_eventUpdateForGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphBurnInWidget);
	UClass* Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister()
	{
		return UMovieGraphBurnInWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphBurnInWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphBurnInWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieGraphBurnInWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieGraphBurnInWidget_UpdateForGraph, "UpdateForGraph" }, // 2044855725
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphBurnInWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for graph-based level sequence burn-ins.\n */" },
		{ "IncludePath", "Graph/MovieGraphBurnInWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphBurnInWidget.h" },
		{ "ToolTip", "Base class for graph-based level sequence burn-ins." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphBurnInWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphBurnInWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphBurnInWidget_Statics::ClassParams = {
		&UMovieGraphBurnInWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphBurnInWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMovieGraphBurnInWidget()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphBurnInWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphBurnInWidget.OuterSingleton, Z_Construct_UClass_UMovieGraphBurnInWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphBurnInWidget.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphBurnInWidget>()
	{
		return UMovieGraphBurnInWidget::StaticClass();
	}
	UMovieGraphBurnInWidget::UMovieGraphBurnInWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphBurnInWidget);
	UMovieGraphBurnInWidget::~UMovieGraphBurnInWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphBurnInWidget, UMovieGraphBurnInWidget::StaticClass, TEXT("UMovieGraphBurnInWidget"), &Z_Registration_Info_UClass_UMovieGraphBurnInWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphBurnInWidget), 2814469618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_2065815466(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphBurnInWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
