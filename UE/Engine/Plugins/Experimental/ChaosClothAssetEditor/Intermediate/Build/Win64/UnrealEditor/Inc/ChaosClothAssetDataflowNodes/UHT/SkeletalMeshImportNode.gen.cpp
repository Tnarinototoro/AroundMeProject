// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/SkeletalMeshImportNode.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshImportNode() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FChaosClothAssetSkeletalMeshImportNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FChaosClothAssetSkeletalMeshImportNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosClothAssetSkeletalMeshImportNode;
class UScriptStruct* FChaosClothAssetSkeletalMeshImportNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSkeletalMeshImportNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosClothAssetSkeletalMeshImportNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes(), TEXT("ChaosClothAssetSkeletalMeshImportNode"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosClothAssetSkeletalMeshImportNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETDATAFLOWNODES_API UScriptStruct* StaticStruct<FChaosClothAssetSkeletalMeshImportNode>()
{
	return FChaosClothAssetSkeletalMeshImportNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Import a skeletal mesh asset into the cloth collection simulation and/or render mesh containers. */" },
		{ "DataflowCloth", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SkeletalMeshImportNode.h" },
		{ "ToolTip", "Import a skeletal mesh asset into the cloth collection simulation and/or render mesh containers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosClothAssetSkeletalMeshImportNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SkeletalMeshImportNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSkeletalMeshImportNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Skeletal Mesh Import" },
		{ "Comment", "/** The skeletal mesh to import. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SkeletalMeshImportNode.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The skeletal mesh to import." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSkeletalMeshImportNode, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "Skeletal Mesh Import" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The skeletal mesh LOD to import. */" },
		{ "DisplayName", "LOD Index" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SkeletalMeshImportNode.h" },
		{ "ToolTip", "The skeletal mesh LOD to import." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSkeletalMeshImportNode, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_LODIndex_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_LODIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "Category", "Skeletal Mesh Import" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The skeletal mesh LOD section to import. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SkeletalMeshImportNode.h" },
		{ "ToolTip", "The skeletal mesh LOD section to import." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSkeletalMeshImportNode, SectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_SectionIndex_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_SectionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportSimMesh_MetaData[] = {
		{ "Category", "Skeletal Mesh Import" },
		{ "Comment", "/** Whether to import the simulation mesh from the specified skeletal mesh. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SkeletalMeshImportNode.h" },
		{ "ToolTip", "Whether to import the simulation mesh from the specified skeletal mesh." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportSimMesh_SetBit(void* Obj)
	{
		((FChaosClothAssetSkeletalMeshImportNode*)Obj)->bImportSimMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportSimMesh = { "bImportSimMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetSkeletalMeshImportNode), &Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportSimMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportSimMesh_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportSimMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportRenderMesh_MetaData[] = {
		{ "Category", "Skeletal Mesh Import" },
		{ "Comment", "/** Whether to import the render mesh from the specified skeletal mesh. */" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SkeletalMeshImportNode.h" },
		{ "ToolTip", "Whether to import the render mesh from the specified skeletal mesh." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportRenderMesh_SetBit(void* Obj)
	{
		((FChaosClothAssetSkeletalMeshImportNode*)Obj)->bImportRenderMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportRenderMesh = { "bImportRenderMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosClothAssetSkeletalMeshImportNode), &Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportRenderMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportRenderMesh_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportRenderMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "Skeletal Mesh Import" },
		{ "ClampMin", "-1" },
		{ "Comment", "/**\n\x09 * UV channel of the skeletal mesh to import the 2D simulation mesh patterns from.\n\x09 * If set to -1, then the import will unwrap the 3D simulation mesh into 2D simulation mesh patterns.\n\x09 */" },
		{ "EditCondition", "bImportSimMesh" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SkeletalMeshImportNode.h" },
		{ "ToolTip", "UV channel of the skeletal mesh to import the 2D simulation mesh patterns from.\nIf set to -1, then the import will unwrap the 3D simulation mesh into 2D simulation mesh patterns." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSkeletalMeshImportNode, UVChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_UVChannel_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_UVChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_UVScale_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Skeletal Mesh Import" },
		{ "Comment", "/* Apply this scale to the UVs when populating Sim Mesh positions. */" },
		{ "EditCondition", "bImportSimMesh && UVChannel != INDEX_NONE" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/SkeletalMeshImportNode.h" },
		{ "ToolTip", "Apply this scale to the UVs when populating Sim Mesh positions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosClothAssetSkeletalMeshImportNode, UVScale), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_UVScale_MetaData), Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_UVScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportSimMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_bImportRenderMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_UVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewProp_UVScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetDataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ChaosClothAssetSkeletalMeshImportNode",
		Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::PropPointers),
		sizeof(FChaosClothAssetSkeletalMeshImportNode),
		alignof(FChaosClothAssetSkeletalMeshImportNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosClothAssetSkeletalMeshImportNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosClothAssetSkeletalMeshImportNode.InnerSingleton, Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosClothAssetSkeletalMeshImportNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SkeletalMeshImportNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SkeletalMeshImportNode_h_Statics::ScriptStructInfo[] = {
		{ FChaosClothAssetSkeletalMeshImportNode::StaticStruct, Z_Construct_UScriptStruct_FChaosClothAssetSkeletalMeshImportNode_Statics::NewStructOps, TEXT("ChaosClothAssetSkeletalMeshImportNode"), &Z_Registration_Info_UScriptStruct_ChaosClothAssetSkeletalMeshImportNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosClothAssetSkeletalMeshImportNode), 262691284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SkeletalMeshImportNode_h_590997730(TEXT("/Script/ChaosClothAssetDataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SkeletalMeshImportNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetDataflowNodes_Public_ChaosClothAsset_SkeletalMeshImportNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
