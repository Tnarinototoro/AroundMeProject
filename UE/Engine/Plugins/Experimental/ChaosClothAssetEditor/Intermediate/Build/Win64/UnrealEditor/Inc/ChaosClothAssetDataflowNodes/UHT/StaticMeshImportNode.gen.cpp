// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/StaticMeshImportNode.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshImportNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetStaticMeshImportNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetStaticMeshImportNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetStaticMeshImportNode;
class UScriptStruct* FChaosClothAssetStaticMeshImportNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetStaticMeshImportNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetStaticMeshImportNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetStaticMeshImportNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetStaticMeshImportNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetStaticMeshImportNode>()
{
	return FChaosClothAssetStaticMeshImportNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportSimMesh_MetaData[];
#endif
		static void NewProp_bImportSimMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportSimMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportRenderMesh_MetaData[];
#endif
		static void NewProp_bImportRenderMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportRenderMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Import a static mesh asset into the cloth collection simulation and/or render mesh containers. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/StaticMeshImportNode.h" },
		{ "ToolTip", "Import a static mesh asset into the cloth collection simulation and/or render mesh containers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetStaticMeshImportNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/StaticMeshImportNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetStaticMeshImportNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Static Mesh Import" },
		{ "Comment", "/* The Static Mesh to import from */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/StaticMeshImportNode.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The Static Mesh to import from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetStaticMeshImportNode, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "Static Mesh Import" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Which static mesh Lod to import.*/" },
		{ "DisplayName", "LOD Index" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/StaticMeshImportNode.h" },
		{ "ToolTip", "Which static mesh Lod to import." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetStaticMeshImportNode, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_LODIndex_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_LODIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportSimMesh_MetaData[] = {
		{ "Category", "Static Mesh Import" },
		{ "Comment", "/* Import static mesh data as a simulation mesh data.*/" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/StaticMeshImportNode.h" },
		{ "ToolTip", "Import static mesh data as a simulation mesh data." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportSimMesh_SetBit(void* Obj)
	{
		((FChaosClothAssetStaticMeshImportNode*)Obj)->bImportSimMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportSimMesh = { "bImportSimMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetStaticMeshImportNode), &Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportSimMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportSimMesh_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportSimMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportRenderMesh_MetaData[] = {
		{ "Category", "Static Mesh Import" },
		{ "Comment", "/* Import static mesh data as render mesh data.*/" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/StaticMeshImportNode.h" },
		{ "ToolTip", "Import static mesh data as render mesh data." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportRenderMesh_SetBit(void* Obj)
	{
		((FChaosClothAssetStaticMeshImportNode*)Obj)->bImportRenderMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportRenderMesh = { "bImportRenderMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetStaticMeshImportNode), &Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportRenderMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportRenderMesh_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportRenderMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "Static Mesh Import" },
		{ "ClampMin", "-1" },
		{ "Comment", "/* UV Channel used to populate Sim Mesh positions */" },
		{ "EditCondition", "bImportSimMesh" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/StaticMeshImportNode.h" },
		{ "ToolTip", "UV Channel used to populate Sim Mesh positions" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetStaticMeshImportNode, UVChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_UVChannel_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_UVChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_UVScale_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Static Mesh Import" },
		{ "Comment", "/* Apply this scale to the UVs when populating Sim Mesh positions. */" },
		{ "EditCondition", "bImportSimMesh && (UVChannel >= 0)" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/StaticMeshImportNode.h" },
		{ "ToolTip", "Apply this scale to the UVs when populating Sim Mesh positions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetStaticMeshImportNode, UVScale), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_UVScale_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_UVScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportSimMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_bImportRenderMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_UVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewProp_UVScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetStaticMeshImportNode",
		Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::PropPointers),
		sizeof(FChaosClothAssetStaticMeshImportNode),
		alignof(FChaosClothAssetStaticMeshImportNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetStaticMeshImportNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetStaticMeshImportNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetStaticMeshImportNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_StaticMeshImportNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_StaticMeshImportNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetStaticMeshImportNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetStaticMeshImportNode_Statics::NewStructOps, TEXT("ChaosClothAssetStaticMeshImportNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetStaticMeshImportNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetStaticMeshImportNode), 701254096U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_StaticMeshImportNode_h_477668949(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_StaticMeshImportNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_StaticMeshImportNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
