// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGAttributePropertySelector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers();
	PCG_API UClass* Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGData_NoRegister();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttributePropertySelection();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGExtraProperties();
	PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGPointProperties();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGAttributePropertySelection;
	static UEnum* EPCGAttributePropertySelection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributePropertySelection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGAttributePropertySelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGAttributePropertySelection, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGAttributePropertySelection"));
		}
		return Z_Registration_Info_UEnum_EPCGAttributePropertySelection.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGAttributePropertySelection>()
	{
		return EPCGAttributePropertySelection_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enumerators[] = {
		{ "EPCGAttributePropertySelection::Attribute", (int64)EPCGAttributePropertySelection::Attribute },
		{ "EPCGAttributePropertySelection::PointProperty", (int64)EPCGAttributePropertySelection::PointProperty },
		{ "EPCGAttributePropertySelection::ExtraProperty", (int64)EPCGAttributePropertySelection::ExtraProperty },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enum_MetaDataParams[] = {
		{ "Attribute.Name", "EPCGAttributePropertySelection::Attribute" },
		{ "ExtraProperty.Name", "EPCGAttributePropertySelection::ExtraProperty" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "PointProperty.Name", "EPCGAttributePropertySelection::PointProperty" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGAttributePropertySelection",
		"EPCGAttributePropertySelection",
		Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGAttributePropertySelection()
	{
		if (!Z_Registration_Info_UEnum_EPCGAttributePropertySelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGAttributePropertySelection.InnerSingleton, Z_Construct_UEnum_PCG_EPCGAttributePropertySelection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGAttributePropertySelection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExtraProperties;
	static UEnum* EPCGExtraProperties_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGExtraProperties.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGExtraProperties.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_EPCGExtraProperties, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("EPCGExtraProperties"));
		}
		return Z_Registration_Info_UEnum_EPCGExtraProperties.OuterSingleton;
	}
	template<> PCG_API UEnum* StaticEnum<EPCGExtraProperties>()
	{
		return EPCGExtraProperties_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_EPCGExtraProperties_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_EPCGExtraProperties_Statics::Enumerators[] = {
		{ "EPCGExtraProperties::Index", (int64)EPCGExtraProperties::Index },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_EPCGExtraProperties_Statics::Enum_MetaDataParams[] = {
		{ "Index.Name", "EPCGExtraProperties::Index" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_EPCGExtraProperties_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		"EPCGExtraProperties",
		"EPCGExtraProperties",
		Z_Construct_UEnum_PCG_EPCGExtraProperties_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGExtraProperties_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_EPCGExtraProperties_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_EPCGExtraProperties_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PCG_EPCGExtraProperties()
	{
		if (!Z_Registration_Info_UEnum_EPCGExtraProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExtraProperties.InnerSingleton, Z_Construct_UEnum_PCG_EPCGExtraProperties_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGExtraProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector;
class UScriptStruct* FPCGAttributePropertySelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertySelector, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGAttributePropertySelector"));
	}
	return Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGAttributePropertySelector>()
{
	return FPCGAttributePropertySelector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Selection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Selection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PointProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PointProperty;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExtraProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExtraProperty;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Blueprint class to allow to select an attribute or a property.\n* It will handle the logic and can only be modified using the blueprint library defined below.\n* Also has a custom detail view in the PCGEditor plugin.\n* \n* Note: This class should not be used as is, but need to be referenced by either an \"InputSelector\" or an \"OutputSelector\" (defined below).\n* The reason for that is to provide 2 different default values for input and output. Input will have the \"@Last\" default value (meaning last attribute written to)\n* and the Output will have \"@Source\" default value (meaning, same thing as input).\n*/" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ToolTip", "Blueprint class to allow to select an attribute or a property.\nIt will handle the logic and can only be modified using the blueprint library defined below.\nAlso has a custom detail view in the PCGEditor plugin.\n\nNote: This class should not be used as is, but need to be referenced by either an \"InputSelector\" or an \"OutputSelector\" (defined below).\nThe reason for that is to provide 2 different default values for input and output. Input will have the \"@Last\" default value (meaning last attribute written to)\nand the Output will have \"@Source\" default value (meaning, same thing as input)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGAttributePropertySelector>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGAttributePropertySelector, Selection), Z_Construct_UEnum_PCG_EPCGAttributePropertySelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection_MetaData), Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection_MetaData) }; // 408623972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_AttributeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGAttributePropertySelector, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_AttributeName_MetaData), Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_AttributeName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty = { "PointProperty", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGAttributePropertySelector, PointProperty), Z_Construct_UEnum_PCG_EPCGPointProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty_MetaData), Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty_MetaData) }; // 256236466
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraProperty = { "ExtraProperty", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGAttributePropertySelector, ExtraProperty), Z_Construct_UEnum_PCG_EPCGExtraProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraProperty_MetaData), Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraProperty_MetaData) }; // 939021614
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames_Inner = { "ExtraNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames = { "ExtraNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGAttributePropertySelector, ExtraNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames_MetaData), Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_PointProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewProp_ExtraNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGAttributePropertySelector",
		Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::PropPointers),
		sizeof(FPCGAttributePropertySelector),
		alignof(FPCGAttributePropertySelector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertySelector()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.InnerSingleton, Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPCGAttributePropertyInputSelector>() == std::is_polymorphic<FPCGAttributePropertySelector>(), "USTRUCT FPCGAttributePropertyInputSelector cannot be polymorphic unless super FPCGAttributePropertySelector is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGAttributePropertyInputSelector;
class UScriptStruct* FPCGAttributePropertyInputSelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGAttributePropertyInputSelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGAttributePropertyInputSelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGAttributePropertyInputSelector"));
	}
	return Z_Registration_Info_UScriptStruct_PCGAttributePropertyInputSelector.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGAttributePropertyInputSelector>()
{
	return FPCGAttributePropertyInputSelector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct that will default on @Last (or @LastCreated for previously created selectors). */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ToolTip", "Struct that will default on @Last (or @LastCreated for previously created selectors)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGAttributePropertyInputSelector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		Z_Construct_UScriptStruct_FPCGAttributePropertySelector,
		&NewStructOps,
		"PCGAttributePropertyInputSelector",
		nullptr,
		0,
		sizeof(FPCGAttributePropertyInputSelector),
		alignof(FPCGAttributePropertyInputSelector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGAttributePropertyInputSelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGAttributePropertyInputSelector.InnerSingleton, Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGAttributePropertyInputSelector.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPCGAttributePropertyOutputSelector>() == std::is_polymorphic<FPCGAttributePropertySelector>(), "USTRUCT FPCGAttributePropertyOutputSelector cannot be polymorphic unless super FPCGAttributePropertySelector is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputSelector;
class UScriptStruct* FPCGAttributePropertyOutputSelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputSelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputSelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGAttributePropertyOutputSelector"));
	}
	return Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputSelector.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGAttributePropertyOutputSelector>()
{
	return FPCGAttributePropertyOutputSelector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct that will default on @Source. */" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ToolTip", "Struct that will default on @Source." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGAttributePropertyOutputSelector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		Z_Construct_UScriptStruct_FPCGAttributePropertySelector,
		&NewStructOps,
		"PCGAttributePropertyOutputSelector",
		nullptr,
		0,
		sizeof(FPCGAttributePropertyOutputSelector),
		alignof(FPCGAttributePropertyOutputSelector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputSelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputSelector.InnerSingleton, Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputSelector.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPCGAttributePropertyOutputNoSourceSelector>() == std::is_polymorphic<FPCGAttributePropertySelector>(), "USTRUCT FPCGAttributePropertyOutputNoSourceSelector cannot be polymorphic unless super FPCGAttributePropertySelector is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputNoSourceSelector;
class UScriptStruct* FPCGAttributePropertyOutputNoSourceSelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputNoSourceSelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputNoSourceSelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGAttributePropertyOutputNoSourceSelector"));
	}
	return Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputNoSourceSelector.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGAttributePropertyOutputNoSourceSelector>()
{
	return FPCGAttributePropertyOutputNoSourceSelector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Version where it doesn't make sense to have @Source, alias for FPCGAttributePropertySelector\n" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ToolTip", "Version where it doesn't make sense to have @Source, alias for FPCGAttributePropertySelector" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGAttributePropertyOutputNoSourceSelector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		Z_Construct_UScriptStruct_FPCGAttributePropertySelector,
		&NewStructOps,
		"PCGAttributePropertyOutputNoSourceSelector",
		nullptr,
		0,
		sizeof(FPCGAttributePropertyOutputNoSourceSelector),
		alignof(FPCGAttributePropertyOutputNoSourceSelector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputNoSourceSelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputNoSourceSelector.InnerSingleton, Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputNoSourceSelector.InnerSingleton;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execCopyAndFixSource)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertyOutputSelector,Z_Param_Out_Selector);
		P_GET_STRUCT_REF(FPCGAttributePropertyInputSelector,Z_Param_Out_InSelector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPCGAttributePropertyOutputSelector*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::CopyAndFixSource(Z_Param_Out_Selector,Z_Param_Out_InSelector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execCopyAndFixLast)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertyInputSelector,Z_Param_Out_Selector);
		P_GET_OBJECT(UPCGData,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPCGAttributePropertyInputSelector*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::CopyAndFixLast(Z_Param_Out_Selector,Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execGetName)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::GetName(Z_Param_Out_Selector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execGetExtraNames)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::GetExtraNames(Z_Param_Out_Selector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execGetExtraProperty)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPCGExtraProperties*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::GetExtraProperty(Z_Param_Out_Selector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execGetAttributeName)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::GetAttributeName(Z_Param_Out_Selector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execGetPointProperty)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPCGPointProperties*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::GetPointProperty(Z_Param_Out_Selector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execGetSelection)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPCGAttributePropertySelection*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::GetSelection(Z_Param_Out_Selector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execSetExtraProperty)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_GET_ENUM(EPCGExtraProperties,Z_Param_InExtraProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::SetExtraProperty(Z_Param_Out_Selector,EPCGExtraProperties(Z_Param_InExtraProperty));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execSetAttributeName)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_GET_PROPERTY(FNameProperty,Z_Param_InAttributeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::SetAttributeName(Z_Param_Out_Selector,Z_Param_InAttributeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGAttributePropertySelectorBlueprintHelpers::execSetPointProperty)
	{
		P_GET_STRUCT_REF(FPCGAttributePropertySelector,Z_Param_Out_Selector);
		P_GET_ENUM(EPCGPointProperties,Z_Param_InPointProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPCGAttributePropertySelectorBlueprintHelpers::SetPointProperty(Z_Param_Out_Selector,EPCGPointProperties(Z_Param_InPointProperty));
		P_NATIVE_END;
	}
	void UPCGAttributePropertySelectorBlueprintHelpers::StaticRegisterNativesUPCGAttributePropertySelectorBlueprintHelpers()
	{
		UClass* Class = UPCGAttributePropertySelectorBlueprintHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyAndFixLast", &UPCGAttributePropertySelectorBlueprintHelpers::execCopyAndFixLast },
			{ "CopyAndFixSource", &UPCGAttributePropertySelectorBlueprintHelpers::execCopyAndFixSource },
			{ "GetAttributeName", &UPCGAttributePropertySelectorBlueprintHelpers::execGetAttributeName },
			{ "GetExtraNames", &UPCGAttributePropertySelectorBlueprintHelpers::execGetExtraNames },
			{ "GetExtraProperty", &UPCGAttributePropertySelectorBlueprintHelpers::execGetExtraProperty },
			{ "GetName", &UPCGAttributePropertySelectorBlueprintHelpers::execGetName },
			{ "GetPointProperty", &UPCGAttributePropertySelectorBlueprintHelpers::execGetPointProperty },
			{ "GetSelection", &UPCGAttributePropertySelectorBlueprintHelpers::execGetSelection },
			{ "SetAttributeName", &UPCGAttributePropertySelectorBlueprintHelpers::execSetAttributeName },
			{ "SetExtraProperty", &UPCGAttributePropertySelectorBlueprintHelpers::execSetExtraProperty },
			{ "SetPointProperty", &UPCGAttributePropertySelectorBlueprintHelpers::execSetPointProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixLast_Parms
		{
			FPCGAttributePropertyInputSelector Selector;
			const UPCGData* InData;
			FPCGAttributePropertyInputSelector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_Selector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixLast_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_Selector_MetaData), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_Selector_MetaData) }; // 1471452776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_InData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixLast_Parms, InData), Z_Construct_UClass_UPCGData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_InData_MetaData), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_InData_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixLast_Parms, ReturnValue), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(0, nullptr) }; // 1471452776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_InData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "CopyAndFixLast", nullptr, nullptr, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixLast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixLast_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixSource_Parms
		{
			FPCGAttributePropertyOutputSelector Selector;
			FPCGAttributePropertyInputSelector InSelector;
			FPCGAttributePropertyOutputSelector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_Selector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixSource_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_Selector_MetaData), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_Selector_MetaData) }; // 1603590971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_InSelector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_InSelector = { "InSelector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixSource_Parms, InSelector), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_InSelector_MetaData), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_InSelector_MetaData) }; // 1471452776
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixSource_Parms, ReturnValue), Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector, METADATA_PARAMS(0, nullptr) }; // 1603590971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_InSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "CopyAndFixSource", nullptr, nullptr, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventCopyAndFixSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventGetAttributeName_Parms
		{
			FPCGAttributePropertySelector Selector;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::NewProp_Selector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetAttributeName_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::NewProp_Selector_MetaData), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::NewProp_Selector_MetaData) }; // 947291877
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetAttributeName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "GetAttributeName", nullptr, nullptr, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetAttributeName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetAttributeName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventGetExtraNames_Parms
		{
			FPCGAttributePropertySelector Selector;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_Selector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetExtraNames_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_Selector_MetaData), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_Selector_MetaData) }; // 947291877
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetExtraNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "GetExtraNames", nullptr, nullptr, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetExtraNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetExtraNames_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventGetExtraProperty_Parms
		{
			FPCGAttributePropertySelector Selector;
			EPCGExtraProperties ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::NewProp_Selector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetExtraProperty_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::NewProp_Selector_MetaData), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::NewProp_Selector_MetaData) }; // 947291877
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetExtraProperty_Parms, ReturnValue), Z_Construct_UEnum_PCG_EPCGExtraProperties, METADATA_PARAMS(0, nullptr) }; // 939021614
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "GetExtraProperty", nullptr, nullptr, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetExtraProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetExtraProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventGetName_Parms
		{
			FPCGAttributePropertySelector Selector;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_Selector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetName_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_Selector_MetaData), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_Selector_MetaData) }; // 947291877
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventGetPointProperty_Parms
		{
			FPCGAttributePropertySelector Selector;
			EPCGPointProperties ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::NewProp_Selector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetPointProperty_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::NewProp_Selector_MetaData), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::NewProp_Selector_MetaData) }; // 947291877
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetPointProperty_Parms, ReturnValue), Z_Construct_UEnum_PCG_EPCGPointProperties, METADATA_PARAMS(0, nullptr) }; // 256236466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "GetPointProperty", nullptr, nullptr, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetPointProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetPointProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventGetSelection_Parms
		{
			FPCGAttributePropertySelector Selector;
			EPCGAttributePropertySelection ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::NewProp_Selector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetSelection_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::NewProp_Selector_MetaData), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::NewProp_Selector_MetaData) }; // 947291877
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventGetSelection_Parms, ReturnValue), Z_Construct_UEnum_PCG_EPCGAttributePropertySelection, METADATA_PARAMS(0, nullptr) }; // 408623972
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "GetSelection", nullptr, nullptr, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventGetSelection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms
		{
			FPCGAttributePropertySelector Selector;
			FName InAttributeName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InAttributeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(0, nullptr) }; // 947291877
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_InAttributeName = { "InAttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms, InAttributeName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms), &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_InAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "SetAttributeName", nullptr, nullptr, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventSetAttributeName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventSetExtraProperty_Parms
		{
			FPCGAttributePropertySelector Selector;
			EPCGExtraProperties InExtraProperty;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InExtraProperty_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InExtraProperty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventSetExtraProperty_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(0, nullptr) }; // 947291877
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::NewProp_InExtraProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::NewProp_InExtraProperty = { "InExtraProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventSetExtraProperty_Parms, InExtraProperty), Z_Construct_UEnum_PCG_EPCGExtraProperties, METADATA_PARAMS(0, nullptr) }; // 939021614
	void Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGAttributePropertySelectorBlueprintHelpers_eventSetExtraProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGAttributePropertySelectorBlueprintHelpers_eventSetExtraProperty_Parms), &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::NewProp_InExtraProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::NewProp_InExtraProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "SetExtraProperty", nullptr, nullptr, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventSetExtraProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventSetExtraProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics
	{
		struct PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms
		{
			FPCGAttributePropertySelector Selector;
			EPCGPointProperties InPointProperty;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPointProperty_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPointProperty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms, Selector), Z_Construct_UScriptStruct_FPCGAttributePropertySelector, METADATA_PARAMS(0, nullptr) }; // 947291877
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_InPointProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_InPointProperty = { "InPointProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms, InPointProperty), Z_Construct_UEnum_PCG_EPCGPointProperties, METADATA_PARAMS(0, nullptr) }; // 256236466
	void Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms), &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_Selector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_InPointProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_InPointProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "PCG|PCGAttributePropertySelector" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, nullptr, "SetPointProperty", nullptr, nullptr, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::PCGAttributePropertySelectorBlueprintHelpers_eventSetPointProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGAttributePropertySelectorBlueprintHelpers);
	UClass* Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_NoRegister()
	{
		return UPCGAttributePropertySelectorBlueprintHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixLast, "CopyAndFixLast" }, // 2634253023
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_CopyAndFixSource, "CopyAndFixSource" }, // 3886002328
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetAttributeName, "GetAttributeName" }, // 3853710474
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraNames, "GetExtraNames" }, // 1287715941
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetExtraProperty, "GetExtraProperty" }, // 340027128
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetName, "GetName" }, // 1195678657
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetPointProperty, "GetPointProperty" }, // 859207044
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_GetSelection, "GetSelection" }, // 365825238
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName, "SetAttributeName" }, // 493683535
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetExtraProperty, "SetExtraProperty" }, // 1383762550
		{ &Z_Construct_UFunction_UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty, "SetPointProperty" }, // 1080793675
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Helper class to allow the BP to call the custom setters and getters on FPCGAttributePropertySelector.\n*/" },
		{ "IncludePath", "Metadata/PCGAttributePropertySelector.h" },
		{ "ModuleRelativePath", "Public/Metadata/PCGAttributePropertySelector.h" },
		{ "ToolTip", "Helper class to allow the BP to call the custom setters and getters on FPCGAttributePropertySelector." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGAttributePropertySelectorBlueprintHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::ClassParams = {
		&UPCGAttributePropertySelectorBlueprintHelpers::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers()
	{
		if (!Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.OuterSingleton, Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGAttributePropertySelectorBlueprintHelpers>()
	{
		return UPCGAttributePropertySelectorBlueprintHelpers::StaticClass();
	}
	UPCGAttributePropertySelectorBlueprintHelpers::UPCGAttributePropertySelectorBlueprintHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGAttributePropertySelectorBlueprintHelpers);
	UPCGAttributePropertySelectorBlueprintHelpers::~UPCGAttributePropertySelectorBlueprintHelpers() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::EnumInfo[] = {
		{ EPCGAttributePropertySelection_StaticEnum, TEXT("EPCGAttributePropertySelection"), &Z_Registration_Info_UEnum_EPCGAttributePropertySelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 408623972U) },
		{ EPCGExtraProperties_StaticEnum, TEXT("EPCGExtraProperties"), &Z_Registration_Info_UEnum_EPCGExtraProperties, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 939021614U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ScriptStructInfo[] = {
		{ FPCGAttributePropertySelector::StaticStruct, Z_Construct_UScriptStruct_FPCGAttributePropertySelector_Statics::NewStructOps, TEXT("PCGAttributePropertySelector"), &Z_Registration_Info_UScriptStruct_PCGAttributePropertySelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGAttributePropertySelector), 947291877U) },
		{ FPCGAttributePropertyInputSelector::StaticStruct, Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector_Statics::NewStructOps, TEXT("PCGAttributePropertyInputSelector"), &Z_Registration_Info_UScriptStruct_PCGAttributePropertyInputSelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGAttributePropertyInputSelector), 1471452776U) },
		{ FPCGAttributePropertyOutputSelector::StaticStruct, Z_Construct_UScriptStruct_FPCGAttributePropertyOutputSelector_Statics::NewStructOps, TEXT("PCGAttributePropertyOutputSelector"), &Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputSelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGAttributePropertyOutputSelector), 1603590971U) },
		{ FPCGAttributePropertyOutputNoSourceSelector::StaticStruct, Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector_Statics::NewStructOps, TEXT("PCGAttributePropertyOutputNoSourceSelector"), &Z_Registration_Info_UScriptStruct_PCGAttributePropertyOutputNoSourceSelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGAttributePropertyOutputNoSourceSelector), 2827493386U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGAttributePropertySelectorBlueprintHelpers, UPCGAttributePropertySelectorBlueprintHelpers::StaticClass, TEXT("UPCGAttributePropertySelectorBlueprintHelpers"), &Z_Registration_Info_UClass_UPCGAttributePropertySelectorBlueprintHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGAttributePropertySelectorBlueprintHelpers), 523606322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_1664452333(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Metadata_PCGAttributePropertySelector_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
