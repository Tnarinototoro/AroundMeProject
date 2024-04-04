// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshMaterialFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshMaterialFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptGroupLayer();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execCompactMaterialIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_TARRAY(UMaterialInterface*,Z_Param_SourceMaterialList);
		P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_CompactedMaterialList);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::CompactMaterialIDs(Z_Param_TargetMesh,Z_Param_SourceMaterialList,Z_Param_Out_CompactedMaterialList,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execDeleteTrianglesByMaterialID)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumDeleted);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::DeleteTrianglesByMaterialID(Z_Param_TargetMesh,Z_Param_MaterialID,Z_Param_Out_NumDeleted,Z_Param_bDeferChangeNotifications,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execSetPolygroupMaterialID)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptGroupLayer,Z_Param_GroupLayer);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygroupID);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidPolygroupID);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::SetPolygroupMaterialID(Z_Param_TargetMesh,Z_Param_GroupLayer,Z_Param_PolygroupID,Z_Param_MaterialID,Z_Param_Out_bIsValidPolygroupID,Z_Param_bDeferChangeNotifications,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execSetMaterialIDForMeshSelection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_MaterialID,Z_Param_bDeferChangeNotifications,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execSetMaterialIDOnTriangles)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_TriangleIDList);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDOnTriangles(Z_Param_TargetMesh,Z_Param_TriangleIDList,Z_Param_MaterialID,Z_Param_bDeferChangeNotifications,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execSetAllTriangleMaterialIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_TriangleMaterialIDList);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::SetAllTriangleMaterialIDs(Z_Param_TargetMesh,Z_Param_TriangleMaterialIDList,Z_Param_bDeferChangeNotifications,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execSetTriangleMaterialID)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_GET_UBOOL(Z_Param_bDeferChangeNotifications);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::SetTriangleMaterialID(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_MaterialID,Z_Param_Out_bIsValidTriangle,Z_Param_bDeferChangeNotifications);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execGetTrianglesByMaterialID)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_TriangleIDList);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::GetTrianglesByMaterialID(Z_Param_TargetMesh,Z_Param_MaterialID,Z_Param_Out_TriangleIDList,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execGetAllTriangleMaterialIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_MaterialIDList);
		P_GET_UBOOL_REF(Z_Param_Out_bHasMaterialIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::GetAllTriangleMaterialIDs(Z_Param_TargetMesh,Z_Param_Out_MaterialIDList,Z_Param_Out_bHasMaterialIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execGetMaterialIDsOfTriangles)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_TriangleIDList);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_MaterialIDList);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::GetMaterialIDsOfTriangles(Z_Param_TargetMesh,Z_Param_TriangleIDList,Z_Param_Out_MaterialIDList,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execGetTriangleMaterialID)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_TriangleID);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidTriangle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID(Z_Param_TargetMesh,Z_Param_TriangleID,Z_Param_Out_bIsValidTriangle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execRemapMaterialIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_FromMaterialID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ToMaterialID);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::RemapMaterialIDs(Z_Param_TargetMesh,Z_Param_FromMaterialID,Z_Param_ToMaterialID,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execClearMaterialIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_ClearValue);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::ClearMaterialIDs(Z_Param_TargetMesh,Z_Param_ClearValue,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execEnableMaterialIDs)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::EnableMaterialIDs(Z_Param_TargetMesh,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshMaterialFunctions::execGetMaxMaterialID)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_UBOOL_REF(Z_Param_Out_bHasMaterialIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_MeshMaterialFunctions::GetMaxMaterialID(Z_Param_TargetMesh,Z_Param_Out_bHasMaterialIDs);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshMaterialFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshMaterialFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMaterialIDs", &UGeometryScriptLibrary_MeshMaterialFunctions::execClearMaterialIDs },
			{ "CompactMaterialIDs", &UGeometryScriptLibrary_MeshMaterialFunctions::execCompactMaterialIDs },
			{ "DeleteTrianglesByMaterialID", &UGeometryScriptLibrary_MeshMaterialFunctions::execDeleteTrianglesByMaterialID },
			{ "EnableMaterialIDs", &UGeometryScriptLibrary_MeshMaterialFunctions::execEnableMaterialIDs },
			{ "GetAllTriangleMaterialIDs", &UGeometryScriptLibrary_MeshMaterialFunctions::execGetAllTriangleMaterialIDs },
			{ "GetMaterialIDsOfTriangles", &UGeometryScriptLibrary_MeshMaterialFunctions::execGetMaterialIDsOfTriangles },
			{ "GetMaxMaterialID", &UGeometryScriptLibrary_MeshMaterialFunctions::execGetMaxMaterialID },
			{ "GetTriangleMaterialID", &UGeometryScriptLibrary_MeshMaterialFunctions::execGetTriangleMaterialID },
			{ "GetTrianglesByMaterialID", &UGeometryScriptLibrary_MeshMaterialFunctions::execGetTrianglesByMaterialID },
			{ "RemapMaterialIDs", &UGeometryScriptLibrary_MeshMaterialFunctions::execRemapMaterialIDs },
			{ "SetAllTriangleMaterialIDs", &UGeometryScriptLibrary_MeshMaterialFunctions::execSetAllTriangleMaterialIDs },
			{ "SetMaterialIDForMeshSelection", &UGeometryScriptLibrary_MeshMaterialFunctions::execSetMaterialIDForMeshSelection },
			{ "SetMaterialIDOnTriangles", &UGeometryScriptLibrary_MeshMaterialFunctions::execSetMaterialIDOnTriangles },
			{ "SetPolygroupMaterialID", &UGeometryScriptLibrary_MeshMaterialFunctions::execSetPolygroupMaterialID },
			{ "SetTriangleMaterialID", &UGeometryScriptLibrary_MeshMaterialFunctions::execSetTriangleMaterialID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventClearMaterialIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 ClearValue;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClearValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventClearMaterialIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::NewProp_ClearValue = { "ClearValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventClearMaterialIDs_Parms, ClearValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventClearMaterialIDs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventClearMaterialIDs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::NewProp_ClearValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09* Resets all Material IDs on a mesh to the given ClearValue, or 0 if no ClearValue is provided.\n\x09* If Material IDs are not already enabled on the Target Mesh, this function will first enable them and then set the value.\n\x09*/" },
		{ "CPP_Default_ClearValue", "0" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Resets all Material IDs on a mesh to the given ClearValue, or 0 if no ClearValue is provided.\nIf Material IDs are not already enabled on the Target Mesh, this function will first enable them and then set the value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "ClearMaterialIDs", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventClearMaterialIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventClearMaterialIDs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventCompactMaterialIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			TArray<UMaterialInterface*> SourceMaterialList;
			TArray<UMaterialInterface*> CompactedMaterialList;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMaterialList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceMaterialList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompactedMaterialList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompactedMaterialList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventCompactMaterialIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_SourceMaterialList_Inner = { "SourceMaterialList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_SourceMaterialList = { "SourceMaterialList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventCompactMaterialIDs_Parms, SourceMaterialList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_CompactedMaterialList_Inner = { "CompactedMaterialList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_CompactedMaterialList = { "CompactedMaterialList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventCompactMaterialIDs_Parms, CompactedMaterialList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventCompactMaterialIDs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventCompactMaterialIDs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_SourceMaterialList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_SourceMaterialList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_CompactedMaterialList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_CompactedMaterialList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09 * Compact the MaterialIDs of the TargetMesh, ie remove any un-used MaterialIDs and remap the remaining\n\x09 * N in-use MaterialIDs to the range [0,N-1]. Optionally compute a Compacted list of Materials.\n\x09 * @param SourceMaterialList Input Material list, assumption is that SourceMaterialList.Num() == number of MaterialIDs on mesh at input\n\x09 * @param CompactedMaterialList new Compacted Material list, one-to-one with new compacted MaterialIDs\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Compact the MaterialIDs of the TargetMesh, ie remove any un-used MaterialIDs and remap the remaining\nN in-use MaterialIDs to the range [0,N-1]. Optionally compute a Compacted list of Materials.\n@param SourceMaterialList Input Material list, assumption is that SourceMaterialList.Num() == number of MaterialIDs on mesh at input\n@param CompactedMaterialList new Compacted Material list, one-to-one with new compacted MaterialIDs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "CompactMaterialIDs", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventCompactMaterialIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventCompactMaterialIDs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventDeleteTrianglesByMaterialID_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 MaterialID;
			int32 NumDeleted;
			bool bDeferChangeNotifications;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumDeleted;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventDeleteTrianglesByMaterialID_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventDeleteTrianglesByMaterialID_Parms, MaterialID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_NumDeleted = { "NumDeleted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventDeleteTrianglesByMaterialID_Parms, NumDeleted), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshMaterialFunctions_eventDeleteTrianglesByMaterialID_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshMaterialFunctions_eventDeleteTrianglesByMaterialID_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventDeleteTrianglesByMaterialID_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventDeleteTrianglesByMaterialID_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_MaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_NumDeleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09 * Delete all triangles in TargetMesh with the given MaterialID\n\x09 * @param NumDeleted number of deleted triangles is returned here\n\x09 */" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Delete all triangles in TargetMesh with the given MaterialID\n@param NumDeleted number of deleted triangles is returned here" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "DeleteTrianglesByMaterialID", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventDeleteTrianglesByMaterialID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventDeleteTrianglesByMaterialID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventEnableMaterialIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventEnableMaterialIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventEnableMaterialIDs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventEnableMaterialIDs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09* Enables per-triangle Material IDs on a mesh and initializes the values to 0. \n\x09* If Target Mesh already has Material IDs, this function will do nothing.\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Enables per-triangle Material IDs on a mesh and initializes the values to 0.\nIf Target Mesh already has Material IDs, this function will do nothing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "EnableMaterialIDs", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventEnableMaterialIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventEnableMaterialIDs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventGetAllTriangleMaterialIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptIndexList MaterialIDList;
			bool bHasMaterialIDs;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialIDList;
		static void NewProp_bHasMaterialIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMaterialIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetAllTriangleMaterialIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_MaterialIDList = { "MaterialIDList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetAllTriangleMaterialIDs_Parms, MaterialIDList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_bHasMaterialIDs_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshMaterialFunctions_eventGetAllTriangleMaterialIDs_Parms*)Obj)->bHasMaterialIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_bHasMaterialIDs = { "bHasMaterialIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshMaterialFunctions_eventGetAllTriangleMaterialIDs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_bHasMaterialIDs_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetAllTriangleMaterialIDs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_MaterialIDList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_bHasMaterialIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09* Returns an Index List of all triangle Material IDs, constructed with one entry for each consecutive Triangle ID.\n\x09* If Material IDs are not enabled on the mesh, bHasMaterialsIDs will be set to false on return and nothing will be added to the Material ID List.\n\x09* @warning if the mesh is not Triangle-Compact (eg GetHasTriangleIDGaps == false) then the returned list will also have the same gaps where the number -1 will be recorded for any missing Triangle IDs.\n\x09*/" },
		{ "DisplayName", "GetMaterialIDsOfAllTriangles" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns an Index List of all triangle Material IDs, constructed with one entry for each consecutive Triangle ID.\nIf Material IDs are not enabled on the mesh, bHasMaterialsIDs will be set to false on return and nothing will be added to the Material ID List.\n@warning if the mesh is not Triangle-Compact (eg GetHasTriangleIDGaps == false) then the returned list will also have the same gaps where the number -1 will be recorded for any missing Triangle IDs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "GetAllTriangleMaterialIDs", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventGetAllTriangleMaterialIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventGetAllTriangleMaterialIDs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaterialIDsOfTriangles_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptIndexList TriangleIDList;
			FGeometryScriptIndexList MaterialIDList;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleIDList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialIDList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaterialIDsOfTriangles_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_TriangleIDList = { "TriangleIDList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaterialIDsOfTriangles_Parms, TriangleIDList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_MaterialIDList = { "MaterialIDList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaterialIDsOfTriangles_Parms, MaterialIDList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaterialIDsOfTriangles_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaterialIDsOfTriangles_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_TriangleIDList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_MaterialIDList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09* This populates the MaterialIDList with Material IDs for each triangle in the TriangleIDList.  \n\x09* If a triangle is not present in the Target Mesh the number -1 will be used for the corresponding Material ID.  \n\x09* If Material IDs are not enabled on the TargetMesh no Material IDs will be added to the result list.\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "This populates the MaterialIDList with Material IDs for each triangle in the TriangleIDList.\nIf a triangle is not present in the Target Mesh the number -1 will be used for the corresponding Material ID.\nIf Material IDs are not enabled on the TargetMesh no Material IDs will be added to the result list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "GetMaterialIDsOfTriangles", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaterialIDsOfTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaterialIDsOfTriangles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaxMaterialID_Parms
		{
			UDynamicMesh* TargetMesh;
			bool bHasMaterialIDs;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static void NewProp_bHasMaterialIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMaterialIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaxMaterialID_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::NewProp_bHasMaterialIDs_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaxMaterialID_Parms*)Obj)->bHasMaterialIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::NewProp_bHasMaterialIDs = { "bHasMaterialIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaxMaterialID_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::NewProp_bHasMaterialIDs_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Enabled" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaxMaterialID_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::NewProp_bHasMaterialIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshQueries" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "GetMaxMaterialID", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaxMaterialID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventGetMaxMaterialID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventGetTriangleMaterialID_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			bool bIsValidTriangle;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetTriangleMaterialID_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetTriangleMaterialID_Parms, TriangleID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshMaterialFunctions_eventGetTriangleMaterialID_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshMaterialFunctions_eventGetTriangleMaterialID_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Material ID" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetTriangleMaterialID_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09 * Returns the current Material ID for a Triangle.  \n\x09 * If the mesh does not have Material IDs enabled or if the Triangle ID is not an element of the mesh, the value 0 will be returned and bIsValidTriangle will be false.\n\x09 */" },
		{ "DisplayName", "GetMaterialIDOfTriangle" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the current Material ID for a Triangle.\nIf the mesh does not have Material IDs enabled or if the Triangle ID is not an element of the mesh, the value 0 will be returned and bIsValidTriangle will be false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "GetTriangleMaterialID", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventGetTriangleMaterialID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventGetTriangleMaterialID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventGetTrianglesByMaterialID_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 MaterialID;
			FGeometryScriptIndexList TriangleIDList;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleIDList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetTrianglesByMaterialID_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetTrianglesByMaterialID_Parms, MaterialID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_TriangleIDList = { "TriangleIDList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetTrianglesByMaterialID_Parms, TriangleIDList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetTrianglesByMaterialID_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventGetTrianglesByMaterialID_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_MaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_TriangleIDList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Selection" },
		{ "Comment", "/**\n\x09 * Populates Triangle ID List with the Triangle IDs of triangles that share the specified Material ID in the Target Mesh.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Populates Triangle ID List with the Triangle IDs of triangles that share the specified Material ID in the Target Mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "GetTrianglesByMaterialID", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventGetTrianglesByMaterialID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventGetTrianglesByMaterialID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventRemapMaterialIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 FromMaterialID;
			int32 ToMaterialID;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FromMaterialID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ToMaterialID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventRemapMaterialIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_FromMaterialID = { "FromMaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventRemapMaterialIDs_Parms, FromMaterialID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_ToMaterialID = { "ToMaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventRemapMaterialIDs_Parms, ToMaterialID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventRemapMaterialIDs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventRemapMaterialIDs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_FromMaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_ToMaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09* For all triangles with a Material ID matching the given value (From Material ID), update the Material ID to the new value (To Material ID).\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "For all triangles with a Material ID matching the given value (From Material ID), update the Material ID to the new value (To Material ID)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "RemapMaterialIDs", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventRemapMaterialIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventRemapMaterialIDs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventSetAllTriangleMaterialIDs_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptIndexList TriangleMaterialIDList;
			bool bDeferChangeNotifications;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleMaterialIDList;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetAllTriangleMaterialIDs_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_TriangleMaterialIDList = { "TriangleMaterialIDList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetAllTriangleMaterialIDs_Parms, TriangleMaterialIDList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshMaterialFunctions_eventSetAllTriangleMaterialIDs_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshMaterialFunctions_eventSetAllTriangleMaterialIDs_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetAllTriangleMaterialIDs_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetAllTriangleMaterialIDs_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_TriangleMaterialIDList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09* Sets the Material ID of all triangles in a mesh to the values in an input Index List.\n\x09* @param TriangleMateralIDList the list of Material IDs, the length of this list should be the same as the Max Triangle ID for this mesh.\n\x09* @param bDeferChangeNotifications if true, the UDynamicMesh does not emit a change event/signal for this modification.\n\x09*/" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "SetMaterialIDsOnAllTriangles" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sets the Material ID of all triangles in a mesh to the values in an input Index List.\n@param TriangleMateralIDList the list of Material IDs, the length of this list should be the same as the Max Triangle ID for this mesh.\n@param bDeferChangeNotifications if true, the UDynamicMesh does not emit a change event/signal for this modification." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "SetAllTriangleMaterialIDs", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventSetAllTriangleMaterialIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventSetAllTriangleMaterialIDs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDForMeshSelection_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			int32 MaterialID;
			bool bDeferChangeNotifications;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialID;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDForMeshSelection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDForMeshSelection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(0, nullptr) }; // 2142326124
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDForMeshSelection_Parms, MaterialID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDForMeshSelection_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDForMeshSelection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDForMeshSelection_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDForMeshSelection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_MaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyGroups" },
		{ "Comment", "/**\n\x09* Set a new MaterialID on all the triangles of the given Selection.\n\x09* @param MaterialID new Material ID to set\n\x09* @param bDeferChangeNotifications if true, the UDynamicMesh does not emit a change event/signal for this modification\n\x09*/" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set a new MaterialID on all the triangles of the given Selection.\n@param MaterialID new Material ID to set\n@param bDeferChangeNotifications if true, the UDynamicMesh does not emit a change event/signal for this modification" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "SetMaterialIDForMeshSelection", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDForMeshSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDForMeshSelection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDOnTriangles_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptIndexList TriangleIDList;
			int32 MaterialID;
			bool bDeferChangeNotifications;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriangleIDList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialID;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDOnTriangles_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_TriangleIDList = { "TriangleIDList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDOnTriangles_Parms, TriangleIDList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDOnTriangles_Parms, MaterialID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDOnTriangles_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDOnTriangles_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDOnTriangles_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDOnTriangles_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_TriangleIDList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_MaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09* Assigns the Material ID to all the triangles specified by the Triangle ID List.\n\x09* @param TriangleIDList the triangles in the target mesh that will be updated with the new Material ID\n\x09* @param MaterialID the ID to be assigned to each triangle in the input list.\n\x09* @param bDeferChangeNotifications if true, the UDynamicMesh does not emit a change event/signal for this modification.\n\x09*/" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Assigns the Material ID to all the triangles specified by the Triangle ID List.\n@param TriangleIDList the triangles in the target mesh that will be updated with the new Material ID\n@param MaterialID the ID to be assigned to each triangle in the input list.\n@param bDeferChangeNotifications if true, the UDynamicMesh does not emit a change event/signal for this modification." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "SetMaterialIDOnTriangles", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDOnTriangles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventSetMaterialIDOnTriangles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptGroupLayer GroupLayer;
			int32 PolygroupID;
			int32 MaterialID;
			bool bIsValidPolygroupID;
			bool bDeferChangeNotifications;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolygroupID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidPolygroupID_MetaData[];
#endif
		static void NewProp_bIsValidPolygroupID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidPolygroupID;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_GroupLayer = { "GroupLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms, GroupLayer), Z_Construct_UScriptStruct_FGeometryScriptGroupLayer, METADATA_PARAMS(0, nullptr) }; // 801453998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_PolygroupID_MetaData[] = {
		{ "DisplayName", "PolyGroup ID" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_PolygroupID = { "PolygroupID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms, PolygroupID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_PolygroupID_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_PolygroupID_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms, MaterialID), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_bIsValidPolygroupID_MetaData[] = {
		{ "DisplayName", "Is Valid PolyGroup ID" },
	};
#endif
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_bIsValidPolygroupID_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms*)Obj)->bIsValidPolygroupID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_bIsValidPolygroupID = { "bIsValidPolygroupID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_bIsValidPolygroupID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_bIsValidPolygroupID_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_bIsValidPolygroupID_MetaData) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_GroupLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_PolygroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_MaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_bIsValidPolygroupID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09* Set a new MaterialID on all the triangles of TargetMesh with the given PolyGroup.\n\x09* @param GroupLayer PolyGroup Layer to use as basis for PolyGroups\n\x09* @param PolyGroupID PolyGroup ID that specifies Triangles to set to new MaterialID\n\x09* @param MaterialID explicit new MaterialID to set\n\x09* @param bDeferChangeNotifications if true, the UDynamicMesh does not emit a change event/signal for this modification\n\x09*/" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "DisplayName", "SetPolyGroupMaterialID" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set a new MaterialID on all the triangles of TargetMesh with the given PolyGroup.\n@param GroupLayer PolyGroup Layer to use as basis for PolyGroups\n@param PolyGroupID PolyGroup ID that specifies Triangles to set to new MaterialID\n@param MaterialID explicit new MaterialID to set\n@param bDeferChangeNotifications if true, the UDynamicMesh does not emit a change event/signal for this modification" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "SetPolygroupMaterialID", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventSetPolygroupMaterialID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics
	{
		struct GeometryScriptLibrary_MeshMaterialFunctions_eventSetTriangleMaterialID_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 TriangleID;
			int32 MaterialID;
			bool bIsValidTriangle;
			bool bDeferChangeNotifications;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriangleID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialID;
		static void NewProp_bIsValidTriangle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidTriangle;
		static void NewProp_bDeferChangeNotifications_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferChangeNotifications;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetTriangleMaterialID_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_TriangleID = { "TriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetTriangleMaterialID_Parms, TriangleID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetTriangleMaterialID_Parms, MaterialID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_bIsValidTriangle_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshMaterialFunctions_eventSetTriangleMaterialID_Parms*)Obj)->bIsValidTriangle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_bIsValidTriangle = { "bIsValidTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshMaterialFunctions_eventSetTriangleMaterialID_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_bIsValidTriangle_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_bDeferChangeNotifications_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshMaterialFunctions_eventSetTriangleMaterialID_Parms*)Obj)->bDeferChangeNotifications = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_bDeferChangeNotifications = { "bDeferChangeNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshMaterialFunctions_eventSetTriangleMaterialID_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_bDeferChangeNotifications_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshMaterialFunctions_eventSetTriangleMaterialID_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_TriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_MaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_bIsValidTriangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_bDeferChangeNotifications,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Materials" },
		{ "Comment", "/**\n\x09* Assigns the specified triangle the given Material ID.  \n\x09* If the Target Mesh does not have Material IDs enabled, or if the Triangle ID is not an element of the Target Mesh then bIsValidTriangle will be set to false.\n\x09*/" },
		{ "CPP_Default_bDeferChangeNotifications", "false" },
		{ "DisplayName", "SetMaterialIDOnTriangle" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Assigns the specified triangle the given Material ID.\nIf the Target Mesh does not have Material IDs enabled, or if the Triangle ID is not an element of the Target Mesh then bIsValidTriangle will be set to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, nullptr, "SetTriangleMaterialID", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventSetTriangleMaterialID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::GeometryScriptLibrary_MeshMaterialFunctions_eventSetTriangleMaterialID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshMaterialFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs, "ClearMaterialIDs" }, // 3817323750
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs, "CompactMaterialIDs" }, // 3114986685
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID, "DeleteTrianglesByMaterialID" }, // 2646927884
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs, "EnableMaterialIDs" }, // 36526306
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs, "GetAllTriangleMaterialIDs" }, // 3053521584
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles, "GetMaterialIDsOfTriangles" }, // 1974693074
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID, "GetMaxMaterialID" }, // 1551796484
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID, "GetTriangleMaterialID" }, // 576941981
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID, "GetTrianglesByMaterialID" }, // 2303848745
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs, "RemapMaterialIDs" }, // 3646191879
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs, "SetAllTriangleMaterialIDs" }, // 2518597194
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection, "SetMaterialIDForMeshSelection" }, // 1465977657
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles, "SetMaterialIDOnTriangles" }, // 3126797112
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID, "SetPolygroupMaterialID" }, // 3951742701
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID, "SetTriangleMaterialID" }, // 3900467034
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshMaterialFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshMaterialFunctions.h" },
		{ "ScriptName", "GeometryScript_Materials" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshMaterialFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshMaterialFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshMaterialFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshMaterialFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshMaterialFunctions>()
	{
		return UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshMaterialFunctions::UGeometryScriptLibrary_MeshMaterialFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshMaterialFunctions);
	UGeometryScriptLibrary_MeshMaterialFunctions::~UGeometryScriptLibrary_MeshMaterialFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshMaterialFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshMaterialFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshMaterialFunctions), 4052007744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_2178249674(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshMaterialFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
