// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/MovieEdGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieEdGraphNode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphNode_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphNode();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphNode_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeBase();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMoviePipelineEdGraphNodeBase::StaticRegisterNativesUMoviePipelineEdGraphNodeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineEdGraphNodeBase);
	UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_NoRegister()
	{
		return UMoviePipelineEdGraphNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/MovieEdGraphNode.h" },
		{ "ModuleRelativePath", "Private/Graph/MovieEdGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::NewProp_RuntimeNode_MetaData[] = {
		{ "Comment", "/** The runtime node that this editor node represents. */" },
		{ "ModuleRelativePath", "Private/Graph/MovieEdGraphNode.h" },
		{ "ToolTip", "The runtime node that this editor node represents." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::NewProp_RuntimeNode = { "RuntimeNode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoviePipelineEdGraphNodeBase, RuntimeNode), Z_Construct_UClass_UMovieGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::NewProp_RuntimeNode_MetaData), Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::NewProp_RuntimeNode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::NewProp_RuntimeNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineEdGraphNodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::ClassParams = {
		&UMoviePipelineEdGraphNodeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoviePipelineEdGraphNodeBase()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineEdGraphNodeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineEdGraphNodeBase.OuterSingleton, Z_Construct_UClass_UMoviePipelineEdGraphNodeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineEdGraphNodeBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelineEdGraphNodeBase>()
	{
		return UMoviePipelineEdGraphNodeBase::StaticClass();
	}
	UMoviePipelineEdGraphNodeBase::UMoviePipelineEdGraphNodeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineEdGraphNodeBase);
	UMoviePipelineEdGraphNodeBase::~UMoviePipelineEdGraphNodeBase() {}
	void UMoviePipelineEdGraphNode::StaticRegisterNativesUMoviePipelineEdGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineEdGraphNode);
	UClass* Z_Construct_UClass_UMoviePipelineEdGraphNode_NoRegister()
	{
		return UMoviePipelineEdGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineEdGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineEdGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineEdGraphNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraphNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineEdGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/MovieEdGraphNode.h" },
		{ "ModuleRelativePath", "Private/Graph/MovieEdGraphNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineEdGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineEdGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineEdGraphNode_Statics::ClassParams = {
		&UMoviePipelineEdGraphNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineEdGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineEdGraphNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMoviePipelineEdGraphNode()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineEdGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineEdGraphNode.OuterSingleton, Z_Construct_UClass_UMoviePipelineEdGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineEdGraphNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelineEdGraphNode>()
	{
		return UMoviePipelineEdGraphNode::StaticClass();
	}
	UMoviePipelineEdGraphNode::UMoviePipelineEdGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineEdGraphNode);
	UMoviePipelineEdGraphNode::~UMoviePipelineEdGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineEdGraphNodeBase, UMoviePipelineEdGraphNodeBase::StaticClass, TEXT("UMoviePipelineEdGraphNodeBase"), &Z_Registration_Info_UClass_UMoviePipelineEdGraphNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineEdGraphNodeBase), 213663351U) },
		{ Z_Construct_UClass_UMoviePipelineEdGraphNode, UMoviePipelineEdGraphNode::StaticClass, TEXT("UMoviePipelineEdGraphNode"), &Z_Registration_Info_UClass_UMoviePipelineEdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineEdGraphNode), 3866944191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphNode_h_4201643021(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_Graph_MovieEdGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
