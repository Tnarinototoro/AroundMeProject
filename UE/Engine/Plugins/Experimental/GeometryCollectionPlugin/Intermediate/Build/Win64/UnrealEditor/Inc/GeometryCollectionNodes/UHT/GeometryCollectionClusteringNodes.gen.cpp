// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionClusteringNodes.h"
#include "Dataflow/DataflowSelection.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionClusteringNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FAutoClusterDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterFlattenDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterMergeDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClusterSizeMethodEnum;
	static UEnum* EClusterSizeMethodEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClusterSizeMethodEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClusterSizeMethodEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EClusterSizeMethodEnum"));
		}
		return Z_Registration_Info_UEnum_EClusterSizeMethodEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EClusterSizeMethodEnum>()
	{
		return EClusterSizeMethodEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enumerators[] = {
		{ "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber", (int64)EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber },
		{ "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput", (int64)EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput },
		{ "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize", (int64)EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize },
		{ "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid", (int64)EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid },
		{ "EClusterSizeMethodEnum::Dataflow_Max", (int64)EClusterSizeMethodEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_ClusterSizeMethod_ByFractionOfInput.DisplayName", "By Fraction Of Input" },
		{ "Dataflow_ClusterSizeMethod_ByFractionOfInput.Name", "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput" },
		{ "Dataflow_ClusterSizeMethod_ByGrid.DisplayName", "By Grid" },
		{ "Dataflow_ClusterSizeMethod_ByGrid.Name", "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid" },
		{ "Dataflow_ClusterSizeMethod_ByNumber.DisplayName", "By Number" },
		{ "Dataflow_ClusterSizeMethod_ByNumber.Name", "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber" },
		{ "Dataflow_ClusterSizeMethod_BySize.DisplayName", "By Size" },
		{ "Dataflow_ClusterSizeMethod_BySize.Name", "EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EClusterSizeMethodEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EClusterSizeMethodEnum",
		"EClusterSizeMethodEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum()
	{
		if (!Z_Registration_Info_UEnum_EClusterSizeMethodEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClusterSizeMethodEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClusterSizeMethodEnum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAutoClusterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FAutoClusterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode;
class UScriptStruct* FAutoClusterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoClusterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("AutoClusterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FAutoClusterDataflowNode>()
{
	return FAutoClusterDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterSizeMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterSizeMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterSizeMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterSites_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterSites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SiteSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SiteSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterGridWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterGridWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterGridDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterGridDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterGridHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterGridHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriftIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DriftIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoCluster_MetaData[];
#endif
		static void NewProp_AutoCluster_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoCluster;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnforceSiteParameters_MetaData[];
#endif
		static void NewProp_EnforceSiteParameters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnforceSiteParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvoidIsolated_MetaData[];
#endif
		static void NewProp_AvoidIsolated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AvoidIsolated;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Automatically group pieces of a fractured Collection into a specified number of clusters\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Automatically group pieces of a fractured Collection into a specified number of clusters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoClusterDataflowNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "Comment", "/** How to choose the size of the clusters to create */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "How to choose the size of the clusters to create" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod = { "ClusterSizeMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterSizeMethod), Z_Construct_UEnum_GeometryCollectionNodes_EClusterSizeMethodEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_MetaData) }; // 2385763833
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "Comment", "/** Use a Voronoi diagram with this many Voronoi sites as a guide for deciding cluster boundaries */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Use a Voronoi diagram with this many Voronoi sites as a guide for deciding cluster boundaries" },
		{ "UIMax", "5000" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites = { "ClusterSites", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterSites), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "Comment", "/** Choose the number of Voronoi sites used for clustering as a fraction of the number of child bones to process */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the number of Voronoi sites used for clustering as a fraction of the number of child bones to process" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction = { "ClusterFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterFraction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMax", "10000" },
		{ "ClampMin", ".0001" },
		{ "Comment", "/** Choose the Edge-Size of the cube used to groups bones under a cluster (in cm). */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Cluster Size" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the Edge-Size of the cube used to groups bones under a cluster (in cm)." },
		{ "UIMax", "100" },
		{ "UIMin", ".01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize = { "SiteSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, SiteSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridWidth_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Choose the number of cluster sites to distribute along the X axis */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the number of cluster sites to distribute along the X axis" },
		{ "UIMax", "20" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridWidth = { "ClusterGridWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterGridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridWidth_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridDepth_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Choose the number of cluster sites to distribute along the Y axis */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the number of cluster sites to distribute along the Y axis" },
		{ "UIMax", "20" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridDepth = { "ClusterGridDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterGridDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridDepth_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridDepth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridHeight_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Choose the number of cluster sites to distribute along the Z axis */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Choose the number of cluster sites to distribute along the Z axis" },
		{ "UIMax", "20" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridHeight = { "ClusterGridHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, ClusterGridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridHeight_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_DriftIterations_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMin", "0" },
		{ "Comment", "/** For a grid distribution, optionally iteratively recenter the grid points to the center of the cluster geometry (technically: applying K-Means iterations) to balance the shape and distribution of the clusters */" },
		{ "DisplayName", "Grid Drift Iterations" },
		{ "EditCondition", "ClusterSizeMethod == EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "For a grid distribution, optionally iteratively recenter the grid points to the center of the cluster geometry (technically: applying K-Means iterations) to balance the shape and distribution of the clusters" },
		{ "UIMax", "5" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_DriftIterations = { "DriftIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, DriftIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_DriftIterations_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_DriftIterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_MinimumSize_MetaData[] = {
		{ "Category", "ClusterSize" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If a cluster has volume less than this value (in cm) cubed, then the auto-cluster process will attempt to merge it into a neighboring cluster. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If a cluster has volume less than this value (in cm) cubed, then the auto-cluster process will attempt to merge it into a neighboring cluster." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_MinimumSize = { "MinimumSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, MinimumSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_MinimumSize_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_MinimumSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "Comment", "/** If true, bones will only be added to the same cluster if they are physically connected (either directly, or via other bones in the same cluster) */" },
		{ "DisplayName", "Enforce Cluster Connectivity" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If true, bones will only be added to the same cluster if they are physically connected (either directly, or via other bones in the same cluster)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_SetBit(void* Obj)
	{
		((FAutoClusterDataflowNode*)Obj)->AutoCluster = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster = { "AutoCluster", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoClusterDataflowNode), &Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_EnforceSiteParameters_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "Comment", "/** If true, make sure the site parameters are matched as close as possible ( bEnforceConnectivity can make the number of site larger than the requested input may produce without it ) */" },
		{ "EditCondition", "bEnforceConnectivity == true" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If true, make sure the site parameters are matched as close as possible ( bEnforceConnectivity can make the number of site larger than the requested input may produce without it )" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_EnforceSiteParameters_SetBit(void* Obj)
	{
		((FAutoClusterDataflowNode*)Obj)->EnforceSiteParameters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_EnforceSiteParameters = { "EnforceSiteParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoClusterDataflowNode), &Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_EnforceSiteParameters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_EnforceSiteParameters_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_EnforceSiteParameters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_MetaData[] = {
		{ "Category", "AutoCluster" },
		{ "Comment", "/** If true, prevent the creation of clusters with only a single child. Either by merging into a neighboring cluster, or not creating the cluster. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "If true, prevent the creation of clusters with only a single child. Either by merging into a neighboring cluster, or not creating the cluster." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_SetBit(void* Obj)
	{
		((FAutoClusterDataflowNode*)Obj)->AvoidIsolated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated = { "AvoidIsolated", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAutoClusterDataflowNode), &Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Fractured GeometryCollection to cluster */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Fractured GeometryCollection to cluster" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Bone selection for the clustering */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Bone selection for the clustering" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAutoClusterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData) }; // 216225950
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSizeMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterSites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_SiteSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_ClusterGridHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_DriftIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_MinimumSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AutoCluster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_EnforceSiteParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_AvoidIsolated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"AutoClusterDataflowNode",
		Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::PropPointers),
		sizeof(FAutoClusterDataflowNode),
		alignof(FAutoClusterDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAutoClusterDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FClusterFlattenDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterFlattenDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode;
class UScriptStruct* FClusterFlattenDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterFlattenDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterFlattenDataflowNode>()
{
	return FClusterFlattenDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Flattens all bones to level 1\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Flattens all bones to level 1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterFlattenDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Fractured GeometryCollection to flatten */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Fractured GeometryCollection to flatten" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterFlattenDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ClusterFlattenDataflowNode",
		Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::PropPointers),
		sizeof(FClusterFlattenDataflowNode),
		alignof(FClusterFlattenDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FClusterFlattenDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FClusterUnclusterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterUnclusterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode;
class UScriptStruct* FClusterUnclusterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterUnclusterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterUnclusterDataflowNode>()
{
	return FClusterUnclusterDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Uncluster selected nodes\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Uncluster selected nodes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterUnclusterDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Fractured GeometryCollection to uncluster */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Fractured GeometryCollection to uncluster" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterUnclusterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Bone selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Bone selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterUnclusterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_TransformSelection_MetaData), Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_TransformSelection_MetaData) }; // 216225950
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ClusterUnclusterDataflowNode",
		Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::PropPointers),
		sizeof(FClusterUnclusterDataflowNode),
		alignof(FClusterUnclusterDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FClusterDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterDataflowNode;
class UScriptStruct* FClusterDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterDataflowNode>()
{
	return FClusterDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClusterDataflowNode_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cluster selected nodes under a new parent\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Cluster selected nodes under a new parent" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection on which to cluster nodes */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Collection on which to cluster nodes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Bone selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Bone selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData), Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_TransformSelection_MetaData) }; // 216225950
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ClusterDataflowNode",
		Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::PropPointers),
		sizeof(FClusterDataflowNode),
		alignof(FClusterDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FClusterDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ClusterDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClusterDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FClusterMergeDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FClusterMergeDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode;
class UScriptStruct* FClusterMergeDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterMergeDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ClusterMergeDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FClusterMergeDataflowNode>()
{
	return FClusterMergeDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Merge selected bones under a new parent cluster\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Merge selected bones under a new parent cluster" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterMergeDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection on which to merge bones into a cluster */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Collection on which to merge bones into a cluster" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterMergeDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** Bone selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionClusteringNodes.h" },
		{ "ToolTip", "Bone selection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterMergeDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_TransformSelection_MetaData), Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_TransformSelection_MetaData) }; // 216225950
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewProp_TransformSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ClusterMergeDataflowNode",
		Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::PropPointers),
		sizeof(FClusterMergeDataflowNode),
		alignof(FClusterMergeDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FClusterMergeDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::EnumInfo[] = {
		{ EClusterSizeMethodEnum_StaticEnum, TEXT("EClusterSizeMethodEnum"), &Z_Registration_Info_UEnum_EClusterSizeMethodEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2385763833U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::ScriptStructInfo[] = {
		{ FAutoClusterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics::NewStructOps, TEXT("AutoClusterDataflowNode"), &Z_Registration_Info_UScriptStruct_AutoClusterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutoClusterDataflowNode), 2299504640U) },
		{ FClusterFlattenDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics::NewStructOps, TEXT("ClusterFlattenDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterFlattenDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterFlattenDataflowNode), 3729380343U) },
		{ FClusterUnclusterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics::NewStructOps, TEXT("ClusterUnclusterDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterUnclusterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterUnclusterDataflowNode), 643003688U) },
		{ FClusterDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterDataflowNode_Statics::NewStructOps, TEXT("ClusterDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterDataflowNode), 1847488439U) },
		{ FClusterMergeDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics::NewStructOps, TEXT("ClusterMergeDataflowNode"), &Z_Registration_Info_UScriptStruct_ClusterMergeDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterMergeDataflowNode), 231220077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_2712375831(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
