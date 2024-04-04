// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/MovieGraphCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieGraphCommon() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieGraphValueType;
	static UEnum* EMovieGraphValueType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieGraphValueType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieGraphValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMovieGraphValueType"));
		}
		return Z_Registration_Info_UEnum_EMovieGraphValueType.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieGraphValueType>()
	{
		return EMovieGraphValueType_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType_Statics::Enumerators[] = {
		{ "EMovieGraphValueType::None", (int64)EMovieGraphValueType::None },
		{ "EMovieGraphValueType::Bool", (int64)EMovieGraphValueType::Bool },
		{ "EMovieGraphValueType::Byte", (int64)EMovieGraphValueType::Byte },
		{ "EMovieGraphValueType::Int32", (int64)EMovieGraphValueType::Int32 },
		{ "EMovieGraphValueType::Int64", (int64)EMovieGraphValueType::Int64 },
		{ "EMovieGraphValueType::Float", (int64)EMovieGraphValueType::Float },
		{ "EMovieGraphValueType::Double", (int64)EMovieGraphValueType::Double },
		{ "EMovieGraphValueType::Name", (int64)EMovieGraphValueType::Name },
		{ "EMovieGraphValueType::String", (int64)EMovieGraphValueType::String },
		{ "EMovieGraphValueType::Text", (int64)EMovieGraphValueType::Text },
		{ "EMovieGraphValueType::Enum", (int64)EMovieGraphValueType::Enum },
		{ "EMovieGraphValueType::Struct", (int64)EMovieGraphValueType::Struct },
		{ "EMovieGraphValueType::Object", (int64)EMovieGraphValueType::Object },
		{ "EMovieGraphValueType::SoftObject", (int64)EMovieGraphValueType::SoftObject },
		{ "EMovieGraphValueType::Class", (int64)EMovieGraphValueType::Class },
		{ "EMovieGraphValueType::SoftClass", (int64)EMovieGraphValueType::SoftClass },
		{ "EMovieGraphValueType::Count", (int64)EMovieGraphValueType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType_Statics::Enum_MetaDataParams[] = {
		{ "Bool.Name", "EMovieGraphValueType::Bool" },
		{ "Byte.Name", "EMovieGraphValueType::Byte" },
		{ "Class.Hidden", "" },
		{ "Class.Name", "EMovieGraphValueType::Class" },
		{ "Comment", "/** The type of a graph member's value. */" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EMovieGraphValueType::Count" },
		{ "Double.Name", "EMovieGraphValueType::Double" },
		{ "Enum.Hidden", "" },
		{ "Enum.Name", "EMovieGraphValueType::Enum" },
		{ "Float.Name", "EMovieGraphValueType::Float" },
		{ "Int32.Name", "EMovieGraphValueType::Int32" },
		{ "Int64.Name", "EMovieGraphValueType::Int64" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphCommon.h" },
		{ "Name.Name", "EMovieGraphValueType::Name" },
		{ "None.Hidden", "" },
		{ "None.Name", "EMovieGraphValueType::None" },
		{ "Object.Hidden", "" },
		{ "Object.Name", "EMovieGraphValueType::Object" },
		{ "SoftClass.Hidden", "" },
		{ "SoftClass.Name", "EMovieGraphValueType::SoftClass" },
		{ "SoftObject.Hidden", "" },
		{ "SoftObject.Name", "EMovieGraphValueType::SoftObject" },
		{ "String.Name", "EMovieGraphValueType::String" },
		{ "Struct.Hidden", "" },
		{ "Struct.Name", "EMovieGraphValueType::Struct" },
		{ "Text.Name", "EMovieGraphValueType::Text" },
		{ "ToolTip", "The type of a graph member's value." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		"EMovieGraphValueType",
		"EMovieGraphValueType",
		Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType()
	{
		if (!Z_Registration_Info_UEnum_EMovieGraphValueType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieGraphValueType.InnerSingleton, Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphValueType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieGraphValueType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieGraphContainerType;
	static UEnum* EMovieGraphContainerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieGraphContainerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieGraphContainerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMovieGraphContainerType"));
		}
		return Z_Registration_Info_UEnum_EMovieGraphContainerType.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieGraphContainerType>()
	{
		return EMovieGraphContainerType_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType_Statics::Enumerators[] = {
		{ "EMovieGraphContainerType::None", (int64)EMovieGraphContainerType::None },
		{ "EMovieGraphContainerType::Array", (int64)EMovieGraphContainerType::Array },
		{ "EMovieGraphContainerType::Count", (int64)EMovieGraphContainerType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType_Statics::Enum_MetaDataParams[] = {
		{ "Array.Name", "EMovieGraphContainerType::Array" },
		{ "Comment", "/** The container type of a graph member's value. */" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EMovieGraphContainerType::Count" },
		{ "ModuleRelativePath", "Public/Graph/MovieGraphCommon.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EMovieGraphContainerType::None" },
		{ "ToolTip", "The container type of a graph member's value." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		"EMovieGraphContainerType",
		"EMovieGraphContainerType",
		Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType()
	{
		if (!Z_Registration_Info_UEnum_EMovieGraphContainerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieGraphContainerType.InnerSingleton, Z_Construct_UEnum_MovieRenderPipelineCore_EMovieGraphContainerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieGraphContainerType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCommon_h_Statics::EnumInfo[] = {
		{ EMovieGraphValueType_StaticEnum, TEXT("EMovieGraphValueType"), &Z_Registration_Info_UEnum_EMovieGraphValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 101554368U) },
		{ EMovieGraphContainerType_StaticEnum, TEXT("EMovieGraphContainerType"), &Z_Registration_Info_UEnum_EMovieGraphContainerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2621360303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCommon_h_146357412(TEXT("/Script/MovieRenderPipelineCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_Graph_MovieGraphCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
