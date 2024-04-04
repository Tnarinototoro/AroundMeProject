// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationPBDEdgeSpringConfigNode.h"
#include "ChaosClothAsset/WeightedValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationPBDEdgeSpringConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSimulationPBDEdgeSpringConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationPBDEdgeSpringConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDEdgeSpringConfigNode;
class UScriptStruct* FChaosClothAssetSimulationPBDEdgeSpringConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDEdgeSpringConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDEdgeSpringConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationPBDEdgeSpringConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDEdgeSpringConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationPBDEdgeSpringConfigNode>()
{
	return FChaosClothAssetSimulationPBDEdgeSpringConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeSpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeSpringStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Edge spring constraint property configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationPBDEdgeSpringConfigNode.h" },
		{ "ToolTip", "Edge spring constraint property configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationPBDEdgeSpringConfigNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::NewProp_EdgeSpringStiffness_MetaData[] = {
		{ "Category", "PBDEdgeSpring Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The Stiffness of segments constraints. Increase the iteration count for stiffer materials.\n\x09 * Increase the solver iteration count for stiffer materials.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationPBDEdgeSpringConfigNode.h" },
		{ "ToolTip", "The Stiffness of segments constraints. Increase the iteration count for stiffer materials.\nIncrease the solver iteration count for stiffer materials.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::NewProp_EdgeSpringStiffness = { "EdgeSpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationPBDEdgeSpringConfigNode, EdgeSpringStiffness), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::NewProp_EdgeSpringStiffness_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::NewProp_EdgeSpringStiffness_MetaData) }; // 2136180627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::NewProp_EdgeSpringStiffness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationPBDEdgeSpringConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationPBDEdgeSpringConfigNode),
		alignof(FChaosClothAssetSimulationPBDEdgeSpringConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDEdgeSpringConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDEdgeSpringConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDEdgeSpringConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDEdgeSpringConfigNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDEdgeSpringConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationPBDEdgeSpringConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDEdgeSpringConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationPBDEdgeSpringConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDEdgeSpringConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationPBDEdgeSpringConfigNode), 4283353180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDEdgeSpringConfigNode_h_2941882645(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDEdgeSpringConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDEdgeSpringConfigNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
