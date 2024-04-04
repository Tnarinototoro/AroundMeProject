// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionTrajectory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionTrajectory() {}
// Cross Module References
	MOTIONTRAJECTORY_API UScriptStruct* Z_Construct_UScriptStruct_FMotionTrajectorySettings();
	UPackage* Z_Construct_UPackage__Script_MotionTrajectory();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionTrajectorySettings;
class UScriptStruct* FMotionTrajectorySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionTrajectorySettings, (UObject*)Z_Construct_UPackage__Script_MotionTrajectory(), TEXT("MotionTrajectorySettings"));
	}
	return Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.OuterSingleton;
}
template<> MOTIONTRAJECTORY_API UScriptStruct* StaticStruct<FMotionTrajectorySettings>()
{
	return FMotionTrajectorySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Specifies the chosen domain parameters for trajectory sample retention and creation\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "Specifies the chosen domain parameters for trajectory sample retention and creation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionTrajectorySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Sample time horizon\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "Sample time horizon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionTrajectorySettings, Seconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewProp_Seconds_MetaData), Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewProp_Seconds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewProp_Seconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionTrajectory,
		nullptr,
		&NewStructOps,
		"MotionTrajectorySettings",
		Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::PropPointers),
		sizeof(FMotionTrajectorySettings),
		alignof(FMotionTrajectorySettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMotionTrajectorySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.InnerSingleton, Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_Statics::ScriptStructInfo[] = {
		{ FMotionTrajectorySettings::StaticStruct, Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewStructOps, TEXT("MotionTrajectorySettings"), &Z_Registration_Info_UScriptStruct_MotionTrajectorySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionTrajectorySettings), 1806110510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_2393910801(TEXT("/Script/MotionTrajectory"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
