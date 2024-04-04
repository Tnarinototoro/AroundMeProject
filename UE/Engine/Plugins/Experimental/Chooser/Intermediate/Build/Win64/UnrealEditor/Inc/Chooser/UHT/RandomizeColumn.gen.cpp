// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/RandomizeColumn.h"
#include "ChooserPropertyAccess.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomizeColumn() {}
// Cross Module References
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserColumnBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterRandomizeBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserPropertyBinding();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FRandomizeColumn();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FRandomizeContextProperty();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References

static_assert(std::is_polymorphic<FRandomizeContextProperty>() == std::is_polymorphic<FChooserParameterRandomizeBase>(), "USTRUCT FRandomizeContextProperty cannot be polymorphic unless super FChooserParameterRandomizeBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RandomizeContextProperty;
class UScriptStruct* FRandomizeContextProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RandomizeContextProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RandomizeContextProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRandomizeContextProperty, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("RandomizeContextProperty"));
	}
	return Z_Registration_Info_UScriptStruct_RandomizeContextProperty.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FRandomizeContextProperty>()
{
	return FRandomizeContextProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Randomize Property Binding" },
		{ "ModuleRelativePath", "Internal/RandomizeColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRandomizeContextProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::NewProp_Binding_MetaData[] = {
		{ "BindingAllowFunctions", "false" },
		{ "BindingColor", "StructPinTypeColor" },
		{ "BindingType", "FChooserRandomizationContext" },
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Internal/RandomizeColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomizeContextProperty, Binding), Z_Construct_UScriptStruct_FChooserPropertyBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::NewProp_Binding_MetaData), Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::NewProp_Binding_MetaData) }; // 3662209599
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::NewProp_Binding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterRandomizeBase,
		&NewStructOps,
		"RandomizeContextProperty",
		Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::PropPointers),
		sizeof(FRandomizeContextProperty),
		alignof(FRandomizeContextProperty),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRandomizeContextProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_RandomizeContextProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RandomizeContextProperty.InnerSingleton, Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RandomizeContextProperty.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRandomizeColumn>() == std::is_polymorphic<FChooserColumnBase>(), "USTRUCT FRandomizeColumn cannot be polymorphic unless super FChooserColumnBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RandomizeColumn;
class UScriptStruct* FRandomizeColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RandomizeColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RandomizeColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRandomizeColumn, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("RandomizeColumn"));
	}
	return Z_Registration_Info_UScriptStruct_RandomizeColumn.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FRandomizeColumn>()
{
	return FRandomizeColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRandomizeColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepeatProbabilityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RepeatProbabilityMultiplier;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRowValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultRowValue;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RowValues_Inner;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomizeColumn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/RandomizeColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRandomizeColumn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_InputValue_MetaData[] = {
		{ "BaseStruct", "/Script/Chooser.RandomizeContextProperty" },
		{ "Category", "Data" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Internal/RandomizeColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000002000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomizeColumn, InputValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_InputValue_MetaData), Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_InputValue_MetaData) }; // 2114042832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RepeatProbabilityMultiplier_MetaData[] = {
		{ "Category", "Data" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Internal/RandomizeColumn.h" },
		{ "Tooltip", "Multiplies the weight of the previous chosen result (set to 0 to never pick the same result twice in a row)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RepeatProbabilityMultiplier = { "RepeatProbabilityMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomizeColumn, RepeatProbabilityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RepeatProbabilityMultiplier_MetaData), Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RepeatProbabilityMultiplier_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_DefaultRowValue_MetaData[] = {
		{ "Category", "Data" },
		{ "DisplayName", "DefaultRowValue" },
		{ "ModuleRelativePath", "Internal/RandomizeColumn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_DefaultRowValue = { "DefaultRowValue", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomizeColumn, DefaultRowValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_DefaultRowValue_MetaData), Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_DefaultRowValue_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RowValues_Inner = { "RowValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RowValues_MetaData[] = {
		{ "Category", "Data" },
		{ "DisplayName", "RowValues" },
		{ "ModuleRelativePath", "Internal/RandomizeColumn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RowValues = { "RowValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRandomizeColumn, RowValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RowValues_MetaData), Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RowValues_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRandomizeColumn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_InputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RepeatProbabilityMultiplier,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_DefaultRowValue,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RowValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewProp_RowValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRandomizeColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserColumnBase,
		&NewStructOps,
		"RandomizeColumn",
		Z_Construct_UScriptStruct_FRandomizeColumn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomizeColumn_Statics::PropPointers),
		sizeof(FRandomizeColumn),
		alignof(FRandomizeColumn),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomizeColumn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRandomizeColumn_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomizeColumn_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRandomizeColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_RandomizeColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RandomizeColumn.InnerSingleton, Z_Construct_UScriptStruct_FRandomizeColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RandomizeColumn.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_RandomizeColumn_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_RandomizeColumn_h_Statics::ScriptStructInfo[] = {
		{ FRandomizeContextProperty::StaticStruct, Z_Construct_UScriptStruct_FRandomizeContextProperty_Statics::NewStructOps, TEXT("RandomizeContextProperty"), &Z_Registration_Info_UScriptStruct_RandomizeContextProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRandomizeContextProperty), 3382226598U) },
		{ FRandomizeColumn::StaticStruct, Z_Construct_UScriptStruct_FRandomizeColumn_Statics::NewStructOps, TEXT("RandomizeColumn"), &Z_Registration_Info_UScriptStruct_RandomizeColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRandomizeColumn), 1788217852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_RandomizeColumn_h_2771149308(TEXT("/Script/Chooser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_RandomizeColumn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_RandomizeColumn_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
