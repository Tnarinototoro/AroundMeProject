// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOP/CustomizableObjectPopulationCharacteristic.h"
#include "../Private/MuCOP/CustomizableObjectPopulationConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationCharacteristic() {}
// Cross Module References
	CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic();
	CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectPopulation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationCharacteristic;
class UScriptStruct* FCustomizableObjectPopulationCharacteristic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationCharacteristic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationCharacteristic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectPopulation(), TEXT("CustomizableObjectPopulationCharacteristic"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationCharacteristic.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* StaticStruct<FCustomizableObjectPopulationCharacteristic>()
{
	return FCustomizableObjectPopulationCharacteristic::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationCharacteristic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectPopulationCharacteristic>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "CustomizablePopulationClass" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationCharacteristic.h" },
		{ "ToolTip", "Name of the Customizable Object Parameter that will be specified by this characteristic" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectPopulationCharacteristic, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_ParameterName_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_ParameterName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint, METADATA_PARAMS(0, nullptr) }; // 3520967775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_Constraints_MetaData[] = {
		{ "Category", "CustomizablePopulationClass" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationCharacteristic.h" },
		{ "ToolTip", "Constraints applied to this characteristic" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomizableObjectPopulationCharacteristic, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_Constraints_MetaData), Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_Constraints_MetaData) }; // 3520967775
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_Constraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewProp_Constraints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectPopulation,
		nullptr,
		&NewStructOps,
		"CustomizableObjectPopulationCharacteristic",
		Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::PropPointers),
		sizeof(FCustomizableObjectPopulationCharacteristic),
		alignof(FCustomizableObjectPopulationCharacteristic),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationCharacteristic.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationCharacteristic.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationCharacteristic.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationCharacteristic_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationCharacteristic_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectPopulationCharacteristic::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic_Statics::NewStructOps, TEXT("CustomizableObjectPopulationCharacteristic"), &Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationCharacteristic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectPopulationCharacteristic), 1873748044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationCharacteristic_h_1600731907(TEXT("/Script/CustomizableObjectPopulation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationCharacteristic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationCharacteristic_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
