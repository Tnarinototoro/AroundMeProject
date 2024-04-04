// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/GraphHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphHandle() {}
// Cross Module References
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphElement_NoRegister();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphEdgeHandle();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphHandle();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphIslandHandle();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphVertexHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayGraph();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphHandle;
class UScriptStruct* FGraphHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphHandle, (UObject*)Z_Construct_UPackage__Script_GameplayGraph(), TEXT("GraphHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GraphHandle.OuterSingleton;
}
template<> GAMEPLAYGRAPH_API UScriptStruct* StaticStruct<FGraphHandle>()
{
	return FGraphHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGraphHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_UniqueIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Element;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * For persistence, every node in a graph is given a unique index.\n * A FGraphHandle encapsulates that index to make it easy to go from\n * the index to the node and vice versa.\n */" },
		{ "ModuleRelativePath", "Public/Graph/GraphHandle.h" },
		{ "ToolTip", "For persistence, every node in a graph is given a unique index.\nA FGraphHandle encapsulates that index to make it easy to go from\nthe index to the node and vice versa." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphHandle_Statics::NewProp_UniqueIndex_MetaData[] = {
		{ "Comment", "/** Unique identifier within a graph. */" },
		{ "ModuleRelativePath", "Public/Graph/GraphHandle.h" },
		{ "ToolTip", "Unique identifier within a graph." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGraphHandle_Statics::NewProp_UniqueIndex = { "UniqueIndex", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphHandle, UniqueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphHandle_Statics::NewProp_UniqueIndex_MetaData), Z_Construct_UScriptStruct_FGraphHandle_Statics::NewProp_UniqueIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphHandle_Statics::NewProp_Element_MetaData[] = {
		{ "Comment", "/** Pointer to the graph */" },
		{ "ModuleRelativePath", "Public/Graph/GraphHandle.h" },
		{ "ToolTip", "Pointer to the graph" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGraphHandle_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphHandle, Element), Z_Construct_UClass_UGraphElement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphHandle_Statics::NewProp_Element_MetaData), Z_Construct_UScriptStruct_FGraphHandle_Statics::NewProp_Element_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphHandle_Statics::NewProp_UniqueIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphHandle_Statics::NewProp_Element,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayGraph,
		nullptr,
		&NewStructOps,
		"GraphHandle",
		Z_Construct_UScriptStruct_FGraphHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphHandle_Statics::PropPointers),
		sizeof(FGraphHandle),
		alignof(FGraphHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGraphHandle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphHandle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGraphHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_GraphHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphHandle.InnerSingleton, Z_Construct_UScriptStruct_FGraphHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GraphHandle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGraphVertexHandle>() == std::is_polymorphic<FGraphHandle>(), "USTRUCT FGraphVertexHandle cannot be polymorphic unless super FGraphHandle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphVertexHandle;
class UScriptStruct* FGraphVertexHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphVertexHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphVertexHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphVertexHandle, (UObject*)Z_Construct_UPackage__Script_GameplayGraph(), TEXT("GraphVertexHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GraphVertexHandle.OuterSingleton;
}
template<> GAMEPLAYGRAPH_API UScriptStruct* StaticStruct<FGraphVertexHandle>()
{
	return FGraphVertexHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGraphVertexHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphVertexHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/GraphHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphVertexHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphVertexHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphVertexHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayGraph,
		Z_Construct_UScriptStruct_FGraphHandle,
		&NewStructOps,
		"GraphVertexHandle",
		nullptr,
		0,
		sizeof(FGraphVertexHandle),
		alignof(FGraphVertexHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphVertexHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGraphVertexHandle_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGraphVertexHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_GraphVertexHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphVertexHandle.InnerSingleton, Z_Construct_UScriptStruct_FGraphVertexHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GraphVertexHandle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGraphEdgeHandle>() == std::is_polymorphic<FGraphHandle>(), "USTRUCT FGraphEdgeHandle cannot be polymorphic unless super FGraphHandle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphEdgeHandle;
class UScriptStruct* FGraphEdgeHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphEdgeHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphEdgeHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphEdgeHandle, (UObject*)Z_Construct_UPackage__Script_GameplayGraph(), TEXT("GraphEdgeHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GraphEdgeHandle.OuterSingleton;
}
template<> GAMEPLAYGRAPH_API UScriptStruct* StaticStruct<FGraphEdgeHandle>()
{
	return FGraphEdgeHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGraphEdgeHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphEdgeHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/GraphHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphEdgeHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphEdgeHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphEdgeHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayGraph,
		Z_Construct_UScriptStruct_FGraphHandle,
		&NewStructOps,
		"GraphEdgeHandle",
		nullptr,
		0,
		sizeof(FGraphEdgeHandle),
		alignof(FGraphEdgeHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphEdgeHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGraphEdgeHandle_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGraphEdgeHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_GraphEdgeHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphEdgeHandle.InnerSingleton, Z_Construct_UScriptStruct_FGraphEdgeHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GraphEdgeHandle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGraphIslandHandle>() == std::is_polymorphic<FGraphHandle>(), "USTRUCT FGraphIslandHandle cannot be polymorphic unless super FGraphHandle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphIslandHandle;
class UScriptStruct* FGraphIslandHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphIslandHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphIslandHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphIslandHandle, (UObject*)Z_Construct_UPackage__Script_GameplayGraph(), TEXT("GraphIslandHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GraphIslandHandle.OuterSingleton;
}
template<> GAMEPLAYGRAPH_API UScriptStruct* StaticStruct<FGraphIslandHandle>()
{
	return FGraphIslandHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGraphIslandHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphIslandHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/GraphHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphIslandHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphIslandHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphIslandHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayGraph,
		Z_Construct_UScriptStruct_FGraphHandle,
		&NewStructOps,
		"GraphIslandHandle",
		nullptr,
		0,
		sizeof(FGraphIslandHandle),
		alignof(FGraphIslandHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphIslandHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGraphIslandHandle_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGraphIslandHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_GraphIslandHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphIslandHandle.InnerSingleton, Z_Construct_UScriptStruct_FGraphIslandHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GraphIslandHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphHandle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphHandle_h_Statics::ScriptStructInfo[] = {
		{ FGraphHandle::StaticStruct, Z_Construct_UScriptStruct_FGraphHandle_Statics::NewStructOps, TEXT("GraphHandle"), &Z_Registration_Info_UScriptStruct_GraphHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphHandle), 1630679027U) },
		{ FGraphVertexHandle::StaticStruct, Z_Construct_UScriptStruct_FGraphVertexHandle_Statics::NewStructOps, TEXT("GraphVertexHandle"), &Z_Registration_Info_UScriptStruct_GraphVertexHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphVertexHandle), 190000482U) },
		{ FGraphEdgeHandle::StaticStruct, Z_Construct_UScriptStruct_FGraphEdgeHandle_Statics::NewStructOps, TEXT("GraphEdgeHandle"), &Z_Registration_Info_UScriptStruct_GraphEdgeHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphEdgeHandle), 341024850U) },
		{ FGraphIslandHandle::StaticStruct, Z_Construct_UScriptStruct_FGraphIslandHandle_Statics::NewStructOps, TEXT("GraphIslandHandle"), &Z_Registration_Info_UScriptStruct_GraphIslandHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphIslandHandle), 2737335059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphHandle_h_1709437198(TEXT("/Script/GameplayGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphHandle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
