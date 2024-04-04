// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionEditNodes.h"
#include "Dataflow/DataflowSelection.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionEditNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowFaceSelection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FPruneInCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FPruneInCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PruneInCollectionDataflowNode;
class UScriptStruct* FPruneInCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PruneInCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PruneInCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("PruneInCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_PruneInCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FPruneInCollectionDataflowNode>()
{
	return FPruneInCollectionDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Deletes selected bones from Collection. Empty clusters will be eliminated\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
		{ "ToolTip", "Deletes selected bones from Collection. Empty clusters will be eliminated" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPruneInCollectionDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Fractured GeometryCollection to prune */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
		{ "ToolTip", "Fractured GeometryCollection to prune" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPruneInCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Transform selection for pruning */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
		{ "ToolTip", "Transform selection for pruning" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPruneInCollectionDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewProp_TransformSelection_MetaData), Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewProp_TransformSelection_MetaData) }; // 216225950
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"PruneInCollectionDataflowNode",
		Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::PropPointers),
		sizeof(FPruneInCollectionDataflowNode),
		alignof(FPruneInCollectionDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_PruneInCollectionDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PruneInCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PruneInCollectionDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisibiltyOptionsEnum;
	static UEnum* EVisibiltyOptionsEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVisibiltyOptionsEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVisibiltyOptionsEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EVisibiltyOptionsEnum"));
		}
		return Z_Registration_Info_UEnum_EVisibiltyOptionsEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EVisibiltyOptionsEnum>()
	{
		return EVisibiltyOptionsEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum_Statics::Enumerators[] = {
		{ "EVisibiltyOptionsEnum::Dataflow_VisibilityOptions_Visible", (int64)EVisibiltyOptionsEnum::Dataflow_VisibilityOptions_Visible },
		{ "EVisibiltyOptionsEnum::Dataflow_VisibilityOptions_Invisible", (int64)EVisibiltyOptionsEnum::Dataflow_VisibilityOptions_Invisible },
		{ "EVisibiltyOptionsEnum::Dataflow_Max", (int64)EVisibiltyOptionsEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EVisibiltyOptionsEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "Dataflow_VisibilityOptions_Invisible.DisplayName", "Hidden" },
		{ "Dataflow_VisibilityOptions_Invisible.Name", "EVisibiltyOptionsEnum::Dataflow_VisibilityOptions_Invisible" },
		{ "Dataflow_VisibilityOptions_Visible.DisplayName", "Visible" },
		{ "Dataflow_VisibilityOptions_Visible.Name", "EVisibiltyOptionsEnum::Dataflow_VisibilityOptions_Visible" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EVisibiltyOptionsEnum",
		"EVisibiltyOptionsEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum()
	{
		if (!Z_Registration_Info_UEnum_EVisibiltyOptionsEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisibiltyOptionsEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVisibiltyOptionsEnum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSetVisibilityInCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetVisibilityInCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetVisibilityInCollectionDataflowNode;
class UScriptStruct* FSetVisibilityInCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetVisibilityInCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetVisibilityInCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SetVisibilityInCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetVisibilityInCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSetVisibilityInCollectionDataflowNode>()
{
	return FSetVisibilityInCollectionDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Sets all selected bone's visibilty to Visible/Hidden\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
		{ "ToolTip", "Sets all selected bone's visibilty to Visible/Hidden" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetVisibilityInCollectionDataflowNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Visibility_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** What to set the visibility of the selected bones */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
		{ "ToolTip", "What to set the visibility of the selected bones" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVisibilityInCollectionDataflowNode, Visibility), Z_Construct_UEnum_GeometryCollectionNodes_EVisibiltyOptionsEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Visibility_MetaData), Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Visibility_MetaData) }; // 182707262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Fractured GeometryCollection to set visibility */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
		{ "ToolTip", "Fractured GeometryCollection to set visibility" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVisibilityInCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Transform selection for setting visibility */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
		{ "ToolTip", "Transform selection for setting visibility" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVisibilityInCollectionDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_TransformSelection_MetaData), Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_TransformSelection_MetaData) }; // 216225950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_FaceSelection_MetaData[] = {
		{ "Comment", "/** Face selection for setting visibility */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
		{ "ToolTip", "Face selection for setting visibility" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_FaceSelection = { "FaceSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetVisibilityInCollectionDataflowNode, FaceSelection), Z_Construct_UScriptStruct_FDataflowFaceSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_FaceSelection_MetaData), Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_FaceSelection_MetaData) }; // 3875686190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Visibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewProp_FaceSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SetVisibilityInCollectionDataflowNode",
		Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::PropPointers),
		sizeof(FSetVisibilityInCollectionDataflowNode),
		alignof(FSetVisibilityInCollectionDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SetVisibilityInCollectionDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetVisibilityInCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetVisibilityInCollectionDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMergeInCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMergeInCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MergeInCollectionDataflowNode;
class UScriptStruct* FMergeInCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MergeInCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MergeInCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MergeInCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MergeInCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMergeInCollectionDataflowNode>()
{
	return FMergeInCollectionDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Merges selected bones into a single bone\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
		{ "ToolTip", "Merges selected bones into a single bone" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMergeInCollectionDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Fractured GeometryCollection to merge */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
		{ "ToolTip", "Fractured GeometryCollection to merge" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeInCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Transform selection for merging */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionEditNodes.h" },
		{ "ToolTip", "Transform selection for merging" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeInCollectionDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewProp_TransformSelection_MetaData), Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewProp_TransformSelection_MetaData) }; // 216225950
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"MergeInCollectionDataflowNode",
		Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::PropPointers),
		sizeof(FMergeInCollectionDataflowNode),
		alignof(FMergeInCollectionDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MergeInCollectionDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MergeInCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MergeInCollectionDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_Statics::EnumInfo[] = {
		{ EVisibiltyOptionsEnum_StaticEnum, TEXT("EVisibiltyOptionsEnum"), &Z_Registration_Info_UEnum_EVisibiltyOptionsEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 182707262U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_Statics::ScriptStructInfo[] = {
		{ FPruneInCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics::NewStructOps, TEXT("PruneInCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_PruneInCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPruneInCollectionDataflowNode), 2204464663U) },
		{ FSetVisibilityInCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics::NewStructOps, TEXT("SetVisibilityInCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_SetVisibilityInCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetVisibilityInCollectionDataflowNode), 941353462U) },
		{ FMergeInCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics::NewStructOps, TEXT("MergeInCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_MergeInCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMergeInCollectionDataflowNode), 2863946870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_818165142(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
