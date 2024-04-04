// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationLongRangeAttachmentConfigNode.h"
#include "ChaosClothAsset/WeightedValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationLongRangeAttachmentConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSimulationLongRangeAttachmentConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationLongRangeAttachmentConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationLongRangeAttachmentConfigNode;
class UScriptStruct* FChaosClothAssetSimulationLongRangeAttachmentConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationLongRangeAttachmentConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationLongRangeAttachmentConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationLongRangeAttachmentConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationLongRangeAttachmentConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationLongRangeAttachmentConfigNode>()
{
	return FChaosClothAssetSimulationLongRangeAttachmentConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TetherStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetherScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TetherScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGeodesicTethers_MetaData[];
#endif
		static void NewProp_bUseGeodesicTethers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGeodesicTethers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedEndWeightMap_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FixedEndWeightMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Long range attachment constraint property configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationLongRangeAttachmentConfigNode.h" },
		{ "ToolTip", "Long range attachment constraint property configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationLongRangeAttachmentConfigNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_TetherStiffness_MetaData[] = {
		{ "Category", "Long Range Attachment Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The tethers' stiffness of the long range attachment constraints.\n\x09 * The long range attachment connects each of the cloth particles to its closest fixed point with a spring constraint.\n\x09 * This can be used to compensate for a lack of stretch resistance when the iterations count is kept low for performance reasons.\n\x09 * Can lead to an unnatural pull string puppet like behavior.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationLongRangeAttachmentConfigNode.h" },
		{ "ToolTip", "The tethers' stiffness of the long range attachment constraints.\nThe long range attachment connects each of the cloth particles to its closest fixed point with a spring constraint.\nThis can be used to compensate for a lack of stretch resistance when the iterations count is kept low for performance reasons.\nCan lead to an unnatural pull string puppet like behavior.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationLongRangeAttachmentConfigNode, TetherStiffness), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_TetherStiffness_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_TetherStiffness_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_TetherScale_MetaData[] = {
		{ "Category", "Long Range Attachment Properties" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/**\n\x09 * The limit scale of the long range attachment constraints (aka tether limit).\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationLongRangeAttachmentConfigNode.h" },
		{ "ToolTip", "The limit scale of the long range attachment constraints (aka tether limit).\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "1.1" },
		{ "UIMin", "1." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_TetherScale = { "TetherScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationLongRangeAttachmentConfigNode, TetherScale), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_TetherScale_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_TetherScale_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_bUseGeodesicTethers_MetaData[] = {
		{ "Category", "Long Range Attachment Properties" },
		{ "Comment", "/**\n\x09 * Use geodesic instead of euclidean distance calculations for the Long Range Attachment constraint,\n\x09 * which is slower at setup but more accurate at establishing the correct position and length of the tethers,\n\x09 * and therefore is less prone to artifacts during the simulation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationLongRangeAttachmentConfigNode.h" },
		{ "ToolTip", "Use geodesic instead of euclidean distance calculations for the Long Range Attachment constraint,\nwhich is slower at setup but more accurate at establishing the correct position and length of the tethers,\nand therefore is less prone to artifacts during the simulation." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_bUseGeodesicTethers_SetBit(void* Obj)
	{
		((FChaosClothAssetSimulationLongRangeAttachmentConfigNode*)Obj)->bUseGeodesicTethers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_bUseGeodesicTethers = { "bUseGeodesicTethers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetSimulationLongRangeAttachmentConfigNode), &Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_bUseGeodesicTethers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_bUseGeodesicTethers_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_bUseGeodesicTethers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_FixedEndWeightMap_MetaData[] = {
		{ "Category", "Long Range Attachment Properties" },
		{ "Comment", "/** The name of the weight map used to calculate fixed tether ends. All vertices with weight = 0 will be considered fixed. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationLongRangeAttachmentConfigNode.h" },
		{ "ToolTip", "The name of the weight map used to calculate fixed tether ends. All vertices with weight = 0 will be considered fixed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_FixedEndWeightMap = { "FixedEndWeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationLongRangeAttachmentConfigNode, FixedEndWeightMap), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_FixedEndWeightMap_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_FixedEndWeightMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_TetherStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_TetherScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_bUseGeodesicTethers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewProp_FixedEndWeightMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationLongRangeAttachmentConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationLongRangeAttachmentConfigNode),
		alignof(FChaosClothAssetSimulationLongRangeAttachmentConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationLongRangeAttachmentConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationLongRangeAttachmentConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationLongRangeAttachmentConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationLongRangeAttachmentConfigNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationLongRangeAttachmentConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationLongRangeAttachmentConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationLongRangeAttachmentConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationLongRangeAttachmentConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationLongRangeAttachmentConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationLongRangeAttachmentConfigNode), 1033915697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationLongRangeAttachmentConfigNode_h_3711749870(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationLongRangeAttachmentConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationLongRangeAttachmentConfigNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
