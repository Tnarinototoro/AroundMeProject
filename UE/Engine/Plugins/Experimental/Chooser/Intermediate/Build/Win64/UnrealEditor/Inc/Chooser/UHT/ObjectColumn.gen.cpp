// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/ObjectColumn.h"
#include "ChooserPropertyAccess.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectColumn() {}
// Cross Module References
	CHOOSER_API UEnum* Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserColumnBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserObjectPropertyBinding();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserObjectRowData();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterObjectBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FObjectColumn();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FObjectContextProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References

static_assert(std::is_polymorphic<FObjectContextProperty>() == std::is_polymorphic<FChooserParameterObjectBase>(), "USTRUCT FObjectContextProperty cannot be polymorphic unless super FChooserParameterObjectBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectContextProperty;
class UScriptStruct* FObjectContextProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectContextProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectContextProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectContextProperty, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ObjectContextProperty"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectContextProperty.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FObjectContextProperty>()
{
	return FObjectContextProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectContextProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectContextProperty_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Object Property Binding" },
		{ "ModuleRelativePath", "Internal/ObjectColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectContextProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectContextProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectContextProperty_Statics::NewProp_Binding_MetaData[] = {
		{ "BindingColor", "ObjectPinTypeColor" },
		{ "BindingType", "object" },
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Internal/ObjectColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectContextProperty_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectContextProperty, Binding), Z_Construct_UScriptStruct_FChooserObjectPropertyBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectContextProperty_Statics::NewProp_Binding_MetaData), Z_Construct_UScriptStruct_FObjectContextProperty_Statics::NewProp_Binding_MetaData) }; // 183169939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectContextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectContextProperty_Statics::NewProp_Binding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectContextProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterObjectBase,
		&NewStructOps,
		"ObjectContextProperty",
		Z_Construct_UScriptStruct_FObjectContextProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectContextProperty_Statics::PropPointers),
		sizeof(FObjectContextProperty),
		alignof(FObjectContextProperty),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectContextProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectContextProperty_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectContextProperty_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FObjectContextProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectContextProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectContextProperty.InnerSingleton, Z_Construct_UScriptStruct_FObjectContextProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectContextProperty.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectColumnCellValueComparison;
	static UEnum* EObjectColumnCellValueComparison_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EObjectColumnCellValueComparison.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EObjectColumnCellValueComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("EObjectColumnCellValueComparison"));
		}
		return Z_Registration_Info_UEnum_EObjectColumnCellValueComparison.OuterSingleton;
	}
	template<> CHOOSER_API UEnum* StaticEnum<EObjectColumnCellValueComparison>()
	{
		return EObjectColumnCellValueComparison_StaticEnum();
	}
	struct Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison_Statics::Enumerators[] = {
		{ "EObjectColumnCellValueComparison::MatchEqual", (int64)EObjectColumnCellValueComparison::MatchEqual },
		{ "EObjectColumnCellValueComparison::MatchNotEqual", (int64)EObjectColumnCellValueComparison::MatchNotEqual },
		{ "EObjectColumnCellValueComparison::MatchAny", (int64)EObjectColumnCellValueComparison::MatchAny },
		{ "EObjectColumnCellValueComparison::Modulus", (int64)EObjectColumnCellValueComparison::Modulus },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison_Statics::Enum_MetaDataParams[] = {
		{ "MatchAny.Name", "EObjectColumnCellValueComparison::MatchAny" },
		{ "MatchEqual.Name", "EObjectColumnCellValueComparison::MatchEqual" },
		{ "MatchNotEqual.Name", "EObjectColumnCellValueComparison::MatchNotEqual" },
		{ "ModuleRelativePath", "Internal/ObjectColumn.h" },
		{ "Modulus.Name", "EObjectColumnCellValueComparison::Modulus" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		"EObjectColumnCellValueComparison",
		"EObjectColumnCellValueComparison",
		Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison()
	{
		if (!Z_Registration_Info_UEnum_EObjectColumnCellValueComparison.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectColumnCellValueComparison.InnerSingleton, Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EObjectColumnCellValueComparison.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserObjectRowData;
class UScriptStruct* FChooserObjectRowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserObjectRowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserObjectRowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserObjectRowData, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserObjectRowData"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserObjectRowData.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserObjectRowData>()
{
	return FChooserObjectRowData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserObjectRowData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Comparison_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/ObjectColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserObjectRowData>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Comparison_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Internal/ObjectColumn.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChooserObjectRowData, Comparison), Z_Construct_UEnum_Chooser_EObjectColumnCellValueComparison, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Comparison_MetaData), Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Comparison_MetaData) }; // 1214038694
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Internal/ObjectColumn.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChooserObjectRowData, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Comparison_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Comparison,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ChooserObjectRowData",
		Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::PropPointers),
		sizeof(FChooserObjectRowData),
		alignof(FChooserObjectRowData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChooserObjectRowData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserObjectRowData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserObjectRowData.InnerSingleton, Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserObjectRowData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FObjectColumn>() == std::is_polymorphic<FChooserColumnBase>(), "USTRUCT FObjectColumn cannot be polymorphic unless super FChooserColumnBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectColumn;
class UScriptStruct* FObjectColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectColumn, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ObjectColumn"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectColumn.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FObjectColumn>()
{
	return FObjectColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputValue;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRowValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultRowValue;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectColumn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/ObjectColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectColumn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_InputValue_MetaData[] = {
		{ "BaseStruct", "/Script/Chooser.ChooserParameterObjectBase" },
		{ "Category", "Data" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Internal/ObjectColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000002000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectColumn, InputValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_InputValue_MetaData), Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_InputValue_MetaData) }; // 2114042832
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_DefaultRowValue_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Internal/ObjectColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_DefaultRowValue = { "DefaultRowValue", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectColumn, DefaultRowValue), Z_Construct_UScriptStruct_FChooserObjectRowData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_DefaultRowValue_MetaData), Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_DefaultRowValue_MetaData) }; // 2718419591
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_RowValues_Inner = { "RowValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChooserObjectRowData, METADATA_PARAMS(0, nullptr) }; // 2718419591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_RowValues_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// array of results (cells for this column for each row in the table)\n// should match the length of the Results array\n" },
		{ "ModuleRelativePath", "Internal/ObjectColumn.h" },
		{ "ToolTip", "array of results (cells for this column for each row in the table)\nshould match the length of the Results array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_RowValues = { "RowValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectColumn, RowValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_RowValues_MetaData), Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_RowValues_MetaData) }; // 2718419591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectColumn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_InputValue,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_DefaultRowValue,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_RowValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectColumn_Statics::NewProp_RowValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserColumnBase,
		&NewStructOps,
		"ObjectColumn",
		Z_Construct_UScriptStruct_FObjectColumn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectColumn_Statics::PropPointers),
		sizeof(FObjectColumn),
		alignof(FObjectColumn),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectColumn_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectColumn_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FObjectColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectColumn.InnerSingleton, Z_Construct_UScriptStruct_FObjectColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectColumn.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h_Statics::EnumInfo[] = {
		{ EObjectColumnCellValueComparison_StaticEnum, TEXT("EObjectColumnCellValueComparison"), &Z_Registration_Info_UEnum_EObjectColumnCellValueComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1214038694U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h_Statics::ScriptStructInfo[] = {
		{ FObjectContextProperty::StaticStruct, Z_Construct_UScriptStruct_FObjectContextProperty_Statics::NewStructOps, TEXT("ObjectContextProperty"), &Z_Registration_Info_UScriptStruct_ObjectContextProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectContextProperty), 1690493746U) },
		{ FChooserObjectRowData::StaticStruct, Z_Construct_UScriptStruct_FChooserObjectRowData_Statics::NewStructOps, TEXT("ChooserObjectRowData"), &Z_Registration_Info_UScriptStruct_ChooserObjectRowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserObjectRowData), 2718419591U) },
		{ FObjectColumn::StaticStruct, Z_Construct_UScriptStruct_FObjectColumn_Statics::NewStructOps, TEXT("ObjectColumn"), &Z_Registration_Info_UScriptStruct_ObjectColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectColumn), 316318309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h_226774629(TEXT("/Script/Chooser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_ObjectColumn_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
