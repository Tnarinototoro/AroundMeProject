// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationMaxDistanceConfigNode.h"
#include "ChaosClothAsset/WeightedValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationMaxDistanceConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSimulationMaxDistanceConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationMaxDistanceConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMaxDistanceConfigNode;
class UScriptStruct* FChaosClothAssetSimulationMaxDistanceConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMaxDistanceConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMaxDistanceConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationMaxDistanceConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMaxDistanceConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationMaxDistanceConfigNode>()
{
	return FChaosClothAssetSimulationMaxDistanceConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Maximum distance constraint property configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationMaxDistanceConfigNode.h" },
		{ "ToolTip", "Maximum distance constraint property configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationMaxDistanceConfigNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "MaxDistance Properties" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The maximum distance a simulated particle can reach from its animated skinned cloth mesh position.\n\x09 * If a particle has 0 for its maximum distance, it is no longer considered dynamic, and becomes kinematic to follow its animated position.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationMaxDistanceConfigNode.h" },
		{ "ToolTip", "The maximum distance a simulated particle can reach from its animated skinned cloth mesh position.\nIf a particle has 0 for its maximum distance, it is no longer considered dynamic, and becomes kinematic to follow its animated position.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationMaxDistanceConfigNode, MaxDistance), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::NewProp_MaxDistance_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::NewProp_MaxDistance_MetaData) }; // 2136180627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::NewProp_MaxDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationMaxDistanceConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationMaxDistanceConfigNode),
		alignof(FChaosClothAssetSimulationMaxDistanceConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMaxDistanceConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMaxDistanceConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMaxDistanceConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationMaxDistanceConfigNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationMaxDistanceConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationMaxDistanceConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationMaxDistanceConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationMaxDistanceConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMaxDistanceConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationMaxDistanceConfigNode), 1118253614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationMaxDistanceConfigNode_h_991482677(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationMaxDistanceConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationMaxDistanceConfigNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
