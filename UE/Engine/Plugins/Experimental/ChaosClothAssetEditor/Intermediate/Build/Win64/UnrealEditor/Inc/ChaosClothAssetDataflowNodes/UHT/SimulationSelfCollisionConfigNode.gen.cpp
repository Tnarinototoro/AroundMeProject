// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationSelfCollisionConfigNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationSelfCollisionConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSimulationSelfCollisionConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationSelfCollisionConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationSelfCollisionConfigNode;
class UScriptStruct* FChaosClothAssetSimulationSelfCollisionConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationSelfCollisionConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationSelfCollisionConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationSelfCollisionConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationSelfCollisionConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationSelfCollisionConfigNode>()
{
	return FChaosClothAssetSimulationSelfCollisionConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSelfIntersections_MetaData[];
#endif
		static void NewProp_bUseSelfIntersections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSelfIntersections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Self-collision repulsion forces (point-face) properties configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationSelfCollisionConfigNode.h" },
		{ "ToolTip", "Self-collision repulsion forces (point-face) properties configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationSelfCollisionConfigNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionThickness_MetaData[] = {
		{ "Category", "Self-Collision Properties" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The radius of the spheres used in self collision (i.e., offset per side. total thickness of cloth is 2x this value). */" },
		{ "EditCondition", "bUseSelfCollisions" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationSelfCollisionConfigNode.h" },
		{ "ToolTip", "The radius of the spheres used in self collision (i.e., offset per side. total thickness of cloth is 2x this value)." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionThickness = { "SelfCollisionThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationSelfCollisionConfigNode, SelfCollisionThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionThickness_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionStiffness_MetaData[] = {
		{ "Category", "Self-Collision Properties" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The stiffness of the springs used to control self collision. */" },
		{ "EditCondition", "bUseSelfCollisions" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationSelfCollisionConfigNode.h" },
		{ "ToolTip", "The stiffness of the springs used to control self collision." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionStiffness = { "SelfCollisionStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationSelfCollisionConfigNode, SelfCollisionStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionStiffness_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionFriction_MetaData[] = {
		{ "Category", "Self-Collision Properties" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Friction coefficient for cloth - cloth interaction. */" },
		{ "EditCondition", "bUseSelfCollisions" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationSelfCollisionConfigNode.h" },
		{ "ToolTip", "Friction coefficient for cloth - cloth interaction." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionFriction = { "SelfCollisionFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationSelfCollisionConfigNode, SelfCollisionFriction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionFriction_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionFriction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_bUseSelfIntersections_MetaData[] = {
		{ "Category", "Self-Collision Properties" },
		{ "Comment", "/** Enable self intersection resolution. This will try to fix any cloth intersections that are not handled by collision repulsions. */" },
		{ "EditCondition", "bUseSelfCollisions" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationSelfCollisionConfigNode.h" },
		{ "ToolTip", "Enable self intersection resolution. This will try to fix any cloth intersections that are not handled by collision repulsions." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_bUseSelfIntersections_SetBit(void* Obj)
	{
		((FChaosClothAssetSimulationSelfCollisionConfigNode*)Obj)->bUseSelfIntersections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_bUseSelfIntersections = { "bUseSelfIntersections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetSimulationSelfCollisionConfigNode), &Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_bUseSelfIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_bUseSelfIntersections_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_bUseSelfIntersections_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_SelfCollisionFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewProp_bUseSelfIntersections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationSelfCollisionConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationSelfCollisionConfigNode),
		alignof(FChaosClothAssetSimulationSelfCollisionConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationSelfCollisionConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationSelfCollisionConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationSelfCollisionConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationSelfCollisionConfigNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationSelfCollisionConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationSelfCollisionConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationSelfCollisionConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationSelfCollisionConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationSelfCollisionConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationSelfCollisionConfigNode), 4245179745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationSelfCollisionConfigNode_h_3704506161(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationSelfCollisionConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationSelfCollisionConfigNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
