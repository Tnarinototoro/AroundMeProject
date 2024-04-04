// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Visualizers/ChaosVDParticleDataVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDParticleDataVisualizer() {}
// Cross Module References
	CHAOSVD_API UEnum* Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags();
	UPackage* Z_Construct_UPackage__Script_ChaosVD();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDParticleDataVisualizationFlags;
	static UEnum* EChaosVDParticleDataVisualizationFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosVDParticleDataVisualizationFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosVDParticleDataVisualizationFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVD(), TEXT("EChaosVDParticleDataVisualizationFlags"));
		}
		return Z_Registration_Info_UEnum_EChaosVDParticleDataVisualizationFlags.OuterSingleton;
	}
	template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDParticleDataVisualizationFlags>()
	{
		return EChaosVDParticleDataVisualizationFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags_Statics::Enumerators[] = {
		{ "EChaosVDParticleDataVisualizationFlags::None", (int64)EChaosVDParticleDataVisualizationFlags::None },
		{ "EChaosVDParticleDataVisualizationFlags::Velocity", (int64)EChaosVDParticleDataVisualizationFlags::Velocity },
		{ "EChaosVDParticleDataVisualizationFlags::AngularVelocity", (int64)EChaosVDParticleDataVisualizationFlags::AngularVelocity },
		{ "EChaosVDParticleDataVisualizationFlags::Acceleration", (int64)EChaosVDParticleDataVisualizationFlags::Acceleration },
		{ "EChaosVDParticleDataVisualizationFlags::AngularAcceleration", (int64)EChaosVDParticleDataVisualizationFlags::AngularAcceleration },
		{ "EChaosVDParticleDataVisualizationFlags::LinearImpulse", (int64)EChaosVDParticleDataVisualizationFlags::LinearImpulse },
		{ "EChaosVDParticleDataVisualizationFlags::AngularImpulse", (int64)EChaosVDParticleDataVisualizationFlags::AngularImpulse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags_Statics::Enum_MetaDataParams[] = {
		{ "Acceleration.Name", "EChaosVDParticleDataVisualizationFlags::Acceleration" },
		{ "AngularAcceleration.Name", "EChaosVDParticleDataVisualizationFlags::AngularAcceleration" },
		{ "AngularImpulse.Name", "EChaosVDParticleDataVisualizationFlags::AngularImpulse" },
		{ "AngularVelocity.Name", "EChaosVDParticleDataVisualizationFlags::AngularVelocity" },
		{ "Bitflags", "" },
		{ "LinearImpulse.Name", "EChaosVDParticleDataVisualizationFlags::LinearImpulse" },
		{ "ModuleRelativePath", "Public/Visualizers/ChaosVDParticleDataVisualizer.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EChaosVDParticleDataVisualizationFlags::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "Velocity.Name", "EChaosVDParticleDataVisualizationFlags::Velocity" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosVD,
		nullptr,
		"EChaosVDParticleDataVisualizationFlags",
		"EChaosVDParticleDataVisualizationFlags",
		Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags()
	{
		if (!Z_Registration_Info_UEnum_EChaosVDParticleDataVisualizationFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDParticleDataVisualizationFlags.InnerSingleton, Z_Construct_UEnum_ChaosVD_EChaosVDParticleDataVisualizationFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosVDParticleDataVisualizationFlags.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDParticleDataVisualizer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDParticleDataVisualizer_h_Statics::EnumInfo[] = {
		{ EChaosVDParticleDataVisualizationFlags_StaticEnum, TEXT("EChaosVDParticleDataVisualizationFlags"), &Z_Registration_Info_UEnum_EChaosVDParticleDataVisualizationFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1536636886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDParticleDataVisualizer_h_1895715597(TEXT("/Script/ChaosVD"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDParticleDataVisualizer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDParticleDataVisualizer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
