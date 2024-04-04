// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheMeshData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheMeshData() {}
// Cross Module References
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheVertexInfo();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCacheMeshBatchInfo;
class UScriptStruct* FGeometryCacheMeshBatchInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCacheMeshBatchInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCacheMeshBatchInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo, (UObject*)Z_Construct_UPackage__Script_GeometryCache(), TEXT("GeometryCacheMeshBatchInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCacheMeshBatchInfo.OuterSingleton;
}
template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<FGeometryCacheMeshBatchInfo>()
{
	return FGeometryCacheMeshBatchInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores per-batch data used for rendering */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheMeshData.h" },
		{ "ToolTip", "Stores per-batch data used for rendering" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCacheMeshBatchInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
		nullptr,
		&NewStructOps,
		"GeometryCacheMeshBatchInfo",
		nullptr,
		0,
		sizeof(FGeometryCacheMeshBatchInfo),
		alignof(FGeometryCacheMeshBatchInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCacheMeshBatchInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCacheMeshBatchInfo.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCacheMeshBatchInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCacheVertexInfo;
class UScriptStruct* FGeometryCacheVertexInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCacheVertexInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCacheVertexInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheVertexInfo, (UObject*)Z_Construct_UPackage__Script_GeometryCache(), TEXT("GeometryCacheVertexInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCacheVertexInfo.OuterSingleton;
}
template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<FGeometryCacheVertexInfo>()
{
	return FGeometryCacheVertexInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores info on the attributes of a vertex in a mesh */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheMeshData.h" },
		{ "ToolTip", "Stores info on the attributes of a vertex in a mesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCacheVertexInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
		nullptr,
		&NewStructOps,
		"GeometryCacheVertexInfo",
		nullptr,
		0,
		sizeof(FGeometryCacheVertexInfo),
		alignof(FGeometryCacheVertexInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheVertexInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCacheVertexInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCacheVertexInfo.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCacheVertexInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCacheMeshData;
class UScriptStruct* FGeometryCacheMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCacheMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCacheMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCacheMeshData, (UObject*)Z_Construct_UPackage__Script_GeometryCache(), TEXT("GeometryCacheMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCacheMeshData.OuterSingleton;
}
template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<FGeometryCacheMeshData>()
{
	return FGeometryCacheMeshData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores per Track/Mesh data used for rendering*/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheMeshData.h" },
		{ "ToolTip", "Stores per Track/Mesh data used for rendering" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCacheMeshData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
		nullptr,
		&NewStructOps,
		"GeometryCacheMeshData",
		nullptr,
		0,
		sizeof(FGeometryCacheMeshData),
		alignof(FGeometryCacheMeshData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCacheMeshData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCacheMeshData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCacheMeshData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheMeshData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheMeshData_h_Statics::ScriptStructInfo[] = {
		{ FGeometryCacheMeshBatchInfo::StaticStruct, Z_Construct_UScriptStruct_FGeometryCacheMeshBatchInfo_Statics::NewStructOps, TEXT("GeometryCacheMeshBatchInfo"), &Z_Registration_Info_UScriptStruct_GeometryCacheMeshBatchInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCacheMeshBatchInfo), 2085247416U) },
		{ FGeometryCacheVertexInfo::StaticStruct, Z_Construct_UScriptStruct_FGeometryCacheVertexInfo_Statics::NewStructOps, TEXT("GeometryCacheVertexInfo"), &Z_Registration_Info_UScriptStruct_GeometryCacheVertexInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCacheVertexInfo), 1623002208U) },
		{ FGeometryCacheMeshData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCacheMeshData_Statics::NewStructOps, TEXT("GeometryCacheMeshData"), &Z_Registration_Info_UScriptStruct_GeometryCacheMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCacheMeshData), 3701150293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheMeshData_h_1029088481(TEXT("/Script/GeometryCache"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheMeshData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheMeshData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
