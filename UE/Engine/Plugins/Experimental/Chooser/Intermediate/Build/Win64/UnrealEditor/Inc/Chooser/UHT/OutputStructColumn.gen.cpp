// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/OutputStructColumn.h"
#include "ChooserPropertyAccess.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutputStructColumn() {}
// Cross Module References
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserColumnBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterStructBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserStructPropertyBinding();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FOutputStructColumn();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FStructContextProperty();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References

static_assert(std::is_polymorphic<FStructContextProperty>() == std::is_polymorphic<FChooserParameterStructBase>(), "USTRUCT FStructContextProperty cannot be polymorphic unless super FChooserParameterStructBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructContextProperty;
class UScriptStruct* FStructContextProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructContextProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructContextProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructContextProperty, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("StructContextProperty"));
	}
	return Z_Registration_Info_UScriptStruct_StructContextProperty.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FStructContextProperty>()
{
	return FStructContextProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructContextProperty_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructContextProperty_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Struct Property Binding" },
		{ "ModuleRelativePath", "Internal/OutputStructColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructContextProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructContextProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructContextProperty_Statics::NewProp_Binding_MetaData[] = {
		{ "BindingColor", "StructPinTypeColor" },
		{ "BindingType", "struct" },
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Internal/OutputStructColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructContextProperty_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructContextProperty, Binding), Z_Construct_UScriptStruct_FChooserStructPropertyBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructContextProperty_Statics::NewProp_Binding_MetaData), Z_Construct_UScriptStruct_FStructContextProperty_Statics::NewProp_Binding_MetaData) }; // 1018217836
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructContextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructContextProperty_Statics::NewProp_Binding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructContextProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterStructBase,
		&NewStructOps,
		"StructContextProperty",
		Z_Construct_UScriptStruct_FStructContextProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructContextProperty_Statics::PropPointers),
		sizeof(FStructContextProperty),
		alignof(FStructContextProperty),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructContextProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStructContextProperty_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructContextProperty_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStructContextProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_StructContextProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructContextProperty.InnerSingleton, Z_Construct_UScriptStruct_FStructContextProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructContextProperty.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOutputStructColumn>() == std::is_polymorphic<FChooserColumnBase>(), "USTRUCT FOutputStructColumn cannot be polymorphic unless super FChooserColumnBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OutputStructColumn;
class UScriptStruct* FOutputStructColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OutputStructColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OutputStructColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutputStructColumn, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("OutputStructColumn"));
	}
	return Z_Registration_Info_UScriptStruct_OutputStructColumn.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FOutputStructColumn>()
{
	return FOutputStructColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOutputStructColumn_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputStructColumn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/OutputStructColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutputStructColumn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_InputValue_MetaData[] = {
		{ "BaseStruct", "/Script/Chooser.ChooserParameterStructBase" },
		{ "Category", "Hidden" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Internal/OutputStructColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000002000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutputStructColumn, InputValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_InputValue_MetaData), Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_InputValue_MetaData) }; // 2114042832
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_DefaultRowValue_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Internal/OutputStructColumn.h" },
		{ "StructTypeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_DefaultRowValue = { "DefaultRowValue", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutputStructColumn, DefaultRowValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_DefaultRowValue_MetaData), Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_DefaultRowValue_MetaData) }; // 2114042832
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_RowValues_Inner = { "RowValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 2114042832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_RowValues_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Internal/OutputStructColumn.h" },
		{ "StructTypeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_RowValues = { "RowValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutputStructColumn, RowValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_RowValues_MetaData), Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_RowValues_MetaData) }; // 2114042832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutputStructColumn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_InputValue,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_DefaultRowValue,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_RowValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewProp_RowValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutputStructColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserColumnBase,
		&NewStructOps,
		"OutputStructColumn",
		Z_Construct_UScriptStruct_FOutputStructColumn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputStructColumn_Statics::PropPointers),
		sizeof(FOutputStructColumn),
		alignof(FOutputStructColumn),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputStructColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOutputStructColumn_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutputStructColumn_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOutputStructColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_OutputStructColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OutputStructColumn.InnerSingleton, Z_Construct_UScriptStruct_FOutputStructColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OutputStructColumn.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_OutputStructColumn_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_OutputStructColumn_h_Statics::ScriptStructInfo[] = {
		{ FStructContextProperty::StaticStruct, Z_Construct_UScriptStruct_FStructContextProperty_Statics::NewStructOps, TEXT("StructContextProperty"), &Z_Registration_Info_UScriptStruct_StructContextProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructContextProperty), 2819869876U) },
		{ FOutputStructColumn::StaticStruct, Z_Construct_UScriptStruct_FOutputStructColumn_Statics::NewStructOps, TEXT("OutputStructColumn"), &Z_Registration_Info_UScriptStruct_OutputStructColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOutputStructColumn), 3358126030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_OutputStructColumn_h_1280156249(TEXT("/Script/Chooser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_OutputStructColumn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_OutputStructColumn_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
