// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshGeodesicFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshGeodesicFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPolyPath();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshGeodesicFunctions::execCreateSurfacePath)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartTriangleID);
		P_GET_STRUCT(FVector,Z_Param_StartBaryCoords);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxPathLength);
		P_GET_STRUCT_REF(FGeometryScriptPolyPath,Z_Param_Out_SurfacePath);
		P_GET_UBOOL_REF(Z_Param_Out_bFoundErrors);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshGeodesicFunctions::CreateSurfacePath(Z_Param_TargetMesh,Z_Param_Direction,Z_Param_StartTriangleID,Z_Param_StartBaryCoords,Z_Param_MaxPathLength,Z_Param_Out_SurfacePath,Z_Param_Out_bFoundErrors,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshGeodesicFunctions::execGetShortestSurfacePath)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartTriangleID);
		P_GET_STRUCT(FVector,Z_Param_StartBaryCoords);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndTriangleID);
		P_GET_STRUCT(FVector,Z_Param_EndBaryCoords);
		P_GET_STRUCT_REF(FGeometryScriptPolyPath,Z_Param_Out_ShortestPath);
		P_GET_UBOOL_REF(Z_Param_Out_bFoundErrors);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestSurfacePath(Z_Param_TargetMesh,Z_Param_StartTriangleID,Z_Param_StartBaryCoords,Z_Param_EndTriangleID,Z_Param_EndBaryCoords,Z_Param_Out_ShortestPath,Z_Param_Out_bFoundErrors,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshGeodesicFunctions::execGetShortestVertexPath)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartVertexID);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndVertexID);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_VertexIDList);
		P_GET_UBOOL_REF(Z_Param_Out_bFoundErrors);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestVertexPath(Z_Param_TargetMesh,Z_Param_StartVertexID,Z_Param_EndVertexID,Z_Param_Out_VertexIDList,Z_Param_Out_bFoundErrors,Z_Param_Debug);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshGeodesicFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshGeodesicFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshGeodesicFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSurfacePath", &UGeometryScriptLibrary_MeshGeodesicFunctions::execCreateSurfacePath },
			{ "GetShortestSurfacePath", &UGeometryScriptLibrary_MeshGeodesicFunctions::execGetShortestSurfacePath },
			{ "GetShortestVertexPath", &UGeometryScriptLibrary_MeshGeodesicFunctions::execGetShortestVertexPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics
	{
		struct GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms
		{
			UDynamicMesh* TargetMesh;
			FVector Direction;
			int32 StartTriangleID;
			FVector StartBaryCoords;
			float MaxPathLength;
			FGeometryScriptPolyPath SurfacePath;
			bool bFoundErrors;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartTriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartBaryCoords;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPathLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurfacePath;
		static void NewProp_bFoundErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundErrors;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_StartTriangleID = { "StartTriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms, StartTriangleID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_StartBaryCoords = { "StartBaryCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms, StartBaryCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_MaxPathLength = { "MaxPathLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms, MaxPathLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_SurfacePath = { "SurfacePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms, SurfacePath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(0, nullptr) }; // 4293158870
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_bFoundErrors_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms*)Obj)->bFoundErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_bFoundErrors = { "bFoundErrors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_bFoundErrors_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_StartTriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_StartBaryCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_MaxPathLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_SurfacePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_bFoundErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshGeodesic" },
		{ "Comment", "/**\n\x09* Computes a PolyPath that represents a \"straight\" surface path starting at the prescribed point on the mesh, and continuing \n\x09* in the indicated direction until reaching the requested path length or encountering a mesh boundary, whichever comes first.\n\x09* @param TargetMesh defines the surface where the path is computed.\n\x09* @param Direction is a three-dimensional vector that is projected onto the mesh surface to determine the path direction. \n\x09* @param StartTriangleID the ID of mesh Triangle that contains the start point of the path.\n\x09* @param StartBaryCoords indicates the location of start point within the start triangle, in terms of barycentric coordinates.\n\x09* @param MaxPathLength sets the maximal length of the path, but the actual path may be shorter as it automatically terminates when encountering a mesh boundary edge. \n\x09* @param SurfacePath holds on return a PolyPath that forms a \"straight\" path along the mesh surface from the start position.\n\x09* @param bFoundErrors, will be false on success.  \n\x09* Note, Barycentric coordinates are of the form (a,b,c) where each entry is positive and a + b + c = 1.  \n\x09*       If the provided coordinate is invalid, the value (1/3, 1/3, 1/3) will be used.\n\x09*       Also, if the direction vector is nearly zero, the up-vector will be used. \n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshGeodesicFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Computes a PolyPath that represents a \"straight\" surface path starting at the prescribed point on the mesh, and continuing\nin the indicated direction until reaching the requested path length or encountering a mesh boundary, whichever comes first.\n@param TargetMesh defines the surface where the path is computed.\n@param Direction is a three-dimensional vector that is projected onto the mesh surface to determine the path direction.\n@param StartTriangleID the ID of mesh Triangle that contains the start point of the path.\n@param StartBaryCoords indicates the location of start point within the start triangle, in terms of barycentric coordinates.\n@param MaxPathLength sets the maximal length of the path, but the actual path may be shorter as it automatically terminates when encountering a mesh boundary edge.\n@param SurfacePath holds on return a PolyPath that forms a \"straight\" path along the mesh surface from the start position.\n@param bFoundErrors, will be false on success.\nNote, Barycentric coordinates are of the form (a,b,c) where each entry is positive and a + b + c = 1.\n      If the provided coordinate is invalid, the value (1/3, 1/3, 1/3) will be used.\n      Also, if the direction vector is nearly zero, the up-vector will be used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions, nullptr, "CreateSurfacePath", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::GeometryScriptLibrary_MeshGeodesicFunctions_eventCreateSurfacePath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics
	{
		struct GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 StartTriangleID;
			FVector StartBaryCoords;
			int32 EndTriangleID;
			FVector EndBaryCoords;
			FGeometryScriptPolyPath ShortestPath;
			bool bFoundErrors;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartTriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartBaryCoords;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndTriangleID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndBaryCoords;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShortestPath;
		static void NewProp_bFoundErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundErrors;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_StartTriangleID = { "StartTriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms, StartTriangleID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_StartBaryCoords = { "StartBaryCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms, StartBaryCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_EndTriangleID = { "EndTriangleID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms, EndTriangleID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_EndBaryCoords = { "EndBaryCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms, EndBaryCoords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_ShortestPath = { "ShortestPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms, ShortestPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(0, nullptr) }; // 4293158870
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_bFoundErrors_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms*)Obj)->bFoundErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_bFoundErrors = { "bFoundErrors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_bFoundErrors_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_StartTriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_StartBaryCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_EndTriangleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_EndBaryCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_ShortestPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_bFoundErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshGeodesic" },
		{ "Comment", "/**\n\x09* Computes a PolyPath that represents the shortest mesh surface path between two prescribed points on the provided mesh.\n\x09* This can fail if the Start and End points are within separate connected components of the mesh.\n\x09* @param TargetMesh defines the surface where the path is computed.\n\x09* @param StartTriangleID the ID of mesh Triangle that contains the start point of the path.\n\x09* @param StartBaryCoords indicates the location of start point within the start triangle, in terms of barycentric coordinates.\n\x09* @param EndTriangleID the ID of mesh Triangle that contains the end point of the path.\n\x09* @param EndBaryCoords indicates the location of the end point within the end triangle, in terms of barycentric coordinates.\n\x09* @param ShortestPath, if found this will hold on return a PolyPath that defines the shortest path along the mesh surface connecting the start and end points.\n\x09* @param bFoundErrors, will be false on success.  \n\x09* Note, Barycentric coordinates are of the form (a,b,c) where each entry is positive and a + b + c = 1.  \n\x09*       If the provided coordinates are invalid, the value (1/3, 1/3, 1/3) will be used.\n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshGeodesicFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Computes a PolyPath that represents the shortest mesh surface path between two prescribed points on the provided mesh.\nThis can fail if the Start and End points are within separate connected components of the mesh.\n@param TargetMesh defines the surface where the path is computed.\n@param StartTriangleID the ID of mesh Triangle that contains the start point of the path.\n@param StartBaryCoords indicates the location of start point within the start triangle, in terms of barycentric coordinates.\n@param EndTriangleID the ID of mesh Triangle that contains the end point of the path.\n@param EndBaryCoords indicates the location of the end point within the end triangle, in terms of barycentric coordinates.\n@param ShortestPath, if found this will hold on return a PolyPath that defines the shortest path along the mesh surface connecting the start and end points.\n@param bFoundErrors, will be false on success.\nNote, Barycentric coordinates are of the form (a,b,c) where each entry is positive and a + b + c = 1.\n      If the provided coordinates are invalid, the value (1/3, 1/3, 1/3) will be used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions, nullptr, "GetShortestSurfacePath", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestSurfacePath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics
	{
		struct GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestVertexPath_Parms
		{
			UDynamicMesh* TargetMesh;
			int32 StartVertexID;
			int32 EndVertexID;
			FGeometryScriptIndexList VertexIDList;
			bool bFoundErrors;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartVertexID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndVertexID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexIDList;
		static void NewProp_bFoundErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundErrors;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestVertexPath_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_StartVertexID = { "StartVertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestVertexPath_Parms, StartVertexID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_EndVertexID = { "EndVertexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestVertexPath_Parms, EndVertexID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_VertexIDList = { "VertexIDList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestVertexPath_Parms, VertexIDList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(0, nullptr) }; // 3280689237
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_bFoundErrors_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestVertexPath_Parms*)Obj)->bFoundErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_bFoundErrors = { "bFoundErrors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestVertexPath_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_bFoundErrors_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestVertexPath_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestVertexPath_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_StartVertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_EndVertexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_VertexIDList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_bFoundErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshGeodesic" },
		{ "Comment", "/**\n\x09* Computes a vertex list that represents the shortest path constrained to travel along mesh triangle edges between the prescribed start and end vertex.\n\x09* This can fail if the Start and End points are within separate connected components of the mesh.\n\x09* @param TargetMesh defines the surface where the path is computed.\n\x09* @param StartVertexID  indicates ID of mesh vertex that defines the starting point of the path.\n\x09* @param EndVertexID  indicates ID of the mesh vertex that defined the end point of the path.\n\x09* @param VertexIDList, if found this will hold on return a list of mesh vertex IDs that define the path from StartVertexID to EndVertexID.\n\x09* @param bFoundErrors will be false on success.  \n\x09*/" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshGeodesicFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Computes a vertex list that represents the shortest path constrained to travel along mesh triangle edges between the prescribed start and end vertex.\nThis can fail if the Start and End points are within separate connected components of the mesh.\n@param TargetMesh defines the surface where the path is computed.\n@param StartVertexID  indicates ID of mesh vertex that defines the starting point of the path.\n@param EndVertexID  indicates ID of the mesh vertex that defined the end point of the path.\n@param VertexIDList, if found this will hold on return a list of mesh vertex IDs that define the path from StartVertexID to EndVertexID.\n@param bFoundErrors will be false on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions, nullptr, "GetShortestVertexPath", nullptr, nullptr, Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestVertexPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::GeometryScriptLibrary_MeshGeodesicFunctions_eventGetShortestVertexPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshGeodesicFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshGeodesicFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_CreateSurfacePath, "CreateSurfacePath" }, // 534715329
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestSurfacePath, "GetShortestSurfacePath" }, // 2062847601
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshGeodesicFunctions_GetShortestVertexPath, "GetShortestVertexPath" }, // 1348921355
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshGeodesicFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshGeodesicFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshGeodesic" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshGeodesicFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshGeodesicFunctions::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshGeodesicFunctions>()
	{
		return UGeometryScriptLibrary_MeshGeodesicFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshGeodesicFunctions::UGeometryScriptLibrary_MeshGeodesicFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshGeodesicFunctions);
	UGeometryScriptLibrary_MeshGeodesicFunctions::~UGeometryScriptLibrary_MeshGeodesicFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshGeodesicFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshGeodesicFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions, UGeometryScriptLibrary_MeshGeodesicFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshGeodesicFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshGeodesicFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshGeodesicFunctions), 2167825145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshGeodesicFunctions_h_2211641470(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshGeodesicFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshGeodesicFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
