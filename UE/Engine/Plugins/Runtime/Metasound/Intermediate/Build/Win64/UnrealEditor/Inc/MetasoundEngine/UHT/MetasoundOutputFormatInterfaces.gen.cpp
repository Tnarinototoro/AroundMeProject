// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/MetasoundOutputFormatInterfaces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundOutputFormatInterfaces() {}
// Cross Module References
	METASOUNDENGINE_API UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat();
	UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetaSoundOutputAudioFormat;
	static UEnum* EMetaSoundOutputAudioFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMetaSoundOutputAudioFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMetaSoundOutputAudioFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat, (UObject*)Z_Construct_UPackage__Script_MetasoundEngine(), TEXT("EMetaSoundOutputAudioFormat"));
		}
		return Z_Registration_Info_UEnum_EMetaSoundOutputAudioFormat.OuterSingleton;
	}
	template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetaSoundOutputAudioFormat>()
	{
		return EMetaSoundOutputAudioFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat_Statics::Enumerators[] = {
		{ "EMetaSoundOutputAudioFormat::Mono", (int64)EMetaSoundOutputAudioFormat::Mono },
		{ "EMetaSoundOutputAudioFormat::Stereo", (int64)EMetaSoundOutputAudioFormat::Stereo },
		{ "EMetaSoundOutputAudioFormat::Quad", (int64)EMetaSoundOutputAudioFormat::Quad },
		{ "EMetaSoundOutputAudioFormat::FiveDotOne", (int64)EMetaSoundOutputAudioFormat::FiveDotOne },
		{ "EMetaSoundOutputAudioFormat::SevenDotOne", (int64)EMetaSoundOutputAudioFormat::SevenDotOne },
		{ "EMetaSoundOutputAudioFormat::COUNT", (int64)EMetaSoundOutputAudioFormat::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Declares supported MetaSound output audio formats */" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EMetaSoundOutputAudioFormat::COUNT" },
		{ "FiveDotOne.DisplayName", "5.1" },
		{ "FiveDotOne.Name", "EMetaSoundOutputAudioFormat::FiveDotOne" },
		{ "ModuleRelativePath", "Public/Interfaces/MetasoundOutputFormatInterfaces.h" },
		{ "Mono.Name", "EMetaSoundOutputAudioFormat::Mono" },
		{ "Quad.Name", "EMetaSoundOutputAudioFormat::Quad" },
		{ "SevenDotOne.DisplayName", "7.1" },
		{ "SevenDotOne.Name", "EMetaSoundOutputAudioFormat::SevenDotOne" },
		{ "Stereo.Name", "EMetaSoundOutputAudioFormat::Stereo" },
		{ "ToolTip", "Declares supported MetaSound output audio formats" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MetasoundEngine,
		nullptr,
		"EMetaSoundOutputAudioFormat",
		"EMetaSoundOutputAudioFormat",
		Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat()
	{
		if (!Z_Registration_Info_UEnum_EMetaSoundOutputAudioFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetaSoundOutputAudioFormat.InnerSingleton, Z_Construct_UEnum_MetasoundEngine_EMetaSoundOutputAudioFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMetaSoundOutputAudioFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Interfaces_MetasoundOutputFormatInterfaces_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Interfaces_MetasoundOutputFormatInterfaces_h_Statics::EnumInfo[] = {
		{ EMetaSoundOutputAudioFormat_StaticEnum, TEXT("EMetaSoundOutputAudioFormat"), &Z_Registration_Info_UEnum_EMetaSoundOutputAudioFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2487386805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Interfaces_MetasoundOutputFormatInterfaces_h_1397595762(TEXT("/Script/MetasoundEngine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Interfaces_MetasoundOutputFormatInterfaces_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Interfaces_MetasoundOutputFormatInterfaces_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
