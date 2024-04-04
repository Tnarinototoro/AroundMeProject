// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationMassConfigNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationMassConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSimulationMassConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationMassConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMassConfigNode;
class UScriptStruct* FChaosClothAssetSimulationMassConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMassConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMassConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationMassConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMassConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationMassConfigNode>()
{
	return FChaosClothAssetSimulationMassConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MassMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MassMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniformMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UniformMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Mass properties configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationMassConfigNode.h" },
		{ "ToolTip", "Mass properties configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationMassConfigNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_MassMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_MassMode_MetaData[] = {
		{ "Category", "Mass Properties" },
		{ "Comment", "/**\n\x09 * How cloth particle mass is determined\n\x09 * -\x09Uniform Mass: Every particle's mass will be set to the value specified in the UniformMass setting. Mostly to avoid as it can cause some serious issues with irregular tessellations.\n\x09 * -\x09Total Mass: The total mass is distributed equally over all the particles. Useful when referencing a specific garment size and feel.\n\x09 * -\x09""Density: A constant mass density is used. Density is usually the preferred way of setting mass since it allows matching real life materials' density values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationMassConfigNode.h" },
		{ "ToolTip", "How cloth particle mass is determined\n-    Uniform Mass: Every particle's mass will be set to the value specified in the UniformMass setting. Mostly to avoid as it can cause some serious issues with irregular tessellations.\n-    Total Mass: The total mass is distributed equally over all the particles. Useful when referencing a specific garment size and feel.\n-    Density: A constant mass density is used. Density is usually the preferred way of setting mass since it allows matching real life materials' density values." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_MassMode = { "MassMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationMassConfigNode, MassMode), Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_MassMode_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_MassMode_MetaData) }; // 2145444627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_UniformMass_MetaData[] = {
		{ "Category", "Mass Properties" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The value used when the Mass Mode is set to Uniform Mass. */" },
		{ "EditCondition", "MassMode == EClothMassMode::UniformMass" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationMassConfigNode.h" },
		{ "ToolTip", "The value used when the Mass Mode is set to Uniform Mass." },
		{ "UIMax", "0.001" },
		{ "UIMin", "0.000001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_UniformMass = { "UniformMass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationMassConfigNode, UniformMass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_UniformMass_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_UniformMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_TotalMass_MetaData[] = {
		{ "Category", "Mass Properties" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The value used when Mass Mode is set to TotalMass. */" },
		{ "EditCondition", "MassMode == EClothMassMode::TotalMass" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationMassConfigNode.h" },
		{ "ToolTip", "The value used when Mass Mode is set to TotalMass." },
		{ "UIMax", "10" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_TotalMass = { "TotalMass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationMassConfigNode, TotalMass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_TotalMass_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_TotalMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "Mass Properties" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Density in kg/m^2.\n\x09 * Melton Wool: 0.7\n\x09 * Heavy leather: 0.6\n\x09 * Polyurethane: 0.5\n\x09 * Denim: 0.4\n\x09 * Light leather: 0.3\n\x09 * Cotton: 0.2\n\x09 * Silk: 0.1\n\x09 */" },
		{ "EditCondition", "MassMode == EClothMassMode::Density" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationMassConfigNode.h" },
		{ "ToolTip", "Density in kg/m^2.\nMelton Wool: 0.7\nHeavy leather: 0.6\nPolyurethane: 0.5\nDenim: 0.4\nLight leather: 0.3\nCotton: 0.2\nSilk: 0.1" },
		{ "UIMax", "1" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationMassConfigNode, Density), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_Density_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_Density_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_MassMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_MassMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_UniformMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_TotalMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewProp_Density,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationMassConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationMassConfigNode),
		alignof(FChaosClothAssetSimulationMassConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMassConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMassConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMassConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationMassConfigNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationMassConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationMassConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationMassConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationMassConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationMassConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationMassConfigNode), 324476616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationMassConfigNode_h_4055468614(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationMassConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationMassConfigNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
