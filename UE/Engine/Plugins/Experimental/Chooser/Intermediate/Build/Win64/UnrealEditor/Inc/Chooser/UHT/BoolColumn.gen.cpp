// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/BoolColumn.h"
#include "ChooserPropertyAccess.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoolColumn() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserColumn_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterBool_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnBool();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_NoRegister();
	CHOOSER_API UEnum* Z_Construct_UEnum_Chooser_EBoolColumnCellValue();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FBoolColumn();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FBoolContextProperty();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserColumnBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBoolBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserPropertyBinding();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoolColumnCellValue;
	static UEnum* EBoolColumnCellValue_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoolColumnCellValue.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoolColumnCellValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chooser_EBoolColumnCellValue, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("EBoolColumnCellValue"));
		}
		return Z_Registration_Info_UEnum_EBoolColumnCellValue.OuterSingleton;
	}
	template<> CHOOSER_API UEnum* StaticEnum<EBoolColumnCellValue>()
	{
		return EBoolColumnCellValue_StaticEnum();
	}
	struct Z_Construct_UEnum_Chooser_EBoolColumnCellValue_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chooser_EBoolColumnCellValue_Statics::Enumerators[] = {
		{ "EBoolColumnCellValue::MatchFalse", (int64)EBoolColumnCellValue::MatchFalse },
		{ "EBoolColumnCellValue::MatchTrue", (int64)EBoolColumnCellValue::MatchTrue },
		{ "EBoolColumnCellValue::MatchAny", (int64)EBoolColumnCellValue::MatchAny },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chooser_EBoolColumnCellValue_Statics::Enum_MetaDataParams[] = {
		{ "MatchAny.Name", "EBoolColumnCellValue::MatchAny" },
		{ "MatchFalse.Name", "EBoolColumnCellValue::MatchFalse" },
		{ "MatchTrue.Name", "EBoolColumnCellValue::MatchTrue" },
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chooser_EBoolColumnCellValue_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		"EBoolColumnCellValue",
		"EBoolColumnCellValue",
		Z_Construct_UEnum_Chooser_EBoolColumnCellValue_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chooser_EBoolColumnCellValue_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chooser_EBoolColumnCellValue_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chooser_EBoolColumnCellValue_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Chooser_EBoolColumnCellValue()
	{
		if (!Z_Registration_Info_UEnum_EBoolColumnCellValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoolColumnCellValue.InnerSingleton, Z_Construct_UEnum_Chooser_EBoolColumnCellValue_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoolColumnCellValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBoolContextProperty>() == std::is_polymorphic<FChooserParameterBoolBase>(), "USTRUCT FBoolContextProperty cannot be polymorphic unless super FChooserParameterBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoolContextProperty;
class UScriptStruct* FBoolContextProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoolContextProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoolContextProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolContextProperty, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("BoolContextProperty"));
	}
	return Z_Registration_Info_UScriptStruct_BoolContextProperty.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FBoolContextProperty>()
{
	return FBoolContextProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoolContextProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyBindingChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindingChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyBindingChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolContextProperty_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Bool Property Binding" },
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolContextProperty>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_PropertyBindingChain_Inner = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_PropertyBindingChain_MetaData[] = {
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_PropertyBindingChain = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoolContextProperty, PropertyBindingChain_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_PropertyBindingChain_MetaData), Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_PropertyBindingChain_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_Binding_MetaData[] = {
		{ "BindingAllowFunctions", "true" },
		{ "BindingColor", "BooleanPinTypeColor" },
		{ "BindingType", "bool" },
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoolContextProperty, Binding), Z_Construct_UScriptStruct_FChooserPropertyBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_Binding_MetaData), Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_Binding_MetaData) }; // 3662209599
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoolContextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_PropertyBindingChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_PropertyBindingChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewProp_Binding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolContextProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterBoolBase,
		&NewStructOps,
		"BoolContextProperty",
		Z_Construct_UScriptStruct_FBoolContextProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolContextProperty_Statics::PropPointers),
		sizeof(FBoolContextProperty),
		alignof(FBoolContextProperty),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolContextProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoolContextProperty_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolContextProperty_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBoolContextProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_BoolContextProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoolContextProperty.InnerSingleton, Z_Construct_UScriptStruct_FBoolContextProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoolContextProperty.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBoolColumn>() == std::is_polymorphic<FChooserColumnBase>(), "USTRUCT FBoolColumn cannot be polymorphic unless super FChooserColumnBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoolColumn;
