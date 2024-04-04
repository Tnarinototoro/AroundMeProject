// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNETypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNETypes() {}
// Cross Module References
	NNE_API UEnum* Z_Construct_UEnum_NNE_ENNETensorDataType();
	UPackage* Z_Construct_UPackage__Script_NNE();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENNETensorDataType;
	static UEnum* ENNETensorDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENNETensorDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENNETensorDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNE_ENNETensorDataType, (UObject*)Z_Construct_UPackage__Script_NNE(), TEXT("ENNETensorDataType"));
		}
		return Z_Registration_Info_UEnum_ENNETensorDataType.OuterSingleton;
	}
	template<> NNE_API UEnum* StaticEnum<ENNETensorDataType>()
	{
		return ENNETensorDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_NNE_ENNETensorDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NNE_ENNETensorDataType_Statics::Enumerators[] = {
		{ "ENNETensorDataType::None", (int64)ENNETensorDataType::None },
		{ "ENNETensorDataType::Char", (int64)ENNETensorDataType::Char },
		{ "ENNETensorDataType::Boolean", (int64)ENNETensorDataType::Boolean },
		{ "ENNETensorDataType::Half", (int64)ENNETensorDataType::Half },
		{ "ENNETensorDataType::Float", (int64)ENNETensorDataType::Float },
		{ "ENNETensorDataType::Double", (int64)ENNETensorDataType::Double },
		{ "ENNETensorDataType::Int8", (int64)ENNETensorDataType::Int8 },
		{ "ENNETensorDataType::Int16", (int64)ENNETensorDataType::Int16 },
		{ "ENNETensorDataType::Int32", (int64)ENNETensorDataType::Int32 },
		{ "ENNETensorDataType::Int64", (int64)ENNETensorDataType::Int64 },
		{ "ENNETensorDataType::UInt8", (int64)ENNETensorDataType::UInt8 },
		{ "ENNETensorDataType::UInt16", (int64)ENNETensorDataType::UInt16 },
		{ "ENNETensorDataType::UInt32", (int64)ENNETensorDataType::UInt32 },
		{ "ENNETensorDataType::UInt64", (int64)ENNETensorDataType::UInt64 },
		{ "ENNETensorDataType::Complex64", (int64)ENNETensorDataType::Complex64 },
		{ "ENNETensorDataType::Complex128", (int64)ENNETensorDataType::Complex128 },
		{ "ENNETensorDataType::BFloat16", (int64)ENNETensorDataType::BFloat16 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NNE_ENNETensorDataType_Statics::Enum_MetaDataParams[] = {
		{ "BFloat16.Comment", "//!< 128-bit Complex Number\n" },
		{ "BFloat16.Name", "ENNETensorDataType::BFloat16" },
		{ "BFloat16.ToolTip", "!< 128-bit Complex Number" },
		{ "Boolean.Comment", "//!< Character type\n" },
		{ "Boolean.Name", "ENNETensorDataType::Boolean" },
		{ "Boolean.ToolTip", "!< Character type" },
		{ "Char.Name", "ENNETensorDataType::Char" },
		{ "Comment", "/**\n * The enum lists all tensor data types used in NNE \n */" },
		{ "Complex128.Comment", "//!< 64-bit Complex Number\n" },
		{ "Complex128.Name", "ENNETensorDataType::Complex128" },
		{ "Complex128.ToolTip", "!< 64-bit Complex Number" },
		{ "Complex64.Comment", "//!< 64-bit unsigned integer\n" },
		{ "Complex64.Name", "ENNETensorDataType::Complex64" },
		{ "Complex64.ToolTip", "!< 64-bit unsigned integer" },
		{ "Double.Comment", "//!< 32-bit floating number\n" },
		{ "Double.Name", "ENNETensorDataType::Double" },
		{ "Double.ToolTip", "!< 32-bit floating number" },
		{ "Float.Comment", "//!< 16-bit floating number\n" },
		{ "Float.Name", "ENNETensorDataType::Float" },
		{ "Float.ToolTip", "!< 16-bit floating number" },
		{ "Half.Comment", "//!< Boolean type\n" },
		{ "Half.Name", "ENNETensorDataType::Half" },
		{ "Half.ToolTip", "!< Boolean type" },
		{ "Int16.Comment", "//!< 8-bit signed integer\n" },
		{ "Int16.Name", "ENNETensorDataType::Int16" },
		{ "Int16.ToolTip", "!< 8-bit signed integer" },
		{ "Int32.Comment", "//!< 16-bit signed integer\n" },
		{ "Int32.Name", "ENNETensorDataType::Int32" },
		{ "Int32.ToolTip", "!< 16-bit signed integer" },
		{ "Int64.Comment", "//!< 32-bit signed integer\n" },
		{ "Int64.Name", "ENNETensorDataType::Int64" },
		{ "Int64.ToolTip", "!< 32-bit signed integer" },
		{ "Int8.Comment", "//!< 64-bit floating number\n" },
		{ "Int8.Name", "ENNETensorDataType::Int8" },
		{ "Int8.ToolTip", "!< 64-bit floating number" },
		{ "ModuleRelativePath", "Public/NNETypes.h" },
		{ "None.Name", "ENNETensorDataType::None" },
		{ "ToolTip", "The enum lists all tensor data types used in NNE" },
		{ "UInt16.Comment", "//!< 8-bit unsigned integer\n" },
		{ "UInt16.Name", "ENNETensorDataType::UInt16" },
		{ "UInt16.ToolTip", "!< 8-bit unsigned integer" },
		{ "UInt32.Comment", "//!< 16-bit unsigned integer\n" },
		{ "UInt32.Name", "ENNETensorDataType::UInt32" },
		{ "UInt32.ToolTip", "!< 16-bit unsigned integer" },
		{ "UInt64.Comment", "//!< 32-bit unsigned integer\n" },
		{ "UInt64.Name", "ENNETensorDataType::UInt64" },
		{ "UInt64.ToolTip", "!< 32-bit unsigned integer" },
		{ "UInt8.Comment", "//!< 64-bit signed integer\n" },
		{ "UInt8.Name", "ENNETensorDataType::UInt8" },
		{ "UInt8.ToolTip", "!< 64-bit signed integer" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNE_ENNETensorDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NNE,
		nullptr,
		"ENNETensorDataType",
		"ENNETensorDataType",
		Z_Construct_UEnum_NNE_ENNETensorDataType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NNE_ENNETensorDataType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NNE_ENNETensorDataType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NNE_ENNETensorDataType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_NNE_ENNETensorDataType()
	{
		if (!Z_Registration_Info_UEnum_ENNETensorDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENNETensorDataType.InnerSingleton, Z_Construct_UEnum_NNE_ENNETensorDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENNETensorDataType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNE_Public_NNETypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNE_Public_NNETypes_h_Statics::EnumInfo[] = {
		{ ENNETensorDataType_StaticEnum, TEXT("ENNETensorDataType"), &Z_Registration_Info_UEnum_ENNETensorDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4212964760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNE_Public_NNETypes_h_2994597483(TEXT("/Script/NNE"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNE_Public_NNETypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNE_Public_NNETypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
