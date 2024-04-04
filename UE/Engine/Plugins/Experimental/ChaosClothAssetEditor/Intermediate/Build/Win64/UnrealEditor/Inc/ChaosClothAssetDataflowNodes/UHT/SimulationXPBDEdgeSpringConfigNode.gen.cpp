// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationXPBDEdgeSpringConfigNode.h"
#include "ChaosClothAsset/WeightedValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationXPBDEdgeSpringConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSimulationXPBDEdgeSpringConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationXPBDEdgeSpringConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDEdgeSpringConfigNode;
class UScriptStruct* FChaosClothAssetSimulationXPBDEdgeSpringConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDEdgeSpringConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDEdgeSpringConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationXPBDEdgeSpringConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDEdgeSpringConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationXPBDEdgeSpringConfigNode>()
{
	return FChaosClothAssetSimulationXPBDEdgeSpringConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDEdgeSpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDEdgeSpringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDEdgeSpringDamping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDEdgeSpringDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** XPBD edge spring constraint property configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDEdgeSpringConfigNode.h" },
		{ "ToolTip", "XPBD edge spring constraint property configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationXPBDEdgeSpringConfigNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewProp_XPBDEdgeSpringStiffness_MetaData[] = {
		{ "Category", "XPBDEdgeSpring Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness of the edge segment constraints.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDEdgeSpringConfigNode.h" },
		{ "ToolTip", "The stiffness of the edge segment constraints.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewProp_XPBDEdgeSpringStiffness = { "XPBDEdgeSpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDEdgeSpringConfigNode, XPBDEdgeSpringStiffness), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewProp_XPBDEdgeSpringStiffness_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewProp_XPBDEdgeSpringStiffness_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewProp_XPBDEdgeSpringDamping_MetaData[] = {
		{ "Category", "XPBDEdgeSpring Properties" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The damping of the edge segment constraints.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDEdgeSpringConfigNode.h" },
		{ "ToolTip", "The damping of the edge segment constraints.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewProp_XPBDEdgeSpringDamping = { "XPBDEdgeSpringDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDEdgeSpringConfigNode, XPBDEdgeSpringDamping), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewProp_XPBDEdgeSpringDamping_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewProp_XPBDEdgeSpringDamping_MetaData) }; // 2136180627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewProp_XPBDEdgeSpringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewProp_XPBDEdgeSpringDamping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationXPBDEdgeSpringConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationXPBDEdgeSpringConfigNode),
		alignof(FChaosClothAssetSimulationXPBDEdgeSpringConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDEdgeSpringConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDEdgeSpringConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDEdgeSpringConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDEdgeSpringConfigNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDEdgeSpringConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationXPBDEdgeSpringConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDEdgeSpringConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationXPBDEdgeSpringConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDEdgeSpringConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationXPBDEdgeSpringConfigNode), 136755386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDEdgeSpringConfigNode_h_3971857403(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDEdgeSpringConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDEdgeSpringConfigNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
