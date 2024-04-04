// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/MergeClothCollectionsNode.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMergeClothCollectionsNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetMergeClothCollectionsNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetMergeClothCollectionsNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetMergeClothCollectionsNode;
class UScriptStruct* FChaosClothAssetMergeClothCollectionsNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetMergeClothCollectionsNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetMergeClothCollectionsNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetMergeClothCollectionsNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetMergeClothCollectionsNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetMergeClothCollectionsNode>()
{
	return FChaosClothAssetMergeClothCollectionsNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection5_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInputs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Merge multiple cloth collections into a single cloth collection of multiple patterns. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/MergeClothCollectionsNode.h" },
		{ "ToolTip", "Merge multiple cloth collections into a single cloth collection of multiple patterns." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetMergeClothCollectionsNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Input 0, right click on the node and add pins to add more merge inputs. */" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/MergeClothCollectionsNode.h" },
		{ "ToolTip", "Input 0, right click on the node and add pins to add more merge inputs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetMergeClothCollectionsNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection1_MetaData[] = {
		{ "Comment", "/** Input 1, right click on the node and add pins to add more merge inputs. */" },
		{ "DisplayName", "Collection 1" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/MergeClothCollectionsNode.h" },
		{ "ToolTip", "Input 1, right click on the node and add pins to add more merge inputs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection1 = { "Collection1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetMergeClothCollectionsNode, Collection1), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection1_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection1_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection2_MetaData[] = {
		{ "Comment", "/** Input 2, right click on the node and add pins to add more merge inputs. */" },
		{ "DisplayName", "Collection 2" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/MergeClothCollectionsNode.h" },
		{ "ToolTip", "Input 2, right click on the node and add pins to add more merge inputs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection2 = { "Collection2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetMergeClothCollectionsNode, Collection2), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection2_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection2_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection3_MetaData[] = {
		{ "Comment", "/** Input 3, right click on the node and add pins to add more merge inputs. */" },
		{ "DisplayName", "Collection 3" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/MergeClothCollectionsNode.h" },
		{ "ToolTip", "Input 3, right click on the node and add pins to add more merge inputs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection3 = { "Collection3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetMergeClothCollectionsNode, Collection3), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection3_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection3_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection4_MetaData[] = {
		{ "Comment", "/** Input 4, right click on the node and add pins to add more merge inputs. */" },
		{ "DisplayName", "Collection 4" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/MergeClothCollectionsNode.h" },
		{ "ToolTip", "Input 4, right click on the node and add pins to add more merge inputs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection4 = { "Collection4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetMergeClothCollectionsNode, Collection4), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection4_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection4_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection5_MetaData[] = {
		{ "Comment", "/** Input 5, right click on the node and add pins to add more merge inputs. */" },
		{ "DisplayName", "Collection 5" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/MergeClothCollectionsNode.h" },
		{ "ToolTip", "Input 5, right click on the node and add pins to add more merge inputs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection5 = { "Collection5", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetMergeClothCollectionsNode, Collection5), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection5_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection5_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_NumInputs_MetaData[] = {
		{ "Comment", "/** The number of inputs currently exposed to the node UI. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/MergeClothCollectionsNode.h" },
		{ "ToolTip", "The number of inputs currently exposed to the node UI." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_NumInputs = { "NumInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetMergeClothCollectionsNode, NumInputs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_NumInputs_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_NumInputs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_Collection5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewProp_NumInputs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetMergeClothCollectionsNode",
		Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::PropPointers),
		sizeof(FChaosClothAssetMergeClothCollectionsNode),
		alignof(FChaosClothAssetMergeClothCollectionsNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetMergeClothCollectionsNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetMergeClothCollectionsNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetMergeClothCollectionsNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_MergeClothCollectionsNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_MergeClothCollectionsNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetMergeClothCollectionsNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetMergeClothCollectionsNode_Statics::NewStructOps, TEXT("ChaosClothAssetMergeClothCollectionsNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetMergeClothCollectionsNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetMergeClothCollectionsNode), 3069283868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_MergeClothCollectionsNode_h_596073021(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_MergeClothCollectionsNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_MergeClothCollectionsNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
