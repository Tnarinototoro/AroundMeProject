// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h"
#include "ChaosClothAsset/WeightedValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationXPBDAnisoBendingConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSimulationXPBDAnisoBendingConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationXPBDAnisoBendingConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoBendingConfigNode;
class UScriptStruct* FChaosClothAssetSimulationXPBDAnisoBendingConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoBendingConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoBendingConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationXPBDAnisoBendingConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoBendingConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationXPBDAnisoBendingConfigNode>()
{
	return FChaosClothAssetSimulationXPBDAnisoBendingConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_XPBDAnisoRestAngleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoRestAngleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_XPBDAnisoRestAngleType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoFlatnessRatio_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoFlatnessRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoRestAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoRestAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoBendingStiffnessWarp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoBendingStiffnessWarp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoBendingStiffnessWeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoBendingStiffnessWeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoBendingStiffnessBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoBendingStiffnessBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoBendingDamping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoBendingDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoBucklingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_XPBDAnisoBucklingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoBucklingStiffnessWarp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoBucklingStiffnessWarp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoBucklingStiffnessWeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoBucklingStiffnessWeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XPBDAnisoBucklingStiffnessBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XPBDAnisoBucklingStiffnessBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** XPBD anisotropic bending constraint property configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "XPBD anisotropic bending constraint property configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationXPBDAnisoBendingConfigNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngleType_MetaData[] = {
		{ "Category", "XPBDAnisoBending Properties" },
		{ "Comment", "/**\n\x09 * Method for calculating the rest angles of the constraints.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "Method for calculating the rest angles of the constraints." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngleType = { "XPBDAnisoRestAngleType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, XPBDAnisoRestAngleType), Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngleType_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngleType_MetaData) }; // 3410278811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoFlatnessRatio_MetaData[] = {
		{ "Category", "XPBDAnisoBending Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Calculate rest angles as a ratio between completely flat and whatever is the 3D rest angle.\n\x09 * When FlatnessRatio = 0, this is equivalent to \"Use3DRestAngles\".\n\x09 * When FlatnessRatio = 1, the rest angle will be 0 (completely flat).\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "EditCondition", "XPBDAnisoRestAngleType == EChaosClothAssetRestAngleConstructionType::FlatnessRatio" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "Calculate rest angles as a ratio between completely flat and whatever is the 3D rest angle.\nWhen FlatnessRatio = 0, this is equivalent to \"Use3DRestAngles\".\nWhen FlatnessRatio = 1, the rest angle will be 0 (completely flat).\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoFlatnessRatio = { "XPBDAnisoFlatnessRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, XPBDAnisoFlatnessRatio), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoFlatnessRatio_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoFlatnessRatio_MetaData) }; // 572609115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngle_MetaData[] = {
		{ "Category", "XPBDAnisoBending Properties" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "Comment", "/**\n\x09 * Set rest angles to be the explicit value set here (in degrees).\n\x09 * 0 = Flat, Positive values fold away from the edge normal, Negative values fold toward the edge normal.\n\x09 * When converting vertex weight values to edge values, the value with the smallest absolute value is selected.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "EditCondition", "XPBDAnisoRestAngleType == EChaosClothAssetRestAngleConstructionType::RestAngle" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "Set rest angles to be the explicit value set here (in degrees).\n0 = Flat, Positive values fold away from the edge normal, Negative values fold toward the edge normal.\nWhen converting vertex weight values to edge values, the value with the smallest absolute value is selected.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngle = { "XPBDAnisoRestAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, XPBDAnisoRestAngle), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngle_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngle_MetaData) }; // 572609115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessWarp_MetaData[] = {
		{ "Category", "XPBDAnisoBending Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness of the bending constraints in the warp (vertical) direction.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "The stiffness of the bending constraints in the warp (vertical) direction.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessWarp = { "XPBDAnisoBendingStiffnessWarp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, XPBDAnisoBendingStiffnessWarp), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessWarp_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessWarp_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessWeft_MetaData[] = {
		{ "Category", "XPBDAnisoBending Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness of the bending constraints in the weft (horizontal) direction.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "The stiffness of the bending constraints in the weft (horizontal) direction.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessWeft = { "XPBDAnisoBendingStiffnessWeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, XPBDAnisoBendingStiffnessWeft), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessWeft_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessWeft_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessBias_MetaData[] = {
		{ "Category", "XPBDAnisoBending Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness of the bending constraints in the bias (diagonal) direction.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "The stiffness of the bending constraints in the bias (diagonal) direction.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessBias = { "XPBDAnisoBendingStiffnessBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, XPBDAnisoBendingStiffnessBias), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessBias_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessBias_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingDamping_MetaData[] = {
		{ "Category", "XPBDAnisoBending Properties" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The damping of the bending constraints, relative to critical damping.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "The damping of the bending constraints, relative to critical damping.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingDamping = { "XPBDAnisoBendingDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, XPBDAnisoBendingDamping), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingDamping_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingDamping_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingRatio_MetaData[] = {
		{ "Category", "XPBDAnisoBending Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Once the element has bent such that it's folded more than this ratio from its rest angle (\"buckled\"), switch to using Buckling Stiffness instead of BendingElement Stiffness.\n\x09 * When Buckling Ratio = 0, the Buckling Stiffness will never be used. When BucklingRatio = 1, the Buckling Stiffness will be used as soon as its bent past its rest configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "Once the element has bent such that it's folded more than this ratio from its rest angle (\"buckled\"), switch to using Buckling Stiffness instead of BendingElement Stiffness.\nWhen Buckling Ratio = 0, the Buckling Stiffness will never be used. When BucklingRatio = 1, the Buckling Stiffness will be used as soon as its bent past its rest configuration." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingRatio = { "XPBDAnisoBucklingRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, XPBDAnisoBucklingRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingRatio_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessWarp_MetaData[] = {
		{ "Category", "XPBDAnisoBending Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness after buckling in the warp (vertical) direction.\n\x09 * The constraint will use this stiffness instead of element Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\n\x09 * Typically, Buckling Stiffness is set to be less than BendingElement Stiffness.\n\x09 * Buckling Ratio determines the switch point between using BendingElement Stiffness and Buckling Stiffness.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "EditCondition", "XPBDAnisoBucklingRatio != 0" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "The stiffness after buckling in the warp (vertical) direction.\nThe constraint will use this stiffness instead of element Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\nTypically, Buckling Stiffness is set to be less than BendingElement Stiffness.\nBuckling Ratio determines the switch point between using BendingElement Stiffness and Buckling Stiffness.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessWarp = { "XPBDAnisoBucklingStiffnessWarp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, XPBDAnisoBucklingStiffnessWarp), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessWarp_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessWarp_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessWeft_MetaData[] = {
		{ "Category", "XPBDAnisoBending Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness after buckling in the weft (horizontal) direction.\n\x09 * The constraint will use this stiffness instead of element Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\n\x09 * Typically, Buckling Stiffness is set to be less than BendingElement Stiffness.\n\x09 * Buckling Ratio determines the switch point between using BendingElement Stiffness and Buckling Stiffness.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "EditCondition", "XPBDAnisoBucklingRatio != 0" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "The stiffness after buckling in the weft (horizontal) direction.\nThe constraint will use this stiffness instead of element Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\nTypically, Buckling Stiffness is set to be less than BendingElement Stiffness.\nBuckling Ratio determines the switch point between using BendingElement Stiffness and Buckling Stiffness.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessWeft = { "XPBDAnisoBucklingStiffnessWeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, XPBDAnisoBucklingStiffnessWeft), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessWeft_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessWeft_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessBias_MetaData[] = {
		{ "Category", "XPBDAnisoBending Properties" },
		{ "ClampMax", "10000000" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness after buckling in the bias (diagonal) direction.\n\x09 * The constraint will use this stiffness instead of element Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\n\x09 * Typically, Buckling Stiffness is set to be less than BendingElement Stiffness.\n\x09 * Buckling Ratio determines the switch point between using BendingElement Stiffness and Buckling Stiffness.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "EditCondition", "XPBDAnisoBucklingRatio != 0" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationXPBDAnisoBendingConfigNode.h" },
		{ "ToolTip", "The stiffness after buckling in the bias (diagonal) direction.\nThe constraint will use this stiffness instead of element Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\nTypically, Buckling Stiffness is set to be less than BendingElement Stiffness.\nBuckling Ratio determines the switch point between using BendingElement Stiffness and Buckling Stiffness.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessBias = { "XPBDAnisoBucklingStiffnessBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode, XPBDAnisoBucklingStiffnessBias), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessBias_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessBias_MetaData) }; // 2136180627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoFlatnessRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoRestAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessWarp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessWeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingStiffnessBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBendingDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessWarp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessWeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewProp_XPBDAnisoBucklingStiffnessBias,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationXPBDAnisoBendingConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode),
		alignof(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoBendingConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoBendingConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoBendingConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDAnisoBendingConfigNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDAnisoBendingConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationXPBDAnisoBendingConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationXPBDAnisoBendingConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationXPBDAnisoBendingConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationXPBDAnisoBendingConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationXPBDAnisoBendingConfigNode), 2923652697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDAnisoBendingConfigNode_h_2629332381(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDAnisoBendingConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationXPBDAnisoBendingConfigNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
