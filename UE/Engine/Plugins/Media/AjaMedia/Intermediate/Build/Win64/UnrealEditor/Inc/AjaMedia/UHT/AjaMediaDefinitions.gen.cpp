// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AjaMediaDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjaMediaDefinitions() {}
// Cross Module References
	AJAMEDIA_API UEnum* Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF();
	AJAMEDIA_API UEnum* Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut();
	AJAMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FAjaMediaHDROptions();
	UPackage* Z_Construct_UPackage__Script_AjaMedia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAjaHDRMetadataEOTF;
	static UEnum* EAjaHDRMetadataEOTF_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAjaHDRMetadataEOTF.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAjaHDRMetadataEOTF.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF, (UObject*)Z_Construct_UPackage__Script_AjaMedia(), TEXT("EAjaHDRMetadataEOTF"));
		}
		return Z_Registration_Info_UEnum_EAjaHDRMetadataEOTF.OuterSingleton;
	}
	template<> AJAMEDIA_API UEnum* StaticEnum<EAjaHDRMetadataEOTF>()
	{
		return EAjaHDRMetadataEOTF_StaticEnum();
	}
	struct Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF_Statics::Enumerators[] = {
		{ "EAjaHDRMetadataEOTF::SDR", (int64)EAjaHDRMetadataEOTF::SDR },
		{ "EAjaHDRMetadataEOTF::HLG", (int64)EAjaHDRMetadataEOTF::HLG },
		{ "EAjaHDRMetadataEOTF::PQ", (int64)EAjaHDRMetadataEOTF::PQ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * HDR Transfer function.\n * Must match AJA::EAjaHDRMetadataEOTF.\n */" },
		{ "HLG.Name", "EAjaHDRMetadataEOTF::HLG" },
		{ "ModuleRelativePath", "Public/AjaMediaDefinitions.h" },
		{ "PQ.Name", "EAjaHDRMetadataEOTF::PQ" },
		{ "SDR.Name", "EAjaHDRMetadataEOTF::SDR" },
		{ "ToolTip", "HDR Transfer function.\nMust match AJA::EAjaHDRMetadataEOTF." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AjaMedia,
		nullptr,
		"EAjaHDRMetadataEOTF",
		"EAjaHDRMetadataEOTF",
		Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF()
	{
		if (!Z_Registration_Info_UEnum_EAjaHDRMetadataEOTF.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAjaHDRMetadataEOTF.InnerSingleton, Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAjaHDRMetadataEOTF.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAjaHDRMetadataGamut;
	static UEnum* EAjaHDRMetadataGamut_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAjaHDRMetadataGamut.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAjaHDRMetadataGamut.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut, (UObject*)Z_Construct_UPackage__Script_AjaMedia(), TEXT("EAjaHDRMetadataGamut"));
		}
		return Z_Registration_Info_UEnum_EAjaHDRMetadataGamut.OuterSingleton;
	}
	template<> AJAMEDIA_API UEnum* StaticEnum<EAjaHDRMetadataGamut>()
	{
		return EAjaHDRMetadataGamut_StaticEnum();
	}
	struct Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut_Statics::Enumerators[] = {
		{ "EAjaHDRMetadataGamut::Rec709", (int64)EAjaHDRMetadataGamut::Rec709 },
		{ "EAjaHDRMetadataGamut::Rec2020", (int64)EAjaHDRMetadataGamut::Rec2020 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * HDR Color Gamut.\n * Must match AJA::EAjaHDRMetadataGamut.\n */" },
		{ "ModuleRelativePath", "Public/AjaMediaDefinitions.h" },
		{ "Rec2020.Name", "EAjaHDRMetadataGamut::Rec2020" },
		{ "Rec709.Name", "EAjaHDRMetadataGamut::Rec709" },
		{ "ToolTip", "HDR Color Gamut.\nMust match AJA::EAjaHDRMetadataGamut." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AjaMedia,
		nullptr,
		"EAjaHDRMetadataGamut",
		"EAjaHDRMetadataGamut",
		Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut()
	{
		if (!Z_Registration_Info_UEnum_EAjaHDRMetadataGamut.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAjaHDRMetadataGamut.InnerSingleton, Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAjaHDRMetadataGamut.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AjaMediaHDROptions;
class UScriptStruct* FAjaMediaHDROptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AjaMediaHDROptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AjaMediaHDROptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAjaMediaHDROptions, (UObject*)Z_Construct_UPackage__Script_AjaMedia(), TEXT("AjaMediaHDROptions"));
	}
	return Z_Registration_Info_UScriptStruct_AjaMediaHDROptions.OuterSingleton;
}
template<> AJAMEDIA_API UScriptStruct* StaticStruct<FAjaMediaHDROptions>()
{
	return FAjaMediaHDROptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_EOTF_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EOTF_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EOTF;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Gamut_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gamut_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Gamut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set of metadata describing a HDR video signal.\n */" },
		{ "ModuleRelativePath", "Public/AjaMediaDefinitions.h" },
		{ "ToolTip", "Set of metadata describing a HDR video signal." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAjaMediaHDROptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_EOTF_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_EOTF_MetaData[] = {
		{ "Category", "HDR" },
		{ "Comment", "/** Transfer function to use for converting the video signal to an optical signal. */" },
		{ "ModuleRelativePath", "Public/AjaMediaDefinitions.h" },
		{ "ToolTip", "Transfer function to use for converting the video signal to an optical signal." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_EOTF = { "EOTF", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAjaMediaHDROptions, EOTF), Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataEOTF, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_EOTF_MetaData), Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_EOTF_MetaData) }; // 1644588897
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_Gamut_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_Gamut_MetaData[] = {
		{ "Category", "HDR" },
		{ "Comment", "/** The color gamut of the video signal. */" },
		{ "ModuleRelativePath", "Public/AjaMediaDefinitions.h" },
		{ "ToolTip", "The color gamut of the video signal." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_Gamut = { "Gamut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAjaMediaHDROptions, Gamut), Z_Construct_UEnum_AjaMedia_EAjaHDRMetadataGamut, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_Gamut_MetaData), Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_Gamut_MetaData) }; // 379627711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_EOTF_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_EOTF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_Gamut_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewProp_Gamut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMedia,
		nullptr,
		&NewStructOps,
		"AjaMediaHDROptions",
		Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::PropPointers),
		sizeof(FAjaMediaHDROptions),
		alignof(FAjaMediaHDROptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAjaMediaHDROptions()
	{
		if (!Z_Registration_Info_UScriptStruct_AjaMediaHDROptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AjaMediaHDROptions.InnerSingleton, Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AjaMediaHDROptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaDefinitions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaDefinitions_h_Statics::EnumInfo[] = {
		{ EAjaHDRMetadataEOTF_StaticEnum, TEXT("EAjaHDRMetadataEOTF"), &Z_Registration_Info_UEnum_EAjaHDRMetadataEOTF, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1644588897U) },
		{ EAjaHDRMetadataGamut_StaticEnum, TEXT("EAjaHDRMetadataGamut"), &Z_Registration_Info_UEnum_EAjaHDRMetadataGamut, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 379627711U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FAjaMediaHDROptions::StaticStruct, Z_Construct_UScriptStruct_FAjaMediaHDROptions_Statics::NewStructOps, TEXT("AjaMediaHDROptions"), &Z_Registration_Info_UScriptStruct_AjaMediaHDROptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAjaMediaHDROptions), 1463750512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaDefinitions_h_1806085380(TEXT("/Script/AjaMedia"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaDefinitions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaDefinitions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaDefinitions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
