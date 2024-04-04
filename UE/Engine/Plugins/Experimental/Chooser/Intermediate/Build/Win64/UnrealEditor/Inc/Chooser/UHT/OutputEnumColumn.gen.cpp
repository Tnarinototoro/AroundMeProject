// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/OutputEnumColumn.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutputEnumColumn() {}
// Cross Module References
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserColumnBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserOutputEnumRowData();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FOutputEnumColumn();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserOutputEnumRowData;
class UScriptStruct* FChooserOutputEnumRowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserOutputEnumRowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserOutputEnumRowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserOutputEnumRowData, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserOutputEnumRowData"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserOutputEnumRowData.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserOutputEnumRowData>()
{
	return FChooserOutputEnumRowData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/OutputEnumColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserOutputEnumRowData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Internal/OutputEnumColumn.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChooserOutputEnumRowData, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ChooserOutputEnumRowData",
		Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::PropPointers),
		sizeof(FChooserOutputEnumRowData),
		alignof(FChooserOutputEnumRowData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FChooserOutputEnumRowData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserOutputEnumRowData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserOutputEnumRowData.InnerSingleton, Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserOutputEnumRowData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOutputEnumColumn>() == std::is_polymorphic<FChooserColumnBase>(), "USTRUCT FOutputEnumColumn cannot be polymorphic unless super FChooserColumnBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OutputEnumColumn;
class UScriptStruct* FOutputEnumColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OutputEnumColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OutputEnumColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutputEnumColumn, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("OutputEnumColumn"));
	}
	return Z_Registration_Info_UScriptStruct_OutputEnumColumn.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FOutputEnumColumn>()
{
	return FOutputEnumColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOutputEnumColumn_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/OutputEnumColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutputEnumColumn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_InputValue_MetaData[] = {
		{ "BaseStruct", "/Script/Chooser.ChooserParameterEnumBase" },
		{ "Category", "Data" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Internal/OutputEnumColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000002000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutputEnumColumn, InputValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_InputValue_MetaData), Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_InputValue_MetaData) }; // 2114042832
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_DefaultRowValue_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Internal/OutputEnumColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_DefaultRowValue = { "DefaultRowValue", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutputEnumColumn, DefaultRowValue), Z_Construct_UScriptStruct_FChooserOutputEnumRowData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_DefaultRowValue_MetaData), Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_DefaultRowValue_MetaData) }; // 3180645858
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_RowValues_Inner = { "RowValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChooserOutputEnumRowData, METADATA_PARAMS(0, nullptr) }; // 3180645858
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_RowValues_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// array of results (cells for this column for each row in the table)\n// should match the length of the Results array\n" },
		{ "ModuleRelativePath", "Internal/OutputEnumColumn.h" },
		{ "ToolTip", "array of results (cells for this column for each row in the table)\nshould match the length of the Results array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_RowValues = { "RowValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutputEnumColumn, RowValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_RowValues_MetaData), Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_RowValues_MetaData) }; // 3180645858
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_InputValue,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_DefaultRowValue,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_RowValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewProp_RowValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserColumnBase,
		&NewStructOps,
		"OutputEnumColumn",
		Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::PropPointers),
		sizeof(FOutputEnumColumn),
		alignof(FOutputEnumColumn),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOutputEnumColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_OutputEnumColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OutputEnumColumn.InnerSingleton, Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OutputEnumColumn.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_OutputEnumColumn_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_OutputEnumColumn_h_Statics::ScriptStructInfo[] = {
		{ FChooserOutputEnumRowData::StaticStruct, Z_Construct_UScriptStruct_FChooserOutputEnumRowData_Statics::NewStructOps, TEXT("ChooserOutputEnumRowData"), &Z_Registration_Info_UScriptStruct_ChooserOutputEnumRowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserOutputEnumRowData), 3180645858U) },
		{ FOutputEnumColumn::StaticStruct, Z_Construct_UScriptStruct_FOutputEnumColumn_Statics::NewStructOps, TEXT("OutputEnumColumn"), &Z_Registration_Info_UScriptStruct_OutputEnumColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOutputEnumColumn), 1627753222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_OutputEnumColumn_h_3324787414(TEXT("/Script/Chooser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_OutputEnumColumn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_OutputEnumColumn_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
