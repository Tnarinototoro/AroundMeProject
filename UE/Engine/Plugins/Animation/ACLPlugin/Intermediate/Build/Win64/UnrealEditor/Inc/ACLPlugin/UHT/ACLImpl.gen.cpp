// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../ACLPlugin/Public/ACLImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACLImpl() {}
// Cross Module References
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel();
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLRotationFormat();
	ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLVectorFormat();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ACLRotationFormat;
	static UEnum* ACLRotationFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ACLRotationFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ACLRotationFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLRotationFormat, (UObject*)Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLRotationFormat"));
		}
		return Z_Registration_Info_UEnum_ACLRotationFormat.OuterSingleton;
	}
	template<> ACLPLUGIN_API UEnum* StaticEnum<ACLRotationFormat>()
	{
		return ACLRotationFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::Enumerators[] = {
		{ "ACLRF_Quat_128", (int64)ACLRF_Quat_128 },
		{ "ACLRF_QuatDropW_96", (int64)ACLRF_QuatDropW_96 },
		{ "ACLRF_QuatDropW_Variable", (int64)ACLRF_QuatDropW_Variable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::Enum_MetaDataParams[] = {
		{ "ACLRF_Quat_128.DisplayName", "Quat Full Bit Rate" },
		{ "ACLRF_Quat_128.Name", "ACLRF_Quat_128" },
		{ "ACLRF_QuatDropW_96.DisplayName", "Quat Drop W Full Bit Rate" },
		{ "ACLRF_QuatDropW_96.Name", "ACLRF_QuatDropW_96" },
		{ "ACLRF_QuatDropW_Variable.DisplayName", "Quat Drop W Variable Bit Rate" },
		{ "ACLRF_QuatDropW_Variable.Name", "ACLRF_QuatDropW_Variable" },
		{ "Comment", "/** An enum for ACL rotation formats. */" },
		{ "ModuleRelativePath", "Public/ACLImpl.h" },
		{ "ToolTip", "An enum for ACL rotation formats." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
		nullptr,
		"ACLRotationFormat",
		"ACLRotationFormat",
		Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ACLPlugin_ACLRotationFormat()
	{
		if (!Z_Registration_Info_UEnum_ACLRotationFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ACLRotationFormat.InnerSingleton, Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ACLRotationFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ACLVectorFormat;
	static UEnum* ACLVectorFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ACLVectorFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ACLVectorFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLVectorFormat, (UObject*)Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLVectorFormat"));
		}
		return Z_Registration_Info_UEnum_ACLVectorFormat.OuterSingleton;
	}
	template<> ACLPLUGIN_API UEnum* StaticEnum<ACLVectorFormat>()
	{
		return ACLVectorFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::Enumerators[] = {
		{ "ACLVF_Vector3_96", (int64)ACLVF_Vector3_96 },
		{ "ACLVF_Vector3_Variable", (int64)ACLVF_Vector3_Variable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::Enum_MetaDataParams[] = {
		{ "ACLVF_Vector3_96.DisplayName", "Vector3 Full Bit Rate" },
		{ "ACLVF_Vector3_96.Name", "ACLVF_Vector3_96" },
		{ "ACLVF_Vector3_Variable.DisplayName", "Vector3 Variable Bit Rate" },
		{ "ACLVF_Vector3_Variable.Name", "ACLVF_Vector3_Variable" },
		{ "Comment", "/** An enum for ACL Vector3 formats. */" },
		{ "ModuleRelativePath", "Public/ACLImpl.h" },
		{ "ToolTip", "An enum for ACL Vector3 formats." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
		nullptr,
		"ACLVectorFormat",
		"ACLVectorFormat",
		Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ACLPlugin_ACLVectorFormat()
	{
		if (!Z_Registration_Info_UEnum_ACLVectorFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ACLVectorFormat.InnerSingleton, Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ACLVectorFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ACLCompressionLevel;
	static UEnum* ACLCompressionLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ACLCompressionLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ACLCompressionLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel, (UObject*)Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLCompressionLevel"));
		}
		return Z_Registration_Info_UEnum_ACLCompressionLevel.OuterSingleton;
	}
	template<> ACLPLUGIN_API UEnum* StaticEnum<ACLCompressionLevel>()
	{
		return ACLCompressionLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::Enumerators[] = {
		{ "ACLCL_Lowest", (int64)ACLCL_Lowest },
		{ "ACLCL_Low", (int64)ACLCL_Low },
		{ "ACLCL_Medium", (int64)ACLCL_Medium },
		{ "ACLCL_High", (int64)ACLCL_High },
		{ "ACLCL_Highest", (int64)ACLCL_Highest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::Enum_MetaDataParams[] = {
		{ "ACLCL_High.DisplayName", "High" },
		{ "ACLCL_High.Name", "ACLCL_High" },
		{ "ACLCL_Highest.DisplayName", "Highest" },
		{ "ACLCL_Highest.Name", "ACLCL_Highest" },
		{ "ACLCL_Low.DisplayName", "Low" },
		{ "ACLCL_Low.Name", "ACLCL_Low" },
		{ "ACLCL_Lowest.DisplayName", "Lowest" },
		{ "ACLCL_Lowest.Name", "ACLCL_Lowest" },
		{ "ACLCL_Medium.DisplayName", "Medium" },
		{ "ACLCL_Medium.Name", "ACLCL_Medium" },
		{ "Comment", "/** An enum for ACL compression levels. */" },
		{ "ModuleRelativePath", "Public/ACLImpl.h" },
		{ "ToolTip", "An enum for ACL compression levels." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
		nullptr,
		"ACLCompressionLevel",
		"ACLCompressionLevel",
		Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel()
	{
		if (!Z_Registration_Info_UEnum_ACLCompressionLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ACLCompressionLevel.InnerSingleton, Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ACLCompressionLevel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Public_ACLImpl_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Public_ACLImpl_h_Statics::EnumInfo[] = {
		{ ACLRotationFormat_StaticEnum, TEXT("ACLRotationFormat"), &Z_Registration_Info_UEnum_ACLRotationFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 232586517U) },
		{ ACLVectorFormat_StaticEnum, TEXT("ACLVectorFormat"), &Z_Registration_Info_UEnum_ACLVectorFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3294351191U) },
		{ ACLCompressionLevel_StaticEnum, TEXT("ACLCompressionLevel"), &Z_Registration_Info_UEnum_ACLCompressionLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 260553980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Public_ACLImpl_h_2065857325(TEXT("/Script/ACLPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Public_ACLImpl_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Public_ACLImpl_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
