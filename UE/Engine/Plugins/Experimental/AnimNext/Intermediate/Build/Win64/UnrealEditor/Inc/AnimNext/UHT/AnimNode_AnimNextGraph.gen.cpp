// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Graph/AnimGraph/AnimNode_AnimNextGraph.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AnimNextGraph() {}
// Cross Module References
	ANIMNEXT_API UClass* Z_Construct_UClass_UAnimNextGraph_NoRegister();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequencePlayerState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSequencePlayerState;
class UScriptStruct* FAnimSequencePlayerState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSequencePlayerState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSequencePlayerState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSequencePlayerState, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimSequencePlayerState"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSequencePlayerState.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimSequencePlayerState>()
{
	return FAnimSequencePlayerState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalTimeAccumulator_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InternalTimeAccumulator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevInternalTimeAccumulator_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevInternalTimeAccumulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// TEST - until we can allocate per-node state again\n" },
		{ "ModuleRelativePath", "Internal/Graph/AnimGraph/AnimNode_AnimNextGraph.h" },
		{ "ToolTip", "TEST - until we can allocate per-node state again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSequencePlayerState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewProp_InternalTimeAccumulator_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimGraph/AnimNode_AnimNextGraph.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewProp_InternalTimeAccumulator = { "InternalTimeAccumulator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSequencePlayerState, InternalTimeAccumulator), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewProp_InternalTimeAccumulator_MetaData), Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewProp_InternalTimeAccumulator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewProp_PrevInternalTimeAccumulator_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimGraph/AnimNode_AnimNextGraph.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewProp_PrevInternalTimeAccumulator = { "PrevInternalTimeAccumulator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimSequencePlayerState, PrevInternalTimeAccumulator), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewProp_PrevInternalTimeAccumulator_MetaData), Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewProp_PrevInternalTimeAccumulator_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewProp_InternalTimeAccumulator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewProp_PrevInternalTimeAccumulator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimSequencePlayerState",
		Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::PropPointers),
		sizeof(FAnimSequencePlayerState),
		alignof(FAnimSequencePlayerState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSequencePlayerState()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSequencePlayerState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSequencePlayerState.InnerSingleton, Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSequencePlayerState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_AnimNextGraph>() == std::is_polymorphic<FAnimNode_CustomProperty>(), "USTRUCT FAnimNode_AnimNextGraph cannot be polymorphic unless super FAnimNode_CustomProperty is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AnimNextGraph;
class UScriptStruct* FAnimNode_AnimNextGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AnimNextGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AnimNextGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNode_AnimNextGraph"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AnimNextGraph.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNode_AnimNextGraph>()
{
	return FAnimNode_AnimNextGraph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLink_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNextGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimNextGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TestSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Animation node that allows a AnimNextGraph output to be used in an animation graph\n */" },
		{ "ModuleRelativePath", "Internal/Graph/AnimGraph/AnimNode_AnimNextGraph.h" },
		{ "ToolTip", "Animation node that allows a AnimNextGraph output to be used in an animation graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AnimNextGraph>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_SourceLink_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "/** The input pose we will pass to the graph */" },
		{ "DisplayName", "Source" },
		{ "ModuleRelativePath", "Internal/Graph/AnimGraph/AnimNode_AnimNextGraph.h" },
		{ "ToolTip", "The input pose we will pass to the graph" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_SourceLink = { "SourceLink", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimNextGraph, SourceLink), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_SourceLink_MetaData), Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_SourceLink_MetaData) }; // 1465313103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_AnimNextGraph_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Internal/Graph/AnimGraph/AnimNode_AnimNextGraph.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_AnimNextGraph = { "AnimNextGraph", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimNextGraph, AnimNextGraph), Z_Construct_UClass_UAnimNextGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_AnimNextGraph_MetaData), Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_AnimNextGraph_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_TestSequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisallowedClasses", "/Script/Engine.AnimMontage" },
		{ "ModuleRelativePath", "Internal/Graph/AnimGraph/AnimNode_AnimNextGraph.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_TestSequence = { "TestSequence", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimNextGraph, TestSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_TestSequence_MetaData), Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_TestSequence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09 * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreshold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 */" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Internal/Graph/AnimGraph/AnimNode_AnimNextGraph.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreshold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_AnimNextGraph, LODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_LODThreshold_MetaData), Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_LODThreshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_SourceLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_AnimNextGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_TestSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewProp_LODThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FAnimNode_CustomProperty,
		&NewStructOps,
		"AnimNode_AnimNextGraph",
		Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::PropPointers),
		sizeof(FAnimNode_AnimNextGraph),
		alignof(FAnimNode_AnimNextGraph),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_AnimNextGraph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AnimNextGraph.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_AnimNextGraph.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimGraph_AnimNode_AnimNextGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimGraph_AnimNode_AnimNextGraph_h_Statics::ScriptStructInfo[] = {
		{ FAnimSequencePlayerState::StaticStruct, Z_Construct_UScriptStruct_FAnimSequencePlayerState_Statics::NewStructOps, TEXT("AnimSequencePlayerState"), &Z_Registration_Info_UScriptStruct_AnimSequencePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSequencePlayerState), 2129146270U) },
		{ FAnimNode_AnimNextGraph::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AnimNextGraph_Statics::NewStructOps, TEXT("AnimNode_AnimNextGraph"), &Z_Registration_Info_UScriptStruct_AnimNode_AnimNextGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AnimNextGraph), 1753758352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimGraph_AnimNode_AnimNextGraph_h_1911001483(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimGraph_AnimNode_AnimNextGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimGraph_AnimNode_AnimNextGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
