// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/AddWeightMapNode.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddWeightMapNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetAddWeightMapNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetAddWeightMapNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetAddWeightMapNode;
class UScriptStruct* FChaosClothAssetAddWeightMapNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetAddWeightMapNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetAddWeightMapNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetAddWeightMapNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetAddWeightMapNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetAddWeightMapNode>()
{
	return FChaosClothAssetAddWeightMapNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexWeights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Painted weight map attributes node. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/AddWeightMapNode.h" },
		{ "ToolTip", "Painted weight map attributes node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetAddWeightMapNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Dataflowinput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/AddWeightMapNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetAddWeightMapNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Add Weight Map" },
		{ "Comment", "/** The name to be set as a weight map attribute. */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/AddWeightMapNode.h" },
		{ "ToolTip", "The name to be set as a weight map attribute." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetAddWeightMapNode, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_VertexWeights_Inner = { "VertexWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_VertexWeights_MetaData[] = {
		{ "Comment", "// Mutable so that it can be name checked in the evaluate function\n" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/AddWeightMapNode.h" },
		{ "ToolTip", "Mutable so that it can be name checked in the evaluate function" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_VertexWeights = { "VertexWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetAddWeightMapNode, VertexWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_VertexWeights_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_VertexWeights_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_VertexWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewProp_VertexWeights,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetAddWeightMapNode",
		Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::PropPointers),
		sizeof(FChaosClothAssetAddWeightMapNode),
		alignof(FChaosClothAssetAddWeightMapNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetAddWeightMapNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetAddWeightMapNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetAddWeightMapNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AddWeightMapNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AddWeightMapNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetAddWeightMapNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetAddWeightMapNode_Statics::NewStructOps, TEXT("ChaosClothAssetAddWeightMapNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetAddWeightMapNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetAddWeightMapNode), 2544308944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AddWeightMapNode_h_819063704(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AddWeightMapNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_AddWeightMapNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
