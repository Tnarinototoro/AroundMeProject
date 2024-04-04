// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/PCGPointFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Metadata/PCGMetadataTypesConstantStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGPointFilter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	PCG_API UClass* Z_Construct_UClass_UPCGPointFilterRangeSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGPointFilterRangeSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGPointFilterSettings();
	PCG_API UClass* Z_Construct_UClass_UPCGPointFilterSettings_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointFilterConstantType();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointFilterOperator();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointProperties();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointTargetFilterType();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointThresholdType();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointTargetFilterType;
	static UEnum* EPCGPointTargetFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointTargetFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGPointTargetFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointTargetFilterType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGPointTargetFilterType"));
		}
		return Z_Registration_Info_UEnum_EPCGPointTargetFilterType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGPointTargetFilterType>()
	{
		return EPCGPointTargetFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enumerators[] = {
		{ "EPCGPointTargetFilterType::Property", (int64)EPCGPointTargetFilterType::Property },
		{ "EPCGPointTargetFilterType::Metadata", (int64)EPCGPointTargetFilterType::Metadata },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enum_MetaDataParams[] = {
		{ "Metadata.Name", "EPCGPointTargetFilterType::Metadata" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "Property.Name", "EPCGPointTargetFilterType::Property" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGPointTargetFilterType",
		"EPCGPointTargetFilterType",
		Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGPointTargetFilterType()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointTargetFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointTargetFilterType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGPointTargetFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGPointTargetFilterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointThresholdType;
	static UEnum* EPCGPointThresholdType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointThresholdType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGPointThresholdType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointThresholdType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGPointThresholdType"));
		}
		return Z_Registration_Info_UEnum_EPCGPointThresholdType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGPointThresholdType>()
	{
		return EPCGPointThresholdType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enumerators[] = {
		{ "EPCGPointThresholdType::Property", (int64)EPCGPointThresholdType::Property },
		{ "EPCGPointThresholdType::Metadata", (int64)EPCGPointThresholdType::Metadata },
		{ "EPCGPointThresholdType::Constant", (int64)EPCGPointThresholdType::Constant },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enum_MetaDataParams[] = {
		{ "Constant.Name", "EPCGPointThresholdType::Constant" },
		{ "Metadata.Name", "EPCGPointThresholdType::Metadata" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "Property.Name", "EPCGPointThresholdType::Property" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGPointThresholdType",
		"EPCGPointThresholdType",
		Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGPointThresholdType()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointThresholdType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointThresholdType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGPointThresholdType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGPointThresholdType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointFilterConstantType;
	static UEnum* EPCGPointFilterConstantType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointFilterConstantType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGPointFilterConstantType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointFilterConstantType, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGPointFilterConstantType"));
		}
		return Z_Registration_Info_UEnum_EPCGPointFilterConstantType.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGPointFilterConstantType>()
	{
		return EPCGPointFilterConstantType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enumerators[] = {
		{ "EPCGPointFilterConstantType::Integer64", (int64)EPCGPointFilterConstantType::Integer64 },
		{ "EPCGPointFilterConstantType::Float", (int64)EPCGPointFilterConstantType::Float },
		{ "EPCGPointFilterConstantType::Vector", (int64)EPCGPointFilterConstantType::Vector },
		{ "EPCGPointFilterConstantType::Vector4", (int64)EPCGPointFilterConstantType::Vector4 },
		{ "EPCGPointFilterConstantType::String", (int64)EPCGPointFilterConstantType::String },
		{ "EPCGPointFilterConstantType::Unknown", (int64)EPCGPointFilterConstantType::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enum_MetaDataParams[] = {
		{ "Float.Name", "EPCGPointFilterConstantType::Float" },
		{ "Integer64.Name", "EPCGPointFilterConstantType::Integer64" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "String.Comment", "//Rotation,\n" },
		{ "String.Name", "EPCGPointFilterConstantType::String" },
		{ "String.ToolTip", "Rotation," },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "EPCGPointFilterConstantType::Unknown" },
		{ "Vector.Name", "EPCGPointFilterConstantType::Vector" },
		{ "Vector4.Name", "EPCGPointFilterConstantType::Vector4" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGPointFilterConstantType",
		"EPCGPointFilterConstantType",
		Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGPointFilterConstantType()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointFilterConstantType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointFilterConstantType.InnerSingleton, Z_Construct_UEnum_PCG_EPCGPointFilterConstantType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGPointFilterConstantType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGPointFilterOperator;
	static UEnum* EPCGPointFilterOperator_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointFilterOperator.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGPointFilterOperator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPointFilterOperator, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGPointFilterOperator"));
		}
		return Z_Registration_Info_UEnum_EPCGPointFilterOperator.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGPointFilterOperator>()
	{
		return EPCGPointFilterOperator_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enumerators[] = {
		{ "EPCGPointFilterOperator::Greater", (int64)EPCGPointFilterOperator::Greater },
		{ "EPCGPointFilterOperator::GreaterOrEqual", (int64)EPCGPointFilterOperator::GreaterOrEqual },
		{ "EPCGPointFilterOperator::Lesser", (int64)EPCGPointFilterOperator::Lesser },
		{ "EPCGPointFilterOperator::LesserOrEqual", (int64)EPCGPointFilterOperator::LesserOrEqual },
		{ "EPCGPointFilterOperator::Equal", (int64)EPCGPointFilterOperator::Equal },
		{ "EPCGPointFilterOperator::NotEqual", (int64)EPCGPointFilterOperator::NotEqual },
		{ "EPCGPointFilterOperator::InRange", (int64)EPCGPointFilterOperator::InRange },
		{ "EPCGPointFilterOperator::Substring", (int64)EPCGPointFilterOperator::Substring },
		{ "EPCGPointFilterOperator::Matches", (int64)EPCGPointFilterOperator::Matches },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enum_MetaDataParams[] = {
		{ "Equal.DisplayName", "=" },
		{ "Equal.Name", "EPCGPointFilterOperator::Equal" },
		{ "Greater.DisplayName", ">" },
		{ "Greater.Name", "EPCGPointFilterOperator::Greater" },
		{ "GreaterOrEqual.DisplayName", ">=" },
		{ "GreaterOrEqual.Name", "EPCGPointFilterOperator::GreaterOrEqual" },
		{ "InRange.Hidden", "" },
		{ "InRange.Name", "EPCGPointFilterOperator::InRange" },
		{ "Lesser.DisplayName", "<" },
		{ "Lesser.Name", "EPCGPointFilterOperator::Lesser" },
		{ "LesserOrEqual.DisplayName", "<=" },
		{ "LesserOrEqual.Name", "EPCGPointFilterOperator::LesserOrEqual" },
		{ "Matches.Name", "EPCGPointFilterOperator::Matches" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "NotEqual.DisplayName", "!=" },
		{ "NotEqual.Name", "EPCGPointFilterOperator::NotEqual" },
		{ "Substring.Name", "EPCGPointFilterOperator::Substring" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGPointFilterOperator",
		"EPCGPointFilterOperator",
		Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGPointFilterOperator()
	{
		if (!Z_Registration_Info_UEnum_EPCGPointFilterOperator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGPointFilterOperator.InnerSingleton, Z_Construct_UEnum_PCG_EPCGPointFilterOperator_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGPointFilterOperator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGPointFilterThresholdSettings;
class UScriptStruct* FPCGPointFilterThresholdSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGPointFilterThresholdSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGPointFilterThresholdSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGPointFilterThresholdSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PCGPointFilterThresholdSettings.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGPointFilterThresholdSettings>()
{
	return FPCGPointFilterThresholdSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInclusive_MetaData[];
#endif
		static void NewProp_bInclusive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInclusive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseConstantThreshold_MetaData[];
#endif
		static void NewProp_bUseConstantThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThresholdAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialQuery_MetaData[];
#endif
		static void NewProp_bUseSpatialQuery_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGPointFilterThresholdSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bInclusive_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the threshold in included or excluded from the range. */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If the threshold in included or excluded from the range." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bInclusive_SetBit(void* Obj)
	{
		((FPCGPointFilterThresholdSettings*)Obj)->bInclusive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bInclusive = { "bInclusive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGPointFilterThresholdSettings), &Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bInclusive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bInclusive_MetaData), Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bInclusive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseConstantThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseConstantThreshold_SetBit(void* Obj)
	{
		((FPCGPointFilterThresholdSettings*)Obj)->bUseConstantThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseConstantThreshold = { "bUseConstantThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGPointFilterThresholdSettings), &Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseConstantThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseConstantThreshold_MetaData), Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseConstantThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_ThresholdAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bUseConstantThreshold" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_ThresholdAttribute = { "ThresholdAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGPointFilterThresholdSettings, ThresholdAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_ThresholdAttribute_MetaData), Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_ThresholdAttribute_MetaData) }; // 1471452776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseSpatialQuery_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the threshold data is Point data, it will sample input points in threshold data. Always true with Spatial data.*/" },
		{ "EditCondition", "!bUseConstantThreshold" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If the threshold data is Point data, it will sample input points in threshold data. Always true with Spatial data." },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseSpatialQuery_SetBit(void* Obj)
	{
		((FPCGPointFilterThresholdSettings*)Obj)->bUseSpatialQuery = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseSpatialQuery = { "bUseSpatialQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGPointFilterThresholdSettings), &Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseSpatialQuery_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseSpatialQuery_MetaData), Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseSpatialQuery_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_AttributeTypes_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayAfter", "bUseConstantThreshold" },
		{ "EditCondition", "bUseConstantThreshold" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_AttributeTypes = { "AttributeTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGPointFilterThresholdSettings, AttributeTypes), Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_AttributeTypes_MetaData), Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_AttributeTypes_MetaData) }; // 1540524831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bInclusive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseConstantThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_ThresholdAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_bUseSpatialQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewProp_AttributeTypes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGPointFilterThresholdSettings",
		Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::PropPointers),
		sizeof(FPCGPointFilterThresholdSettings),
		alignof(FPCGPointFilterThresholdSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGPointFilterThresholdSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGPointFilterThresholdSettings.InnerSingleton, Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGPointFilterThresholdSettings.InnerSingleton;
	}
	void UPCGPointFilterSettings::StaticRegisterNativesUPCGPointFilterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPointFilterSettings);
	UClass* Z_Construct_UClass_UPCGPointFilterSettings_NoRegister()
	{
		return UPCGPointFilterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPointFilterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseConstantThreshold_MetaData[];
#endif
		static void NewProp_bUseConstantThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThresholdAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialQuery_MetaData[];
#endif
		static void NewProp_bUseSpatialQuery_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTypes;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetFilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetFilterType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPointProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetPointProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetAttributeName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdFilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdFilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdFilterType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdPointProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdPointProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdPointProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ThresholdAttributeName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdConstantType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdConstantType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdConstantType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer64Constant_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Integer64Constant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorConstant_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector4Constant_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector4Constant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringConstant_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringConstant;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPointFilterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Point filter that allows to do \"A op B\" type filtering, where A is the input spatial data,\n* and B is either a constant, another spatial data, a param data (in filter) or the input itself.\n* The filtering can be done either on properties or attributes.\n* Some examples:\n* - Threshold on property by constant (A.Density > 0.5)\n* - Threshold on attribute by constant (A.aaa != \"bob\")\n* - Threshold on property by metadata attribute(A.density >= B.bbb)\n* - Threshold on property by property(A.density <= B.steepness)\n* - Threshold on attribute by metadata attribute(A.aaa < B.bbb)\n* - Threshold on attribute by property(A.aaa == B.color)\n*/" },
		{ "IncludePath", "Elements/PCGPointFilter.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "ToolTip", "Point filter that allows to do \"A op B\" type filtering, where A is the input spatial data,\nand B is either a constant, another spatial data, a param data (in filter) or the input itself.\nThe filtering can be done either on properties or attributes.\nSome examples:\n- Threshold on property by constant (A.Density > 0.5)\n- Threshold on attribute by constant (A.aaa != \"bob\")\n- Threshold on property by metadata attribute(A.density >= B.bbb)\n- Threshold on property by property(A.density <= B.steepness)\n- Threshold on attribute by metadata attribute(A.aaa < B.bbb)\n- Threshold on attribute by property(A.aaa == B.color)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, Operator), Z_Construct_UEnum_PCG_EPCGPointFilterOperator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator_MetaData) }; // 3586237402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Target property/attribute related properties */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "ToolTip", "Target property/attribute related properties" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttribute = { "TargetAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, TargetAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttribute_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttribute_MetaData) }; // 1471452776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Threshold property/attribute/constant related properties */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Threshold property/attribute/constant related properties" },
	};
#endif
	void Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold_SetBit(void* Obj)
	{
		((UPCGPointFilterSettings*)Obj)->bUseConstantThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold = { "bUseConstantThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGPointFilterSettings), &Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bUseConstantThreshold" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttribute = { "ThresholdAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, ThresholdAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttribute_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttribute_MetaData) }; // 1471452776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the threshold data is Point data, it will sample input points in threshold data. Always true with Spatial data.*/" },
		{ "EditCondition", "!bUseConstantThreshold" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If the threshold data is Point data, it will sample input points in threshold data. Always true with Spatial data." },
	};
#endif
	void Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery_SetBit(void* Obj)
	{
		((UPCGPointFilterSettings*)Obj)->bUseSpatialQuery = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery = { "bUseSpatialQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGPointFilterSettings), &Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_AttributeTypes_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayAfter", "bUseConstantThreshold" },
		{ "EditCondition", "bUseConstantThreshold" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_AttributeTypes = { "AttributeTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, AttributeTypes), Z_Construct_UScriptStruct_FPCGMetadataTypesConstantStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_AttributeTypes_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_AttributeTypes_MetaData) }; // 1540524831
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType = { "TargetFilterType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, TargetFilterType_DEPRECATED), Z_Construct_UEnum_PCG_EPCGPointTargetFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType_MetaData) }; // 2582372566
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty = { "TargetPointProperty", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, TargetPointProperty_DEPRECATED), Z_Construct_UEnum_PCG_EPCGPointProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty_MetaData) }; // 256236466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttributeName = { "TargetAttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, TargetAttributeName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttributeName_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttributeName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType = { "ThresholdFilterType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, ThresholdFilterType_DEPRECATED), Z_Construct_UEnum_PCG_EPCGPointThresholdType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType_MetaData) }; // 1409023039
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty = { "ThresholdPointProperty", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, ThresholdPointProperty_DEPRECATED), Z_Construct_UEnum_PCG_EPCGPointProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty_MetaData) }; // 256236466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttributeName = { "ThresholdAttributeName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, ThresholdAttributeName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttributeName_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttributeName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType = { "ThresholdConstantType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, ThresholdConstantType_DEPRECATED), Z_Construct_UEnum_PCG_EPCGPointFilterConstantType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType_MetaData) }; // 35001899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Integer64Constant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Integer64Constant = { "Integer64Constant", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, Integer64Constant_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Integer64Constant_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Integer64Constant_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_FloatConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_FloatConstant = { "FloatConstant", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, FloatConstant_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_FloatConstant_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_FloatConstant_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_VectorConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_VectorConstant = { "VectorConstant", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, VectorConstant_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_VectorConstant_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_VectorConstant_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Vector4Constant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Vector4Constant = { "Vector4Constant", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, Vector4Constant_DEPRECATED), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Vector4Constant_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Vector4Constant_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_StringConstant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_StringConstant = { "StringConstant", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterSettings, StringConstant_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_StringConstant_MetaData), Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_StringConstant_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Operator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseConstantThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_bUseSpatialQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_AttributeTypes,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetFilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetPointProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_TargetAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdFilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdPointProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_ThresholdConstantType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Integer64Constant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_FloatConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_VectorConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_Vector4Constant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterSettings_Statics::NewProp_StringConstant,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPointFilterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointFilterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPointFilterSettings_Statics::ClassParams = {
		&UPCGPointFilterSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGPointFilterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGPointFilterSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGPointFilterSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGPointFilterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPointFilterSettings.OuterSingleton, Z_Construct_UClass_UPCGPointFilterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPointFilterSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPointFilterSettings>()
	{
		return UPCGPointFilterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPointFilterSettings);
	UPCGPointFilterSettings::~UPCGPointFilterSettings() {}
	void UPCGPointFilterRangeSettings::StaticRegisterNativesUPCGPointFilterRangeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGPointFilterRangeSettings);
	UClass* Z_Construct_UClass_UPCGPointFilterRangeSettings_NoRegister()
	{
		return UPCGPointFilterRangeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Point filter on range that allows to do \"A op B\" type filtering, where A is the input spatial data,\n* and B is either a constant, another spatial data, a param data (in filter) or the input itself.\n* The filtering can be done either on properties or attributes.\n* Some examples (that might not make sense, but are valid):\n* - Threshold on property by constant (A.Density in [0.2, 0.5])\n* - Threshold on attribute by constant (A.aaa in [0.4, 0.6])\n* - Threshold on property by metadata attribute(A.density in [B.bbmin, B.bbmax])\n* - Threshold on property by property(A.density in [B.position.x, B.steepness])\n* - Threshold on attribute by metadata attribute(A.aaa in [B.bbmin, B.bbmax])\n* - Threshold on attribute by property(A.aaa in [B.position, B.scale])\n*/" },
		{ "IncludePath", "Elements/PCGPointFilter.h" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "ToolTip", "Point filter on range that allows to do \"A op B\" type filtering, where A is the input spatial data,\nand B is either a constant, another spatial data, a param data (in filter) or the input itself.\nThe filtering can be done either on properties or attributes.\nSome examples (that might not make sense, but are valid):\n- Threshold on property by constant (A.Density in [0.2, 0.5])\n- Threshold on attribute by constant (A.aaa in [0.4, 0.6])\n- Threshold on property by metadata attribute(A.density in [B.bbmin, B.bbmax])\n- Threshold on property by property(A.density in [B.position.x, B.steepness])\n- Threshold on attribute by metadata attribute(A.aaa in [B.bbmin, B.bbmax])\n- Threshold on attribute by property(A.aaa in [B.position, B.scale])" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_TargetAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Target property/attribute related properties */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "ToolTip", "Target property/attribute related properties" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_TargetAttribute = { "TargetAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterRangeSettings, TargetAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_TargetAttribute_MetaData), Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_TargetAttribute_MetaData) }; // 1471452776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_MinThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Threshold property/attribute/constant related properties */" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Threshold property/attribute/constant related properties" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_MinThreshold = { "MinThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterRangeSettings, MinThreshold), Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_MinThreshold_MetaData), Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_MinThreshold_MetaData) }; // 1215542619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_MaxThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Elements/PCGPointFilter.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_MaxThreshold = { "MaxThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGPointFilterRangeSettings, MaxThreshold), Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_MaxThreshold_MetaData), Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_MaxThreshold_MetaData) }; // 1215542619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_TargetAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_MinThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::NewProp_MaxThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGPointFilterRangeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::ClassParams = {
		&UPCGPointFilterRangeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGPointFilterRangeSettings()
	{
		if (!Z_Registration_Info_UClass_UPCGPointFilterRangeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGPointFilterRangeSettings.OuterSingleton, Z_Construct_UClass_UPCGPointFilterRangeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGPointFilterRangeSettings.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGPointFilterRangeSettings>()
	{
		return UPCGPointFilterRangeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGPointFilterRangeSettings);
	UPCGPointFilterRangeSettings::~UPCGPointFilterRangeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::EnumInfo[] = {
		{ EPCGPointTargetFilterType_StaticEnum, TEXT("EPCGPointTargetFilterType"), &Z_Registration_Info_UEnum_EPCGPointTargetFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2582372566U) },
		{ EPCGPointThresholdType_StaticEnum, TEXT("EPCGPointThresholdType"), &Z_Registration_Info_UEnum_EPCGPointThresholdType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1409023039U) },
		{ EPCGPointFilterConstantType_StaticEnum, TEXT("EPCGPointFilterConstantType"), &Z_Registration_Info_UEnum_EPCGPointFilterConstantType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 35001899U) },
		{ EPCGPointFilterOperator_StaticEnum, TEXT("EPCGPointFilterOperator"), &Z_Registration_Info_UEnum_EPCGPointFilterOperator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3586237402U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::ScriptStructInfo[] = {
		{ FPCGPointFilterThresholdSettings::StaticStruct, Z_Construct_UScriptStruct_FPCGPointFilterThresholdSettings_Statics::NewStructOps, TEXT("PCGPointFilterThresholdSettings"), &Z_Registration_Info_UScriptStruct_PCGPointFilterThresholdSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGPointFilterThresholdSettings), 1215542619U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGPointFilterSettings, UPCGPointFilterSettings::StaticClass, TEXT("UPCGPointFilterSettings"), &Z_Registration_Info_UClass_UPCGPointFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointFilterSettings), 1357763285U) },
		{ Z_Construct_UClass_UPCGPointFilterRangeSettings, UPCGPointFilterRangeSettings::StaticClass, TEXT("UPCGPointFilterRangeSettings"), &Z_Registration_Info_UClass_UPCGPointFilterRangeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGPointFilterRangeSettings), 1722766485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_928052942(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGPointFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