class UScriptStruct* FBoolColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoolColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoolColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolColumn, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("BoolColumn"));
	}
	return Z_Registration_Info_UScriptStruct_BoolColumn.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FBoolColumn>()
{
	return FBoolColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoolColumn_Statics
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
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RowValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowValues;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultRowValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRowValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultRowValue;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FIntPropertyParams NewProp_RowValuesWithAny_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RowValuesWithAny_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowValuesWithAny_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowValuesWithAny;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolColumn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoolColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolColumn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_InputValue_MetaData[] = {
		{ "BaseStruct", "/Script/Chooser.ChooserParameterBoolBase" },
		{ "Category", "Data" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000002000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoolColumn, InputValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_InputValue_MetaData), Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_InputValue_MetaData) }; // 2114042832
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValues_Inner = { "RowValues", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValues_MetaData[] = {
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValues = { "RowValues", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoolColumn, RowValues_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValues_MetaData), Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValues_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_DefaultRowValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_DefaultRowValue_MetaData[] = {
		{ "Category", "Data" },
		{ "DisplayName", "DefaultRowValue" },
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_DefaultRowValue = { "DefaultRowValue", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoolColumn, DefaultRowValue), Z_Construct_UEnum_Chooser_EBoolColumnCellValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_DefaultRowValue_MetaData), Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_DefaultRowValue_MetaData) }; // 677447429
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValuesWithAny_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValuesWithAny_Inner = { "RowValuesWithAny", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Chooser_EBoolColumnCellValue, METADATA_PARAMS(0, nullptr) }; // 677447429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValuesWithAny_MetaData[] = {
		{ "Category", "Data" },
		{ "DisplayName", "RowValues" },
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValuesWithAny = { "RowValuesWithAny", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoolColumn, RowValuesWithAny), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValuesWithAny_MetaData), Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValuesWithAny_MetaData) }; // 677447429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoolColumn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_InputValue,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_DefaultRowValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_DefaultRowValue,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValuesWithAny_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValuesWithAny_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolColumn_Statics::NewProp_RowValuesWithAny,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserColumnBase,
		&NewStructOps,
		"BoolColumn",
		Z_Construct_UScriptStruct_FBoolColumn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolColumn_Statics::PropPointers),
		sizeof(FBoolColumn),
		alignof(FBoolColumn),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoolColumn_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolColumn_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBoolColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_BoolColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoolColumn.InnerSingleton, Z_Construct_UScriptStruct_FBoolColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoolColumn.InnerSingleton;
	}
	void UDEPRECATED_ChooserParameterBool_ContextProperty::StaticRegisterNativesUDEPRECATED_ChooserParameterBool_ContextProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ChooserParameterBool_ContextProperty);
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_NoRegister()
	{
		return UDEPRECATED_ChooserParameterBool_ContextProperty::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyBindingChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindingChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyBindingChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "// deprecated class versions for converting old data\n" },
		{ "IncludePath", "BoolColumn.h" },
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
		{ "ToolTip", "deprecated class versions for converting old data" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::NewProp_PropertyBindingChain_Inner = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::NewProp_PropertyBindingChain_MetaData[] = {
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::NewProp_PropertyBindingChain = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_ChooserParameterBool_ContextProperty, PropertyBindingChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::NewProp_PropertyBindingChain_MetaData), Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::NewProp_PropertyBindingChain_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::NewProp_PropertyBindingChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::NewProp_PropertyBindingChain,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChooserParameterBool_NoRegister, (int32)VTABLE_OFFSET(UDEPRECATED_ChooserParameterBool_ContextProperty, IChooserParameterBool), false },  // 3489182152
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ChooserParameterBool_ContextProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::ClassParams = {
		&UDEPRECATED_ChooserParameterBool_ContextProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x021002A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UDEPRECATED_ChooserParameterBool_ContextProperty>()
	{
		return UDEPRECATED_ChooserParameterBool_ContextProperty::StaticClass();
	}
	UDEPRECATED_ChooserParameterBool_ContextProperty::UDEPRECATED_ChooserParameterBool_ContextProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ChooserParameterBool_ContextProperty);
	UDEPRECATED_ChooserParameterBool_ContextProperty::~UDEPRECATED_ChooserParameterBool_ContextProperty() {}
	void UDEPRECATED_ChooserColumnBool::StaticRegisterNativesUDEPRECATED_ChooserColumnBool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ChooserColumnBool);
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_NoRegister()
	{
		return UDEPRECATED_ChooserColumnBool::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RowValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "IncludePath", "BoolColumn.h" },
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_InputValue_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_ChooserColumnBool, InputValue), Z_Construct_UClass_UChooserParameterBool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_InputValue_MetaData), Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_InputValue_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_RowValues_Inner = { "RowValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_RowValues_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// array of results (cells for this column for each row in the table)\n// should match the length of the Results array \n" },
		{ "ModuleRelativePath", "Internal/BoolColumn.h" },
		{ "ToolTip", "array of results (cells for this column for each row in the table)\nshould match the length of the Results array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_RowValues = { "RowValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_ChooserColumnBool, RowValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_RowValues_MetaData), Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_RowValues_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_InputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_RowValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::NewProp_RowValues,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChooserColumn_NoRegister, (int32)VTABLE_OFFSET(UDEPRECATED_ChooserColumnBool, IChooserColumn), false },  // 928999322
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ChooserColumnBool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::ClassParams = {
		&UDEPRECATED_ChooserColumnBool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x021002A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnBool()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnBool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnBool.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ChooserColumnBool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnBool.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UDEPRECATED_ChooserColumnBool>()
	{
		return UDEPRECATED_ChooserColumnBool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ChooserColumnBool);
	UDEPRECATED_ChooserColumnBool::~UDEPRECATED_ChooserColumnBool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_BoolColumn_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_BoolColumn_h_Statics::EnumInfo[] = {
		{ EBoolColumnCellValue_StaticEnum, TEXT("EBoolColumnCellValue"), &Z_Registration_Info_UEnum_EBoolColumnCellValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 677447429U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_BoolColumn_h_Statics::ScriptStructInfo[] = {
		{ FBoolContextProperty::StaticStruct, Z_Construct_UScriptStruct_FBoolContextProperty_Statics::NewStructOps, TEXT("BoolContextProperty"), &Z_Registration_Info_UScriptStruct_BoolContextProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoolContextProperty), 3587445127U) },
		{ FBoolColumn::StaticStruct, Z_Construct_UScriptStruct_FBoolColumn_Statics::NewStructOps, TEXT("BoolColumn"), &Z_Registration_Info_UScriptStruct_BoolColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoolColumn), 973182649U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_BoolColumn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty, UDEPRECATED_ChooserParameterBool_ContextProperty::StaticClass, TEXT("UDEPRECATED_ChooserParameterBool_ContextProperty"), &Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterBool_ContextProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ChooserParameterBool_ContextProperty), 17142740U) },
		{ Z_Construct_UClass_UDEPRECATED_ChooserColumnBool, UDEPRECATED_ChooserColumnBool::StaticClass, TEXT("UDEPRECATED_ChooserColumnBool"), &Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ChooserColumnBool), 1428169370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_BoolColumn_h_3288708228(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_BoolColumn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_BoolColumn_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_BoolColumn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_BoolColumn_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_BoolColumn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_BoolColumn_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
