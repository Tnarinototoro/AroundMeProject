// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuR/System.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSystem() {}
// Cross Module References
	MUTABLERUNTIME_API UEnum* Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy();
	UPackage* Z_Construct_UPackage__Script_MutableRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureCompressionStrategy;
	static UEnum* ETextureCompressionStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureCompressionStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureCompressionStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy, (UObject*)Z_Construct_UPackage__Script_MutableRuntime(), TEXT("ETextureCompressionStrategy"));
		}
		return Z_Registration_Info_UEnum_ETextureCompressionStrategy.OuterSingleton;
	}
	template<> MUTABLERUNTIME_API UEnum* StaticEnum<ETextureCompressionStrategy>()
	{
		return ETextureCompressionStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy_Statics::Enumerators[] = {
		{ "ETextureCompressionStrategy::None", (int64)ETextureCompressionStrategy::None },
		{ "ETextureCompressionStrategy::DontCompressRuntime", (int64)ETextureCompressionStrategy::DontCompressRuntime },
		{ "ETextureCompressionStrategy::NeverCompress", (int64)ETextureCompressionStrategy::NeverCompress },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Despite being an UEnum, this is not always version-serialized (in MutableTools).\n * Beware of changing the enum options or order.\n */" },
		{ "DontCompressRuntime.Comment", "/** If a texture depends on run-time parameters for an object state, don't compress. */" },
		{ "DontCompressRuntime.Name", "ETextureCompressionStrategy::DontCompressRuntime" },
		{ "DontCompressRuntime.ToolTip", "If a texture depends on run-time parameters for an object state, don't compress." },
		{ "ModuleRelativePath", "Public/MuR/System.h" },
		{ "NeverCompress.Comment", "/** Never compress the textures for this state. */" },
		{ "NeverCompress.Name", "ETextureCompressionStrategy::NeverCompress" },
		{ "NeverCompress.ToolTip", "Never compress the textures for this state." },
		{ "None.Comment", "/** Don't change the generated format. */" },
		{ "None.Name", "ETextureCompressionStrategy::None" },
		{ "None.ToolTip", "Don't change the generated format." },
		{ "ToolTip", "Despite being an UEnum, this is not always version-serialized (in MutableTools).\nBeware of changing the enum options or order." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MutableRuntime,
		nullptr,
		"ETextureCompressionStrategy",
		"ETextureCompressionStrategy",
		Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy()
	{
		if (!Z_Registration_Info_UEnum_ETextureCompressionStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureCompressionStrategy.InnerSingleton, Z_Construct_UEnum_MutableRuntime_ETextureCompressionStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureCompressionStrategy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableRuntime_Public_MuR_System_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableRuntime_Public_MuR_System_h_Statics::EnumInfo[] = {
		{ ETextureCompressionStrategy_StaticEnum, TEXT("ETextureCompressionStrategy"), &Z_Registration_Info_UEnum_ETextureCompressionStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 67038083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableRuntime_Public_MuR_System_h_2275278098(TEXT("/Script/MutableRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableRuntime_Public_MuR_System_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_MutableRuntime_Public_MuR_System_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
