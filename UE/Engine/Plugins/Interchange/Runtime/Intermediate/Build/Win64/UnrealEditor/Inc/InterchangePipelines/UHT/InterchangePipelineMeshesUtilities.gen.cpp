// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangePipelineMeshesUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePipelineMeshesUtilities() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister();
	INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer();
	INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshGeometry();
	INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshInstance();
	INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext();
	UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer;
class UScriptStruct* FInterchangeLodSceneNodeContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("InterchangeLodSceneNodeContainer"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FInterchangeLodSceneNodeContainer>()
{
	return FInterchangeLodSceneNodeContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SceneNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This container exist only because UPROPERTY cannot support nested container. See FInterchangeMeshInstance\n*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "* This container exist only because UPROPERTY cannot support nested container. See FInterchangeMeshInstance" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeLodSceneNodeContainer>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_Inner = { "SceneNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInterchangeSceneNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * Each scene node here represent a mesh scene node. Only if we represent a lod group we can have more then 1 mesh scene node for a specific lod index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Each scene node here represent a mesh scene node. Only if we represent a lod group we can have more then 1 mesh scene node for a specific lod index." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes = { "SceneNodes", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeLodSceneNodeContainer, SceneNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_MetaData), Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		&NewStructOps,
		"InterchangeLodSceneNodeContainer",
		Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::PropPointers),
		sizeof(FInterchangeLodSceneNodeContainer),
		alignof(FInterchangeLodSceneNodeContainer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeMeshInstance;
class UScriptStruct* FInterchangeMeshInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeMeshInstance, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("InterchangeMeshInstance"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FInterchangeMeshInstance>()
{
	return FInterchangeMeshInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodGroupNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LodGroupNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceSkinnedMesh_MetaData[];
#endif
		static void NewProp_bReferenceSkinnedMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceSkinnedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceMorphTarget_MetaData[];
#endif
		static void NewProp_bReferenceMorphTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceMorphTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMorphTargets_MetaData[];
#endif
		static void NewProp_bHasMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMorphTargets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneNodePerLodIndex_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SceneNodePerLodIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodePerLodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SceneNodePerLodIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencingMeshGeometryUids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencingMeshGeometryUids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencingMeshGeometryUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* A mesh instance is a description of a translated scene node that point on a translated mesh asset.\n* A mesh instance pointing on a lod group can have many lods and many scene mesh nodes per lod index.\n* A mesh instance pointing on a mesh node will have only the lod 0 and will point on one scene mesh node.\n*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "* A mesh instance is a description of a translated scene node that point on a translated mesh asset.\n* A mesh instance pointing on a lod group can have many lods and many scene mesh nodes per lod index.\n* A mesh instance pointing on a mesh node will have only the lod 0 and will point on one scene mesh node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeMeshInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * This ID represent either 1: a lod group scene node uid or 2: a mesh scene node uid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "This ID represent either 1: a lod group scene node uid or 2: a mesh scene node uid." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshInstance, MeshInstanceUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid_MetaData), Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * If this mesh instance represent a LodGroup this member will not be null, but will be null if the mesh instance do not represent a lod group\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "If this mesh instance represent a LodGroup this member will not be null, but will be null if the mesh instance do not represent a lod group" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode = { "LodGroupNode", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshInstance, LodGroupNode), Z_Construct_UClass_UInterchangeSceneNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode_MetaData), Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_SetBit(void* Obj)
	{
		((FInterchangeMeshInstance*)Obj)->bReferenceSkinnedMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh = { "bReferenceSkinnedMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangeMeshInstance), &Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_MetaData), Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_SetBit(void* Obj)
	{
		((FInterchangeMeshInstance*)Obj)->bReferenceMorphTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget = { "bReferenceMorphTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangeMeshInstance), &Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_MetaData), Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets_SetBit(void* Obj)
	{
		((FInterchangeMeshInstance*)Obj)->bHasMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets = { "bHasMorphTargets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangeMeshInstance), &Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets_MetaData), Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_ValueProp = { "SceneNodePerLodIndex", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer, METADATA_PARAMS(0, nullptr) }; // 2532821103
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_Key_KeyProp = { "SceneNodePerLodIndex_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * Each scene node here represent a mesh scene node. Only if we represent a lod group we can have more then 1 mesh scene node for a specific lod index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Each scene node here represent a mesh scene node. Only if we represent a lod group we can have more then 1 mesh scene node for a specific lod index." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex = { "SceneNodePerLodIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshInstance, SceneNodePerLodIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_MetaData), Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_MetaData) }; // 2532821103
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_Inner = { "ReferencingMeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * All mesh geometry referenced by this MeshInstance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "All mesh geometry referenced by this MeshInstance." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids = { "ReferencingMeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshInstance, ReferencingMeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_MetaData), Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bHasMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		&NewStructOps,
		"InterchangeMeshInstance",
		Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::PropPointers),
		sizeof(FInterchangeMeshInstance),
		alignof(FInterchangeMeshInstance),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry;
class UScriptStruct* FInterchangeMeshGeometry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeMeshGeometry, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("InterchangeMeshGeometry"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FInterchangeMeshGeometry>()
{
	return FInterchangeMeshGeometry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshUid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshNode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencingMeshInstanceUids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencingMeshInstanceUids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencingMeshInstanceUids;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttachedSocketUids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedSocketUids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedSocketUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* A mesh geometry is a description of a translated mesh asset node that define a geometry.\n*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "* A mesh geometry is a description of a translated mesh asset node that define a geometry." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeMeshGeometry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * Represent the unique id of the UInterchangeMeshNode represent by this structure.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Represent the unique id of the UInterchangeMeshNode represent by this structure." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid = { "MeshUid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshGeometry, MeshUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid_MetaData), Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * The UInterchangeMeshNode pointer represent by this structure.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The UInterchangeMeshNode pointer represent by this structure." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode = { "MeshNode", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshGeometry, MeshNode), Z_Construct_UClass_UInterchangeMeshNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode_MetaData), Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_Inner = { "ReferencingMeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * All mesh instance referencing this UInterchangeMeshNode pointer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "All mesh instance referencing this UInterchangeMeshNode pointer." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids = { "ReferencingMeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshGeometry, ReferencingMeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_MetaData), Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_Inner = { "AttachedSocketUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * A list of all scene nodes representing sockets attached to this mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "A list of all scene nodes representing sockets attached to this mesh" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids = { "AttachedSocketUids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeMeshGeometry, AttachedSocketUids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_MetaData), Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		&NewStructOps,
		"InterchangeMeshGeometry",
		Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::PropPointers),
		sizeof(FInterchangeMeshGeometry),
		alignof(FInterchangeMeshGeometry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshGeometry()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext;
class UScriptStruct* FInterchangePipelineMeshesUtilitiesContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("InterchangePipelineMeshesUtilitiesContext"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FInterchangePipelineMeshesUtilitiesContext>()
{
	return FInterchangePipelineMeshesUtilitiesContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertStaticMeshToSkeletalMesh_MetaData[];
#endif
		static void NewProp_bConvertStaticMeshToSkeletalMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertStaticMeshToSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertSkeletalMeshToStaticMesh_MetaData[];
#endif
		static void NewProp_bConvertSkeletalMeshToStaticMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertSkeletalMeshToStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertStaticsWithMorphTargetsToSkeletals_MetaData[];
#endif
		static void NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertStaticsWithMorphTargetsToSkeletals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMeshesInBoneHierarchy_MetaData[];
#endif
		static void NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMeshesInBoneHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bQueryGeometryOnlyIfNoInstance_MetaData[];
#endif
		static void NewProp_bQueryGeometryOnlyIfNoInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bQueryGeometryOnlyIfNoInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Represent the context UInterchangePipelineMeshesUtilities will use when client query the data\n*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "* Represent the context UInterchangePipelineMeshesUtilities will use when client query the data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangePipelineMeshesUtilitiesContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesContext" },
		{ "Comment", "/**\n\x09 * Convert static mesh to skeletal mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Convert static mesh to skeletal mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_SetBit(void* Obj)
	{
		((FInterchangePipelineMeshesUtilitiesContext*)Obj)->bConvertStaticMeshToSkeletalMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticMeshToSkeletalMesh = { "bConvertStaticMeshToSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelineMeshesUtilitiesContext), &Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_MetaData), Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesContext" },
		{ "Comment", "/**\n\x09 * Convert static mesh to skeletal mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Convert static mesh to skeletal mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_SetBit(void* Obj)
	{
		((FInterchangePipelineMeshesUtilitiesContext*)Obj)->bConvertSkeletalMeshToStaticMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertSkeletalMeshToStaticMesh = { "bConvertSkeletalMeshToStaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelineMeshesUtilitiesContext), &Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_MetaData), Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesContext" },
		{ "Comment", "/**\n\x09 * Convert static mesh that has morph target to skeletal mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Convert static mesh that has morph target to skeletal mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit(void* Obj)
	{
		((FInterchangePipelineMeshesUtilitiesContext*)Obj)->bConvertStaticsWithMorphTargetsToSkeletals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals = { "bConvertStaticsWithMorphTargetsToSkeletals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelineMeshesUtilitiesContext), &Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals_MetaData), Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesContext" },
		{ "Comment", "/**\n\x09 * If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones. If the mesh are not skinned they will\n\x09 * be added to skeletal mesh and remove from the static meshes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones. If the mesh are not skinned they will\nbe added to skeletal mesh and remove from the static meshes." },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj)
	{
		((FInterchangePipelineMeshesUtilitiesContext*)Obj)->bImportMeshesInBoneHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bImportMeshesInBoneHierarchy = { "bImportMeshesInBoneHierarchy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelineMeshesUtilitiesContext), &Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData), Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bQueryGeometryOnlyIfNoInstance_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesContext" },
		{ "Comment", "/**\n\x09 * When querying geometry, this flag will not add MeshGeometry if there is a scene node pointing on a geometry.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "When querying geometry, this flag will not add MeshGeometry if there is a scene node pointing on a geometry." },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bQueryGeometryOnlyIfNoInstance_SetBit(void* Obj)
	{
		((FInterchangePipelineMeshesUtilitiesContext*)Obj)->bQueryGeometryOnlyIfNoInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bQueryGeometryOnlyIfNoInstance = { "bQueryGeometryOnlyIfNoInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterchangePipelineMeshesUtilitiesContext), &Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bQueryGeometryOnlyIfNoInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bQueryGeometryOnlyIfNoInstance_MetaData), Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bQueryGeometryOnlyIfNoInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticMeshToSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertSkeletalMeshToStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bConvertStaticsWithMorphTargetsToSkeletals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bImportMeshesInBoneHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewProp_bQueryGeometryOnlyIfNoInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		&NewStructOps,
		"InterchangePipelineMeshesUtilitiesContext",
		Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::PropPointers),
		sizeof(FInterchangePipelineMeshesUtilitiesContext),
		alignof(FInterchangePipelineMeshesUtilitiesContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.InnerSingleton, Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext.InnerSingleton;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execSetContext)
	{
		P_GET_STRUCT_REF(FInterchangePipelineMeshesUtilitiesContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContext(Z_Param_Out_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshGeometrySkeletonRootUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMeshGeometrySkeletonRootUid(Z_Param_MeshGeometryUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshInstanceSkeletonRootUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshInstanceUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMeshInstanceSkeletonRootUid(Z_Param_MeshInstanceUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUidsUsingMeshGeometryUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllMeshInstanceUidsUsingMeshGeometryUid(Z_Param_MeshGeometryUid,Z_Param_Out_MeshInstanceUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshGeometryByUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeMeshGeometry*)Z_Param__Result=P_THIS->GetMeshGeometryByUid(Z_Param_MeshGeometryUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execIsValidMeshGeometryUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidMeshGeometryUid(Z_Param_MeshGeometryUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshInstanceByUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshInstanceUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeMeshInstance*)Z_Param__Result=P_THIS->GetMeshInstanceByUid(Z_Param_MeshInstanceUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execIsValidMeshInstanceUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshInstanceUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidMeshInstanceUid(Z_Param_MeshInstanceUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshGeometryNotInstanced)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllMeshGeometryNotInstanced(Z_Param_Out_MeshGeometryUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllStaticMeshGeometry)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStaticMeshGeometry(Z_Param_Out_MeshGeometryUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshGeometry)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllSkinnedMeshGeometry(Z_Param_Out_MeshGeometryUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshGeometry)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllMeshGeometry(Z_Param_Out_MeshGeometryUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllStaticMeshInstance)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStaticMeshInstance(Z_Param_Out_MeshInstanceUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshInstance)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllSkinnedMeshInstance(Z_Param_Out_MeshInstanceUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUids)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllMeshInstanceUids(Z_Param_Out_MeshInstanceUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execCreateInterchangePipelineMeshesUtilities)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInterchangePipelineMeshesUtilities**)Z_Param__Result=UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities(Z_Param_BaseNodeContainer);
		P_NATIVE_END;
	}
	void UInterchangePipelineMeshesUtilities::StaticRegisterNativesUInterchangePipelineMeshesUtilities()
	{
		UClass* Class = UInterchangePipelineMeshesUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateInterchangePipelineMeshesUtilities", &UInterchangePipelineMeshesUtilities::execCreateInterchangePipelineMeshesUtilities },
			{ "GetAllMeshGeometry", &UInterchangePipelineMeshesUtilities::execGetAllMeshGeometry },
			{ "GetAllMeshGeometryNotInstanced", &UInterchangePipelineMeshesUtilities::execGetAllMeshGeometryNotInstanced },
			{ "GetAllMeshInstanceUids", &UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUids },
			{ "GetAllMeshInstanceUidsUsingMeshGeometryUid", &UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUidsUsingMeshGeometryUid },
			{ "GetAllSkinnedMeshGeometry", &UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshGeometry },
			{ "GetAllSkinnedMeshInstance", &UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshInstance },
			{ "GetAllStaticMeshGeometry", &UInterchangePipelineMeshesUtilities::execGetAllStaticMeshGeometry },
			{ "GetAllStaticMeshInstance", &UInterchangePipelineMeshesUtilities::execGetAllStaticMeshInstance },
			{ "GetMeshGeometryByUid", &UInterchangePipelineMeshesUtilities::execGetMeshGeometryByUid },
			{ "GetMeshGeometrySkeletonRootUid", &UInterchangePipelineMeshesUtilities::execGetMeshGeometrySkeletonRootUid },
			{ "GetMeshInstanceByUid", &UInterchangePipelineMeshesUtilities::execGetMeshInstanceByUid },
			{ "GetMeshInstanceSkeletonRootUid", &UInterchangePipelineMeshesUtilities::execGetMeshInstanceSkeletonRootUid },
			{ "IsValidMeshGeometryUid", &UInterchangePipelineMeshesUtilities::execIsValidMeshGeometryUid },
			{ "IsValidMeshInstanceUid", &UInterchangePipelineMeshesUtilities::execIsValidMeshInstanceUid },
			{ "SetContext", &UInterchangePipelineMeshesUtilities::execSetContext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms
		{
			UInterchangeBaseNodeContainer* BaseNodeContainer;
			UInterchangePipelineMeshesUtilities* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms, ReturnValue), Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Create an instance of UInterchangePipelineMeshesUtilities.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Create an instance of UInterchangePipelineMeshesUtilities." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "CreateInterchangePipelineMeshesUtilities", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllMeshGeometry_Parms
		{
			TArray<FString> MeshGeometryUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshGeometry_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all mesh geometry unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all mesh geometry unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshGeometry", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllMeshGeometryNotInstanced_Parms
		{
			TArray<FString> MeshGeometryUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshGeometryNotInstanced_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all not instanced mesh geometry unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all not instanced mesh geometry unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshGeometryNotInstanced", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshGeometryNotInstanced_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshGeometryNotInstanced_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUids_Parms
		{
			TArray<FString> MeshInstanceUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUids_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all mesh instance unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all mesh instance unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshInstanceUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUids_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms
		{
			FString MeshGeometryUid;
			TArray<FString> MeshInstanceUids;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms, MeshGeometryUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all instanced mesh uids using the mesh geometry unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all instanced mesh uids using the mesh geometry unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshInstanceUidsUsingMeshGeometryUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshGeometry_Parms
		{
			TArray<FString> MeshGeometryUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshGeometry_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all skinned mesh geometry unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all skinned mesh geometry unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllSkinnedMeshGeometry", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms
		{
			TArray<FString> MeshInstanceUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all skinned mesh instance unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all skinned mesh instance unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllSkinnedMeshInstance", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms
		{
			TArray<FString> MeshGeometryUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all static mesh geometry unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all static mesh geometry unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllStaticMeshGeometry", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms
		{
			TArray<FString> MeshInstanceUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all static mesh instance unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all static mesh instance unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllStaticMeshInstance", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms
		{
			FString MeshGeometryUid;
			FInterchangeMeshGeometry ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms, MeshGeometryUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid_MetaData), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeMeshGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue_MetaData) }; // 3359654600
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the geometry mesh from the unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the geometry mesh from the unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshGeometryByUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms
		{
			FString MeshGeometryUid;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms, MeshGeometryUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid_MetaData), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return the skeleton root node Uid, this is the uid for a UInterchangeSceneNode that has a \"Joint\" specialized type.\n\x09* Return an empty string if the MeshGeometryUid parameter point on nothing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return the skeleton root node Uid, this is the uid for a UInterchangeSceneNode that has a \"Joint\" specialized type.\nReturn an empty string if the MeshGeometryUid parameter point on nothing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshGeometrySkeletonRootUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms
		{
			FString MeshInstanceUid;
			FInterchangeMeshInstance ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms, MeshInstanceUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid_MetaData), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeMeshInstance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue_MetaData) }; // 2418157364
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the instanced mesh from the unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the instanced mesh from the unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshInstanceByUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms
		{
			FString MeshInstanceUid;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms, MeshInstanceUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid_MetaData), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return the skeleton root node Uid, this is the uid for a UInterchangeSceneNode that has a \"Joint\" specialized type.\n\x09* Return an empty string if the MeshInstanceUid parameter point on nothing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return the skeleton root node Uid, this is the uid for a UInterchangeSceneNode that has a \"Joint\" specialized type.\nReturn an empty string if the MeshInstanceUid parameter point on nothing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshInstanceSkeletonRootUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms
		{
			FString MeshGeometryUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms, MeshGeometryUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData) };
	void Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms), &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return true if there is an existing FInterchangeMeshGeometry matching the MeshInstanceUid key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return true if there is an existing FInterchangeMeshGeometry matching the MeshInstanceUid key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "IsValidMeshGeometryUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms
		{
			FString MeshInstanceUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms, MeshInstanceUid), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid_MetaData), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid_MetaData) };
	void Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms), &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return true if there is an existing FInterchangeMeshInstance matching the MeshInstanceUid key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return true if there is an existing FInterchangeMeshInstance matching the MeshInstanceUid key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "IsValidMeshInstanceUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventSetContext_Parms
		{
			FInterchangePipelineMeshesUtilitiesContext Context;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventSetContext_Parms, Context), Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::NewProp_Context_MetaData), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::NewProp_Context_MetaData) }; // 249839421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "SetContext", nullptr, nullptr, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::InterchangePipelineMeshesUtilities_eventSetContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::InterchangePipelineMeshesUtilities_eventSetContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePipelineMeshesUtilities);
	UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister()
	{
		return UInterchangePipelineMeshesUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities, "CreateInterchangePipelineMeshesUtilities" }, // 3227066947
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry, "GetAllMeshGeometry" }, // 941643868
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced, "GetAllMeshGeometryNotInstanced" }, // 1770874044
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids, "GetAllMeshInstanceUids" }, // 1926877569
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid, "GetAllMeshInstanceUidsUsingMeshGeometryUid" }, // 398368960
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry, "GetAllSkinnedMeshGeometry" }, // 2985581943
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance, "GetAllSkinnedMeshInstance" }, // 2194373135
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry, "GetAllStaticMeshGeometry" }, // 2311869399
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance, "GetAllStaticMeshInstance" }, // 1487348803
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid, "GetMeshGeometryByUid" }, // 850024922
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid, "GetMeshGeometrySkeletonRootUid" }, // 3453191874
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid, "GetMeshInstanceByUid" }, // 3642975108
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid, "GetMeshInstanceSkeletonRootUid" }, // 3055445215
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid, "IsValidMeshGeometryUid" }, // 2154268126
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid, "IsValidMeshInstanceUid" }, // 801455778
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_SetContext, "SetContext" }, // 344431513
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**/" },
		{ "IncludePath", "InterchangePipelineMeshesUtilities.h" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePipelineMeshesUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::ClassParams = {
		&UInterchangePipelineMeshesUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities()
	{
		if (!Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton, Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangePipelineMeshesUtilities>()
	{
		return UInterchangePipelineMeshesUtilities::StaticClass();
	}
	UInterchangePipelineMeshesUtilities::UInterchangePipelineMeshesUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePipelineMeshesUtilities);
	UInterchangePipelineMeshesUtilities::~UInterchangePipelineMeshesUtilities() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ScriptStructInfo[] = {
		{ FInterchangeLodSceneNodeContainer::StaticStruct, Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewStructOps, TEXT("InterchangeLodSceneNodeContainer"), &Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeLodSceneNodeContainer), 2532821103U) },
		{ FInterchangeMeshInstance::StaticStruct, Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewStructOps, TEXT("InterchangeMeshInstance"), &Z_Registration_Info_UScriptStruct_InterchangeMeshInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeMeshInstance), 2418157364U) },
		{ FInterchangeMeshGeometry::StaticStruct, Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewStructOps, TEXT("InterchangeMeshGeometry"), &Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeMeshGeometry), 3359654600U) },
		{ FInterchangePipelineMeshesUtilitiesContext::StaticStruct, Z_Construct_UScriptStruct_FInterchangePipelineMeshesUtilitiesContext_Statics::NewStructOps, TEXT("InterchangePipelineMeshesUtilitiesContext"), &Z_Registration_Info_UScriptStruct_InterchangePipelineMeshesUtilitiesContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangePipelineMeshesUtilitiesContext), 249839421U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePipelineMeshesUtilities, UInterchangePipelineMeshesUtilities::StaticClass, TEXT("UInterchangePipelineMeshesUtilities"), &Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePipelineMeshesUtilities), 3280987488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_2790221161(TEXT("/Script/InterchangePipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
