// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowSkeletalMeshNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSkeletalMeshNodes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode();
	DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetSkeletonDataflowNode();
	DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode();
	DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataflowNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FGetSkeletalMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetSkeletalMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode;
class UScriptStruct* FGetSkeletalMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("GetSkeletalMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FGetSkeletalMeshDataflowNode>()
{
	return FGetSkeletalMeshDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetSkeletalMeshDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetSkeletalMeshDataflowNode, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetSkeletalMeshDataflowNode, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_PropertyName_MetaData), Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewProp_PropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetSkeletalMeshDataflowNode",
		Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::PropPointers),
		sizeof(FGetSkeletalMeshDataflowNode),
		alignof(FGetSkeletalMeshDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetSkeletonDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetSkeletonDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode;
class UScriptStruct* FGetSkeletonDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("GetSkeletonDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FGetSkeletonDataflowNode>()
{
	return FGetSkeletonDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetSkeletonDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Skeleton" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetSkeletonDataflowNode, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_Skeleton_MetaData), Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_Skeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetSkeletonDataflowNode, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_PropertyName_MetaData), Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewProp_PropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetSkeletonDataflowNode",
		Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::PropPointers),
		sizeof(FGetSkeletonDataflowNode),
		alignof(FGetSkeletonDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGetSkeletonDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSkeletalMeshBoneDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSkeletalMeshBoneDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode;
class UScriptStruct* FSkeletalMeshBoneDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("SkeletalMeshBoneDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FSkeletalMeshBoneDataflowNode>()
{
	return FSkeletalMeshBoneDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndexOut_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndexOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshBoneDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshBoneDataflowNode, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneName_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshBoneDataflowNode, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneIndexOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Index" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneIndexOut = { "BoneIndexOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshBoneDataflowNode, BoneIndexOut), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneIndexOut_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneIndexOut_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshBoneDataflowNode, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_PropertyName_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_BoneIndexOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewProp_PropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SkeletalMeshBoneDataflowNode",
		Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::PropPointers),
		sizeof(FSkeletalMeshBoneDataflowNode),
		alignof(FSkeletalMeshBoneDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSkeletalMeshReferenceTransformDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSkeletalMeshReferenceTransformDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode;
class UScriptStruct* FSkeletalMeshReferenceTransformDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("SkeletalMeshReferenceTransformDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FSkeletalMeshReferenceTransformDataflowNode>()
{
	return FSkeletalMeshReferenceTransformDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndexIn_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndexIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformOut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshReferenceTransformDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "SkeletalMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_SkeletalMeshIn = { "SkeletalMeshIn", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshReferenceTransformDataflowNode, SkeletalMeshIn), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_SkeletalMeshIn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_BoneIndexIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "Index" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_BoneIndexIn = { "BoneIndexIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshReferenceTransformDataflowNode, BoneIndexIn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_BoneIndexIn_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_BoneIndexIn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_TransformOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Transform" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSkeletalMeshNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_TransformOut = { "TransformOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshReferenceTransformDataflowNode, TransformOut), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_TransformOut_MetaData), Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_TransformOut_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_SkeletalMeshIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_BoneIndexIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewProp_TransformOut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SkeletalMeshReferenceTransformDataflowNode",
		Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::PropPointers),
		sizeof(FSkeletalMeshReferenceTransformDataflowNode),
		alignof(FSkeletalMeshReferenceTransformDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSkeletalMeshNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSkeletalMeshNodes_h_Statics::ScriptStructInfo[] = {
		{ FGetSkeletalMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetSkeletalMeshDataflowNode_Statics::NewStructOps, TEXT("GetSkeletalMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_GetSkeletalMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetSkeletalMeshDataflowNode), 447709855U) },
		{ FGetSkeletonDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetSkeletonDataflowNode_Statics::NewStructOps, TEXT("GetSkeletonDataflowNode"), &Z_Registration_Info_UScriptStruct_GetSkeletonDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetSkeletonDataflowNode), 2144823320U) },
		{ FSkeletalMeshBoneDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshBoneDataflowNode_Statics::NewStructOps, TEXT("SkeletalMeshBoneDataflowNode"), &Z_Registration_Info_UScriptStruct_SkeletalMeshBoneDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshBoneDataflowNode), 1360514624U) },
		{ FSkeletalMeshReferenceTransformDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshReferenceTransformDataflowNode_Statics::NewStructOps, TEXT("SkeletalMeshReferenceTransformDataflowNode"), &Z_Registration_Info_UScriptStruct_SkeletalMeshReferenceTransformDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshReferenceTransformDataflowNode), 2372865744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSkeletalMeshNodes_h_2030154829(TEXT("/Script/DataflowNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSkeletalMeshNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSkeletalMeshNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
