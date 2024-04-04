// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationAerodynamicsConfigNode.h"
#include "ChaosClothAsset/WeightedValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationAerodynamicsConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSimulationAerodynamicsConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationAerodynamicsConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationAerodynamicsConfigNode;
class UScriptStruct* FChaosClothAssetSimulationAerodynamicsConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationAerodynamicsConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationAerodynamicsConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationAerodynamicsConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationAerodynamicsConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationAerodynamicsConfigNode>()
{
	return FChaosClothAssetSimulationAerodynamicsConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FluidDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FluidDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Drag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Drag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lift_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WindVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Aerodynamics properties configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationAerodynamicsConfigNode.h" },
		{ "ToolTip", "Aerodynamics properties configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationAerodynamicsConfigNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_FluidDensity_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The density of the medium in which the aerodynamic forces take place, usually air.\n\x09 * The fluid density is given in kg/m^3.\n\x09 * Air density is considered to be around 1.225 kg/m^3 in average atmospheric conditions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationAerodynamicsConfigNode.h" },
		{ "ToolTip", "The density of the medium in which the aerodynamic forces take place, usually air.\nThe fluid density is given in kg/m^3.\nAir density is considered to be around 1.225 kg/m^3 in average atmospheric conditions." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_FluidDensity = { "FluidDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationAerodynamicsConfigNode, FluidDensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_FluidDensity_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_FluidDensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_Drag_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The aerodynamic coefficient of drag applying on each particle.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationAerodynamicsConfigNode.h" },
		{ "ToolTip", "The aerodynamic coefficient of drag applying on each particle.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationAerodynamicsConfigNode, Drag), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_Drag_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_Drag_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_Lift_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The aerodynamic coefficient of lift applying on each particle.\n\x09 * If a valid weight map is found with the given Weight Map name, then both Low and High values\n\x09 * are interpolated with the per particle weight to make the final value used for the simulation.\n\x09 * Otherwise all particles are considered to have a zero weight, and only the Low value is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationAerodynamicsConfigNode.h" },
		{ "ToolTip", "The aerodynamic coefficient of lift applying on each particle.\nIf a valid weight map is found with the given Weight Map name, then both Low and High values\nare interpolated with the per particle weight to make the final value used for the simulation.\nOtherwise all particles are considered to have a zero weight, and only the Low value is meaningful." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_Lift = { "Lift", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationAerodynamicsConfigNode, Lift), Z_Construct_UScriptStruct_FChaosClothAssetWeightedValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_Lift_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_Lift_MetaData) }; // 2136180627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_WindVelocity_MetaData[] = {
		{ "Category", "Aerodynamics" },
		{ "Comment", "/**\n\x09 * The fixed wind velocity [m/s] for this asset.\n\x09 * For reference a wind gust is above 8m/s (18mph).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationAerodynamicsConfigNode.h" },
		{ "ToolTip", "The fixed wind velocity [m/s] for this asset.\nFor reference a wind gust is above 8m/s (18mph)." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_WindVelocity = { "WindVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationAerodynamicsConfigNode, WindVelocity), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_WindVelocity_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_WindVelocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_FluidDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_Drag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_Lift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewProp_WindVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationAerodynamicsConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationAerodynamicsConfigNode),
		alignof(FChaosClothAssetSimulationAerodynamicsConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationAerodynamicsConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationAerodynamicsConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationAerodynamicsConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationAerodynamicsConfigNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationAerodynamicsConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationAerodynamicsConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationAerodynamicsConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationAerodynamicsConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationAerodynamicsConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationAerodynamicsConfigNode), 4214622876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationAerodynamicsConfigNode_h_3548421973(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationAerodynamicsConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationAerodynamicsConfigNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
