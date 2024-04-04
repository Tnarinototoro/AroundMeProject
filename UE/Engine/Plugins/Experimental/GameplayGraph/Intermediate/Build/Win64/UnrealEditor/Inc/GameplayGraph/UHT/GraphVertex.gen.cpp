// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/GraphVertex.h"
#include "Graph/GraphHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphVertex() {}
// Cross Module References
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphElement();
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphVertex();
	GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphVertex_NoRegister();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphEdgeHandle();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphIslandHandle();
	GAMEPLAYGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphVertexHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayGraph();
// End Cross Module References
	void UGraphVertex::StaticRegisterNativesUGraphVertex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphVertex);
	UClass* Z_Construct_UClass_UGraphVertex_NoRegister()
	{
		return UGraphVertex::StaticClass();
	}
	struct Z_Construct_UClass_UGraphVertex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Edges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentIsland_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentIsland;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGraphVertex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGraphElement,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphVertex_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphVertex_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/GraphVertex.h" },
		{ "ModuleRelativePath", "Public/Graph/GraphVertex.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphVertex_Statics::NewProp_Edges_ValueProp = { "Edges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGraphEdgeHandle, METADATA_PARAMS(0, nullptr) }; // 341024850
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphVertex_Statics::NewProp_Edges_Key_KeyProp = { "Edges_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGraphVertexHandle, METADATA_PARAMS(0, nullptr) }; // 190000482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphVertex_Statics::NewProp_Edges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/GraphVertex.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGraphVertex_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphVertex, Edges), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphVertex_Statics::NewProp_Edges_MetaData), Z_Construct_UClass_UGraphVertex_Statics::NewProp_Edges_MetaData) }; // 190000482 341024850
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphVertex_Statics::NewProp_ParentIsland_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/GraphVertex.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphVertex_Statics::NewProp_ParentIsland = { "ParentIsland", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGraphVertex, ParentIsland), Z_Construct_UScriptStruct_FGraphIslandHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphVertex_Statics::NewProp_ParentIsland_MetaData), Z_Construct_UClass_UGraphVertex_Statics::NewProp_ParentIsland_MetaData) }; // 2737335059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraphVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphVertex_Statics::NewProp_Edges_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphVertex_Statics::NewProp_Edges_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphVertex_Statics::NewProp_Edges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphVertex_Statics::NewProp_ParentIsland,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGraphVertex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphVertex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphVertex_Statics::ClassParams = {
		&UGraphVertex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGraphVertex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGraphVertex_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphVertex_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphVertex_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphVertex_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGraphVertex()
	{
		if (!Z_Registration_Info_UClass_UGraphVertex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphVertex.OuterSingleton, Z_Construct_UClass_UGraphVertex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGraphVertex.OuterSingleton;
	}
	template<> GAMEPLAYGRAPH_API UClass* StaticClass<UGraphVertex>()
	{
		return UGraphVertex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphVertex);
	UGraphVertex::~UGraphVertex() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGraphVertex, UGraphVertex::StaticClass, TEXT("UGraphVertex"), &Z_Registration_Info_UClass_UGraphVertex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphVertex), 1848793166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h_1655290563(TEXT("/Script/GameplayGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
