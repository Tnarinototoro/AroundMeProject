// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SimulationVelocityScaleConfigNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationVelocityScaleConfigNode() {}
// Cross Module References
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSimulationVelocityScaleConfigNode>() == std::is_polymorphic<FChaosClothAssetSimulationBaseConfigNode>(), "USTRUCT FChaosClothAssetSimulationVelocityScaleConfigNode cannot be polymorphic unless super FChaosClothAssetSimulationBaseConfigNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationVelocityScaleConfigNode;
class UScriptStruct* FChaosClothAssetSimulationVelocityScaleConfigNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationVelocityScaleConfigNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationVelocityScaleConfigNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSimulationVelocityScaleConfigNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationVelocityScaleConfigNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSimulationVelocityScaleConfigNode>()
{
	return FChaosClothAssetSimulationVelocityScaleConfigNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FictitiousAngularScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FictitiousAngularScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Velocity scale properties configuration node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationVelocityScaleConfigNode.h" },
		{ "ToolTip", "Velocity scale properties configuration node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSimulationVelocityScaleConfigNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_LinearVelocityScale_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The amount of linear velocities sent to the local cloth space from the reference bone\n\x09 * (the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationVelocityScaleConfigNode.h" },
		{ "ToolTip", "The amount of linear velocities sent to the local cloth space from the reference bone\n(the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_LinearVelocityScale = { "LinearVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationVelocityScaleConfigNode, LinearVelocityScale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_LinearVelocityScale_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_LinearVelocityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_AngularVelocityScale_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The amount of angular velocities sent to the local cloth space from the reference bone\n\x09 * (the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationVelocityScaleConfigNode.h" },
		{ "ToolTip", "The amount of angular velocities sent to the local cloth space from the reference bone\n(the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_AngularVelocityScale = { "AngularVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationVelocityScaleConfigNode, AngularVelocityScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_AngularVelocityScale_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_AngularVelocityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_FictitiousAngularScale_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The portion of the angular velocity that is used to calculate the strength of all fictitious forces (e.g. centrifugal force).\n\x09 * This parameter is only having an effect on the portion of the reference bone's angular velocity that has been removed from the\n\x09 * simulation via the Angular Velocity Scale parameter. This means it has no effect when AngularVelocityScale is set to 1 in which\n\x09 * case the cloth is simulated with full world space angular velocities and subjected to the true physical world inertial forces.\n\x09 * Values range from 0 to 2, with 0 showing no centrifugal effect, 1 full centrifugal effect, and 2 an overdriven centrifugal effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SimulationVelocityScaleConfigNode.h" },
		{ "ToolTip", "The portion of the angular velocity that is used to calculate the strength of all fictitious forces (e.g. centrifugal force).\nThis parameter is only having an effect on the portion of the reference bone's angular velocity that has been removed from the\nsimulation via the Angular Velocity Scale parameter. This means it has no effect when AngularVelocityScale is set to 1 in which\ncase the cloth is simulated with full world space angular velocities and subjected to the true physical world inertial forces.\nValues range from 0 to 2, with 0 showing no centrifugal effect, 1 full centrifugal effect, and 2 an overdriven centrifugal effect." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_FictitiousAngularScale = { "FictitiousAngularScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSimulationVelocityScaleConfigNode, FictitiousAngularScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_FictitiousAngularScale_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_FictitiousAngularScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_LinearVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_AngularVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewProp_FictitiousAngularScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationBaseConfigNode,
		&NewStructOps,
		"ChaosClothAssetSimulationVelocityScaleConfigNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSimulationVelocityScaleConfigNode),
		alignof(FChaosClothAssetSimulationVelocityScaleConfigNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationVelocityScaleConfigNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationVelocityScaleConfigNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationVelocityScaleConfigNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationVelocityScaleConfigNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationVelocityScaleConfigNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSimulationVelocityScaleConfigNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSimulationVelocityScaleConfigNode_Statics::NewStructOps, TEXT("ChaosClothAssetSimulationVelocityScaleConfigNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSimulationVelocityScaleConfigNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSimulationVelocityScaleConfigNode), 2485864795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationVelocityScaleConfigNode_h_2898903006(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationVelocityScaleConfigNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SimulationVelocityScaleConfigNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
