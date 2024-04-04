// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/ListUtilityFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeListUtilityFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptColorList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptScalarList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptTriangleList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptUVList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptVectorList();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execExtractColorListChannels)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_GET_PROPERTY(FIntProperty,Z_Param_XChannelIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_YChannelIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannels(Z_Param_ColorList,Z_Param_Out_VectorList,Z_Param_XChannelIndex,Z_Param_YChannelIndex,Z_Param_ZChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execExtractColorListChannel)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarList);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannel(Z_Param_ColorList,Z_Param_Out_ScalarList,Z_Param_ChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execClearColorList)
	{
		P_GET_STRUCT_REF(FGeometryScriptColorList,Z_Param_Out_ColorList);
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ClearColorList(Z_Param_Out_ColorList,Z_Param_ClearColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateColorList)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_GET_STRUCT_REF(FGeometryScriptColorList,Z_Param_Out_DuplicateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::DuplicateColorList(Z_Param_ColorList,Z_Param_Out_DuplicateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToColorList)
	{
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ColorArray);
		P_GET_STRUCT_REF(FGeometryScriptColorList,Z_Param_Out_ColorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToColorList(Z_Param_Out_ColorArray,Z_Param_Out_ColorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertColorListToArray)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ColorArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertColorListToArray(Z_Param_ColorList,Z_Param_Out_ColorArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execSetColorListItem)
	{
		P_GET_STRUCT_REF(FGeometryScriptColorList,Z_Param_Out_ColorList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::SetColorListItem(Z_Param_Out_ColorList,Z_Param_Index,Z_Param_NewColor,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListItem)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetColorListItem(Z_Param_ColorList,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListLastIndex)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLastIndex(Z_Param_ColorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListLength)
	{
		P_GET_STRUCT(FGeometryScriptColorList,Z_Param_ColorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLength(Z_Param_ColorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execClearUVList)
	{
		P_GET_STRUCT_REF(FGeometryScriptUVList,Z_Param_Out_UVList);
		P_GET_STRUCT(FVector2D,Z_Param_ClearUV);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ClearUVList(Z_Param_Out_UVList,Z_Param_ClearUV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateUVList)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_GET_STRUCT_REF(FGeometryScriptUVList,Z_Param_Out_DuplicateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::DuplicateUVList(Z_Param_UVList,Z_Param_Out_DuplicateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToUVList)
	{
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVArray);
		P_GET_STRUCT_REF(FGeometryScriptUVList,Z_Param_Out_UVList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToUVList(Z_Param_Out_UVArray,Z_Param_Out_UVList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertUVListToArray)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertUVListToArray(Z_Param_UVList,Z_Param_Out_UVArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execSetUVListItem)
	{
		P_GET_STRUCT_REF(FGeometryScriptUVList,Z_Param_Out_UVList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector2D,Z_Param_NewUV);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::SetUVListItem(Z_Param_Out_UVList,Z_Param_Index,Z_Param_NewUV,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListItem)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetUVListItem(Z_Param_UVList,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListLastIndex)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLastIndex(Z_Param_UVList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListLength)
	{
		P_GET_STRUCT(FGeometryScriptUVList,Z_Param_UVList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLength(Z_Param_UVList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execClearVectorList)
	{
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_GET_STRUCT(FVector,Z_Param_ClearValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ClearVectorList(Z_Param_Out_VectorList,Z_Param_ClearValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateVectorList)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_DuplicateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::DuplicateVectorList(Z_Param_VectorList,Z_Param_Out_DuplicateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToVectorList)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VectorArray);
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToVectorList(Z_Param_Out_VectorArray,Z_Param_Out_VectorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertVectorListToArray)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VectorArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertVectorListToArray(Z_Param_VectorList,Z_Param_Out_VectorArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execSetVectorListItem)
	{
		P_GET_STRUCT_REF(FGeometryScriptVectorList,Z_Param_Out_VectorList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector,Z_Param_NewValue);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::SetVectorListItem(Z_Param_Out_VectorList,Z_Param_Index,Z_Param_NewValue,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListItem)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListItem(Z_Param_VectorList,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListLastIndex)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLastIndex(Z_Param_VectorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListLength)
	{
		P_GET_STRUCT(FGeometryScriptVectorList,Z_Param_VectorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLength(Z_Param_VectorList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execClearScalarList)
	{
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarList);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ClearValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ClearScalarList(Z_Param_Out_ScalarList,Z_Param_ClearValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateScalarList)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_DuplicateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::DuplicateScalarList(Z_Param_ScalarList,Z_Param_Out_DuplicateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToScalarList)
	{
		P_GET_TARRAY_REF(double,Z_Param_Out_VectorArray);
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToScalarList(Z_Param_Out_VectorArray,Z_Param_Out_ScalarList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertScalarListToArray)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_GET_TARRAY_REF(double,Z_Param_Out_ScalarArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertScalarListToArray(Z_Param_ScalarList,Z_Param_Out_ScalarArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execSetScalarListItem)
	{
		P_GET_STRUCT_REF(FGeometryScriptScalarList,Z_Param_Out_ScalarList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_NewValue);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::SetScalarListItem(Z_Param_Out_ScalarList,Z_Param_Index,Z_Param_NewValue,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListItem)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListItem(Z_Param_ScalarList,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListLastIndex)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLastIndex(Z_Param_ScalarList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListLength)
	{
		P_GET_STRUCT(FGeometryScriptScalarList,Z_Param_ScalarList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLength(Z_Param_ScalarList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToTriangleList)
	{
		P_GET_TARRAY_REF(FIntVector,Z_Param_Out_TriangleArray);
		P_GET_STRUCT_REF(FGeometryScriptTriangleList,Z_Param_Out_TriangleList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToTriangleList(Z_Param_Out_TriangleArray,Z_Param_Out_TriangleList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertTriangleListToArray)
	{
		P_GET_STRUCT(FGeometryScriptTriangleList,Z_Param_TriangleList);
		P_GET_TARRAY_REF(FIntVector,Z_Param_Out_TriangleArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertTriangleListToArray(Z_Param_TriangleList,Z_Param_Out_TriangleArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListItem)
	{
		P_GET_STRUCT(FGeometryScriptTriangleList,Z_Param_TriangleList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Triangle);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListItem(Z_Param_TriangleList,Z_Param_Triangle,Z_Param_Out_bIsValidTriangle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListLastTriangle)
	{
		P_GET_STRUCT(FGeometryScriptTriangleList,Z_Param_TriangleList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLastTriangle(Z_Param_TriangleList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListLength)
	{
		P_GET_STRUCT(FGeometryScriptTriangleList,Z_Param_TriangleList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLength(Z_Param_TriangleList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execClearIndexList)
	{
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_IndexList);
		P_GET_PROPERTY(FIntProperty,Z_Param_ClearValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ClearIndexList(Z_Param_Out_IndexList,Z_Param_ClearValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateIndexList)
	{
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_IndexList);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_DuplicateList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::DuplicateIndexList(Z_Param_IndexList,Z_Param_Out_DuplicateList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToIndexList)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_IndexArray);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_IndexList);
		P_GET_ENUM(EGeometryScriptIndexType,Z_Param_IndexType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToIndexList(Z_Param_Out_IndexArray,Z_Param_Out_IndexList,EGeometryScriptIndexType(Z_Param_IndexType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execConvertIndexListToArray)
	{
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_IndexList);
		P_GET_TARRAY_REF(int32,Z_Param_Out_IndexArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::ConvertIndexListToArray(Z_Param_IndexList,Z_Param_Out_IndexArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execSetIndexListItem)
	{
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_IndexList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_ListUtilityFunctions::SetIndexListItem(Z_Param_Out_IndexList,Z_Param_Index,Z_Param_NewValue,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListItem)
	{
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_IndexList);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListItem(Z_Param_IndexList,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListLastIndex)
	{
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_IndexList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLastIndex(Z_Param_IndexList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListLength)
	{
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_IndexList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLength(Z_Param_IndexList);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_ListUtilityFunctions::StaticRegisterNativesUGeometryScriptLibrary_ListUtilityFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_ListUtilityFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearColorList", &UGeometryScriptLibrary_ListUtilityFunctions::execClearColorList },
			{ "ClearIndexList", &UGeometryScriptLibrary_ListUtilityFunctions::execClearIndexList },
			{ "ClearScalarList", &UGeometryScriptLibrary_ListUtilityFunctions::execClearScalarList },
			{ "ClearUVList", &UGeometryScriptLibrary_ListUtilityFunctions::execClearUVList },
			{ "ClearVectorList", &UGeometryScriptLibrary_ListUtilityFunctions::execClearVectorList },
			{ "ConvertArrayToColorList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToColorList },
			{ "ConvertArrayToIndexList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToIndexList },
			{ "ConvertArrayToScalarList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToScalarList },
			{ "ConvertArrayToTriangleList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToTriangleList },
			{ "ConvertArrayToUVList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToUVList },
			{ "ConvertArrayToVectorList", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertArrayToVectorList },
			{ "ConvertColorListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertColorListToArray },
			{ "ConvertIndexListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertIndexListToArray },
			{ "ConvertScalarListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertScalarListToArray },
			{ "ConvertTriangleListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertTriangleListToArray },
			{ "ConvertUVListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertUVListToArray },
			{ "ConvertVectorListToArray", &UGeometryScriptLibrary_ListUtilityFunctions::execConvertVectorListToArray },
			{ "DuplicateColorList", &UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateColorList },
			{ "DuplicateIndexList", &UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateIndexList },
			{ "DuplicateScalarList", &UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateScalarList },
			{ "DuplicateUVList", &UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateUVList },
			{ "DuplicateVectorList", &UGeometryScriptLibrary_ListUtilityFunctions::execDuplicateVectorList },
			{ "ExtractColorListChannel", &UGeometryScriptLibrary_ListUtilityFunctions::execExtractColorListChannel },
			{ "ExtractColorListChannels", &UGeometryScriptLibrary_ListUtilityFunctions::execExtractColorListChannels },
			{ "GetColorListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListItem },
			{ "GetColorListLastIndex", &UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListLastIndex },
			{ "GetColorListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetColorListLength },
			{ "GetIndexListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListItem },
			{ "GetIndexListLastIndex", &UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListLastIndex },
			{ "GetIndexListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetIndexListLength },
			{ "GetScalarListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListItem },
			{ "GetScalarListLastIndex", &UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListLastIndex },
			{ "GetScalarListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetScalarListLength },
			{ "GetTriangleListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListItem },
			{ "GetTriangleListLastTriangle", &UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListLastTriangle },
			{ "GetTriangleListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetTriangleListLength },
			{ "GetUVListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListItem },
			{ "GetUVListLastIndex", &UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListLastIndex },
			{ "GetUVListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetUVListLength },
			{ "GetVectorListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListItem },
			{ "GetVectorListLastIndex", &UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListLastIndex },
			{ "GetVectorListLength", &UGeometryScriptLibrary_ListUtilityFunctions::execGetVectorListLength },
			{ "SetColorListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execSetColorListItem },
			{ "SetIndexListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execSetIndexListItem },
			{ "SetScalarListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execSetScalarListItem },
			{ "SetUVListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execSetUVListItem },
			{ "SetVectorListItem", &UGeometryScriptLibrary_ListUtilityFunctions::execSetVectorListItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventClearColorList_Parms
		{
			FGeometryScriptColorList ColorList;
			FLinearColor ClearColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearColorList_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(0, nullptr) }; // 1787426257
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearColorList_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::NewProp_ClearColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Resets all the items in the Color List to the specified Clear Color.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Resets all the items in the Color List to the specified Clear Color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ClearColorList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearColorList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearColorList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventClearIndexList_Parms
		{
			FGeometryScriptIndexList IndexList;
			int32 ClearValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClearValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearIndexList_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::NewProp_ClearValue = { "ClearValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearIndexList_Parms, ClearValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::NewProp_ClearValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Set each value in Index List to the given Clear Value.\n\x09*/" },
		{ "CPP_Default_ClearValue", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set each value in Index List to the given Clear Value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ClearIndexList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearIndexList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearIndexList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventClearScalarList_Parms
		{
			FGeometryScriptScalarList ScalarList;
			double ClearValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ClearValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearScalarList_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(0, nullptr) }; // 274745402
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::NewProp_ClearValue = { "ClearValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearScalarList_Parms, ClearValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::NewProp_ClearValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Resets all the items in the Scalar List to the Clear Value.\n\x09*/" },
		{ "CPP_Default_ClearValue", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Resets all the items in the Scalar List to the Clear Value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ClearScalarList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearScalarList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearScalarList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventClearUVList_Parms
		{
			FGeometryScriptUVList UVList;
			FVector2D ClearUV;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearUV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearUVList_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(0, nullptr) }; // 3460570394
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::NewProp_ClearUV = { "ClearUV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearUVList_Parms, ClearUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::NewProp_ClearUV,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Resets all the items in the Vector List to the given Clear UV value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Resets all the items in the Vector List to the given Clear UV value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ClearUVList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearUVList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearUVList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventClearVectorList_Parms
		{
			FGeometryScriptVectorList VectorList;
			FVector ClearValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearVectorList_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(0, nullptr) }; // 1656864993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::NewProp_ClearValue = { "ClearValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventClearVectorList_Parms, ClearValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::NewProp_ClearValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Resets all the items in the Vector List to the Clear Value.\n\x09*/" },
		{ "CPP_Default_ClearValue", "" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Resets all the items in the Vector List to the Clear Value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ClearVectorList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearVectorList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventClearVectorList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToColorList_Parms
		{
			TArray<FLinearColor> ColorArray;
			FGeometryScriptColorList ColorList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray_Inner = { "ColorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray = { "ColorArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToColorList_Parms, ColorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToColorList_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(0, nullptr) }; // 1787426257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::NewProp_ColorList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Converts an array of FLinearColor (Color Array) to a Color List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ToolTip", "Converts an array of FLinearColor (Color Array) to a Color List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToColorList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToColorList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToColorList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToIndexList_Parms
		{
			TArray<int32> IndexArray;
			FGeometryScriptIndexList IndexList;
			EGeometryScriptIndexType IndexType;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IndexType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray_Inner = { "IndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray = { "IndexArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToIndexList_Parms, IndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToIndexList_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexType = { "IndexType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToIndexList_Parms, IndexType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType, METADATA_PARAMS(0, nullptr) }; // 3246016640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::NewProp_IndexType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Populates Index List of the specified Index Type from the integer values stored in the Index Array.\n\x09*/" },
		{ "CPP_Default_IndexType", "Any" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ToolTip", "Populates Index List of the specified Index Type from the integer values stored in the Index Array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToIndexList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToIndexList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToIndexList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToScalarList_Parms
		{
			TArray<double> VectorArray;
			FGeometryScriptScalarList ScalarList;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray_MetaData[] = {
		{ "DisplayName", "Scalar Array" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToScalarList_Parms, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToScalarList_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(0, nullptr) }; // 274745402
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::NewProp_ScalarList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Converts an array of doubles (Scalar Array) to Scalar List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ToolTip", "Converts an array of doubles (Scalar Array) to Scalar List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToScalarList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToScalarList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToScalarList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToTriangleList_Parms
		{
			TArray<FIntVector> TriangleArray;
			FGeometryScriptTriangleList TriangleList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TriangleArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray_Inner = { "TriangleArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray = { "TriangleArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToTriangleList_Parms, TriangleArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToTriangleList_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(0, nullptr) }; // 76193184
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::NewProp_TriangleList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Converts a Triangle Array of integer triplets to a Triangle List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ToolTip", "Converts a Triangle Array of integer triplets to a Triangle List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToTriangleList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToTriangleList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToTriangleList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToUVList_Parms
		{
			TArray<FVector2D> UVArray;
			FGeometryScriptUVList UVList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray_Inner = { "UVArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray = { "UVArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToUVList_Parms, UVArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToUVList_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(0, nullptr) }; // 3460570394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::NewProp_UVList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Converts an array of FVector2D (UV Array) to UV List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ToolTip", "Converts an array of FVector2D (UV Array) to UV List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToUVList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToUVList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToUVList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToVectorList_Parms
		{
			TArray<FVector> VectorArray;
			FGeometryScriptVectorList VectorList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToVectorList_Parms, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToVectorList_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(0, nullptr) }; // 1656864993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::NewProp_VectorList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Converts an Array of FVectors (Vector Array) to Vector List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ToolTip", "Converts an Array of FVectors (Vector Array) to Vector List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertArrayToVectorList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToVectorList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertArrayToVectorList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertColorListToArray_Parms
		{
			FGeometryScriptColorList ColorList;
			TArray<FLinearColor> ColorArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertColorListToArray_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(0, nullptr) }; // 1787426257
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorArray_Inner = { "ColorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorArray = { "ColorArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertColorListToArray_Parms, ColorArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::NewProp_ColorArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Converts the Color List to an array of FLinearColor (Color Array).\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Converts the Color List to an array of FLinearColor (Color Array)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertColorListToArray", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertColorListToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertColorListToArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertIndexListToArray_Parms
		{
			FGeometryScriptIndexList IndexList;
			TArray<int32> IndexArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertIndexListToArray_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexArray_Inner = { "IndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexArray = { "IndexArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertIndexListToArray_Parms, IndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::NewProp_IndexArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Populates Index Array with the integer values stored in the Index List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Populates Index Array with the integer values stored in the Index List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertIndexListToArray", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertIndexListToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertIndexListToArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertScalarListToArray_Parms
		{
			FGeometryScriptScalarList ScalarList;
			TArray<double> ScalarArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ScalarArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertScalarListToArray_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(0, nullptr) }; // 274745402
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarArray_Inner = { "ScalarArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarArray = { "ScalarArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertScalarListToArray_Parms, ScalarArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::NewProp_ScalarArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Converts a Scalar List to an Scalar Array (an array of doubles).\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Converts a Scalar List to an Scalar Array (an array of doubles)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertScalarListToArray", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertScalarListToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertScalarListToArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertTriangleListToArray_Parms
		{
			FGeometryScriptTriangleList TriangleList;
			TArray<FIntVector> TriangleArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TriangleArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertTriangleListToArray_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(0, nullptr) }; // 76193184
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleArray_Inner = { "TriangleArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleArray = { "TriangleArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertTriangleListToArray_Parms, TriangleArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::NewProp_TriangleArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Converts Triangle List to Triangle Array by populating with the appropriate integer triplets.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Converts Triangle List to Triangle Array by populating with the appropriate integer triplets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertTriangleListToArray", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertTriangleListToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertTriangleListToArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertUVListToArray_Parms
		{
			FGeometryScriptUVList UVList;
			TArray<FVector2D> UVArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertUVListToArray_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(0, nullptr) }; // 3460570394
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVArray_Inner = { "UVArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVArray = { "UVArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertUVListToArray_Parms, UVArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::NewProp_UVArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Converts a UV List to an array of FVector2Ds (UV Array).\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Converts a UV List to an array of FVector2Ds (UV Array)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertUVListToArray", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertUVListToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertUVListToArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventConvertVectorListToArray_Parms
		{
			FGeometryScriptVectorList VectorList;
			TArray<FVector> VectorArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertVectorListToArray_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(0, nullptr) }; // 1656864993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventConvertVectorListToArray_Parms, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::NewProp_VectorArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Converts Vector List to an array of FVectors (Vector Array).\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Converts Vector List to an array of FVectors (Vector Array)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ConvertVectorListToArray", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertVectorListToArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventConvertVectorListToArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateColorList_Parms
		{
			FGeometryScriptColorList ColorList;
			FGeometryScriptColorList DuplicateList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateColorList_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(0, nullptr) }; // 1787426257
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::NewProp_DuplicateList = { "DuplicateList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateColorList_Parms, DuplicateList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(0, nullptr) }; // 1787426257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::NewProp_DuplicateList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Duplicates the contents of Color List into Duplicate List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Duplicates the contents of Color List into Duplicate List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "DuplicateColorList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateColorList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateColorList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateIndexList_Parms
		{
			FGeometryScriptIndexList IndexList;
			FGeometryScriptIndexList DuplicateList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateIndexList_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::NewProp_DuplicateList = { "DuplicateList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateIndexList_Parms, DuplicateList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::NewProp_DuplicateList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Updates Duplicate List to be identical to Index List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Updates Duplicate List to be identical to Index List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "DuplicateIndexList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateIndexList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateIndexList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateScalarList_Parms
		{
			FGeometryScriptScalarList ScalarList;
			FGeometryScriptScalarList DuplicateList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateScalarList_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(0, nullptr) }; // 274745402
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::NewProp_DuplicateList = { "DuplicateList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateScalarList_Parms, DuplicateList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(0, nullptr) }; // 274745402
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::NewProp_DuplicateList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Copies the contents of Scalar List into Duplicate List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Copies the contents of Scalar List into Duplicate List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "DuplicateScalarList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateScalarList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateScalarList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateUVList_Parms
		{
			FGeometryScriptUVList UVList;
			FGeometryScriptUVList DuplicateList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateUVList_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(0, nullptr) }; // 3460570394
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::NewProp_DuplicateList = { "DuplicateList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateUVList_Parms, DuplicateList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(0, nullptr) }; // 3460570394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::NewProp_DuplicateList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Duplicates the contents of UV List into Duplicate List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Duplicates the contents of UV List into Duplicate List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "DuplicateUVList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateUVList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateUVList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateVectorList_Parms
		{
			FGeometryScriptVectorList VectorList;
			FGeometryScriptVectorList DuplicateList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateVectorList_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(0, nullptr) }; // 1656864993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::NewProp_DuplicateList = { "DuplicateList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateVectorList_Parms, DuplicateList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(0, nullptr) }; // 1656864993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::NewProp_DuplicateList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Copies the contents of Vector List into Duplicate Vector List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Copies the contents of Vector List into Duplicate Vector List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "DuplicateVectorList", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateVectorList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventDuplicateVectorList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannel_Parms
		{
			FGeometryScriptColorList ColorList;
			FGeometryScriptScalarList ScalarList;
			int32 ChannelIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannel_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(0, nullptr) }; // 1787426257
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannel_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(0, nullptr) }; // 274745402
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannel_Parms, ChannelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::NewProp_ChannelIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Populates a Scalar List with values that corresponds to the 0, 1, 2, or 3 channel of a Color List.\n\x09*/" },
		{ "CPP_Default_ChannelIndex", "0" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Populates a Scalar List with values that corresponds to the 0, 1, 2, or 3 channel of a Color List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ExtractColorListChannel", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms
		{
			FGeometryScriptColorList ColorList;
			FGeometryScriptVectorList VectorList;
			int32 XChannelIndex;
			int32 YChannelIndex;
			int32 ZChannelIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_XChannelIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_YChannelIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZChannelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(0, nullptr) }; // 1787426257
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(0, nullptr) }; // 1656864993
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_XChannelIndex = { "XChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms, XChannelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_YChannelIndex = { "YChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms, YChannelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_ZChannelIndex = { "ZChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms, ZChannelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_XChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_YChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::NewProp_ZChannelIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Populates a Vector List from a Color List. The channels in the Color List are mapped to vector components by means of X Channel Index, Y Channel Index, and Z Channel Index.\n\x09*/" },
		{ "CPP_Default_XChannelIndex", "0" },
		{ "CPP_Default_YChannelIndex", "1" },
		{ "CPP_Default_ZChannelIndex", "2" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Populates a Vector List from a Color List. The channels in the Color List are mapped to vector components by means of X Channel Index, Y Channel Index, and Z Channel Index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "ExtractColorListChannels", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventExtractColorListChannels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms
		{
			FGeometryScriptColorList ColorList;
			int32 Index;
			bool bIsValidIndex;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(0, nullptr) }; // 1787426257
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the FLinearColor stored in the Color List at the specified location.\n\x09* If the Index is not valid for this Color List, FLinearColor::White will be returned and bIsValidIndex set to false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the FLinearColor stored in the Color List at the specified location.\nIf the Index is not valid for this Color List, FLinearColor::White will be returned and bIsValidIndex set to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetColorListItem", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLastIndex_Parms
		{
			FGeometryScriptColorList ColorList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLastIndex_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(0, nullptr) }; // 1787426257
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLastIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the index of the last item in the Color List.\n\x09* If Color List is empty or invalid, the value -1 will be returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the index of the last item in the Color List.\nIf Color List is empty or invalid, the value -1 will be returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetColorListLastIndex", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLastIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLastIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLength_Parms
		{
			FGeometryScriptColorList ColorList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLength_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(0, nullptr) }; // 1787426257
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the number of items in the Color List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the number of items in the Color List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetColorListLength", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetColorListLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms
		{
			FGeometryScriptIndexList IndexList;
			int32 Index;
			bool bIsValidIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the item associated with Index in the Index List.\n\x09* If Index is not valid for this Index List the value -1 will be returned and bIsValidIndex will be set to false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the item associated with Index in the Index List.\nIf Index is not valid for this Index List the value -1 will be returned and bIsValidIndex will be set to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetIndexListItem", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLastIndex_Parms
		{
			FGeometryScriptIndexList IndexList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLastIndex_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLastIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the index of the last element in the Index List.\n\x09* Note, the value -1 will be returned if the list is empty or invalid. \n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the index of the last element in the Index List.\nNote, the value -1 will be returned if the list is empty or invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetIndexListLastIndex", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLastIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLastIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLength_Parms
		{
			FGeometryScriptIndexList IndexList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLength_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the number of Items in Index List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the number of Items in Index List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetIndexListLength", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetIndexListLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms
		{
			FGeometryScriptScalarList ScalarList;
			int32 Index;
			bool bIsValidIndex;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(0, nullptr) }; // 274745402
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the Scalar value associated with Index in Scalar List.\n\x09* If the Index is not valid for this Scalar List, the value 0.0 will be returned and bIsValidIndex set to false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the Scalar value associated with Index in Scalar List.\nIf the Index is not valid for this Scalar List, the value 0.0 will be returned and bIsValidIndex set to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetScalarListItem", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLastIndex_Parms
		{
			FGeometryScriptScalarList ScalarList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLastIndex_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(0, nullptr) }; // 274745402
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLastIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the index of the last Scalar in Scalar List.\n\x09* If Scalar List is empty or invalid, the value -1 will be returned \n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the index of the last Scalar in Scalar List.\nIf Scalar List is empty or invalid, the value -1 will be returned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetScalarListLastIndex", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLastIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLastIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLength_Parms
		{
			FGeometryScriptScalarList ScalarList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLength_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(0, nullptr) }; // 274745402
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the number of items in the Scalar List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the number of items in the Scalar List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetScalarListLength", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetScalarListLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms
		{
			FGeometryScriptTriangleList TriangleList;
			int32 Triangle;
			bool bIsValidTriangle;
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangle;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(0, nullptr) }; // 76193184
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_Triangle = { "Triangle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms, Triangle), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_TriangleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_Triangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the integer triplet associated with the index Triangle in the Triangle  List.\n\x09* If Triangle is not valid for this Triangle List, the triplet (-1, -1, -1) will be returned and bIsValidIndex set to false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the integer triplet associated with the index Triangle in the Triangle  List.\nIf Triangle is not valid for this Triangle List, the triplet (-1, -1, -1) will be returned and bIsValidIndex set to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetTriangleListItem", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLastTriangle_Parms
		{
			FGeometryScriptTriangleList TriangleList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLastTriangle_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(0, nullptr) }; // 76193184
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLastTriangle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::NewProp_TriangleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the index of the last element in the Triangle List.  \n\x09* If the Triangle List is empty or invalid, the value 0 will be returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the index of the last element in the Triangle List.\nIf the Triangle List is empty or invalid, the value 0 will be returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetTriangleListLastTriangle", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLastTriangle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLastTriangle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLength_Parms
		{
			FGeometryScriptTriangleList TriangleList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::NewProp_TriangleList = { "TriangleList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLength_Parms, TriangleList), Z_Construct_UScriptStruct_FGeometryScriptTriangleList, METADATA_PARAMS(0, nullptr) }; // 76193184
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::NewProp_TriangleList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the number of Triangles in the  Triangle list.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the number of Triangles in the  Triangle list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetTriangleListLength", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetTriangleListLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms
		{
			FGeometryScriptUVList UVList;
			int32 Index;
			bool bIsValidIndex;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(0, nullptr) }; // 3460570394
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the FVector2D stored in the UV List at the specified location.\n\x09* If the Index is not valid for this UV List, the Zero Vector will be returned and bIsValidIndex set to false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the FVector2D stored in the UV List at the specified location.\nIf the Index is not valid for this UV List, the Zero Vector will be returned and bIsValidIndex set to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetUVListItem", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLastIndex_Parms
		{
			FGeometryScriptUVList UVList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLastIndex_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(0, nullptr) }; // 3460570394
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLastIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the index of the last item in the UV List.\n\x09* If UV List is empty or invalid, the value -1 will be returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the index of the last item in the UV List.\nIf UV List is empty or invalid, the value -1 will be returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetUVListLastIndex", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLastIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLastIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLength_Parms
		{
			FGeometryScriptUVList UVList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLength_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(0, nullptr) }; // 3460570394
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the number of items in the UV List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the number of items in the UV List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetUVListLength", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetUVListLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms
		{
			FGeometryScriptVectorList VectorList;
			int32 Index;
			bool bIsValidIndex;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(0, nullptr) }; // 1656864993
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the FVector stored in the VectorList at the specified location.\n\x09* if the Index is not valid for this Vector List, the Zero Vector will be returned and bIsValidIndex set to false. \n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the FVector stored in the VectorList at the specified location.\nif the Index is not valid for this Vector List, the Zero Vector will be returned and bIsValidIndex set to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetVectorListItem", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLastIndex_Parms
		{
			FGeometryScriptVectorList VectorList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLastIndex_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(0, nullptr) }; // 1656864993
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLastIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the index of the last item in the Vector List.\n\x09* If Vector List is empty or invalid, the value -1 will be returned. \n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the index of the last item in the Vector List.\nIf Vector List is empty or invalid, the value -1 will be returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetVectorListLastIndex", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLastIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLastIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLength_Parms
		{
			FGeometryScriptVectorList VectorList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLength_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(0, nullptr) }; // 1656864993
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Returns the number of items in the Vector List.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the number of items in the Vector List." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "GetVectorListLength", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventGetVectorListLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms
		{
			FGeometryScriptColorList ColorList;
			int32 Index;
			FLinearColor NewColor;
			bool bIsValidIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_ColorList = { "ColorList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms, ColorList), Z_Construct_UScriptStruct_FGeometryScriptColorList, METADATA_PARAMS(0, nullptr) }; // 1787426257
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_ColorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::NewProp_bIsValidIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Updates the value of the FLinearColor stored in the Color List at the specified location.\n\x09* If the Index is invalid, the operation will fail and bValidIndex will be set to false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Updates the value of the FLinearColor stored in the Color List at the specified location.\nIf the Index is invalid, the operation will fail and bValidIndex will be set to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "SetColorListItem", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetColorListItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms
		{
			FGeometryScriptIndexList IndexList;
			int32 Index;
			int32 NewValue;
			bool bIsValidIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::NewProp_bIsValidIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Updates the value associated with Index in the Index List.  \n\x09* If the Index is invalid, the operation will fail and in this case bValidIndex will be set to false on return.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Updates the value associated with Index in the Index List.\nIf the Index is invalid, the operation will fail and in this case bValidIndex will be set to false on return." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "SetIndexListItem", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetIndexListItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms
		{
			FGeometryScriptScalarList ScalarList;
			int32 Index;
			double NewValue;
			bool bIsValidIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NewValue;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_ScalarList = { "ScalarList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms, ScalarList), Z_Construct_UScriptStruct_FGeometryScriptScalarList, METADATA_PARAMS(0, nullptr) }; // 274745402
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_ScalarList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::NewProp_bIsValidIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Updates the value associated with Index in the Scalar List.  \n\x09* If the Index is invalid, the operation will fail and bValidIndex will be set to false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Updates the value associated with Index in the Scalar List.\nIf the Index is invalid, the operation will fail and bValidIndex will be set to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "SetScalarListItem", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetScalarListItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms
		{
			FGeometryScriptUVList UVList;
			int32 Index;
			FVector2D NewUV;
			bool bIsValidIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewUV;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_UVList = { "UVList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms, UVList), Z_Construct_UScriptStruct_FGeometryScriptUVList, METADATA_PARAMS(0, nullptr) }; // 3460570394
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_NewUV = { "NewUV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms, NewUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_UVList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_NewUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::NewProp_bIsValidIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Updates the value of the FVector2D stored in the UV List at the specified location.\n\x09* If the Index is invalid, the operation will fail and bValidIndex will be set to false on return.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Updates the value of the FVector2D stored in the UV List at the specified location.\nIf the Index is invalid, the operation will fail and bValidIndex will be set to false on return." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "SetUVListItem", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetUVListItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics
	{
		struct GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms
		{
			FGeometryScriptVectorList VectorList;
			int32 Index;
			FVector NewValue;
			bool bIsValidIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_VectorList = { "VectorList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms, VectorList), Z_Construct_UScriptStruct_FGeometryScriptVectorList, METADATA_PARAMS(0, nullptr) }; // 1656864993
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_VectorList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::NewProp_bIsValidIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|ListUtils" },
		{ "Comment", "/**\n\x09* Updates the value of the FVector stored in the Vector List at the specified location.\n\x09* If the Index is invalid, the operation will fail and bValidIndex will be set to false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Updates the value of the FVector stored in the Vector List at the specified location.\nIf the Index is invalid, the operation will fail and bValidIndex will be set to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, nullptr, "SetVectorListItem", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::GeometryScriptLibrary_ListUtilityFunctions_eventSetVectorListItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_ListUtilityFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_ListUtilityFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList, "ClearColorList" }, // 3958584626
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList, "ClearIndexList" }, // 1722567127
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList, "ClearScalarList" }, // 266015857
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList, "ClearUVList" }, // 2395277453
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList, "ClearVectorList" }, // 1850226134
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList, "ConvertArrayToColorList" }, // 4178986262
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList, "ConvertArrayToIndexList" }, // 3066540201
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList, "ConvertArrayToScalarList" }, // 2918614392
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList, "ConvertArrayToTriangleList" }, // 1543890091
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList, "ConvertArrayToUVList" }, // 3454990033
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList, "ConvertArrayToVectorList" }, // 3995376884
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray, "ConvertColorListToArray" }, // 2541489018
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray, "ConvertIndexListToArray" }, // 3810961166
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray, "ConvertScalarListToArray" }, // 607789834
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray, "ConvertTriangleListToArray" }, // 1947464552
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray, "ConvertUVListToArray" }, // 483577497
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray, "ConvertVectorListToArray" }, // 2704443659
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList, "DuplicateColorList" }, // 2749817821
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList, "DuplicateIndexList" }, // 2480073123
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList, "DuplicateScalarList" }, // 1736690445
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList, "DuplicateUVList" }, // 112702261
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList, "DuplicateVectorList" }, // 4122679503
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel, "ExtractColorListChannel" }, // 946247098
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels, "ExtractColorListChannels" }, // 1886710929
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem, "GetColorListItem" }, // 907798125
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex, "GetColorListLastIndex" }, // 921290072
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength, "GetColorListLength" }, // 716603347
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem, "GetIndexListItem" }, // 2767125707
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex, "GetIndexListLastIndex" }, // 3347610544
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength, "GetIndexListLength" }, // 1809979400
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem, "GetScalarListItem" }, // 3135271751
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex, "GetScalarListLastIndex" }, // 1473815978
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength, "GetScalarListLength" }, // 3499001932
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem, "GetTriangleListItem" }, // 1195782586
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle, "GetTriangleListLastTriangle" }, // 3833104025
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength, "GetTriangleListLength" }, // 3544666995
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem, "GetUVListItem" }, // 1262989397
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex, "GetUVListLastIndex" }, // 1589337881
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength, "GetUVListLength" }, // 1755653465
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem, "GetVectorListItem" }, // 3857740271
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex, "GetVectorListLastIndex" }, // 77819004
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength, "GetVectorListLength" }, // 3464991189
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem, "SetColorListItem" }, // 2563238459
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem, "SetIndexListItem" }, // 982705346
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem, "SetScalarListItem" }, // 1783904041
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem, "SetUVListItem" }, // 2276375533
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem, "SetVectorListItem" }, // 1567400541
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/ListUtilityFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/ListUtilityFunctions.h" },
		{ "ScriptName", "GeometryScript_List" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_ListUtilityFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_ListUtilityFunctions::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_ListUtilityFunctions>()
	{
		return UGeometryScriptLibrary_ListUtilityFunctions::StaticClass();
	}
	UGeometryScriptLibrary_ListUtilityFunctions::UGeometryScriptLibrary_ListUtilityFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_ListUtilityFunctions);
	UGeometryScriptLibrary_ListUtilityFunctions::~UGeometryScriptLibrary_ListUtilityFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_ListUtilityFunctions, UGeometryScriptLibrary_ListUtilityFunctions::StaticClass, TEXT("UGeometryScriptLibrary_ListUtilityFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_ListUtilityFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_ListUtilityFunctions), 3922531466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_3732117042(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ListUtilityFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
