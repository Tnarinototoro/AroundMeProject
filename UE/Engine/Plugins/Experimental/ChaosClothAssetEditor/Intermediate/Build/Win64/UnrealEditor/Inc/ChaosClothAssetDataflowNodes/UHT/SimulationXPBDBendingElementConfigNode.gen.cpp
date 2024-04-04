// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationXPBDBendingElementConfigNode.h"
#include "ChaosClothAsset/WeightedValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationXPBDBendingElementConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSimulationXPBDBendingElementConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationXPBDBendingElementConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDBendingElementConfigNode;
class UScriptStruct* FChaosClothAssetSimulationXPBDBendingElementConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDBendingElementConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDBendingElementConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationXPBDBendingElementConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDBendingElementConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationXPBDBendingElementConfigNode>()
{
	return FChaosClothAssetSimulationXPBDBendingElementConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_XPBDRestAngleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDRestAngleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_XPBDRestAngleType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDFlatnessRatio_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDFlatnessRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDRestAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDRestAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDBendingElementStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDBendingElementStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDBendingElementDamping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDBendingElementDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDBucklingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_XPBDBucklingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDBucklingStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDBucklingStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** XPBD bending element constraint property configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDBendingElementConfigNode.h" },
		{ "ToolTip", "XPBD bending element constraint property configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationXPBDBendingElementConfigNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngleType_MetaData[] = {
		{ "Category", "XPBDBendingElement Properties" },
		{ "Comment", "/**\n\x09 * Method for calculating the rest angles of the constraints.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDBendingElementConfigNode.h" },
		{ "ToolTip", "Method for calculating the rest angles of the constraints." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngleType = { "XPBDRestAngleType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDBendingElementConfigNode, XPBDRestAngleType), Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngleType_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngleType_MetaData) }; // 3410278811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDFlatnessRatio_MetaData[] = {
		{ "Category", "XPBDBendingElement Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Calculate rest angles as a ratio between completely flat and whatever is the 3D rest angle.\n\x09 * When FlatnessRatio = 0, this is equivalent to \"Use3DRestAngles\".\n\x09 * When FlatnessRatio = 1, the rest angle will be 0 (completely flat).\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "EditCondition", "XPBDRestAngleType == EChaosClothAssetRestAngleConstructionType::FlatnessRatio" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDBendingElementConfigNode.h" },
		{ "ToolTip", "Calculate rest angles as a ratio between completely flat and whatever is the 3D rest angle.\nWhen FlatnessRatio = 0, this is equivalent to \"Use3DRestAngles\".\nWhen FlatnessRatio = 1, the rest angle will be 0 (completely flat).\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDFlatnessRatio = { "XPBDFlatnessRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDBendingElementConfigNode, XPBDFlatnessRatio), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDFlatnessRatio_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDFlatnessRatio_MetaData) }; // 572609115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngle_MetaData[] = {
		{ "Category", "XPBDBendingElement Properties" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "Comment", "/**\n\x09 * Set rest angles to be the explicit value set here (in degrees).\n\x09 * 0 = Flat, Positive values fold away from the edge normal, Negative values fold toward the edge normal.\n\x09 * When converting vertex weight values to edge values, the value with the smallest absolute value is selected.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "EditCondition", "XPBDRestAngleType == EChaosClothAssetRestAngleConstructionType::RestAngle" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDBendingElementConfigNode.h" },
		{ "ToolTip", "Set rest angles to be the explicit value set here (in degrees).\n0 = Flat, Positive values fold away from the edge normal, Negative values fold toward the edge normal.\nWhen converting vertex weight values to edge values, the value with the smallest absolute value is selected.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngle = { "XPBDRestAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDBendingElementConfigNode, XPBDRestAngle), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngle_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngle_MetaData) }; // 572609115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBendingElementStiffness_MetaData[] = {
		{ "Category", "XPBDBendingElement Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness of the bending element constraints.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDBendingElementConfigNode.h" },
		{ "ToolTip", "The stiffness of the bending element constraints.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBendingElementStiffness = { "XPBDBendingElementStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDBendingElementConfigNode, XPBDBendingElementStiffness), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBendingElementStiffness_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBendingElementStiffness_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBendingElementDamping_MetaData[] = {
		{ "Category", "XPBDBendingElement Properties" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The damping of the bending element constraints, relative to critical damping.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDBendingElementConfigNode.h" },
		{ "ToolTip", "The damping of the bending element constraints, relative to critical damping.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBendingElementDamping = { "XPBDBendingElementDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDBendingElementConfigNode, XPBDBendingElementDamping), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBendingElementDamping_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBendingElementDamping_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBucklingRatio_MetaData[] = {
		{ "Category", "XPBDBendingElement Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Once the element has bent such that it's folded more than this ratio from its rest angle (\"buckled\"), switch to using Buckling Stiffness instead of BendingElement Stiffness.\n\x09 * When Buckling Ratio = 0, the Buckling Stiffness will never be used. When BucklingRatio = 1, the Buckling Stiffness will be used as soon as its bent past its rest configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDBendingElementConfigNode.h" },
		{ "ToolTip", "Once the element has bent such that it's folded more than this ratio from its rest angle (\"buckled\"), switch to using Buckling Stiffness instead of BendingElement Stiffness.\nWhen Buckling Ratio = 0, the Buckling Stiffness will never be used. When BucklingRatio = 1, the Buckling Stiffness will be used as soon as its bent past its rest configuration." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBucklingRatio = { "XPBDBucklingRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDBendingElementConfigNode, XPBDBucklingRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBucklingRatio_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBucklingRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBucklingStiffness_MetaData[] = {
		{ "Category", "XPBDBendingElement Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness after buckling.\n\x09 * The constraint will use this stiffness instead of element Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\n\x09 * Typically, Buckling Stiffness is set to be less than BendingElement Stiffness.\n\x09 * Buckling Ratio determines the switch point between using BendingElement Stiffness and Buckling Stiffness.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "EditCondition", "XPBDBucklingRatio != 0" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDBendingElementConfigNode.h" },
		{ "ToolTip", "The stiffness after buckling.\nThe constraint will use this stiffness instead of element Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\nTypically, Buckling Stiffness is set to be less than BendingElement Stiffness.\nBuckling Ratio determines the switch point between using BendingElement Stiffness and Buckling Stiffness.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBucklingStiffness = { "XPBDBucklingStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDBendingElementConfigNode, XPBDBucklingStiffness), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBucklingStiffness_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBucklingStiffness_MetaData) }; // 2136180627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDFlatnessRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDRestAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBendingElementStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBendingElementDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBucklingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewProp_XPBDBucklingStiffness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationXPBDBendingElementConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationXPBDBendingElementConfigNode),
		alignof(FChaosClothAssetSimulationXPBDBendingElementConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDBendingElementConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDBendingElementConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDBendingElementConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDBendingElementConfigNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDBendingElementConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationXPBDBendingElementConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDBendingElementConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationXPBDBendingElementConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDBendingElementConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationXPBDBendingElementConfigNode), 3791690150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDBendingElementConfigNode_h_1303845298(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDBendingElementConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDBendingElementConfigNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
