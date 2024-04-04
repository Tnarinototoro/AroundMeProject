// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicMediaDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackmagicMediaDefinitions() {}
// Cross Module References
	BLACKMAGICMEDIA_API UEnum* Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF();
	BLACKMAGICMEDIA_API UEnum* Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut();
	BLACKMAGICMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions();
	UPackage* Z_Construct_UPackage__Script_BlackmagicMedia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlackmagicHDRMetadataEOTF;
	static UEnum* EBlackmagicHDRMetadataEOTF_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicHDRMetadataEOTF.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlackmagicHDRMetadataEOTF.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF, (UObject*)Z_Construct_UPackage__Script_BlackmagicMedia(), TEXT("EBlackmagicHDRMetadataEOTF"));
		}
		return Z_Registration_Info_UEnum_EBlackmagicHDRMetadataEOTF.OuterSingleton;
	}
	template<> BLACKMAGICMEDIA_API UEnum* StaticEnum<EBlackmagicHDRMetadataEOTF>()
	{
		return EBlackmagicHDRMetadataEOTF_StaticEnum();
	}
	struct Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF_Statics::Enumerators[] = {
		{ "EBlackmagicHDRMetadataEOTF::SDR", (int64)EBlackmagicHDRMetadataEOTF::SDR },
		{ "EBlackmagicHDRMetadataEOTF::HDR", (int64)EBlackmagicHDRMetadataEOTF::HDR },
		{ "EBlackmagicHDRMetadataEOTF::PQ", (int64)EBlackmagicHDRMetadataEOTF::PQ },
		{ "EBlackmagicHDRMetadataEOTF::HLG", (int64)EBlackmagicHDRMetadataEOTF::HLG },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * HDR Transfer function.\n * Must match Blackmagic::EBlackmagicHDRMetadataEOTF.\n */" },
		{ "HDR.Name", "EBlackmagicHDRMetadataEOTF::HDR" },
		{ "HLG.Name", "EBlackmagicHDRMetadataEOTF::HLG" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaDefinitions.h" },
		{ "PQ.Name", "EBlackmagicHDRMetadataEOTF::PQ" },
		{ "SDR.Name", "EBlackmagicHDRMetadataEOTF::SDR" },
		{ "ToolTip", "HDR Transfer function.\nMust match Blackmagic::EBlackmagicHDRMetadataEOTF." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlackmagicMedia,
		nullptr,
		"EBlackmagicHDRMetadataEOTF",
		"EBlackmagicHDRMetadataEOTF",
		Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicHDRMetadataEOTF.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlackmagicHDRMetadataEOTF.InnerSingleton, Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlackmagicHDRMetadataEOTF.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlackmagicHDRMetadataGamut;
	static UEnum* EBlackmagicHDRMetadataGamut_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicHDRMetadataGamut.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlackmagicHDRMetadataGamut.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut, (UObject*)Z_Construct_UPackage__Script_BlackmagicMedia(), TEXT("EBlackmagicHDRMetadataGamut"));
		}
		return Z_Registration_Info_UEnum_EBlackmagicHDRMetadataGamut.OuterSingleton;
	}
	template<> BLACKMAGICMEDIA_API UEnum* StaticEnum<EBlackmagicHDRMetadataGamut>()
	{
		return EBlackmagicHDRMetadataGamut_StaticEnum();
	}
	struct Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut_Statics::Enumerators[] = {
		{ "EBlackmagicHDRMetadataGamut::Rec709", (int64)EBlackmagicHDRMetadataGamut::Rec709 },
		{ "EBlackmagicHDRMetadataGamut::Rec2020", (int64)EBlackmagicHDRMetadataGamut::Rec2020 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * HDR Color Gamut.\n * Must match Blackmagic::EBlackmagicHDRMetadataGamut.\n */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaDefinitions.h" },
		{ "Rec2020.Name", "EBlackmagicHDRMetadataGamut::Rec2020" },
		{ "Rec709.Name", "EBlackmagicHDRMetadataGamut::Rec709" },
		{ "ToolTip", "HDR Color Gamut.\nMust match Blackmagic::EBlackmagicHDRMetadataGamut." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlackmagicMedia,
		nullptr,
		"EBlackmagicHDRMetadataGamut",
		"EBlackmagicHDRMetadataGamut",
		Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicHDRMetadataGamut.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlackmagicHDRMetadataGamut.InnerSingleton, Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlackmagicHDRMetadataGamut.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlackmagicMediaHDROptions;
class UScriptStruct* FBlackmagicMediaHDROptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlackmagicMediaHDROptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlackmagicMediaHDROptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions, (UObject*)Z_Construct_UPackage__Script_BlackmagicMedia(), TEXT("BlackmagicMediaHDROptions"));
	}
	return Z_Registration_Info_UScriptStruct_BlackmagicMediaHDROptions.OuterSingleton;
}
template<> BLACKMAGICMEDIA_API UScriptStruct* StaticStruct<FBlackmagicMediaHDROptions>()
{
	return FBlackmagicMediaHDROptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set of metadata describing a HDR video signal.\n */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaDefinitions.h" },
		{ "ToolTip", "Set of metadata describing a HDR video signal." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlackmagicMediaHDROptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_EOTF_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_EOTF_MetaData[] = {
		{ "Category", "HDR" },
		{ "Comment", "/** Transfer function to use for converting the video signal to an optical signal. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaDefinitions.h" },
		{ "ToolTip", "Transfer function to use for converting the video signal to an optical signal." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_EOTF = { "EOTF", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlackmagicMediaHDROptions, EOTF), Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataEOTF, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_EOTF_MetaData), Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_EOTF_MetaData) }; // 1424212822
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_Gamut_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_Gamut_MetaData[] = {
		{ "Category", "HDR" },
		{ "Comment", "/** The color gamut of the video signal. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaDefinitions.h" },
		{ "ToolTip", "The color gamut of the video signal." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_Gamut = { "Gamut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlackmagicMediaHDROptions, Gamut), Z_Construct_UEnum_BlackmagicMedia_EBlackmagicHDRMetadataGamut, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_Gamut_MetaData), Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_Gamut_MetaData) }; // 1396039722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_EOTF_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_EOTF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_Gamut_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewProp_Gamut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicMedia,
		nullptr,
		&NewStructOps,
		"BlackmagicMediaHDROptions",
		Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::PropPointers),
		sizeof(FBlackmagicMediaHDROptions),
		alignof(FBlackmagicMediaHDROptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions()
	{
		if (!Z_Registration_Info_UScriptStruct_BlackmagicMediaHDROptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlackmagicMediaHDROptions.InnerSingleton, Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlackmagicMediaHDROptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaDefinitions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaDefinitions_h_Statics::EnumInfo[] = {
		{ EBlackmagicHDRMetadataEOTF_StaticEnum, TEXT("EBlackmagicHDRMetadataEOTF"), &Z_Registration_Info_UEnum_EBlackmagicHDRMetadataEOTF, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1424212822U) },
		{ EBlackmagicHDRMetadataGamut_StaticEnum, TEXT("EBlackmagicHDRMetadataGamut"), &Z_Registration_Info_UEnum_EBlackmagicHDRMetadataGamut, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1396039722U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FBlackmagicMediaHDROptions::StaticStruct, Z_Construct_UScriptStruct_FBlackmagicMediaHDROptions_Statics::NewStructOps, TEXT("BlackmagicMediaHDROptions"), &Z_Registration_Info_UScriptStruct_BlackmagicMediaHDROptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlackmagicMediaHDROptions), 1820443470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaDefinitions_h_3422165807(TEXT("/Script/BlackmagicMedia"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaDefinitions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaDefinitions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaDefinitions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
