// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Graph.h"
#include "Graph/GraphEdge.h"
#include "Graph/GraphHandle.h"
#include "Graph/GraphIsland.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraph() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraph();
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraph_NoRegister();
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphEdge_NoRegister();
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphIsland_NoRegister();
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphVertex_NoRegister();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphEdgeHandle();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphIslandHandle();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphProperties();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphVertexHandle();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FSerializableGraph();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedEdgeData();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedIslandData();
	UPackage* Z_Construct_UPackage__Script_GameplayGraph();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphProperties;
class UScriptStruct* FGraphProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphProperties, (UObject*)Z_Construct_UPackage__Script_GameplayGraph(), TEXT("GraphProperties"));
	}
	return Z_Registration_Info_UScriptStruct_GraphProperties.OuterSingleton;
}
template<> GAMEPLAYGRAPH_API UScriptStruct* StaticStruct<FGraphProperties>()
{
	return FGraphProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGraphProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateIslands_MetaData[];
#endif
		static void NewProp_bGenerateIslands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateIslands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/Graph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphProperties_Statics::NewProp_bGenerateIslands_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Graph.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGraphProperties_Statics::NewProp_bGenerateIslands_SetBit(void* Obj)
	{
		((FGraphProperties*)Obj)->bGenerateIslands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGraphProperties_Statics::NewProp_bGenerateIslands = { "bGenerateIslands", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGraphProperties), &Z_Construct_UScriptStruct_FGraphProperties_Statics::NewProp_bGenerateIslands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProperties_Statics::NewProp_bGenerateIslands_MetaData), Z_Construct_UScriptStruct_FGraphProperties_Statics::NewProp_bGenerateIslands_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphProperties_Statics::NewProp_bGenerateIslands,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayGraph,
		nullptr,
		&NewStructOps,
		"GraphProperties",
		Z_Construct_UScriptStruct_FGraphProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProperties_Statics::PropPointers),
		sizeof(FGraphProperties),
		alignof(FGraphProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGraphProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGraphProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_GraphProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphProperties.InnerSingleton, Z_Construct_UScriptStruct_FGraphProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GraphProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SerializableGraph;
class UScriptStruct* FSerializableGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SerializableGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SerializableGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSerializableGraph, (UObject*)Z_Construct_UPackage__Script_GameplayGraph(), TEXT("SerializableGraph"));
	}
	return Z_Registration_Info_UScriptStruct_SerializableGraph.OuterSingleton;
}
template<> GAMEPLAYGRAPH_API UScriptStruct* StaticStruct<FSerializableGraph>()
{
	return FSerializableGraph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSerializableGraph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Edges;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Islands_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Islands_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Islands_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Islands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializableGraph_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The minimum amount of data we need to serialize to be able to reconstruct the graph as it was.\n * Note that classes that inherit from UGraph and its elements will no doubt want to extend the graph\n * with actual information on each node/edge/island. In that case, they should extend FSerializableGraph\n * to contain the extra information per graph handle. Furthermore, they'll need to extend UGraph to have\n * its own typed serialization save/load functions that call the base functions in UGraph first.\n */" },
		{ "ModuleRelativePath", "Public/Graph/Graph.h" },
		{ "ToolTip", "The minimum amount of data we need to serialize to be able to reconstruct the graph as it was.\nNote that classes that inherit from UGraph and its elements will no doubt want to extend the graph\nwith actual information on each node/edge/island. In that case, they should extend FSerializableGraph\nto contain the extra information per graph handle. Furthermore, they'll need to extend UGraph to have\nits own typed serialization save/load functions that call the base functions in UGraph first." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSerializableGraph>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Graph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSerializableGraph, Properties), Z_Construct_UScriptStruct_FGraphProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Properties_MetaData), Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Properties_MetaData) }; // 1607134723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGraphVertexHandle, METADATA_PARAMS(0, nullptr) }; // 190000482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Graph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSerializableGraph, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Vertices_MetaData), Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Vertices_MetaData) }; // 190000482
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Edges_ValueProp = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSerializedEdgeData, METADATA_PARAMS(0, nullptr) }; // 1015467348
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Edges_Key_KeyProp = { "Edges_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGraphEdgeHandle, METADATA_PARAMS(0, nullptr) }; // 341024850
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Edges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Graph.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSerializableGraph, Edges), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Edges_MetaData), Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Edges_MetaData) }; // 341024850 1015467348
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Islands_ValueProp = { "Islands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSerializedIslandData, METADATA_PARAMS(0, nullptr) }; // 3803153303
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Islands_Key_KeyProp = { "Islands_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGraphIslandHandle, METADATA_PARAMS(0, nullptr) }; // 2737335059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Islands_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Graph.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Islands = { "Islands", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSerializableGraph, Islands), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Islands_MetaData), Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Islands_MetaData) }; // 2737335059 3803153303
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializableGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Edges_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Edges_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Edges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Islands_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Islands_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewProp_Islands,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSerializableGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayGraph,
		nullptr,
		&NewStructOps,
		"SerializableGraph",
		Z_Construct_UScriptStruct_FSerializableGraph_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializableGraph_Statics::PropPointers),
		sizeof(FSerializableGraph),
		alignof(FSerializableGraph),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializableGraph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSerializableGraph_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializableGraph_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSerializableGraph()
	{
		if (!Z_Registration_Info_UScriptStruct_SerializableGraph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SerializableGraph.InnerSingleton, Z_Construct_UScriptStruct_FSerializableGraph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SerializableGraph.InnerSingleton;
	}
	void UGraph::StaticRegisterNativesUGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraph);
	UClass* Z_Construct_UClass_UGraph_NoRegister()
	{
		return UGraph::StaticClass();
	}
	struct Z_Construct_UClass_UGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Vertices_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Edges_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Edges;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Islands_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Islands_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Islands_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Islands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraph_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UGraph is a collection of nodes and edges. This graph representation\n * is meant to be easily integrable into gameplay systems in the Unreal Engine.\n * \n * Conceptually, you can imagine that a graph is meant to easily represent relationships\n * so we can answer queries such as:\n *\x09- Are these two nodes connected to each other?\n *  - How far away are these two nodes?\n *  - Who is the closest node that has XYZ?\n *  - etc.\n * \n * UGraph provides an interface to be able to run such queries. However, ultimately what\n * makes the graph useful is not only the relationships represented by the edges, but also\n * the data that is stored on each node and each edge. Depending on what the user wants to\n * represent, the user will have to subclass UGraphVertex and UGraphEdge to hold that data.\n * \n * As the user adds nodes and edges into the graph, they will also be implicitly creating \"islands\"\n * (i.e. a connected component in the graph). Each graph may have multiple islands. Users\n * of the graph can disable the island detection/creation if needed.\n * \n * Note that this is an UNDIRECTED GRAPH.\n */" },
		{ "IncludePath", "Graph/Graph.h" },
		{ "ModuleRelativePath", "Public/Graph/Graph.h" },
		{ "ToolTip", "A UGraph is a collection of nodes and edges. This graph representation\nis meant to be easily integrable into gameplay systems in the Unreal Engine.\n\nConceptually, you can imagine that a graph is meant to easily represent relationships\nso we can answer queries such as:\n    - Are these two nodes connected to each other?\n - How far away are these two nodes?\n - Who is the closest node that has XYZ?\n - etc.\n\nUGraph provides an interface to be able to run such queries. However, ultimately what\nmakes the graph useful is not only the relationships represented by the edges, but also\nthe data that is stored on each node and each edge. Depending on what the user wants to\nrepresent, the user will have to subclass UGraphVertex and UGraphEdge to hold that data.\n\nAs the user adds nodes and edges into the graph, they will also be implicitly creating \"islands\"\n(i.e. a connected component in the graph). Each graph may have multiple islands. Users\nof the graph can disable the island detection/creation if needed.\n\nNote that this is an UNDIRECTED GRAPH." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGraph_Statics::NewProp_Vertices_ValueProp = { "Vertices", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGraphVertex_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraph_Statics::NewProp_Vertices_Key_KeyProp = { "Vertices_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGraphVertexHandle, METADATA_PARAMS(0, nullptr) }; // 190000482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraph_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Graph.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGraph_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraph, Vertices), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraph_Statics::NewProp_Vertices_MetaData), Z_Construct_UClass_UGraph_Statics::NewProp_Vertices_MetaData) }; // 190000482
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGraph_Statics::NewProp_Edges_ValueProp = { "Edges", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGraphEdge_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraph_Statics::NewProp_Edges_Key_KeyProp = { "Edges_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGraphEdgeHandle, METADATA_PARAMS(0, nullptr) }; // 341024850
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraph_Statics::NewProp_Edges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Graph.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGraph_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraph, Edges), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraph_Statics::NewProp_Edges_MetaData), Z_Construct_UClass_UGraph_Statics::NewProp_Edges_MetaData) }; // 341024850
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGraph_Statics::NewProp_Islands_ValueProp = { "Islands", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UGraphIsland_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraph_Statics::NewProp_Islands_Key_KeyProp = { "Islands_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGraphIslandHandle, METADATA_PARAMS(0, nullptr) }; // 2737335059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraph_Statics::NewProp_Islands_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Graph.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGraph_Statics::NewProp_Islands = { "Islands", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraph, Islands), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraph_Statics::NewProp_Islands_MetaData), Z_Construct_UClass_UGraph_Statics::NewProp_Islands_MetaData) }; // 2737335059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraph_Statics::NewProp_Vertices_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraph_Statics::NewProp_Vertices_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraph_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraph_Statics::NewProp_Edges_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraph_Statics::NewProp_Edges_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraph_Statics::NewProp_Edges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraph_Statics::NewProp_Islands_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraph_Statics::NewProp_Islands_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraph_Statics::NewProp_Islands,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraph_Statics::ClassParams = {
		&UGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGraph()
	{
		if (!Z_Registration_Info_UClass_UGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraph.OuterSingleton, Z_Construct_UClass_UGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGraph.OuterSingleton;
	}
	template<> GAMEPLAYGRAPH_API UClass* StaticClass<UGraph>()
	{
		return UGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGraph);
	UGraph::~UGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_Statics::ScriptStructInfo[] = {
		{ FGraphProperties::StaticStruct, Z_Construct_UScriptStruct_FGraphProperties_Statics::NewStructOps, TEXT("GraphProperties"), &Z_Registration_Info_UScriptStruct_GraphProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphProperties), 1607134723U) },
		{ FSerializableGraph::StaticStruct, Z_Construct_UScriptStruct_FSerializableGraph_Statics::NewStructOps, TEXT("SerializableGraph"), &Z_Registration_Info_UScriptStruct_SerializableGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSerializableGraph), 234269963U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGraph, UGraph::StaticClass, TEXT("UGraph"), &Z_Registration_Info_UClass_UGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraph), 2607306430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_2328464240(TEXT("/Script/GameplayGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
