// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterLabelConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterLabelConfiguration() {}
// Cross Module References
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterLabelFlags;
	static UEnum* EDisplayClusterLabelFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterLabelFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterLabelFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("EDisplayClusterLabelFlags"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterLabelFlags.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UEnum* StaticEnum<EDisplayClusterLabelFlags>()
	{
		return EDisplayClusterLabelFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags_Statics::Enumerators[] = {
		{ "EDisplayClusterLabelFlags::None", (int64)EDisplayClusterLabelFlags::None },
		{ "EDisplayClusterLabelFlags::DisplayInGame", (int64)EDisplayClusterLabelFlags::DisplayInGame },
		{ "EDisplayClusterLabelFlags::DisplayInEditor", (int64)EDisplayClusterLabelFlags::DisplayInEditor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags_Statics::Enum_MetaDataParams[] = {
		{ "DisplayInEditor.Comment", "/** Label allowed to be displayed in editor */" },
		{ "DisplayInEditor.Name", "EDisplayClusterLabelFlags::DisplayInEditor" },
		{ "DisplayInEditor.ToolTip", "Label allowed to be displayed in editor" },
		{ "DisplayInGame.Comment", "/** Label allowed to be displayed in -game */" },
		{ "DisplayInGame.Name", "EDisplayClusterLabelFlags::DisplayInGame" },
		{ "DisplayInGame.ToolTip", "Label allowed to be displayed in -game" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterLabelConfiguration.h" },
		{ "None.Comment", "/** No label flags */" },
		{ "None.Name", "EDisplayClusterLabelFlags::None" },
		{ "None.ToolTip", "No label flags" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		"EDisplayClusterLabelFlags",
		"EDisplayClusterLabelFlags",
		Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterLabelFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterLabelFlags.InnerSingleton, Z_Construct_UEnum_DisplayCluster_EDisplayClusterLabelFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterLabelFlags.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLabelConfiguration_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLabelConfiguration_h_Statics::EnumInfo[] = {
		{ EDisplayClusterLabelFlags_StaticEnum, TEXT("EDisplayClusterLabelFlags"), &Z_Registration_Info_UEnum_EDisplayClusterLabelFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 918006530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLabelConfiguration_h_2361911122(TEXT("/Script/DisplayCluster"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLabelConfiguration_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLabelConfiguration_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
