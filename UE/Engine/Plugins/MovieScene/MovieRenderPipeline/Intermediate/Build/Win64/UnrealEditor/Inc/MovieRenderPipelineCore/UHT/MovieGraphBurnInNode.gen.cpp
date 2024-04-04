// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Nodes/MovieGraphBurnInNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphBurnInNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBurnInNode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBurnInNode_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieGraphRenderPassNode();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMovieGraphBurnInNode::StaticRegisterNativesUMovieGraphBurnInNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieGraphBurnInNode);
	UClass* Z_Construct_UClass_UMovieGraphBurnInNode_NoRegister()
	{
		return UMovieGraphBurnInNode::StaticClass();
	}
	struct Z_Construct_UClass_UMovieGraphBurnInNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BurnInClass_MetaData[];
#endif
		static void NewProp_bOverride_BurnInClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BurnInClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_bCompositeOntoFinalImage_MetaData[];
#endif
		static void NewProp_bOverride_bCompositeOntoFinalImage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_bCompositeOntoFinalImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnInClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BurnInClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompositeOntoFinalImage_MetaData[];
#endif
		static void NewProp_bCompositeOntoFinalImage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompositeOntoFinalImage;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BurnInWidgetInstances_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_BurnInWidgetInstances_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnInWidgetInstances_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BurnInWidgetInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieGraphBurnInNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieGraphRenderPassNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphBurnInNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A node which generates a widget burn-in, rendered to a standalone image or composited on top of a render layer. */" },
		{ "IncludePath", "Graph/Nodes/MovieGraphBurnInNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphBurnInNode.h" },
		{ "ToolTip", "A node which generates a widget burn-in, rendered to a standalone image or composited on top of a render layer." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_BurnInClass_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphBurnInNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_BurnInClass_SetBit(void* Obj)
	{
		((UMovieGraphBurnInNode*)Obj)->bOverride_BurnInClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_BurnInClass = { "bOverride_BurnInClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphBurnInNode), &Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_BurnInClass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_BurnInClass_MetaData), Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_BurnInClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_bCompositeOntoFinalImage_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphBurnInNode.h" },
	};
#endif
	void Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_bCompositeOntoFinalImage_SetBit(void* Obj)
	{
		((UMovieGraphBurnInNode*)Obj)->bOverride_bCompositeOntoFinalImage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_bCompositeOntoFinalImage = { "bOverride_bCompositeOntoFinalImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieGraphBurnInNode), &Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_bCompositeOntoFinalImage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_bCompositeOntoFinalImage_MetaData), Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_bCompositeOntoFinalImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInClass_MetaData[] = {
		{ "Category", "Widget Settings" },
		{ "Comment", "/** The widget that the burn-in should use. */" },
		{ "EditCondition", "bOverride_BurnInClass" },
		{ "MetaClass", "/Script/MovieRenderPipelineCore.MovieGraphBurnInWidget" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphBurnInNode.h" },
		{ "ToolTip", "The widget that the burn-in should use." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInClass = { "BurnInClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphBurnInNode, BurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInClass_MetaData), Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bCompositeOntoFinalImage_MetaData[] = {
		{ "Category", "Widget Settings" },
		{ "Comment", "/** If true, the burn-in image will be composited into the final image pass. Does not apply to multi-layer EXR files. */" },
		{ "EditCondition", "bOverride_bCompositeOntoFinalImage" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphBurnInNode.h" },
		{ "ToolTip", "If true, the burn-in image will be composited into the final image pass. Does not apply to multi-layer EXR files." },
	};
#endif
	void Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bCompositeOntoFinalImage_SetBit(void* Obj)
	{
		((UMovieGraphBurnInNode*)Obj)->bCompositeOntoFinalImage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bCompositeOntoFinalImage = { "bCompositeOntoFinalImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieGraphBurnInNode), &Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bCompositeOntoFinalImage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bCompositeOntoFinalImage_MetaData), Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bCompositeOntoFinalImage_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInWidgetInstances_ValueProp = { "BurnInWidgetInstances", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMovieGraphBurnInWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInWidgetInstances_Key_KeyProp = { "BurnInWidgetInstances_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInWidgetInstances_MetaData[] = {
		{ "Comment", "/** Burn-in widget instances shared with all FMovieGraphBurnInPass instances, keyed by burn-in class. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/MovieGraphBurnInNode.h" },
		{ "ToolTip", "Burn-in widget instances shared with all FMovieGraphBurnInPass instances, keyed by burn-in class." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInWidgetInstances = { "BurnInWidgetInstances", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieGraphBurnInNode, BurnInWidgetInstances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInWidgetInstances_MetaData), Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInWidgetInstances_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieGraphBurnInNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_BurnInClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bOverride_bCompositeOntoFinalImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_bCompositeOntoFinalImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInWidgetInstances_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInWidgetInstances_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieGraphBurnInNode_Statics::NewProp_BurnInWidgetInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieGraphBurnInNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieGraphBurnInNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieGraphBurnInNode_Statics::ClassParams = {
		&UMovieGraphBurnInNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieGraphBurnInNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieGraphBurnInNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieGraphBurnInNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMovieGraphBurnInNode()
	{
		if (!Z_Registration_Info_UClass_UMovieGraphBurnInNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieGraphBurnInNode.OuterSingleton, Z_Construct_UClass_UMovieGraphBurnInNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieGraphBurnInNode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieGraphBurnInNode>()
	{
		return UMovieGraphBurnInNode::StaticClass();
	}
	UMovieGraphBurnInNode::UMovieGraphBurnInNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieGraphBurnInNode);
	UMovieGraphBurnInNode::~UMovieGraphBurnInNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBurnInNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBurnInNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieGraphBurnInNode, UMovieGraphBurnInNode::StaticClass, TEXT("UMovieGraphBurnInNode"), &Z_Registration_Info_UClass_UMovieGraphBurnInNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieGraphBurnInNode), 2373927328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBurnInNode_h_2420827276(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBurnInNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_Nodes_MovieGraphBurnInNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
