// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionArrayNodes.h"
#include "Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionArrayNodes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowFaceSelection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVertexSelection();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetArrayElementDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FGetFloatArrayElementDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetFloatArrayElementDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetFloatArrayElementDataflowNode;
class UScriptStruct* FGetFloatArrayElementDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetFloatArrayElementDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetFloatArrayElementDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetFloatArrayElementDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetFloatArrayElementDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetFloatArrayElementDataflowNode>()
{
	return FGetFloatArrayElementDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Returns the specified element from an array\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Returns the specified element from an array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetFloatArrayElementDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Index" },
		{ "Comment", "/** Element index */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Element index" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetFloatArrayElementDataflowNode, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_Index_MetaData), Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_Index_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatArray_MetaData[] = {
		{ "Comment", "/** Array to get the element from */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Array to get the element from" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetFloatArrayElementDataflowNode, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatArray_MetaData), Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Comment", "/** Specified element */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Specified element" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetFloatArrayElementDataflowNode, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatValue_MetaData), Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewProp_FloatValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetFloatArrayElementDataflowNode",
		Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::PropPointers),
		sizeof(FGetFloatArrayElementDataflowNode),
		alignof(FGetFloatArrayElementDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetFloatArrayElementDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetFloatArrayElementDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetFloatArrayElementDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFloatArrayToIntArrayFunctionEnum;
	static UEnum* EFloatArrayToIntArrayFunctionEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFloatArrayToIntArrayFunctionEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFloatArrayToIntArrayFunctionEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EFloatArrayToIntArrayFunctionEnum"));
		}
		return Z_Registration_Info_UEnum_EFloatArrayToIntArrayFunctionEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EFloatArrayToIntArrayFunctionEnum>()
	{
		return EFloatArrayToIntArrayFunctionEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum_Statics::Enumerators[] = {
		{ "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Floor", (int64)EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Floor },
		{ "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Ceil", (int64)EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Ceil },
		{ "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Round", (int64)EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Round },
		{ "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Truncate", (int64)EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Truncate },
		{ "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_NonZeroToIndex", (int64)EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_NonZeroToIndex },
		{ "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_ZeroToIndex", (int64)EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_ZeroToIndex },
		{ "EFloatArrayToIntArrayFunctionEnum::Dataflow_Max", (int64)EFloatArrayToIntArrayFunctionEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_FloatToInt_Function_Ceil.DisplayName", "Ceil()" },
		{ "Dataflow_FloatToInt_Function_Ceil.Name", "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Ceil" },
		{ "Dataflow_FloatToInt_Function_Floor.DisplayName", "Floor()" },
		{ "Dataflow_FloatToInt_Function_Floor.Name", "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Floor" },
		{ "Dataflow_FloatToInt_Function_Round.DisplayName", "Round()" },
		{ "Dataflow_FloatToInt_Function_Round.Name", "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Round" },
		{ "Dataflow_FloatToInt_Function_Truncate.DisplayName", "Truncate()" },
		{ "Dataflow_FloatToInt_Function_Truncate.Name", "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_Function_Truncate" },
		{ "Dataflow_FloatToInt_NonZeroToIndex.DisplayName", "Non-zero to Index" },
		{ "Dataflow_FloatToInt_NonZeroToIndex.Name", "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_NonZeroToIndex" },
		{ "Dataflow_FloatToInt_ZeroToIndex.DisplayName", "Zero to Index" },
		{ "Dataflow_FloatToInt_ZeroToIndex.Name", "EFloatArrayToIntArrayFunctionEnum::Dataflow_FloatToInt_ZeroToIndex" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EFloatArrayToIntArrayFunctionEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EFloatArrayToIntArrayFunctionEnum",
		"EFloatArrayToIntArrayFunctionEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum()
	{
		if (!Z_Registration_Info_UEnum_EFloatArrayToIntArrayFunctionEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFloatArrayToIntArrayFunctionEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFloatArrayToIntArrayFunctionEnum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFloatArrayToIntArrayDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FFloatArrayToIntArrayDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatArrayToIntArrayDataflowNode;
class UScriptStruct* FFloatArrayToIntArrayDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatArrayToIntArrayDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatArrayToIntArrayDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("FloatArrayToIntArrayDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FloatArrayToIntArrayDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FFloatArrayToIntArrayDataflowNode>()
{
	return FFloatArrayToIntArrayDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Function_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Function;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a Float array to Int array using the specified method.\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Converts a Float array to Int array using the specified method." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatArrayToIntArrayDataflowNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_Function_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_Function_MetaData[] = {
		{ "Category", "Float" },
		{ "Comment", "/** Conversion method:\n\x09* Floor takes the floor of each input float value - 1.1 turns into 1.\n\x09* Ceil takes the ceil - 1.1 turns into 2.\n\x09* Round rounds to the nearest integer - 1.1 turns into 1.\n\x09* Tuncate trucates like a type cast - 1.1 turns into 1.\n\x09* Non-zero to Index appends the index of all non-zero values to the output array.\n\x09* Zero to Index appends the index of all zero values to the output array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Conversion method:\nFloor takes the floor of each input float value - 1.1 turns into 1.\nCeil takes the ceil - 1.1 turns into 2.\nRound rounds to the nearest integer - 1.1 turns into 1.\nTuncate trucates like a type cast - 1.1 turns into 1.\nNon-zero to Index appends the index of all non-zero values to the output array.\nZero to Index appends the index of all zero values to the output array." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayToIntArrayDataflowNode, Function), Z_Construct_UEnum_GeometryCollectionNodes_EFloatArrayToIntArrayFunctionEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_Function_MetaData), Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_Function_MetaData) }; // 2793449021
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_FloatArray_MetaData[] = {
		{ "Category", "Float" },
		{ "Comment", "/** Float array value to convert */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Float array value to convert" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayToIntArrayDataflowNode, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_FloatArray_MetaData), Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_FloatArray_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_IntArray_MetaData[] = {
		{ "Comment", "/** Int array output */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Int array output" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayToIntArrayDataflowNode, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_IntArray_MetaData), Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_IntArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_Function_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_IntArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewProp_IntArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"FloatArrayToIntArrayDataflowNode",
		Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::PropPointers),
		sizeof(FFloatArrayToIntArrayDataflowNode),
		alignof(FFloatArrayToIntArrayDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_FloatArrayToIntArrayDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatArrayToIntArrayDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloatArrayToIntArrayDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetArrayElementDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetArrayElementDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetArrayElementDataflowNode;
class UScriptStruct* FGetArrayElementDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetArrayElementDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetArrayElementDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetArrayElementDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetArrayElementDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetArrayElementDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetArrayElementDataflowNode>()
{
	return FGetArrayElementDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Returns the specified element from an array\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Returns the specified element from an array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetArrayElementDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Index" },
		{ "Comment", "/** Element index */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Element index" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetArrayElementDataflowNode, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Index_MetaData), Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Index_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Points_MetaData[] = {
		{ "Comment", "/** Array to get the element from */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Array to get the element from" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetArrayElementDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Points_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Point_MetaData[] = {
		{ "Comment", "/** Specified element */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Specified element" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetArrayElementDataflowNode, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Point_MetaData), Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Point_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewProp_Point,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetArrayElementDataflowNode",
		Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::PropPointers),
		sizeof(FGetArrayElementDataflowNode),
		alignof(FGetArrayElementDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGetArrayElementDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetArrayElementDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetArrayElementDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetArrayElementDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetNumArrayElementsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetNumArrayElementsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetNumArrayElementsDataflowNode;
class UScriptStruct* FGetNumArrayElementsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetNumArrayElementsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetNumArrayElementsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetNumArrayElementsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetNumArrayElementsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetNumArrayElementsDataflowNode>()
{
	return FGetNumArrayElementsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector3fArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector3fArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector3fArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumElements_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Returns the number of elements in an array\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Returns the number of elements in an array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetNumArrayElementsDataflowNode>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_FloatArray_MetaData[] = {
		{ "Comment", "/** Float array input */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "FloatArray" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Float array input" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetNumArrayElementsDataflowNode, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_FloatArray_MetaData), Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_FloatArray_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_IntArray_MetaData[] = {
		{ "Comment", "/** Int32 array input */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "IntArray" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Int32 array input" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetNumArrayElementsDataflowNode, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_IntArray_MetaData), Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_IntArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Points_MetaData[] = {
		{ "Comment", "/** FVector array input */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "VectorArray" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "FVector array input" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetNumArrayElementsDataflowNode, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Points_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Vector3fArray_Inner = { "Vector3fArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Vector3fArray_MetaData[] = {
		{ "Comment", "/** FVector3f array input */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Vector3fArray" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "FVector3f array input" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Vector3fArray = { "Vector3fArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetNumArrayElementsDataflowNode, Vector3fArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Vector3fArray_MetaData), Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Vector3fArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_NumElements_MetaData[] = {
		{ "Comment", "/** Number of elements in the array */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Number of elements in the array" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_NumElements = { "NumElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetNumArrayElementsDataflowNode, NumElements), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_NumElements_MetaData), Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_NumElements_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_IntArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_IntArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Vector3fArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_Vector3fArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewProp_NumElements,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetNumArrayElementsDataflowNode",
		Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::PropPointers),
		sizeof(FGetNumArrayElementsDataflowNode),
		alignof(FGetNumArrayElementsDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetNumArrayElementsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetNumArrayElementsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetNumArrayElementsDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBoolArrayToFaceSelectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FBoolArrayToFaceSelectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoolArrayToFaceSelectionDataflowNode;
class UScriptStruct* FBoolArrayToFaceSelectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoolArrayToFaceSelectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoolArrayToFaceSelectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("BoolArrayToFaceSelectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_BoolArrayToFaceSelectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FBoolArrayToFaceSelectionDataflowNode>()
{
	return FBoolArrayToFaceSelectionDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolAttributeData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolAttributeData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolAttributeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a TArray<bool> to a FDataflowFaceSelection\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Converts a TArray<bool> to a FDataflowFaceSelection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolArrayToFaceSelectionDataflowNode>();
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_BoolAttributeData_Inner = { "BoolAttributeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_BoolAttributeData_MetaData[] = {
		{ "Comment", "/** TArray<bool> data */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "TArray<bool> data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_BoolAttributeData = { "BoolAttributeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoolArrayToFaceSelectionDataflowNode, BoolAttributeData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_BoolAttributeData_MetaData), Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_BoolAttributeData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_FaceSelection_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "FaceSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_FaceSelection = { "FaceSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoolArrayToFaceSelectionDataflowNode, FaceSelection), Z_Construct_UScriptStruct_FDataflowFaceSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_FaceSelection_MetaData), Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_FaceSelection_MetaData) }; // 3875686190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_BoolAttributeData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_BoolAttributeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewProp_FaceSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"BoolArrayToFaceSelectionDataflowNode",
		Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::PropPointers),
		sizeof(FBoolArrayToFaceSelectionDataflowNode),
		alignof(FBoolArrayToFaceSelectionDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_BoolArrayToFaceSelectionDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoolArrayToFaceSelectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoolArrayToFaceSelectionDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompareOperation1Enum;
	static UEnum* ECompareOperation1Enum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECompareOperation1Enum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECompareOperation1Enum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ECompareOperation1Enum"));
		}
		return Z_Registration_Info_UEnum_ECompareOperation1Enum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<ECompareOperation1Enum>()
	{
		return ECompareOperation1Enum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum_Statics::Enumerators[] = {
		{ "ECompareOperation1Enum::Dataflow_Compare_Equal", (int64)ECompareOperation1Enum::Dataflow_Compare_Equal },
		{ "ECompareOperation1Enum::Dataflow_Compare_Smaller", (int64)ECompareOperation1Enum::Dataflow_Compare_Smaller },
		{ "ECompareOperation1Enum::Dataflow_Compare_SmallerOrEqual", (int64)ECompareOperation1Enum::Dataflow_Compare_SmallerOrEqual },
		{ "ECompareOperation1Enum::Dataflow_Compare_Greater", (int64)ECompareOperation1Enum::Dataflow_Compare_Greater },
		{ "ECompareOperation1Enum::Dataflow_Compare_GreaterOrEqual", (int64)ECompareOperation1Enum::Dataflow_Compare_GreaterOrEqual },
		{ "ECompareOperation1Enum::Dataflow_Max", (int64)ECompareOperation1Enum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Compare_Equal.DisplayName", "==" },
		{ "Dataflow_Compare_Equal.Name", "ECompareOperation1Enum::Dataflow_Compare_Equal" },
		{ "Dataflow_Compare_Greater.DisplayName", ">" },
		{ "Dataflow_Compare_Greater.Name", "ECompareOperation1Enum::Dataflow_Compare_Greater" },
		{ "Dataflow_Compare_GreaterOrEqual.DisplayName", ">=" },
		{ "Dataflow_Compare_GreaterOrEqual.Name", "ECompareOperation1Enum::Dataflow_Compare_GreaterOrEqual" },
		{ "Dataflow_Compare_Smaller.DisplayName", "<" },
		{ "Dataflow_Compare_Smaller.Name", "ECompareOperation1Enum::Dataflow_Compare_Smaller" },
		{ "Dataflow_Compare_SmallerOrEqual.DisplayName", "<=" },
		{ "Dataflow_Compare_SmallerOrEqual.Name", "ECompareOperation1Enum::Dataflow_Compare_SmallerOrEqual" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "ECompareOperation1Enum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"ECompareOperation1Enum",
		"ECompareOperation1Enum",
		Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum()
	{
		if (!Z_Registration_Info_UEnum_ECompareOperation1Enum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompareOperation1Enum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECompareOperation1Enum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFloatArrayToVertexSelectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FFloatArrayToVertexSelectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatArrayToVertexSelectionDataflowNode;
class UScriptStruct* FFloatArrayToVertexSelectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatArrayToVertexSelectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatArrayToVertexSelectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("FloatArrayToVertexSelectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FloatArrayToVertexSelectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FFloatArrayToVertexSelectionDataflowNode>()
{
	return FFloatArrayToVertexSelectionDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Converts a TArray<float> to a FDataflowVertexSelection\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Converts a TArray<float> to a FDataflowVertexSelection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatArrayToVertexSelectionDataflowNode>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_FloatArray_MetaData[] = {
		{ "Comment", "/** TArray<floatl> array */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "TArray<floatl> array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayToVertexSelectionDataflowNode, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_FloatArray_MetaData), Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_FloatArray_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Compare" },
		{ "Comment", "/** Comparison operation */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Comparison operation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayToVertexSelectionDataflowNode, Operation), Z_Construct_UEnum_GeometryCollectionNodes_ECompareOperation1Enum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Operation_MetaData), Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Operation_MetaData) }; // 91218094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "Compare" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayToVertexSelectionDataflowNode, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Threshold_MetaData), Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Threshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_VertexSelection_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "VertexSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_VertexSelection = { "VertexSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayToVertexSelectionDataflowNode, VertexSelection), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_VertexSelection_MetaData), Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_VertexSelection_MetaData) }; // 1484381850
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewProp_VertexSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"FloatArrayToVertexSelectionDataflowNode",
		Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::PropPointers),
		sizeof(FFloatArrayToVertexSelectionDataflowNode),
		alignof(FFloatArrayToVertexSelectionDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_FloatArrayToVertexSelectionDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatArrayToVertexSelectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloatArrayToVertexSelectionDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFloatArrayNormalizeDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FFloatArrayNormalizeDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatArrayNormalizeDataflowNode;
class UScriptStruct* FFloatArrayNormalizeDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatArrayNormalizeDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatArrayNormalizeDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("FloatArrayNormalizeDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FloatArrayNormalizeDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FFloatArrayNormalizeDataflowNode>()
{
	return FFloatArrayNormalizeDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InFloatArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutFloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutFloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFloatArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Normalize the selected float data in a FloatArray\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Normalize the selected float data in a FloatArray" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatArrayNormalizeDataflowNode>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_InFloatArray_Inner = { "InFloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_InFloatArray_MetaData[] = {
		{ "Comment", "/** Input VectorArray */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Input VectorArray" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_InFloatArray = { "InFloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayNormalizeDataflowNode, InFloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_InFloatArray_MetaData), Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_InFloatArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_Selection_MetaData[] = {
		{ "Comment", "/** Selection for the operation */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Selection for the operation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayNormalizeDataflowNode, Selection), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_Selection_MetaData), Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_Selection_MetaData) }; // 1484381850
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_MinRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayNormalizeDataflowNode, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_MinRange_MetaData), Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_MinRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayNormalizeDataflowNode, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_MaxRange_MetaData), Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_MaxRange_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_OutFloatArray_Inner = { "OutFloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_OutFloatArray_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_OutFloatArray = { "OutFloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayNormalizeDataflowNode, OutFloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_OutFloatArray_MetaData), Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_OutFloatArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_InFloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_InFloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_MinRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_OutFloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewProp_OutFloatArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"FloatArrayNormalizeDataflowNode",
		Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::PropPointers),
		sizeof(FFloatArrayNormalizeDataflowNode),
		alignof(FFloatArrayNormalizeDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_FloatArrayNormalizeDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatArrayNormalizeDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloatArrayNormalizeDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVectorArrayNormalizeDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FVectorArrayNormalizeDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorArrayNormalizeDataflowNode;
class UScriptStruct* FVectorArrayNormalizeDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorArrayNormalizeDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorArrayNormalizeDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("VectorArrayNormalizeDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_VectorArrayNormalizeDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FVectorArrayNormalizeDataflowNode>()
{
	return FVectorArrayNormalizeDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVectorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InVectorArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutVectorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutVectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVectorArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Normalize all the selected vectors in a VectorArray\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Normalize all the selected vectors in a VectorArray" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorArrayNormalizeDataflowNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_InVectorArray_Inner = { "InVectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_InVectorArray_MetaData[] = {
		{ "Comment", "/** Input VectorArray */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Input VectorArray" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_InVectorArray = { "InVectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorArrayNormalizeDataflowNode, InVectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_InVectorArray_MetaData), Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_InVectorArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_Selection_MetaData[] = {
		{ "Comment", "/** Selection for the operation */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Selection for the operation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorArrayNormalizeDataflowNode, Selection), Z_Construct_UScriptStruct_FDataflowVertexSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_Selection_MetaData), Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_Selection_MetaData) }; // 1484381850
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "Field" },
		{ "Comment", "/**  */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorArrayNormalizeDataflowNode, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_Magnitude_MetaData), Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_Magnitude_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_OutVectorArray_Inner = { "OutVectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_OutVectorArray_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_OutVectorArray = { "OutVectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorArrayNormalizeDataflowNode, OutVectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_OutVectorArray_MetaData), Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_OutVectorArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_InVectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_InVectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_OutVectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewProp_OutVectorArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"VectorArrayNormalizeDataflowNode",
		Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::PropPointers),
		sizeof(FVectorArrayNormalizeDataflowNode),
		alignof(FVectorArrayNormalizeDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_VectorArrayNormalizeDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorArrayNormalizeDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VectorArrayNormalizeDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUnionIntArraysDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FUnionIntArraysDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UnionIntArraysDataflowNode;
class UScriptStruct* FUnionIntArraysDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UnionIntArraysDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UnionIntArraysDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("UnionIntArraysDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_UnionIntArraysDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FUnionIntArraysDataflowNode>()
{
	return FUnionIntArraysDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArray1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InArray1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InArray2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InArray2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnionIntArraysDataflowNode>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray1_Inner = { "InArray1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray1_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "InArray1" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray1 = { "InArray1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnionIntArraysDataflowNode, InArray1), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray1_MetaData), Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray1_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray2_Inner = { "InArray2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray2_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "InArray2" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray2 = { "InArray2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnionIntArraysDataflowNode, InArray2), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray2_MetaData), Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray2_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_OutArray_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "InArray1" },
		{ "DisplayName", "OutArray" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnionIntArraysDataflowNode, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_OutArray_MetaData), Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_OutArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_InArray2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewProp_OutArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"UnionIntArraysDataflowNode",
		Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::PropPointers),
		sizeof(FUnionIntArraysDataflowNode),
		alignof(FUnionIntArraysDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_UnionIntArraysDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UnionIntArraysDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UnionIntArraysDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRemoveFloatArrayElementDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FRemoveFloatArrayElementDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoveFloatArrayElementDataflowNode;
class UScriptStruct* FRemoveFloatArrayElementDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveFloatArrayElementDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoveFloatArrayElementDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("RemoveFloatArrayElementDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_RemoveFloatArrayElementDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FRemoveFloatArrayElementDataflowNode>()
{
	return FRemoveFloatArrayElementDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveOrder_MetaData[];
#endif
		static void NewProp_bPreserveOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveOrder;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Removes the specified element from an array\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Removes the specified element from an array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoveFloatArrayElementDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Index" },
		{ "Comment", "/** Element index */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Element index" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveFloatArrayElementDataflowNode, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_Index_MetaData), Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_Index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_bPreserveOrder_MetaData[] = {
		{ "Category", "Order" },
		{ "Comment", "/** Preserve order, if order not important set it to false for faster computation */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Preserve order, if order not important set it to false for faster computation" },
	};
#endif
	void Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_bPreserveOrder_SetBit(void* Obj)
	{
		((FRemoveFloatArrayElementDataflowNode*)Obj)->bPreserveOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_bPreserveOrder = { "bPreserveOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRemoveFloatArrayElementDataflowNode), &Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_bPreserveOrder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_bPreserveOrder_MetaData), Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_bPreserveOrder_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_FloatArray_MetaData[] = {
		{ "Comment", "/** Array to remove the element from */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "FloatArray" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Array to remove the element from" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveFloatArrayElementDataflowNode, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_FloatArray_MetaData), Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_FloatArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_bPreserveOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewProp_FloatArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"RemoveFloatArrayElementDataflowNode",
		Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::PropPointers),
		sizeof(FRemoveFloatArrayElementDataflowNode),
		alignof(FRemoveFloatArrayElementDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoveFloatArrayElementDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoveFloatArrayElementDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoveFloatArrayElementDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatisticsOperationEnum;
	static UEnum* EStatisticsOperationEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStatisticsOperationEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStatisticsOperationEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("EStatisticsOperationEnum"));
		}
		return Z_Registration_Info_UEnum_EStatisticsOperationEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EStatisticsOperationEnum>()
	{
		return EStatisticsOperationEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum_Statics::Enumerators[] = {
		{ "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Min", (int64)EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Min },
		{ "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Max", (int64)EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Max },
		{ "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Mean", (int64)EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Mean },
		{ "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Median", (int64)EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Median },
		{ "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Mode", (int64)EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Mode },
		{ "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Sum", (int64)EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Sum },
		{ "EStatisticsOperationEnum::Dataflow_Max", (int64)EStatisticsOperationEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_EStatisticsOperationEnum_Max.DisplayName", "Max" },
		{ "Dataflow_EStatisticsOperationEnum_Max.Name", "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Max" },
		{ "Dataflow_EStatisticsOperationEnum_Max.ToolTip", "" },
		{ "Dataflow_EStatisticsOperationEnum_Mean.DisplayName", "Mean" },
		{ "Dataflow_EStatisticsOperationEnum_Mean.Name", "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Mean" },
		{ "Dataflow_EStatisticsOperationEnum_Mean.ToolTip", "" },
		{ "Dataflow_EStatisticsOperationEnum_Median.DisplayName", "Median" },
		{ "Dataflow_EStatisticsOperationEnum_Median.Name", "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Median" },
		{ "Dataflow_EStatisticsOperationEnum_Median.ToolTip", "" },
		{ "Dataflow_EStatisticsOperationEnum_Min.DisplayName", "Min" },
		{ "Dataflow_EStatisticsOperationEnum_Min.Name", "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Min" },
		{ "Dataflow_EStatisticsOperationEnum_Min.ToolTip", "" },
		{ "Dataflow_EStatisticsOperationEnum_Mode.DisplayName", "Mode" },
		{ "Dataflow_EStatisticsOperationEnum_Mode.Name", "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Mode" },
		{ "Dataflow_EStatisticsOperationEnum_Mode.ToolTip", "" },
		{ "Dataflow_EStatisticsOperationEnum_Sum.DisplayName", "Sum" },
		{ "Dataflow_EStatisticsOperationEnum_Sum.Name", "EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Sum" },
		{ "Dataflow_EStatisticsOperationEnum_Sum.ToolTip", "" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "EStatisticsOperationEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"EStatisticsOperationEnum",
		"EStatisticsOperationEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum()
	{
		if (!Z_Registration_Info_UEnum_EStatisticsOperationEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatisticsOperationEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStatisticsOperationEnum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFloatArrayComputeStatisticsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FFloatArrayComputeStatisticsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatArrayComputeStatisticsDataflowNode;
class UScriptStruct* FFloatArrayComputeStatisticsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatArrayComputeStatisticsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatArrayComputeStatisticsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("FloatArrayComputeStatisticsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FloatArrayComputeStatisticsDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FFloatArrayComputeStatisticsDataflowNode>()
{
	return FFloatArrayComputeStatisticsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformSelection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OperationName_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationName_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OperationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Computes statistics of a float array\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Computes statistics of a float array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatArrayComputeStatisticsDataflowNode>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_FloatArray_MetaData[] = {
		{ "Comment", "/** Array to compute values from */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Array to compute values from" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayComputeStatisticsDataflowNode, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_FloatArray_MetaData), Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_FloatArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_TransformSelection_MetaData[] = {
		{ "Comment", "/** TransformSelection describes which values to use, if not connected all the elements will be used */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "TransformSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "TransformSelection describes which values to use, if not connected all the elements will be used" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_TransformSelection = { "TransformSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayComputeStatisticsDataflowNode, TransformSelection), Z_Construct_UScriptStruct_FDataflowTransformSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_TransformSelection_MetaData), Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_TransformSelection_MetaData) }; // 216225950
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_OperationName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_OperationName_MetaData[] = {
		{ "Category", "Operation" },
		{ "Comment", "/** Statistics Operation */" },
		{ "DisplayName", "Operation" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Statistics Operation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_OperationName = { "OperationName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayComputeStatisticsDataflowNode, OperationName), Z_Construct_UEnum_GeometryCollectionNodes_EStatisticsOperationEnum, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_OperationName_MetaData), Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_OperationName_MetaData) }; // 3864088058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/** Computed value */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Computed value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayComputeStatisticsDataflowNode, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Indices_MetaData[] = {
		{ "Comment", "/** Indices of elements with the computed value */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionArrayNodes.h" },
		{ "ToolTip", "Indices of elements with the computed value" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatArrayComputeStatisticsDataflowNode, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Indices_MetaData), Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Indices_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_TransformSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_OperationName_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_OperationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Indices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewProp_Indices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"FloatArrayComputeStatisticsDataflowNode",
		Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::PropPointers),
		sizeof(FFloatArrayComputeStatisticsDataflowNode),
		alignof(FFloatArrayComputeStatisticsDataflowNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_FloatArrayComputeStatisticsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatArrayComputeStatisticsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloatArrayComputeStatisticsDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionArrayNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionArrayNodes_h_Statics::EnumInfo[] = {
		{ EFloatArrayToIntArrayFunctionEnum_StaticEnum, TEXT("EFloatArrayToIntArrayFunctionEnum"), &Z_Registration_Info_UEnum_EFloatArrayToIntArrayFunctionEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2793449021U) },
		{ ECompareOperation1Enum_StaticEnum, TEXT("ECompareOperation1Enum"), &Z_Registration_Info_UEnum_ECompareOperation1Enum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 91218094U) },
		{ EStatisticsOperationEnum_StaticEnum, TEXT("EStatisticsOperationEnum"), &Z_Registration_Info_UEnum_EStatisticsOperationEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3864088058U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionArrayNodes_h_Statics::ScriptStructInfo[] = {
		{ FGetFloatArrayElementDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetFloatArrayElementDataflowNode_Statics::NewStructOps, TEXT("GetFloatArrayElementDataflowNode"), &Z_Registration_Info_UScriptStruct_GetFloatArrayElementDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetFloatArrayElementDataflowNode), 629581682U) },
		{ FFloatArrayToIntArrayDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFloatArrayToIntArrayDataflowNode_Statics::NewStructOps, TEXT("FloatArrayToIntArrayDataflowNode"), &Z_Registration_Info_UScriptStruct_FloatArrayToIntArrayDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatArrayToIntArrayDataflowNode), 722791262U) },
		{ FGetArrayElementDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetArrayElementDataflowNode_Statics::NewStructOps, TEXT("GetArrayElementDataflowNode"), &Z_Registration_Info_UScriptStruct_GetArrayElementDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetArrayElementDataflowNode), 3031303998U) },
		{ FGetNumArrayElementsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode_Statics::NewStructOps, TEXT("GetNumArrayElementsDataflowNode"), &Z_Registration_Info_UScriptStruct_GetNumArrayElementsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetNumArrayElementsDataflowNode), 2155165726U) },
		{ FBoolArrayToFaceSelectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode_Statics::NewStructOps, TEXT("BoolArrayToFaceSelectionDataflowNode"), &Z_Registration_Info_UScriptStruct_BoolArrayToFaceSelectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoolArrayToFaceSelectionDataflowNode), 631097154U) },
		{ FFloatArrayToVertexSelectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode_Statics::NewStructOps, TEXT("FloatArrayToVertexSelectionDataflowNode"), &Z_Registration_Info_UScriptStruct_FloatArrayToVertexSelectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatArrayToVertexSelectionDataflowNode), 3634479824U) },
		{ FFloatArrayNormalizeDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFloatArrayNormalizeDataflowNode_Statics::NewStructOps, TEXT("FloatArrayNormalizeDataflowNode"), &Z_Registration_Info_UScriptStruct_FloatArrayNormalizeDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatArrayNormalizeDataflowNode), 1304556630U) },
		{ FVectorArrayNormalizeDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FVectorArrayNormalizeDataflowNode_Statics::NewStructOps, TEXT("VectorArrayNormalizeDataflowNode"), &Z_Registration_Info_UScriptStruct_VectorArrayNormalizeDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorArrayNormalizeDataflowNode), 2436807477U) },
		{ FUnionIntArraysDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FUnionIntArraysDataflowNode_Statics::NewStructOps, TEXT("UnionIntArraysDataflowNode"), &Z_Registration_Info_UScriptStruct_UnionIntArraysDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnionIntArraysDataflowNode), 4131383283U) },
		{ FRemoveFloatArrayElementDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FRemoveFloatArrayElementDataflowNode_Statics::NewStructOps, TEXT("RemoveFloatArrayElementDataflowNode"), &Z_Registration_Info_UScriptStruct_RemoveFloatArrayElementDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoveFloatArrayElementDataflowNode), 3243519885U) },
		{ FFloatArrayComputeStatisticsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFloatArrayComputeStatisticsDataflowNode_Statics::NewStructOps, TEXT("FloatArrayComputeStatisticsDataflowNode"), &Z_Registration_Info_UScriptStruct_FloatArrayComputeStatisticsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatArrayComputeStatisticsDataflowNode), 2575549952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionArrayNodes_h_2441022700(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionArrayNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionArrayNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionArrayNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionArrayNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
