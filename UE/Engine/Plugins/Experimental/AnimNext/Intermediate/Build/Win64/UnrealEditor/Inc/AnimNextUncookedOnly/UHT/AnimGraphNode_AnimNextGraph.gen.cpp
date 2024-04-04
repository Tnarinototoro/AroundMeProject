// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Graph/AnimGraph/AnimGraphNode_AnimNextGraph.h"
#include "../Internal/Graph/AnimGraph/AnimNode_AnimNextGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_AnimNextGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomProperty();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimGraphNode_AnimNextGraph();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimGraphNode_AnimNextGraph::StaticRegisterNativesUAnimGraphNode_AnimNextGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_AnimNextGraph);
	UClass* Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_NoRegister()
	{
		return UAnimGraphNode_AnimNextGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_CustomProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/AnimGraph/AnimGraphNode_AnimNextGraph.h" },
		{ "ModuleRelativePath", "Internal/Graph/AnimGraph/AnimGraphNode_AnimNextGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Internal/Graph/AnimGraph/AnimGraphNode_AnimNextGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_AnimNextGraph, Node), Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::NewProp_Node_MetaData) }; // 1753758352
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_AnimNextGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::ClassParams = {
		&UAnimGraphNode_AnimNextGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimGraphNode_AnimNextGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_AnimNextGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_AnimNextGraph.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_AnimNextGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_AnimNextGraph.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimGraphNode_AnimNextGraph>()
	{
		return UAnimGraphNode_AnimNextGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_AnimNextGraph);
	UAnimGraphNode_AnimNextGraph::~UAnimGraphNode_AnimNextGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimGraph_AnimGraphNode_AnimNextGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimGraph_AnimGraphNode_AnimNextGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_AnimNextGraph, UAnimGraphNode_AnimNextGraph::StaticClass, TEXT("UAnimGraphNode_AnimNextGraph"), &Z_Registration_Info_UClass_UAnimGraphNode_AnimNextGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_AnimNextGraph), 3474603336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimGraph_AnimGraphNode_AnimNextGraph_h_3560447234(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimGraph_AnimGraphNode_AnimNextGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Graph_AnimGraph_AnimGraphNode_AnimNextGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
