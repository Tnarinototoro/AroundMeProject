// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Visualizers/ChaosVDCollisionDataVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDCollisionDataVisualizer() {}
// Cross Module References
	CHAOSVD_API UEnum* Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags();
	UPackage* Z_Construct_UPackage__Script_ChaosVD();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDCollisionVisualizationFlags;
	static UEnum* EChaosVDCollisionVisualizationFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosVDCollisionVisualizationFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosVDCollisionVisualizationFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVD(), TEXT("EChaosVDCollisionVisualizationFlags"));
		}
		return Z_Registration_Info_UEnum_EChaosVDCollisionVisualizationFlags.OuterSingleton;
	}
	template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDCollisionVisualizationFlags>()
	{
		return EChaosVDCollisionVisualizationFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags_Statics::Enumerators[] = {
		{ "EChaosVDCollisionVisualizationFlags::None", (int64)EChaosVDCollisionVisualizationFlags::None },
		{ "EChaosVDCollisionVisualizationFlags::ContactPoints", (int64)EChaosVDCollisionVisualizationFlags::ContactPoints },
		{ "EChaosVDCollisionVisualizationFlags::NetPushOut", (int64)EChaosVDCollisionVisualizationFlags::NetPushOut },
		{ "EChaosVDCollisionVisualizationFlags::NetImpulse", (int64)EChaosVDCollisionVisualizationFlags::NetImpulse },
		{ "EChaosVDCollisionVisualizationFlags::ContactNormal", (int64)EChaosVDCollisionVisualizationFlags::ContactNormal },
		{ "EChaosVDCollisionVisualizationFlags::AccumulatedImpulse", (int64)EChaosVDCollisionVisualizationFlags::AccumulatedImpulse },
		{ "EChaosVDCollisionVisualizationFlags::DrawOnlyActiveContacts", (int64)EChaosVDCollisionVisualizationFlags::DrawOnlyActiveContacts },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags_Statics::Enum_MetaDataParams[] = {
		{ "AccumulatedImpulse.Name", "EChaosVDCollisionVisualizationFlags::AccumulatedImpulse" },
		{ "Bitflags", "" },
		{ "ContactNormal.Name", "EChaosVDCollisionVisualizationFlags::ContactNormal" },
		{ "ContactPoints.Name", "EChaosVDCollisionVisualizationFlags::ContactPoints" },
		{ "DrawOnlyActiveContacts.Name", "EChaosVDCollisionVisualizationFlags::DrawOnlyActiveContacts" },
		{ "ModuleRelativePath", "Public/Visualizers/ChaosVDCollisionDataVisualizer.h" },
		{ "NetImpulse.Name", "EChaosVDCollisionVisualizationFlags::NetImpulse" },
		{ "NetPushOut.Name", "EChaosVDCollisionVisualizationFlags::NetPushOut" },
		{ "None.Hidden", "" },
		{ "None.Name", "EChaosVDCollisionVisualizationFlags::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosVD,
		nullptr,
		"EChaosVDCollisionVisualizationFlags",
		"EChaosVDCollisionVisualizationFlags",
		Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags()
	{
		if (!Z_Registration_Info_UEnum_EChaosVDCollisionVisualizationFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDCollisionVisualizationFlags.InnerSingleton, Z_Construct_UEnum_ChaosVD_EChaosVDCollisionVisualizationFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosVDCollisionVisualizationFlags.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDCollisionDataVisualizer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDCollisionDataVisualizer_h_Statics::EnumInfo[] = {
		{ EChaosVDCollisionVisualizationFlags_StaticEnum, TEXT("EChaosVDCollisionVisualizationFlags"), &Z_Registration_Info_UEnum_EChaosVDCollisionVisualizationFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3555330424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDCollisionDataVisualizer_h_344366867(TEXT("/Script/ChaosVD"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDCollisionDataVisualizer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVD_Source_ChaosVD_Public_Visualizers_ChaosVDCollisionDataVisualizer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
