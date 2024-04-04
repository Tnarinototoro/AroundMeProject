// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ReverseNormalsNode.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverseNormalsNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetReverseNormalsNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetReverseNormalsNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetReverseNormalsNode;
class UScriptStruct* FChaosClothAssetReverseNormalsNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetReverseNormalsNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetReverseNormalsNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetReverseNormalsNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetReverseNormalsNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetReverseNormalsNode>()
{
	return FChaosClothAssetReverseNormalsNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimPatterns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimPatterns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SimPatterns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseSimMeshNormals_MetaData[];
#endif
		static void NewProp_bReverseSimMeshNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseSimMeshNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseSimMeshWindingOrder_MetaData[];
#endif
		static void NewProp_bReverseSimMeshWindingOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseSimMeshWindingOrder;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenderPatterns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderPatterns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderPatterns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseRenderMeshNormals_MetaData[];
#endif
		static void NewProp_bReverseRenderMeshNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseRenderMeshNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseRenderMeshWindingOrder_MetaData[];
#endif
		static void NewProp_bReverseRenderMeshWindingOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseRenderMeshWindingOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Reverse the geometry's normals or/and winding order of the simulation or/and render meshes stored in the cloth collection. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ReverseNormalsNode.h" },
		{ "ToolTip", "Reverse the geometry's normals or/and winding order of the simulation or/and render meshes stored in the cloth collection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetReverseNormalsNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Dataflowinput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ReverseNormalsNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetReverseNormalsNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_SimPatterns_Inner = { "SimPatterns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_SimPatterns_MetaData[] = {
		{ "Category", "Reverse Normals|Simulation Mesh" },
		{ "Comment", "/** List of sim patterns to apply the operation on. All patterns will be used if left empty. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ReverseNormalsNode.h" },
		{ "ToolTip", "List of sim patterns to apply the operation on. All patterns will be used if left empty." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_SimPatterns = { "SimPatterns", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetReverseNormalsNode, SimPatterns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_SimPatterns_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_SimPatterns_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshNormals_MetaData[] = {
		{ "Category", "Reverse Normals|Simulation Mesh" },
		{ "Comment", "/** Whether to reverse the simulation mesh normals. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ReverseNormalsNode.h" },
		{ "ToolTip", "Whether to reverse the simulation mesh normals." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshNormals_SetBit(void* Obj)
	{
		((FChaosClothAssetReverseNormalsNode*)Obj)->bReverseSimMeshNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshNormals = { "bReverseSimMeshNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetReverseNormalsNode), &Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshNormals_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshNormals_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshWindingOrder_MetaData[] = {
		{ "Category", "Reverse Normals|Simulation Mesh" },
		{ "Comment", "/** Whether to reverse the simulation mesh triangles' winding order. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ReverseNormalsNode.h" },
		{ "ToolTip", "Whether to reverse the simulation mesh triangles' winding order." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshWindingOrder_SetBit(void* Obj)
	{
		((FChaosClothAssetReverseNormalsNode*)Obj)->bReverseSimMeshWindingOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshWindingOrder = { "bReverseSimMeshWindingOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetReverseNormalsNode), &Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshWindingOrder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshWindingOrder_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshWindingOrder_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_RenderPatterns_Inner = { "RenderPatterns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_RenderPatterns_MetaData[] = {
		{ "Category", "Reverse Normals|Render Mesh" },
		{ "Comment", "/** List of render patterns to apply the operation on. All patterns will be used if left empty. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ReverseNormalsNode.h" },
		{ "ToolTip", "List of render patterns to apply the operation on. All patterns will be used if left empty." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_RenderPatterns = { "RenderPatterns", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetReverseNormalsNode, RenderPatterns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_RenderPatterns_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_RenderPatterns_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshNormals_MetaData[] = {
		{ "Category", "Reverse Normals|Render Mesh" },
		{ "Comment", "/** Whether to reverse the render mesh normals. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ReverseNormalsNode.h" },
		{ "ToolTip", "Whether to reverse the render mesh normals." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshNormals_SetBit(void* Obj)
	{
		((FChaosClothAssetReverseNormalsNode*)Obj)->bReverseRenderMeshNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshNormals = { "bReverseRenderMeshNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetReverseNormalsNode), &Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshNormals_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshNormals_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshWindingOrder_MetaData[] = {
		{ "Category", "Reverse Normals|Render Mesh" },
		{ "Comment", "/** Whether to reverse the render mesh triangles' winding order. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ReverseNormalsNode.h" },
		{ "ToolTip", "Whether to reverse the render mesh triangles' winding order." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshWindingOrder_SetBit(void* Obj)
	{
		((FChaosClothAssetReverseNormalsNode*)Obj)->bReverseRenderMeshWindingOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshWindingOrder = { "bReverseRenderMeshWindingOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetReverseNormalsNode), &Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshWindingOrder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshWindingOrder_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshWindingOrder_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_SimPatterns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_SimPatterns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseSimMeshWindingOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_RenderPatterns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_RenderPatterns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewProp_bReverseRenderMeshWindingOrder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetReverseNormalsNode",
		Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::PropPointers),
		sizeof(FChaosClothAssetReverseNormalsNode),
		alignof(FChaosClothAssetReverseNormalsNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetReverseNormalsNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetReverseNormalsNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetReverseNormalsNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_ReverseNormalsNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_ReverseNormalsNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetReverseNormalsNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetReverseNormalsNode_Statics::NewStructOps, TEXT("ChaosClothAssetReverseNormalsNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetReverseNormalsNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetReverseNormalsNode), 113293244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_ReverseNormalsNode_h_1151175385(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_ReverseNormalsNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_ReverseNormalsNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
