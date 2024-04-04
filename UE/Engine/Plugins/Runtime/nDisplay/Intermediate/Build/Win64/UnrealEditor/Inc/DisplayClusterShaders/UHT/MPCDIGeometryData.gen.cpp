// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/MPCDIGeometryData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMPCDIGeometryData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DISPLAYCLUSTERSHADERS_API UScriptStruct* Z_Construct_UScriptStruct_FMPCDIGeometryExportData();
	DISPLAYCLUSTERSHADERS_API UScriptStruct* Z_Construct_UScriptStruct_FMPCDIGeometryImportData();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterShaders();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MPCDIGeometryImportData;
class UScriptStruct* FMPCDIGeometryImportData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MPCDIGeometryImportData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MPCDIGeometryImportData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMPCDIGeometryImportData, (UObject*)Z_Construct_UPackage__Script_DisplayClusterShaders(), TEXT("MPCDIGeometryImportData"));
	}
	return Z_Registration_Info_UScriptStruct_MPCDIGeometryImportData.OuterSingleton;
}
template<> DISPLAYCLUSTERSHADERS_API UScriptStruct* StaticStruct<FMPCDIGeometryImportData>()
{
	return FMPCDIGeometryImportData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MPCDI" },
		{ "ModuleRelativePath", "Public/Blueprints/MPCDIGeometryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMPCDIGeometryImportData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "MPCDI" },
		{ "ModuleRelativePath", "Public/Blueprints/MPCDIGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMPCDIGeometryImportData, Width), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Width_MetaData), Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Width_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "MPCDI" },
		{ "ModuleRelativePath", "Public/Blueprints/MPCDIGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMPCDIGeometryImportData, Height), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Height_MetaData), Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Height_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "MPCDI" },
		{ "ModuleRelativePath", "Public/Blueprints/MPCDIGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMPCDIGeometryImportData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Vertices_MetaData), Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Vertices_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewProp_Vertices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterShaders,
		nullptr,
		&NewStructOps,
		"MPCDIGeometryImportData",
		Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::PropPointers),
		sizeof(FMPCDIGeometryImportData),
		alignof(FMPCDIGeometryImportData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMPCDIGeometryImportData()
	{
		if (!Z_Registration_Info_UScriptStruct_MPCDIGeometryImportData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MPCDIGeometryImportData.InnerSingleton, Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MPCDIGeometryImportData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MPCDIGeometryExportData;
class UScriptStruct* FMPCDIGeometryExportData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MPCDIGeometryExportData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MPCDIGeometryExportData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMPCDIGeometryExportData, (UObject*)Z_Construct_UPackage__Script_DisplayClusterShaders(), TEXT("MPCDIGeometryExportData"));
	}
	return Z_Registration_Info_UScriptStruct_MPCDIGeometryExportData.OuterSingleton;
}
template<> DISPLAYCLUSTERSHADERS_API UScriptStruct* StaticStruct<FMPCDIGeometryExportData>()
{
	return FMPCDIGeometryExportData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MPCDI" },
		{ "ModuleRelativePath", "Public/Blueprints/MPCDIGeometryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMPCDIGeometryExportData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "MPCDI" },
		{ "ModuleRelativePath", "Public/Blueprints/MPCDIGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMPCDIGeometryExportData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Vertices_MetaData), Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Vertices_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Normal_Inner = { "Normal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "MPCDI" },
		{ "ModuleRelativePath", "Public/Blueprints/MPCDIGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMPCDIGeometryExportData, Normal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Normal_MetaData), Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Normal_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_UV_Inner = { "UV", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_UV_MetaData[] = {
		{ "Category", "MPCDI" },
		{ "ModuleRelativePath", "Public/Blueprints/MPCDIGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMPCDIGeometryExportData, UV), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_UV_MetaData), Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_UV_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "MPCDI" },
		{ "ModuleRelativePath", "Public/Blueprints/MPCDIGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMPCDIGeometryExportData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Triangles_MetaData), Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Triangles_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Normal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_UV_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_UV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewProp_Triangles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterShaders,
		nullptr,
		&NewStructOps,
		"MPCDIGeometryExportData",
		Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::PropPointers),
		sizeof(FMPCDIGeometryExportData),
		alignof(FMPCDIGeometryExportData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMPCDIGeometryExportData()
	{
		if (!Z_Registration_Info_UScriptStruct_MPCDIGeometryExportData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MPCDIGeometryExportData.InnerSingleton, Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MPCDIGeometryExportData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterShaders_Public_Blueprints_MPCDIGeometryData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterShaders_Public_Blueprints_MPCDIGeometryData_h_Statics::ScriptStructInfo[] = {
		{ FMPCDIGeometryImportData::StaticStruct, Z_Construct_UScriptStruct_FMPCDIGeometryImportData_Statics::NewStructOps, TEXT("MPCDIGeometryImportData"), &Z_Registration_Info_UScriptStruct_MPCDIGeometryImportData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMPCDIGeometryImportData), 974428737U) },
		{ FMPCDIGeometryExportData::StaticStruct, Z_Construct_UScriptStruct_FMPCDIGeometryExportData_Statics::NewStructOps, TEXT("MPCDIGeometryExportData"), &Z_Registration_Info_UScriptStruct_MPCDIGeometryExportData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMPCDIGeometryExportData), 502227249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterShaders_Public_Blueprints_MPCDIGeometryData_h_1516856033(TEXT("/Script/DisplayClusterShaders"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterShaders_Public_Blueprints_MPCDIGeometryData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterShaders_Public_Blueprints_MPCDIGeometryData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
