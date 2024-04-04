// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/TerminalNode.h"
#include "ChaosClothAsset/ClothLodTransitionDataCache.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerminalNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode();
	CHAOSCLOTHASSETENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTerminalNode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetTerminalNode>() == std::is_polymorphic<FDataflowTerminalNode>(), "USTRUCT FChaosClothAssetTerminalNode cannot be polymorphic unless super FDataflowTerminalNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetTerminalNode;
class UScriptStruct* FChaosClothAssetTerminalNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetTerminalNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetTerminalNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetTerminalNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetTerminalNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetTerminalNode>()
{
	return FChaosClothAssetTerminalNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionLod0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionLod0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionLod1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionLod1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionLod2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionLod2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionLod3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionLod3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionLod4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionLod4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionLod5_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionLod5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLods_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLods;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODTransitionDataCache_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODTransitionDataCache_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODTransitionDataCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Cloth terminal node to generate a cloth asset from a cloth collection. */" },
		{ "DataflowCloth", "" },
		{ "DataflowTerminal", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TerminalNode.h" },
		{ "ToolTip", "Cloth terminal node to generate a cloth asset from a cloth collection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetTerminalNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod0_MetaData[] = {
		{ "Comment", "/** LOD 0 input, right click on the node and add pins to add more LODs. */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Collection LOD 0" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TerminalNode.h" },
		{ "ToolTip", "LOD 0 input, right click on the node and add pins to add more LODs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod0 = { "CollectionLod0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTerminalNode, CollectionLod0), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod0_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod0_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod1_MetaData[] = {
		{ "Comment", "/** LOD 1 input, right click on the node and add pins to add more LODs. */" },
		{ "DisplayName", "Collection LOD 1" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TerminalNode.h" },
		{ "ToolTip", "LOD 1 input, right click on the node and add pins to add more LODs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod1 = { "CollectionLod1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTerminalNode, CollectionLod1), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod1_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod1_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod2_MetaData[] = {
		{ "Comment", "/** LOD 2 input, right click on the node and add pins to add more LODs. */" },
		{ "DisplayName", "Collection LOD 2" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TerminalNode.h" },
		{ "ToolTip", "LOD 2 input, right click on the node and add pins to add more LODs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod2 = { "CollectionLod2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTerminalNode, CollectionLod2), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod2_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod2_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod3_MetaData[] = {
		{ "Comment", "/** LOD 3 input, right click on the node and add pins to add more LODs. */" },
		{ "DisplayName", "Collection LOD 3" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TerminalNode.h" },
		{ "ToolTip", "LOD 3 input, right click on the node and add pins to add more LODs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod3 = { "CollectionLod3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTerminalNode, CollectionLod3), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod3_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod3_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod4_MetaData[] = {
		{ "Comment", "/** LOD 4 input, right click on the node and add pins to add more LODs. */" },
		{ "DisplayName", "Collection LOD 4" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TerminalNode.h" },
		{ "ToolTip", "LOD 4 input, right click on the node and add pins to add more LODs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod4 = { "CollectionLod4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTerminalNode, CollectionLod4), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod4_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod4_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod5_MetaData[] = {
		{ "Comment", "/** LOD 5 input, right click on the node and add pins to add more LODs. */" },
		{ "DisplayName", "Collection LOD 5" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TerminalNode.h" },
		{ "ToolTip", "LOD 5 input, right click on the node and add pins to add more LODs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod5 = { "CollectionLod5", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTerminalNode, CollectionLod5), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod5_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod5_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_NumLods_MetaData[] = {
		{ "Comment", "/** The number of LODs currently exposed to the node UI. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TerminalNode.h" },
		{ "ToolTip", "The number of LODs currently exposed to the node UI." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_NumLods = { "NumLods", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTerminalNode, NumLods), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_NumLods_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_NumLods_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_LODTransitionDataCache_Inner = { "LODTransitionDataCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache, METADATA_PARAMS(0, nullptr) }; // 1913156591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_LODTransitionDataCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/TerminalNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_LODTransitionDataCache = { "LODTransitionDataCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetTerminalNode, LODTransitionDataCache), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_LODTransitionDataCache_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_LODTransitionDataCache_MetaData) }; // 1913156591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_CollectionLod5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_NumLods,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_LODTransitionDataCache_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewProp_LODTransitionDataCache,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowTerminalNode,
		&NewStructOps,
		"ChaosClothAssetTerminalNode",
		Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::PropPointers),
		sizeof(FChaosClothAssetTerminalNode),
		alignof(FChaosClothAssetTerminalNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetTerminalNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetTerminalNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetTerminalNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TerminalNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TerminalNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetTerminalNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetTerminalNode_Statics::NewStructOps, TEXT("ChaosClothAssetTerminalNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetTerminalNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetTerminalNode), 3456818543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TerminalNode_h_1730313940(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TerminalNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_TerminalNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
