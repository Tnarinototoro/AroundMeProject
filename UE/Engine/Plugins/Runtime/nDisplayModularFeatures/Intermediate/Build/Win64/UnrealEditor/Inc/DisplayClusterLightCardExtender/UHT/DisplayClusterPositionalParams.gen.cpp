// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StageActor/DisplayClusterPositionalParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterPositionalParams() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DISPLAYCLUSTERLIGHTCARDEXTENDER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterPositionalParams();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterLightCardExtender();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterPositionalParams;
class UScriptStruct* FDisplayClusterPositionalParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterPositionalParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterPositionalParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams, (UObject*)Z_Construct_UPackage__Script_DisplayClusterLightCardExtender(), TEXT("DisplayClusterPositionalParams"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterPositionalParams.OuterSingleton;
}
template<> DISPLAYCLUSTERLIGHTCARDEXTENDER_API UScriptStruct* StaticStruct<FDisplayClusterPositionalParams>()
{
	return FDisplayClusterPositionalParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromCenter_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceFromCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spin_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Spin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RadialOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Positional location and rotation parameters for use with nDisplay stage actors.\n * Note that the origin point is purposely not included as these parameters are meant to be shared between actors\n * with different origins.\n */" },
		{ "ModuleRelativePath", "Public/StageActor/DisplayClusterPositionalParams.h" },
		{ "ToolTip", "Positional location and rotation parameters for use with nDisplay stage actors.\nNote that the origin point is purposely not included as these parameters are meant to be shared between actors\nwith different origins." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterPositionalParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_DistanceFromCenter_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/StageActor/DisplayClusterPositionalParams.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_DistanceFromCenter = { "DistanceFromCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterPositionalParams, DistanceFromCenter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_DistanceFromCenter_MetaData), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_DistanceFromCenter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/StageActor/DisplayClusterPositionalParams.h" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterPositionalParams, Longitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Longitude_MetaData), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Longitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "90" },
		{ "ClampMin", "-90" },
		{ "ModuleRelativePath", "Public/StageActor/DisplayClusterPositionalParams.h" },
		{ "UIMax", "90" },
		{ "UIMin", "-90" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterPositionalParams, Latitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Latitude_MetaData), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Latitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Spin_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "ModuleRelativePath", "Public/StageActor/DisplayClusterPositionalParams.h" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Spin = { "Spin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterPositionalParams, Spin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Spin_MetaData), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Spin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "ModuleRelativePath", "Public/StageActor/DisplayClusterPositionalParams.h" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterPositionalParams, Pitch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Pitch_MetaData), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Pitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "ModuleRelativePath", "Public/StageActor/DisplayClusterPositionalParams.h" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterPositionalParams, Yaw), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Yaw_MetaData), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Yaw_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_RadialOffset_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/StageActor/DisplayClusterPositionalParams.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_RadialOffset = { "RadialOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterPositionalParams, RadialOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_RadialOffset_MetaData), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_RadialOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/StageActor/DisplayClusterPositionalParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterPositionalParams, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Scale_MetaData), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_DistanceFromCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Spin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_RadialOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterLightCardExtender,
		nullptr,
		&NewStructOps,
		"DisplayClusterPositionalParams",
		Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::PropPointers),
		sizeof(FDisplayClusterPositionalParams),
		alignof(FDisplayClusterPositionalParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterPositionalParams()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterPositionalParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterPositionalParams.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterPositionalParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_DisplayClusterPositionalParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_DisplayClusterPositionalParams_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterPositionalParams::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterPositionalParams_Statics::NewStructOps, TEXT("DisplayClusterPositionalParams"), &Z_Registration_Info_UScriptStruct_DisplayClusterPositionalParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterPositionalParams), 1161446166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_DisplayClusterPositionalParams_h_1139534661(TEXT("/Script/DisplayClusterLightCardExtender"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_DisplayClusterPositionalParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplayModularFeatures_Source_DisplayClusterLightCardExtender_Public_StageActor_DisplayClusterPositionalParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
