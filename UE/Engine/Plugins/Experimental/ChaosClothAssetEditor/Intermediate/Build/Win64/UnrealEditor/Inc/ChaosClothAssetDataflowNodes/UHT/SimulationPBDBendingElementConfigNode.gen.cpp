// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationPBDBendingElementConfigNode.h"
#include "ChaosClothAsset/WeightedValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationPBDBendingElementConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosClothAssetRestAngleConstructionType;
	static UEnum* EChaosClothAssetRestAngleConstructionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosClothAssetRestAngleConstructionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosClothAssetRestAngleConstructionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("EChaosClothAssetRestAngleConstructionType"));
		}
		return Z_Registration_Info_UEnum_EChaosClothAssetRestAngleConstructionType.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETDATAFLOWNODES_API UEnum* StaticEnum<EChaosClothAssetRestAngleConstructionType>()
	{
		return EChaosClothAssetRestAngleConstructionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType_Statics::Enumerators[] = {
		{ "EChaosClothAssetRestAngleConstructionType::Use3DRestAngles", (int64)EChaosClothAssetRestAngleConstructionType::Use3DRestAngles },
		{ "EChaosClothAssetRestAngleConstructionType::FlatnessRatio", (int64)EChaosClothAssetRestAngleConstructionType::FlatnessRatio },
		{ "EChaosClothAssetRestAngleConstructionType::RestAngle", (int64)EChaosClothAssetRestAngleConstructionType::RestAngle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType_Statics::Enum_MetaDataParams[] = {
		{ "FlatnessRatio.Comment", "/** Calculate rest angles using the FlatnessRatio property. */" },
		{ "FlatnessRatio.Name", "EChaosClothAssetRestAngleConstructionType::FlatnessRatio" },
		{ "FlatnessRatio.ToolTip", "Calculate rest angles using the FlatnessRatio property." },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationPBDBendingElementConfigNode.h" },
		{ "RestAngle.Comment", "/** Calculate rest angles using the RestAngle property. */" },
		{ "RestAngle.Name", "EChaosClothAssetRestAngleConstructionType::RestAngle" },
		{ "RestAngle.ToolTip", "Calculate rest angles using the RestAngle property." },
		{ "Use3DRestAngles.Comment", "/** Calculate rest angles using the 3D draped space simulation mesh. */" },
		{ "Use3DRestAngles.Name", "EChaosClothAssetRestAngleConstructionType::Use3DRestAngles" },
		{ "Use3DRestAngles.ToolTip", "Calculate rest angles using the 3D draped space simulation mesh." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		nullptr,
		"EChaosClothAssetRestAngleConstructionType",
		"EChaosClothAssetRestAngleConstructionType",
		Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType()
	{
		if (!Z_Registration_Info_UEnum_EChaosClothAssetRestAngleConstructionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosClothAssetRestAngleConstructionType.InnerSingleton, Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosClothAssetRestAngleConstructionType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FChaosClothAssetSimulationPBDBendingElementConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationPBDBendingElementConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDBendingElementConfigNode;
class UScriptStruct* FChaosClothAssetSimulationPBDBendingElementConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDBendingElementConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDBendingElementConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationPBDBendingElementConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDBendingElementConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationPBDBendingElementConfigNode>()
{
	return FChaosClothAssetSimulationPBDBendingElementConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_RestAngleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestAngleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RestAngleType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlatnessRatio_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlatnessRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RestAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendingElementStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BendingElementStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BucklingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BucklingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BucklingStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BucklingStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Bending element constraint property configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationPBDBendingElementConfigNode.h" },
		{ "ToolTip", "Bending element constraint property configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationPBDBendingElementConfigNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngleType_MetaData[] = {
		{ "Category", "PBDBendingElement Properties" },
		{ "Comment", "/**\n\x09 * Method for calculating the rest angles of the constraints.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationPBDBendingElementConfigNode.h" },
		{ "ToolTip", "Method for calculating the rest angles of the constraints." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngleType = { "RestAngleType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationPBDBendingElementConfigNode, RestAngleType), Z_Construct_UEnum_ChaosClothAssetDataflowNodes_EChaosClothAssetRestAngleConstructionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngleType_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngleType_MetaData) }; // 3410278811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_FlatnessRatio_MetaData[] = {
		{ "Category", "PBDBendingElement Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Calculate rest angles as a ratio between completely flat and whatever is the 3D rest angle.\n\x09 * When FlatnessRatio = 0, this is equivalent to \"Use3DRestAngles\".\n\x09 * When FlatnessRatio = 1, the rest angle will be 0 (completely flat).\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "EditCondition", "RestAngleType == EChaosClothAssetRestAngleConstructionType::FlatnessRatio" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationPBDBendingElementConfigNode.h" },
		{ "ToolTip", "Calculate rest angles as a ratio between completely flat and whatever is the 3D rest angle.\nWhen FlatnessRatio = 0, this is equivalent to \"Use3DRestAngles\".\nWhen FlatnessRatio = 1, the rest angle will be 0 (completely flat).\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_FlatnessRatio = { "FlatnessRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationPBDBendingElementConfigNode, FlatnessRatio), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_FlatnessRatio_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_FlatnessRatio_MetaData) }; // 572609115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngle_MetaData[] = {
		{ "Category", "PBDBendingElement Properties" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "Comment", "/**\n\x09 * Set rest angles to be the explicit value set here (in degrees).\n\x09 * 0 = Flat, Positive values fold away from the edge normal, Negative values fold toward the edge normal.\n\x09 * When converting vertex weight values to edge values, the value with the smallest absolute value is selected.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "EditCondition", "RestAngleType == EChaosClothAssetRestAngleConstructionType::RestAngle" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationPBDBendingElementConfigNode.h" },
		{ "ToolTip", "Set rest angles to be the explicit value set here (in degrees).\n0 = Flat, Positive values fold away from the edge normal, Negative values fold toward the edge normal.\nWhen converting vertex weight values to edge values, the value with the smallest absolute value is selected.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngle = { "RestAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationPBDBendingElementConfigNode, RestAngle), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValueNonAnimatable, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngle_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngle_MetaData) }; // 572609115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BendingElementStiffness_MetaData[] = {
		{ "Category", "PBDBendingElement Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The Stiffness of the bending elements constraints. Increase the iteration count for stiffer materials.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationPBDBendingElementConfigNode.h" },
		{ "ToolTip", "The Stiffness of the bending elements constraints. Increase the iteration count for stiffer materials.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BendingElementStiffness = { "BendingElementStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationPBDBendingElementConfigNode, BendingElementStiffness), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BendingElementStiffness_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BendingElementStiffness_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BucklingRatio_MetaData[] = {
		{ "Category", "PBDBendingElement Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Once the element has bent such that it's folded more than this ratio from its rest angle (\"buckled\"), switch to using Buckling Stiffness instead of BendingElement Stiffness.\n\x09 * When Buckling Ratio = 0, the Buckling Stiffness will never be used. When BucklingRatio = 1, the Buckling Stiffness will be used as soon as its bent past its rest configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationPBDBendingElementConfigNode.h" },
		{ "ToolTip", "Once the element has bent such that it's folded more than this ratio from its rest angle (\"buckled\"), switch to using Buckling Stiffness instead of BendingElement Stiffness.\nWhen Buckling Ratio = 0, the Buckling Stiffness will never be used. When BucklingRatio = 1, the Buckling Stiffness will be used as soon as its bent past its rest configuration." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BucklingRatio = { "BucklingRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationPBDBendingElementConfigNode, BucklingRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BucklingRatio_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BucklingRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BucklingStiffness_MetaData[] = {
		{ "Category", "PBDBendingElement Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The stiffness after buckling.\n\x09 * The constraint will use this stiffness instead of element Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\n\x09 * Typically, Buckling Stiffness is set to be less than BendingElement Stiffness.\n\x09 * Buckling Ratio determines the switch point between using BendingElement Stiffness and Buckling Stiffness.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "EditCondition", "BucklingRatio != 0" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationPBDBendingElementConfigNode.h" },
		{ "ToolTip", "The stiffness after buckling.\nThe constraint will use this stiffness instead of element Stiffness once the cloth has buckled, i.e., bent beyond a certain angle.\nTypically, Buckling Stiffness is set to be less than BendingElement Stiffness.\nBuckling Ratio determines the switch point between using BendingElement Stiffness and Buckling Stiffness.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BucklingStiffness = { "BucklingStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationPBDBendingElementConfigNode, BucklingStiffness), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BucklingStiffness_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BucklingStiffness_MetaData) }; // 2136180627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_FlatnessRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_RestAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BendingElementStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BucklingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewProp_BucklingStiffness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationPBDBendingElementConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationPBDBendingElementConfigNode),
		alignof(FChaosClothAssetSimulationPBDBendingElementConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDBendingElementConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDBendingElementConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDBendingElementConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDBendingElementConfigNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDBendingElementConfigNode_h_Statics::EnumInfo[] = {
		{ EChaosClothAssetRestAngleConstructionType_StaticEnum, TEXT("EChaosClothAssetRestAngleConstructionType"), &Z_Registration_Info_UEnum_EChaosClothAssetRestAngleConstructionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3410278811U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDBendingElementConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationPBDBendingElementConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationPBDBendingElementConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationPBDBendingElementConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationPBDBendingElementConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationPBDBendingElementConfigNode), 2897785798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDBendingElementConfigNode_h_4150141893(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDBendingElementConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDBendingElementConfigNode_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDBendingElementConfigNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationPBDBendingElementConfigNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
