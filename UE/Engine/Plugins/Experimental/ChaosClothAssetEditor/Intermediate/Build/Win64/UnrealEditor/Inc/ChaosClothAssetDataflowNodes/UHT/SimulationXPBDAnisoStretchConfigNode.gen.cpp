// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationXPBDAnisoStretchConfigNode.h"
#include "ChaosClothAsset/WeightedValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationXPBDAnisoStretchConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSimulationXPBDAnisoStretchConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationXPBDAnisoStretchConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoStretchConfigNode;
class UScriptStruct* FChaosClothAssetSimulationXPBDAnisoStretchConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoStretchConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoStretchConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationXPBDAnisoStretchConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoStretchConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationXPBDAnisoStretchConfigNode>()
{
	return FChaosClothAssetSimulationXPBDAnisoStretchConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bXPBDAnisoStretchUse3dRestLengths_MetaData[];
#endif
		static void NewProp_bXPBDAnisoStretchUse3dRestLengths_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bXPBDAnisoStretchUse3dRestLengths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoStretchStiffnessWarp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoStretchStiffnessWarp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoStretchStiffnessWeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoStretchStiffnessWeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoStretchStiffnessBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoStretchStiffnessBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoStretchDamping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoStretchDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoStretchWarpScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoStretchWarpScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoStretchWeftScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoStretchWeftScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** XPBD anisotropic stretch constraint property configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoStretchConfigNode.h" },
		{ "ToolTip", "XPBD anisotropic stretch constraint property configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationXPBDAnisoStretchConfigNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_bXPBDAnisoStretchUse3dRestLengths_MetaData[] = {
		{ "Category", "XPBDAnisoStretch Properties" },
		{ "Comment", "/** Whether to use the 3D draped space as rest lengths, or use the 2D pattern space instead. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoStretchConfigNode.h" },
		{ "ToolTip", "Whether to use the 3D draped space as rest lengths, or use the 2D pattern space instead." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_bXPBDAnisoStretchUse3dRestLengths_SetBit(void* Obj)
	{
		((FChaosClothAssetSimulationXPBDAnisoStretchConfigNode*)Obj)->bXPBDAnisoStretchUse3dRestLengths = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_bXPBDAnisoStretchUse3dRestLengths = { "bXPBDAnisoStretchUse3dRestLengths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetSimulationXPBDAnisoStretchConfigNode), &Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_bXPBDAnisoStretchUse3dRestLengths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_bXPBDAnisoStretchUse3dRestLengths_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_bXPBDAnisoStretchUse3dRestLengths_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessWarp_MetaData[] = {
		{ "Category", "XPBDAnisoStretch Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness of the stretch constraints in the warp (vertical) direction.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoStretchConfigNode.h" },
		{ "ToolTip", "The stiffness of the stretch constraints in the warp (vertical) direction.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessWarp = { "XPBDAnisoStretchStiffnessWarp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoStretchConfigNode, XPBDAnisoStretchStiffnessWarp), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessWarp_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessWarp_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessWeft_MetaData[] = {
		{ "Category", "XPBDAnisoStretch Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness of the stretch constraints in the weft (horizontal) direction.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoStretchConfigNode.h" },
		{ "ToolTip", "The stiffness of the stretch constraints in the weft (horizontal) direction.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessWeft = { "XPBDAnisoStretchStiffnessWeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoStretchConfigNode, XPBDAnisoStretchStiffnessWeft), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessWeft_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessWeft_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessBias_MetaData[] = {
		{ "Category", "XPBDAnisoStretch Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness of the stretch constraints in the bias (diagonal) direction.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoStretchConfigNode.h" },
		{ "ToolTip", "The stiffness of the stretch constraints in the bias (diagonal) direction.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessBias = { "XPBDAnisoStretchStiffnessBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoStretchConfigNode, XPBDAnisoStretchStiffnessBias), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessBias_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessBias_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchDamping_MetaData[] = {
		{ "Category", "XPBDAnisoStretch Properties" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The damping of the stretch constraints, relative to critical damping.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoStretchConfigNode.h" },
		{ "ToolTip", "The damping of the stretch constraints, relative to critical damping.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchDamping = { "XPBDAnisoStretchDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoStretchConfigNode, XPBDAnisoStretchDamping), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchDamping_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchDamping_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchWarpScale_MetaData[] = {
		{ "Category", "XPBDAnisoStretch Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The scale of the stretch constraints at rest in the warp (vertical) direction.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoStretchConfigNode.h" },
		{ "ToolTip", "The scale of the stretch constraints at rest in the warp (vertical) direction.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchWarpScale = { "XPBDAnisoStretchWarpScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoStretchConfigNode, XPBDAnisoStretchWarpScale), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchWarpScale_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchWarpScale_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchWeftScale_MetaData[] = {
		{ "Category", "XPBDAnisoStretch Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The scale of the stretch constraints at rest in the weft (horizontal) direction.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoStretchConfigNode.h" },
		{ "ToolTip", "The scale of the stretch constraints at rest in the weft (horizontal) direction.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchWeftScale = { "XPBDAnisoStretchWeftScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoStretchConfigNode, XPBDAnisoStretchWeftScale), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchWeftScale_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchWeftScale_MetaData) }; // 2136180627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_bXPBDAnisoStretchUse3dRestLengths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessWarp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessWeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchStiffnessBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchWarpScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewProp_XPBDAnisoStretchWeftScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationXPBDAnisoStretchConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationXPBDAnisoStretchConfigNode),
		alignof(FChaosClothAssetSimulationXPBDAnisoStretchConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoStretchConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoStretchConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoStretchConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDAnisoStretchConfigNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDAnisoStretchConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationXPBDAnisoStretchConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoStretchConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationXPBDAnisoStretchConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoStretchConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationXPBDAnisoStretchConfigNode), 2946359698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDAnisoStretchConfigNode_h_118070051(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDAnisoStretchConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDAnisoStretchConfigNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
