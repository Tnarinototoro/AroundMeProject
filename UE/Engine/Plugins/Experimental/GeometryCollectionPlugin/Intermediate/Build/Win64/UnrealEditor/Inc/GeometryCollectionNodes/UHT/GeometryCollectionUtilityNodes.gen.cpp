// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionUtilityNodes.h"
#include "Dataflow/DataflowSelection.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionUtilityNodes() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EGenerateConvexMethod();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
	FRACTUREENGINE_API UEnum* Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSphereCovering();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum;
	static UEnum* EConvexOverlapRemovalMethodEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EConvexOverlapRemovalMethodEnum"));
		}
		return Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EConvexOverlapRemovalMethodEnum>()
	{
		return EConvexOverlapRemovalMethodEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enumerators[] = {
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_None", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_None },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_All", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_All },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClusters", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClusters },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters },
		{ "EConvexOverlapRemovalMethodEnum::Dataflow_Max", (int64)EConvexOverlapRemovalMethodEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_EConvexOverlapRemovalMethod_All.DisplayName", "All" },
		{ "Dataflow_EConvexOverlapRemovalMethod_All.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_All" },
		{ "Dataflow_EConvexOverlapRemovalMethod_None.DisplayName", "None" },
		{ "Dataflow_EConvexOverlapRemovalMethod_None.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_None" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClusters.DisplayName", "Only Clusters" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClusters.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClusters" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters.DisplayName", "Only Clusters vs Clusters" },
		{ "Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EConvexOverlapRemovalMethodEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EConvexOverlapRemovalMethodEnum",
		"EConvexOverlapRemovalMethodEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum()
	{
		if (!Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings;
class UScriptStruct* FDataflowConvexDecompositionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("DataflowConvexDecompositionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FDataflowConvexDecompositionSettings>()
{
	return FDataflowConvexDecompositionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSizeToDecompose_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSizeToDecompose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGeoToHullVolumeRatioToDecompose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHullsPerGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullsPerGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinThicknessTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinThicknessTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumAdditionalSplits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAdditionalSplits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowConvexDecompositionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinSizeToDecompose_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// If greater than zero, the minimum geometry size (cube root of volume) to consider for convex decomposition\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If greater than zero, the minimum geometry size (cube root of volume) to consider for convex decomposition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinSizeToDecompose = { "MinSizeToDecompose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, MinSizeToDecompose), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinSizeToDecompose_MetaData), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinSizeToDecompose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// If the geo volume / hull volume ratio is greater than this, do not consider convex decomposition\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If the geo volume / hull volume ratio is greater than this, do not consider convex decomposition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose = { "MaxGeoToHullVolumeRatioToDecompose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, MaxGeoToHullVolumeRatioToDecompose), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Stop splitting when hulls have error less than this (expressed in cm; will be cubed for volumetric error).\n// Note: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed.\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Stop splitting when hulls have error less than this (expressed in cm; will be cubed for volumetric error).\nNote: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_ErrorTolerance_MetaData), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_ErrorTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxHullsPerGeometry_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "-1" },
		{ "Comment", "// If greater than zero, maximum number of convex hulls to use in each convex decomposition.\n//Note: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed.\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If greater than zero, maximum number of convex hulls to use in each convex decomposition.\nNote: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxHullsPerGeometry = { "MaxHullsPerGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, MaxHullsPerGeometry), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxHullsPerGeometry_MetaData), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxHullsPerGeometry_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinThicknessTolerance_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Optionally specify a minimum thickness (in cm) for convex parts; parts below this thickness will always be merged away. Overrides NumOutputHulls and ErrorTolerance when needed.\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optionally specify a minimum thickness (in cm) for convex parts; parts below this thickness will always be merged away. Overrides NumOutputHulls and ErrorTolerance when needed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinThicknessTolerance = { "MinThicknessTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, MinThicknessTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinThicknessTolerance_MetaData), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinThicknessTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_NumAdditionalSplits_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0" },
		{ "Comment", "// Control the search effort spent per convex decomposition: larger values will require more computation but may find better convex decompositions\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Control the search effort spent per convex decomposition: larger values will require more computation but may find better convex decompositions" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_NumAdditionalSplits = { "NumAdditionalSplits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowConvexDecompositionSettings, NumAdditionalSplits), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_NumAdditionalSplits_MetaData), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_NumAdditionalSplits_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinSizeToDecompose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_ErrorTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MaxHullsPerGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_MinThicknessTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewProp_NumAdditionalSplits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		&NewStructOps,
		"DataflowConvexDecompositionSettings",
		Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::PropPointers),
		sizeof(FDataflowConvexDecompositionSettings),
		alignof(FDataflowConvexDecompositionSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.InnerSingleton, Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMakeDataflowConvexDecompositionSettingsNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeDataflowConvexDecompositionSettingsNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode;
class UScriptStruct* FMakeDataflowConvexDecompositionSettingsNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeDataflowConvexDecompositionSettingsNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeDataflowConvexDecompositionSettingsNode>()
{
	return FMakeDataflowConvexDecompositionSettingsNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSizeToDecompose_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSizeToDecompose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGeoToHullVolumeRatioToDecompose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHullsPerGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullsPerGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinThicknessTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinThicknessTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumAdditionalSplits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAdditionalSplits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecompositionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecompositionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//~ TODO: Ideally this would be generated from the above FDataflowConvexDecompositionSettings struct\n// Provide settings for running convex decomposition of geometry\n" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Provide settings for running convex decomposition of geometry" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeDataflowConvexDecompositionSettingsNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinSizeToDecompose_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// If greater than zero, the minimum geometry size (cube root of volume) to consider for convex decomposition\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If greater than zero, the minimum geometry size (cube root of volume) to consider for convex decomposition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinSizeToDecompose = { "MinSizeToDecompose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, MinSizeToDecompose), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinSizeToDecompose_MetaData), Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinSizeToDecompose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// If the geo volume / hull volume ratio is greater than this, do not consider convex decomposition\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If the geo volume / hull volume ratio is greater than this, do not consider convex decomposition" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose = { "MaxGeoToHullVolumeRatioToDecompose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, MaxGeoToHullVolumeRatioToDecompose), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData), Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Stop splitting when hulls have error less than this (expressed in cm; will be cubed for volumetric error).\n// Note: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed.\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Stop splitting when hulls have error less than this (expressed in cm; will be cubed for volumetric error).\nNote: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_ErrorTolerance_MetaData), Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_ErrorTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxHullsPerGeometry_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "-1" },
		{ "Comment", "// If greater than zero, maximum number of convex hulls to use in each convex decomposition.\n//Note: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed.\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If greater than zero, maximum number of convex hulls to use in each convex decomposition.\nNote: ErrorTolerance must be > 0 or MaxHullsPerGeometry > 1, or decomposition will not be performed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxHullsPerGeometry = { "MaxHullsPerGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, MaxHullsPerGeometry), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxHullsPerGeometry_MetaData), Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxHullsPerGeometry_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinThicknessTolerance_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Optionally specify a minimum thickness (in cm) for convex parts; parts below this thickness will always be merged away. Overrides NumOutputHulls and ErrorTolerance when needed.\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optionally specify a minimum thickness (in cm) for convex parts; parts below this thickness will always be merged away. Overrides NumOutputHulls and ErrorTolerance when needed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinThicknessTolerance = { "MinThicknessTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, MinThicknessTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinThicknessTolerance_MetaData), Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinThicknessTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_NumAdditionalSplits_MetaData[] = {
		{ "Category", "Decomposition" },
		{ "ClampMin", "0" },
		{ "Comment", "// Control the search effort spent per convex decomposition: larger values will require more computation but may find better convex decompositions\n" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Control the search effort spent per convex decomposition: larger values will require more computation but may find better convex decompositions" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_NumAdditionalSplits = { "NumAdditionalSplits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, NumAdditionalSplits), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_NumAdditionalSplits_MetaData), Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_NumAdditionalSplits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_DecompositionSettings_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_DecompositionSettings = { "DecompositionSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMakeDataflowConvexDecompositionSettingsNode, DecompositionSettings), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_DecompositionSettings_MetaData), Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_DecompositionSettings_MetaData) }; // 1507817234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinSizeToDecompose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxGeoToHullVolumeRatioToDecompose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_ErrorTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MaxHullsPerGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_MinThicknessTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_NumAdditionalSplits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewProp_DecompositionSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"MakeDataflowConvexDecompositionSettingsNode",
		Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::PropPointers),
		sizeof(FMakeDataflowConvexDecompositionSettingsNode),
		alignof(FMakeDataflowConvexDecompositionSettingsNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCreateLeafConvexHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCreateLeafConvexHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode;
class UScriptStruct* FCreateLeafConvexHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CreateLeafConvexHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCreateLeafConvexHullsDataflowNode>()
{
	return FCreateLeafConvexHullsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSelectionFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSelectionFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GenerateMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerateMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntersectIfComputedIsSmallerByFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntersectIfComputedIsSmallerByFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinExternalVolumeToIntersect_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinExternalVolumeToIntersect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexDecompositionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexDecompositionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateLeafConvexHullsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData[] = {
		{ "Comment", "/** Optional transform selection to compute leaf hulls on -- if not provided, all leaf hulls will be computed. */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optional transform selection to compute leaf hulls on -- if not provided, all leaf hulls will be computed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter = { "OptionalSelectionFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, OptionalSelectionFilter), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData), Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData) }; // 216225950
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_GenerateMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_GenerateMethod_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** How convex hulls are generated -- computed from geometry, imported from external collision shapes, or an intersection of both options. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "How convex hulls are generated -- computed from geometry, imported from external collision shapes, or an intersection of both options." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_GenerateMethod = { "GenerateMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, GenerateMethod), Z_Construct_UEnum_Chaos_EGenerateConvexMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_GenerateMethod_MetaData), Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_GenerateMethod_MetaData) }; // 1659865666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_IntersectIfComputedIsSmallerByFactor_MetaData[] = {
		{ "Category", "IntersectionFilters" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** If GenerateMethod is Intersect, only actually intersect when the volume of the Computed Hull is less than this fraction of the volume of the External Hull(s) */" },
		{ "EditCondition", "GenerateMethod == EGenerateConvexMethod::IntersectExternalWithComputed" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If GenerateMethod is Intersect, only actually intersect when the volume of the Computed Hull is less than this fraction of the volume of the External Hull(s)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_IntersectIfComputedIsSmallerByFactor = { "IntersectIfComputedIsSmallerByFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, IntersectIfComputedIsSmallerByFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_IntersectIfComputedIsSmallerByFactor_MetaData), Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_IntersectIfComputedIsSmallerByFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_MinExternalVolumeToIntersect_MetaData[] = {
		{ "Category", "IntersectionFilters" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** If GenerateMethod is Intersect, only actually intersect if the volume of the External Hull(s) exceed this threshold */" },
		{ "EditCondition", "GenerateMethod == EGenerateConvexMethod::IntersectExternalWithComputed" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "If GenerateMethod is Intersect, only actually intersect if the volume of the External Hull(s) exceed this threshold" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_MinExternalVolumeToIntersect = { "MinExternalVolumeToIntersect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, MinExternalVolumeToIntersect), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_MinExternalVolumeToIntersect_MetaData), Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_MinExternalVolumeToIntersect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Computed convex hulls are simplified to keep points spaced at least this far apart (except where needed to keep the hull from collapsing to zero volume) */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "GenerateMethod != EGenerateConvexMethod::ExternalCollision" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Computed convex hulls are simplified to keep points spaced at least this far apart (except where needed to keep the hull from collapsing to zero volume)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold = { "SimplificationDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, SimplificationDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData), Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_ConvexDecompositionSettings_MetaData[] = {
		{ "Category", "Convex" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_ConvexDecompositionSettings = { "ConvexDecompositionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateLeafConvexHullsDataflowNode, ConvexDecompositionSettings), Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_ConvexDecompositionSettings_MetaData), Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_ConvexDecompositionSettings_MetaData) }; // 1507817234
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_GenerateMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_GenerateMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_IntersectIfComputedIsSmallerByFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_MinExternalVolumeToIntersect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewProp_ConvexDecompositionSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CreateLeafConvexHullsDataflowNode",
		Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::PropPointers),
		sizeof(FCreateLeafConvexHullsDataflowNode),
		alignof(FCreateLeafConvexHullsDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSimplifyConvexHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSimplifyConvexHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode;
class UScriptStruct* FSimplifyConvexHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SimplifyConvexHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSimplifyConvexHullsDataflowNode>()
{
	return FSimplifyConvexHullsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSelectionFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSelectionFilter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimplifyMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimplifyMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTargetTriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinTargetTriangleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExistingVertices_MetaData[];
#endif
		static void NewProp_bUseExistingVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExistingVertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimplifyConvexHullsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData[] = {
		{ "Comment", "/** Optional transform selection to compute leaf hulls on -- if not provided, all leaf hulls will be computed. */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optional transform selection to compute leaf hulls on -- if not provided, all leaf hulls will be computed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter = { "OptionalSelectionFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, OptionalSelectionFilter), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData), Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData) }; // 216225950
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplifyMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplifyMethod_MetaData[] = {
		{ "Category", "Convex" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplifyMethod = { "SimplifyMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, SimplifyMethod), Z_Construct_UEnum_FractureEngine_EConvexHullSimplifyMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplifyMethod_MetaData), Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplifyMethod_MetaData) }; // 957807357
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationAngleThreshold_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Simplified hull should preserve angles larger than this (in degrees).  Used by the AngleTolerance simplification method. */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "SimplifyMethod == EConvexHullSimplifyMethod::AngleTolerance" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Simplified hull should preserve angles larger than this (in degrees).  Used by the AngleTolerance simplification method." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationAngleThreshold = { "SimplificationAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, SimplificationAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationAngleThreshold_MetaData), Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationAngleThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Simplified hull should stay within this distance of the initial convex hull. Used by the MeshQSlim simplification method. */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "SimplifyMethod == EConvexHullSimplifyMethod::MeshQSlim" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Simplified hull should stay within this distance of the initial convex hull. Used by the MeshQSlim simplification method." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold = { "SimplificationDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, SimplificationDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData), Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_MinTargetTriangleCount_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "4" },
		{ "Comment", "/** The minimum number of faces to use for the convex hull. For MeshQSlim simplification, this is a triangle count, which may be further reduced on conversion back to a convex hull. */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Min Target Face Count" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "The minimum number of faces to use for the convex hull. For MeshQSlim simplification, this is a triangle count, which may be further reduced on conversion back to a convex hull." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_MinTargetTriangleCount = { "MinTargetTriangleCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimplifyConvexHullsDataflowNode, MinTargetTriangleCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_MinTargetTriangleCount_MetaData), Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_MinTargetTriangleCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_bUseExistingVertices_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Whether to restrict the simplified hulls to only use vertices from the original hulls. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to restrict the simplified hulls to only use vertices from the original hulls." },
	};
#endif
	void Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_bUseExistingVertices_SetBit(void* Obj)
	{
		((FSimplifyConvexHullsDataflowNode*)Obj)->bUseExistingVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_bUseExistingVertices = { "bUseExistingVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimplifyConvexHullsDataflowNode), &Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_bUseExistingVertices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_bUseExistingVertices_MetaData), Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_bUseExistingVertices_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplifyMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplifyMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_MinTargetTriangleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewProp_bUseExistingVertices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SimplifyConvexHullsDataflowNode",
		Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::PropPointers),
		sizeof(FSimplifyConvexHullsDataflowNode),
		alignof(FSimplifyConvexHullsDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCreateNonOverlappingConvexHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCreateNonOverlappingConvexHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode;
class UScriptStruct* FCreateNonOverlappingConvexHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CreateNonOverlappingConvexHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCreateNonOverlappingConvexHullsDataflowNode>()
{
	return FCreateNonOverlappingConvexHullsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanExceedFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CanExceedFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplificationDistanceThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverlapRemovalMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRemovalMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlapRemovalMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRemovalShrinkPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlapRemovalShrinkPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanRemoveFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CanRemoveFraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates convex hull representation for the bones for simulation\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Generates convex hull representation for the bones for simulation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateNonOverlappingConvexHullsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Fraction (of geometry volume) by which a cluster's convex hull volume can exceed the actual geometry volume before instead using the hulls of the children.  0 means the convex volume cannot exceed the geometry volume; 1 means the convex volume is allowed to be 100% larger (2x) the geometry volume. */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Allow Larger Hull Fraction" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Fraction (of geometry volume) by which a cluster's convex hull volume can exceed the actual geometry volume before instead using the hulls of the children.  0 means the convex volume cannot exceed the geometry volume; 1 means the convex volume is allowed to be 100% larger (2x) the geometry volume." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction = { "CanExceedFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, CanExceedFraction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction_MetaData), Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Computed convex hulls are simplified to keep points spaced at least this far apart (except where needed to keep the hull from collapsing to zero volume) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Computed convex hulls are simplified to keep points spaced at least this far apart (except where needed to keep the hull from collapsing to zero volume)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold = { "SimplificationDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, SimplificationDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData), Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_MetaData[] = {
		{ "Category", "AutomaticOverlapRemoval" },
		{ "Comment", "/** Whether and in what cases to automatically cut away overlapping parts of the convex hulls, to avoid the simulation 'popping' to fix the overlaps */" },
		{ "DisplayName", "Remove Overlaps" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether and in what cases to automatically cut away overlapping parts of the convex hulls, to avoid the simulation 'popping' to fix the overlaps" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod = { "OverlapRemovalMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, OverlapRemovalMethod), Z_Construct_UEnum_GeometryCollectionNodes_EConvexOverlapRemovalMethodEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_MetaData), Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_MetaData) }; // 2902285704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent_MetaData[] = {
		{ "Category", "AutomaticOverlapRemoval" },
		{ "ClampMax", "99.900002" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Overlap removal will be computed as if convex hulls were this percentage smaller (in range 0-100) */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Overlap removal will be computed as if convex hulls were this percentage smaller (in range 0-100)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent = { "OverlapRemovalShrinkPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, OverlapRemovalShrinkPercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent_MetaData), Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction_MetaData[] = {
		{ "Category", "AutomaticOverlapRemoval" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Fraction of the convex hulls for a cluster that we can remove before using the hulls of the children */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Max Removal Fraction" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Fraction of the convex hulls for a cluster that we can remove before using the hulls of the children" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction = { "CanRemoveFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateNonOverlappingConvexHullsDataflowNode, CanRemoveFraction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction_MetaData), Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanExceedFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_SimplificationDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_OverlapRemovalShrinkPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewProp_CanRemoveFraction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"CreateNonOverlappingConvexHullsDataflowNode",
		Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::PropPointers),
		sizeof(FCreateNonOverlappingConvexHullsDataflowNode),
		alignof(FCreateNonOverlappingConvexHullsDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowSphereCovering;
class UScriptStruct* FDataflowSphereCovering::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSphereCovering.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowSphereCovering.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSphereCovering, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("DataflowSphereCovering"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowSphereCovering.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FDataflowSphereCovering>()
{
	return FDataflowSphereCovering::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//~ Simple wrapper class to make the sphere covering data possible to pass via dataflow\n// A set of spheres generated to represent empty space when creating a minimal set of convex hulls, e.g. in one of the Generate Cluster Convex Hulls nodes\n" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "A set of spheres generated to represent empty space when creating a minimal set of convex hulls, e.g. in one of the Generate Cluster Convex Hulls nodes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowSphereCovering>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		&NewStructOps,
		"DataflowSphereCovering",
		nullptr,
		0,
		sizeof(FDataflowSphereCovering),
		alignof(FDataflowSphereCovering),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataflowSphereCovering()
	{
		if (!Z_Registration_Info_UScriptStruct_DataflowSphereCovering.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowSphereCovering.InnerSingleton, Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataflowSphereCovering.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGenerateClusterConvexHullsFromLeafHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGenerateClusterConvexHullsFromLeafHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode;
class UScriptStruct* FGenerateClusterConvexHullsFromLeafHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GenerateClusterConvexHullsFromLeafHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGenerateClusterConvexHullsFromLeafHullsDataflowNode>()
{
	return FGenerateClusterConvexHullsFromLeafHullsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCovering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereCovering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConvexCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ErrorTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferExternalCollisionShapes_MetaData[];
#endif
		static void NewProp_bPreferExternalCollisionShapes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferExternalCollisionShapes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowMerges_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowMerges_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowMerges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSelectionFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSelectionFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProtectNegativeSpace_MetaData[];
#endif
		static void NewProp_bProtectNegativeSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProtectNegativeSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNumSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNumSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSampleSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinSampleSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativeSpaceTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NegativeSpaceTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates cluster convex hulls for leafs hulls\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Generates cluster convex hulls for leafs hulls" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateClusterConvexHullsFromLeafHullsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_SphereCovering_MetaData[] = {
		{ "Comment", "// A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres.\n" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_SphereCovering = { "SphereCovering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, SphereCovering), Z_Construct_UScriptStruct_FDataflowSphereCovering, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_SphereCovering_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_SphereCovering_MetaData) }; // 2503308995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ConvexCount_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Maximum number of convex to generate for a specific cluster. Will be ignored if error tolerance is used instead */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ErrorTolerance == 0" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Maximum number of convex to generate for a specific cluster. Will be ignored if error tolerance is used instead" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ConvexCount = { "ConvexCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, ConvexCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ConvexCount_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ConvexCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** \n\x09* Error tolerance to use to decide to merge leaf convex together. \n\x09* This is in centimeters and represents the side of a cube, the volume of which will be used as threshold\n\x09* to know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex\n\x09*/" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Error tolerance to use to decide to merge leaf convex together.\nThis is in centimeters and represents the side of a cube, the volume of which will be used as threshold\nto know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex" },
		{ "UIMax", "100." },
		{ "UIMin", "0" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ErrorTolerance_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ErrorTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Whether to prefer available External (imported) collision shapes instead of the computed convex hulls on the Collection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to prefer available External (imported) collision shapes instead of the computed convex hulls on the Collection" },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_SetBit(void* Obj)
	{
		((FGenerateClusterConvexHullsFromLeafHullsDataflowNode*)Obj)->bPreferExternalCollisionShapes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes = { "bPreferExternalCollisionShapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_AllowMerges_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_AllowMerges_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Method to determine which convex hull pairs can potentially be merged */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Method to determine which convex hull pairs can potentially be merged" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_AllowMerges = { "AllowMerges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, AllowMerges), Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_AllowMerges_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_AllowMerges_MetaData) }; // 2267848243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData[] = {
		{ "Comment", "/** Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed. */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter = { "OptionalSelectionFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, OptionalSelectionFilter), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData) }; // 216225950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Whether to use a sphere cover to define negative space that should not be covered by convex hulls */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to use a sphere cover to define negative space that should not be covered by convex hulls" },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit(void* Obj)
	{
		((FGenerateClusterConvexHullsFromLeafHullsDataflowNode*)Obj)->bProtectNegativeSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace = { "bProtectNegativeSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_TargetNumSamples_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Approximate number of spheres to consider when covering negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Approximate number of spheres to consider when covering negative space" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_TargetNumSamples = { "TargetNumSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, TargetNumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_TargetNumSamples_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_TargetNumSamples_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinSampleSpacing_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinSampleSpacing = { "MinSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, MinSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinSampleSpacing_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinSampleSpacing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Amount of space to leave between convex hulls and protected negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Amount of space to leave between convex hulls and protected negative space" },
		{ "UIMin", "0.100000" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance = { "NegativeSpaceTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, NegativeSpaceTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinRadius_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Spheres smaller than this are not included in the negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Spheres smaller than this are not included in the negative space" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, MinRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinRadius_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_SphereCovering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ConvexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_ErrorTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_AllowMerges_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_AllowMerges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_TargetNumSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinSampleSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewProp_MinRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GenerateClusterConvexHullsFromLeafHullsDataflowNode",
		Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::PropPointers),
		sizeof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode),
		alignof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGenerateClusterConvexHullsFromChildrenHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGenerateClusterConvexHullsFromChildrenHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode;
class UScriptStruct* FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GenerateClusterConvexHullsFromChildrenHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGenerateClusterConvexHullsFromChildrenHullsDataflowNode>()
{
	return FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCovering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereCovering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConvexCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ErrorTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferExternalCollisionShapes_MetaData[];
#endif
		static void NewProp_bPreferExternalCollisionShapes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferExternalCollisionShapes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSelectionFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSelectionFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProtectNegativeSpace_MetaData[];
#endif
		static void NewProp_bProtectNegativeSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProtectNegativeSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNumSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNumSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSampleSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinSampleSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativeSpaceTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NegativeSpaceTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates cluster convex hulls for children hulls\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Generates cluster convex hulls for children hulls" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateClusterConvexHullsFromChildrenHullsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_SphereCovering_MetaData[] = {
		{ "Comment", "// A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres.\n" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_SphereCovering = { "SphereCovering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, SphereCovering), Z_Construct_UScriptStruct_FDataflowSphereCovering, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_SphereCovering_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_SphereCovering_MetaData) }; // 2503308995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ConvexCount_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Maximum number of convex to generate for a specific cluster. Will be ignored if error tolerance is used instead */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "ErrorTolerance == 0" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Maximum number of convex to generate for a specific cluster. Will be ignored if error tolerance is used instead" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ConvexCount = { "ConvexCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, ConvexCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ConvexCount_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ConvexCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/**\n\x09* Error tolerance to use to decide to merge leaf convex together.\n\x09* This is in centimeters and represents the side of a cube, the volume of which will be used as threshold\n\x09* to know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex\n\x09*/" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Error tolerance to use to decide to merge leaf convex together.\nThis is in centimeters and represents the side of a cube, the volume of which will be used as threshold\nto know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex" },
		{ "UIMax", "100." },
		{ "UIMin", "0" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ErrorTolerance_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ErrorTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Whether to prefer available External (imported) collision shapes instead of the computed convex hulls on the Collection */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to prefer available External (imported) collision shapes instead of the computed convex hulls on the Collection" },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_SetBit(void* Obj)
	{
		((FGenerateClusterConvexHullsFromChildrenHullsDataflowNode*)Obj)->bPreferExternalCollisionShapes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes = { "bPreferExternalCollisionShapes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData[] = {
		{ "Comment", "/** Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed. */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter = { "OptionalSelectionFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, OptionalSelectionFilter), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData) }; // 216225950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Whether to use a sphere cover to define negative space that should not be covered by convex hulls */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to use a sphere cover to define negative space that should not be covered by convex hulls" },
	};
#endif
	void Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit(void* Obj)
	{
		((FGenerateClusterConvexHullsFromChildrenHullsDataflowNode*)Obj)->bProtectNegativeSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace = { "bProtectNegativeSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode), &Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_TargetNumSamples_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Approximate number of spheres to consider when covering negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Approximate number of spheres to consider when covering negative space" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_TargetNumSamples = { "TargetNumSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, TargetNumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_TargetNumSamples_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_TargetNumSamples_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinSampleSpacing_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinSampleSpacing = { "MinSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, MinSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinSampleSpacing_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinSampleSpacing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Amount of space to leave between convex hulls and protected negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Amount of space to leave between convex hulls and protected negative space" },
		{ "UIMin", "0.100000" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance = { "NegativeSpaceTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, NegativeSpaceTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinRadius_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Spheres smaller than this are not included in the negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Spheres smaller than this are not included in the negative space" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, MinRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinRadius_MetaData), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_SphereCovering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ConvexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_ErrorTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bPreferExternalCollisionShapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_TargetNumSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinSampleSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewProp_MinRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GenerateClusterConvexHullsFromChildrenHullsDataflowNode",
		Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::PropPointers),
		sizeof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode),
		alignof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMergeConvexHullsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMergeConvexHullsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode;
class UScriptStruct* FMergeConvexHullsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MergeConvexHullsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMergeConvexHullsDataflowNode>()
{
	return FMergeConvexHullsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCovering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereCovering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxConvexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConvexCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ErrorTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSelectionFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSelectionFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProtectNegativeSpace_MetaData[];
#endif
		static void NewProp_bProtectNegativeSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProtectNegativeSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetNumSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetNumSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSampleSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinSampleSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativeSpaceTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NegativeSpaceTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Merge convex hulls on transforms with multiple hulls */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Merge convex hulls on transforms with multiple hulls" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMergeConvexHullsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_SphereCovering_MetaData[] = {
		{ "Comment", "// A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres.\n" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "A representation of the negative space protected by the 'protect negative space' option. If negative space is not protected, this will contain zero spheres." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_SphereCovering = { "SphereCovering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, SphereCovering), Z_Construct_UScriptStruct_FDataflowSphereCovering, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_SphereCovering_MetaData), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_SphereCovering_MetaData) }; // 2503308995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MaxConvexCount_MetaData[] = {
		{ "Category", "Convex" },
		{ "Comment", "/** Maximum number of convex to generate per transform. Ignored if < 0. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Maximum number of convex to generate per transform. Ignored if < 0." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MaxConvexCount = { "MaxConvexCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, MaxConvexCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MaxConvexCount_MetaData), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MaxConvexCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Convex" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Error tolerance to use to decide to merge leaf convex together.\n\x09* This is in centimeters and represents the side of a cube, the volume of which will be used as threshold\n\x09* to know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex\n\x09*/" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Error tolerance to use to decide to merge leaf convex together.\nThis is in centimeters and represents the side of a cube, the volume of which will be used as threshold\nto know if the volume of the generated convex is too large compared to the sum of the volume of the leaf convex" },
		{ "UIMax", "100." },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, ErrorTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_ErrorTolerance_MetaData), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_ErrorTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData[] = {
		{ "Comment", "/** Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed. */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Optional transform selection to compute cluster hulls on -- if not provided, all cluster hulls will be computed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter = { "OptionalSelectionFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, OptionalSelectionFilter), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter_MetaData) }; // 216225950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "Comment", "/** Whether to use a sphere cover to define negative space that should not be covered by convex hulls */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to use a sphere cover to define negative space that should not be covered by convex hulls" },
	};
#endif
	void Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit(void* Obj)
	{
		((FMergeConvexHullsDataflowNode*)Obj)->bProtectNegativeSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace = { "bProtectNegativeSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMergeConvexHullsDataflowNode), &Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_MetaData), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_TargetNumSamples_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Approximate number of spheres to consider when covering negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Approximate number of spheres to consider when covering negative space" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_TargetNumSamples = { "TargetNumSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, TargetNumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_TargetNumSamples_MetaData), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_TargetNumSamples_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinSampleSpacing_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Minimum desired spacing between spheres; if > 0, will attempt not to place sphere centers closer than this" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinSampleSpacing = { "MinSampleSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, MinSampleSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinSampleSpacing_MetaData), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinSampleSpacing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Amount of space to leave between convex hulls and protected negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Amount of space to leave between convex hulls and protected negative space" },
		{ "UIMin", "0.100000" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance = { "NegativeSpaceTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, NegativeSpaceTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance_MetaData), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinRadius_MetaData[] = {
		{ "Category", "NegativeSpace" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Spheres smaller than this are not included in the negative space */" },
		{ "DataflowInput", "" },
		{ "EditCondition", "bProtectNegativeSpace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Spheres smaller than this are not included in the negative space" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMergeConvexHullsDataflowNode, MinRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinRadius_MetaData), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_SphereCovering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MaxConvexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_ErrorTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_OptionalSelectionFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_bProtectNegativeSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_TargetNumSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinSampleSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_NegativeSpaceTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewProp_MinRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"MergeConvexHullsDataflowNode",
		Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::PropPointers),
		sizeof(FMergeConvexHullsDataflowNode),
		alignof(FMergeConvexHullsDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUpdateVolumeAttributesDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FUpdateVolumeAttributesDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode;
class UScriptStruct* FUpdateVolumeAttributesDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("UpdateVolumeAttributesDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FUpdateVolumeAttributesDataflowNode>()
{
	return FUpdateVolumeAttributesDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Update the Volume and Size attributes on the target Collection (and add them if they were not present)\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Update the Volume and Size attributes on the target Collection (and add them if they were not present)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateVolumeAttributesDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateVolumeAttributesDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"UpdateVolumeAttributesDataflowNode",
		Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::PropPointers),
		sizeof(FUpdateVolumeAttributesDataflowNode),
		alignof(FUpdateVolumeAttributesDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetConvexHullVolumeDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetConvexHullVolumeDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode;
class UScriptStruct* FGetConvexHullVolumeDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetConvexHullVolumeDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetConvexHullVolumeDataflowNode>()
{
	return FGetConvexHullVolumeDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSumChildrenForClustersWithoutHulls_MetaData[];
#endif
		static void NewProp_bSumChildrenForClustersWithoutHulls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSumChildrenForClustersWithoutHulls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVolumeOfUnion_MetaData[];
#endif
		static void NewProp_bVolumeOfUnion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVolumeOfUnion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get the sum of volumes of the convex hulls on the selected nodes\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Get the sum of volumes of the convex hulls on the selected nodes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetConvexHullVolumeDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetConvexHullVolumeDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Collection_MetaData), Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Collection_MetaData) }; // 1642525875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** The transforms to consider */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "The transforms to consider" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetConvexHullVolumeDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_TransformSelection_MetaData), Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_TransformSelection_MetaData) }; // 216225950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Volume_MetaData[] = {
		{ "Comment", "/** Sum of convex hull volumes */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Sum of convex hull volumes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetConvexHullVolumeDataflowNode, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Volume_MetaData), Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Volume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bSumChildrenForClustersWithoutHulls_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** For any cluster transform that has no convex hulls, whether to fall back to the convex hulls of the cluster's children. Otherwise, the cluster will not add to the total volume sum. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "For any cluster transform that has no convex hulls, whether to fall back to the convex hulls of the cluster's children. Otherwise, the cluster will not add to the total volume sum." },
	};
#endif
	void Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bSumChildrenForClustersWithoutHulls_SetBit(void* Obj)
	{
		((FGetConvexHullVolumeDataflowNode*)Obj)->bSumChildrenForClustersWithoutHulls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bSumChildrenForClustersWithoutHulls = { "bSumChildrenForClustersWithoutHulls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGetConvexHullVolumeDataflowNode), &Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bSumChildrenForClustersWithoutHulls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bSumChildrenForClustersWithoutHulls_MetaData), Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bSumChildrenForClustersWithoutHulls_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bVolumeOfUnion_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to take the volume of the union of selected hulls, rather than the sum of each hull volume separately. This is more expensive but more accurate when hulls overlap. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionUtilityNodes.h" },
		{ "ToolTip", "Whether to take the volume of the union of selected hulls, rather than the sum of each hull volume separately. This is more expensive but more accurate when hulls overlap." },
	};
#endif
	void Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bVolumeOfUnion_SetBit(void* Obj)
	{
		((FGetConvexHullVolumeDataflowNode*)Obj)->bVolumeOfUnion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bVolumeOfUnion = { "bVolumeOfUnion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGetConvexHullVolumeDataflowNode), &Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bVolumeOfUnion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bVolumeOfUnion_MetaData), Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bVolumeOfUnion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bSumChildrenForClustersWithoutHulls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewProp_bVolumeOfUnion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetConvexHullVolumeDataflowNode",
		Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::PropPointers),
		sizeof(FGetConvexHullVolumeDataflowNode),
		alignof(FGetConvexHullVolumeDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::EnumInfo[] = {
		{ EConvexOverlapRemovalMethodEnum_StaticEnum, TEXT("EConvexOverlapRemovalMethodEnum"), &Z_Registration_Info_UEnum_EConvexOverlapRemovalMethodEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2902285704U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::ScriptStructInfo[] = {
		{ FDataflowConvexDecompositionSettings::StaticStruct, Z_Construct_UScriptStruct_FDataflowConvexDecompositionSettings_Statics::NewStructOps, TEXT("DataflowConvexDecompositionSettings"), &Z_Registration_Info_UScriptStruct_DataflowConvexDecompositionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowConvexDecompositionSettings), 1507817234U) },
		{ FMakeDataflowConvexDecompositionSettingsNode::StaticStruct, Z_Construct_UScriptStruct_FMakeDataflowConvexDecompositionSettingsNode_Statics::NewStructOps, TEXT("MakeDataflowConvexDecompositionSettingsNode"), &Z_Registration_Info_UScriptStruct_MakeDataflowConvexDecompositionSettingsNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeDataflowConvexDecompositionSettingsNode), 2832966091U) },
		{ FCreateLeafConvexHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode_Statics::NewStructOps, TEXT("CreateLeafConvexHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_CreateLeafConvexHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateLeafConvexHullsDataflowNode), 533303211U) },
		{ FSimplifyConvexHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSimplifyConvexHullsDataflowNode_Statics::NewStructOps, TEXT("SimplifyConvexHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_SimplifyConvexHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimplifyConvexHullsDataflowNode), 2076116508U) },
		{ FCreateNonOverlappingConvexHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics::NewStructOps, TEXT("CreateNonOverlappingConvexHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_CreateNonOverlappingConvexHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateNonOverlappingConvexHullsDataflowNode), 2543559480U) },
		{ FDataflowSphereCovering::StaticStruct, Z_Construct_UScriptStruct_FDataflowSphereCovering_Statics::NewStructOps, TEXT("DataflowSphereCovering"), &Z_Registration_Info_UScriptStruct_DataflowSphereCovering, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowSphereCovering), 2503308995U) },
		{ FGenerateClusterConvexHullsFromLeafHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode_Statics::NewStructOps, TEXT("GenerateClusterConvexHullsFromLeafHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromLeafHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateClusterConvexHullsFromLeafHullsDataflowNode), 2642001166U) },
		{ FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromChildrenHullsDataflowNode_Statics::NewStructOps, TEXT("GenerateClusterConvexHullsFromChildrenHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_GenerateClusterConvexHullsFromChildrenHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode), 1666518191U) },
		{ FMergeConvexHullsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMergeConvexHullsDataflowNode_Statics::NewStructOps, TEXT("MergeConvexHullsDataflowNode"), &Z_Registration_Info_UScriptStruct_MergeConvexHullsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMergeConvexHullsDataflowNode), 473107584U) },
		{ FUpdateVolumeAttributesDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode_Statics::NewStructOps, TEXT("UpdateVolumeAttributesDataflowNode"), &Z_Registration_Info_UScriptStruct_UpdateVolumeAttributesDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateVolumeAttributesDataflowNode), 3271457729U) },
		{ FGetConvexHullVolumeDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode_Statics::NewStructOps, TEXT("GetConvexHullVolumeDataflowNode"), &Z_Registration_Info_UScriptStruct_GetConvexHullVolumeDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetConvexHullVolumeDataflowNode), 3293700114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_3885647584(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
