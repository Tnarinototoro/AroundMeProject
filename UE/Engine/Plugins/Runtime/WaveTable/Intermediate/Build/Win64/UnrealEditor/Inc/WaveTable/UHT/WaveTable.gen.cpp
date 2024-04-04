// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveTable() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WaveTable();
	WAVETABLE_API UEnum* Z_Construct_UEnum_WaveTable_EWaveTableBitDepth();
	WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaveTableBitDepth;
	static UEnum* EWaveTableBitDepth_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWaveTableBitDepth.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWaveTableBitDepth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableBitDepth, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("EWaveTableBitDepth"));
		}
		return Z_Registration_Info_UEnum_EWaveTableBitDepth.OuterSingleton;
	}
	template<> WAVETABLE_API UEnum* StaticEnum<EWaveTableBitDepth>()
	{
		return EWaveTableBitDepth_StaticEnum();
	}
	struct Z_Construct_UEnum_WaveTable_EWaveTableBitDepth_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WaveTable_EWaveTableBitDepth_Statics::Enumerators[] = {
		{ "EWaveTableBitDepth::PCM_16", (int64)EWaveTableBitDepth::PCM_16 },
		{ "EWaveTableBitDepth::IEEE_Float", (int64)EWaveTableBitDepth::IEEE_Float },
		{ "EWaveTableBitDepth::COUNT", (int64)EWaveTableBitDepth::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WaveTable_EWaveTableBitDepth_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace WaveTable\n" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EWaveTableBitDepth::COUNT" },
		{ "IEEE_Float.Comment", "// Higher precision and faster operative performance\n// (engine operates at 32-bit) at the cost of twice the\n// memory of 16-bit.\n" },
		{ "IEEE_Float.Name", "EWaveTableBitDepth::IEEE_Float" },
		{ "IEEE_Float.ToolTip", "Higher precision and faster operative performance\n(engine operates at 32-bit) at the cost of twice the\nmemory of 16-bit." },
		{ "ModuleRelativePath", "Public/WaveTable.h" },
		{ "PCM_16.Comment", "// Lower resolution and marginal performance cost with\n// conversion overhead (engine operates on 32-bit)\n// with the advantage of half the size in memory.\n" },
		{ "PCM_16.Name", "EWaveTableBitDepth::PCM_16" },
		{ "PCM_16.ToolTip", "Lower resolution and marginal performance cost with\nconversion overhead (engine operates on 32-bit)\nwith the advantage of half the size in memory." },
		{ "ToolTip", "namespace WaveTable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WaveTable_EWaveTableBitDepth_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WaveTable,
		nullptr,
		"EWaveTableBitDepth",
		"EWaveTableBitDepth",
		Z_Construct_UEnum_WaveTable_EWaveTableBitDepth_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableBitDepth_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableBitDepth_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WaveTable_EWaveTableBitDepth_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WaveTable_EWaveTableBitDepth()
	{
		if (!Z_Registration_Info_UEnum_EWaveTableBitDepth.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaveTableBitDepth.InnerSingleton, Z_Construct_UEnum_WaveTable_EWaveTableBitDepth_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWaveTableBitDepth.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveTableData;
class UScriptStruct* FWaveTableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveTableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveTableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveTableData, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("WaveTableData"));
	}
	return Z_Registration_Info_UScriptStruct_WaveTableData.OuterSingleton;
}
template<> WAVETABLE_API UScriptStruct* StaticStruct<FWaveTableData>()
{
	return FWaveTableData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveTableData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitDepth_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitDepth_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BitDepth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Serialized WaveTable data, that supports multiple bit depth formats.\n" },
		{ "ModuleRelativePath", "Public/WaveTable.h" },
		{ "ToolTip", "Serialized WaveTable data, that supports multiple bit depth formats." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveTableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveTableData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_BitDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_BitDepth_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/WaveTable.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_BitDepth = { "BitDepth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableData, BitDepth), Z_Construct_UEnum_WaveTable_EWaveTableBitDepth, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_BitDepth_MetaData), Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_BitDepth_MetaData) }; // 2229794396
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaveTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_Data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_FinalValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaveTable.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_FinalValue = { "FinalValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveTableData, FinalValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_FinalValue_MetaData), Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_FinalValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveTableData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_BitDepth_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_BitDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableData_Statics::NewProp_FinalValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveTableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveTable,
		nullptr,
		&NewStructOps,
		"WaveTableData",
		Z_Construct_UScriptStruct_FWaveTableData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableData_Statics::PropPointers),
		sizeof(FWaveTableData),
		alignof(FWaveTableData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaveTableData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWaveTableData()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveTableData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveTableData.InnerSingleton, Z_Construct_UScriptStruct_FWaveTableData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveTableData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h_Statics::EnumInfo[] = {
		{ EWaveTableBitDepth_StaticEnum, TEXT("EWaveTableBitDepth"), &Z_Registration_Info_UEnum_EWaveTableBitDepth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2229794396U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h_Statics::ScriptStructInfo[] = {
		{ FWaveTableData::StaticStruct, Z_Construct_UScriptStruct_FWaveTableData_Statics::NewStructOps, TEXT("WaveTableData"), &Z_Registration_Info_UScriptStruct_WaveTableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveTableData), 1574591700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h_3928501848(TEXT("/Script/WaveTable"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
