// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LiveLinkPrestonMDRTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPrestonMDRTypes() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraStaticData();
	LIVELINKPRESTONMDR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData();
	LIVELINKPRESTONMDR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData();
	LIVELINKPRESTONMDR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkPrestonMDR();
// End Cross Module References

static_assert(std::is_polymorphic<FLiveLinkPrestonMDRStaticData>() == std::is_polymorphic<FLiveLinkCameraStaticData>(), "USTRUCT FLiveLinkPrestonMDRStaticData cannot be polymorphic unless super FLiveLinkCameraStaticData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRStaticData;
class UScriptStruct* FLiveLinkPrestonMDRStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkPrestonMDR(), TEXT("LiveLinkPrestonMDRStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRStaticData.OuterSingleton;
}
template<> LIVELINKPRESTONMDR_API UScriptStruct* StaticStruct<FLiveLinkPrestonMDRStaticData>()
{
	return FLiveLinkPrestonMDRStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct for static Preston MDR data\n */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRTypes.h" },
		{ "ToolTip", "Struct for static Preston MDR data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPrestonMDRStaticData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkPrestonMDR,
		Z_Construct_UScriptStruct_FLiveLinkCameraStaticData,
		&NewStructOps,
		"LiveLinkPrestonMDRStaticData",
		nullptr,
		0,
		sizeof(FLiveLinkPrestonMDRStaticData),
		alignof(FLiveLinkPrestonMDRStaticData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRStaticData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkPrestonMDRFrameData>() == std::is_polymorphic<FLiveLinkCameraFrameData>(), "USTRUCT FLiveLinkPrestonMDRFrameData cannot be polymorphic unless super FLiveLinkCameraFrameData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRFrameData;
class UScriptStruct* FLiveLinkPrestonMDRFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkPrestonMDR(), TEXT("LiveLinkPrestonMDRFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRFrameData.OuterSingleton;
}
template<> LIVELINKPRESTONMDR_API UScriptStruct* StaticStruct<FLiveLinkPrestonMDRFrameData>()
{
	return FLiveLinkPrestonMDRFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawFocusEncoderValue_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_RawFocusEncoderValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawIrisEncoderValue_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_RawIrisEncoderValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawZoomEncoderValue_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_RawZoomEncoderValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct for dynamic (per-frame) Preston MDR data\n */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRTypes.h" },
		{ "ToolTip", "Struct for dynamic (per-frame) Preston MDR data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPrestonMDRFrameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawFocusEncoderValue_MetaData[] = {
		{ "Category", "Raw Encoder Values" },
		{ "Comment", "/** Raw encoder value for focus motor */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRTypes.h" },
		{ "ToolTip", "Raw encoder value for focus motor" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawFocusEncoderValue = { "RawFocusEncoderValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPrestonMDRFrameData, RawFocusEncoderValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawFocusEncoderValue_MetaData), Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawFocusEncoderValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawIrisEncoderValue_MetaData[] = {
		{ "Category", "Raw Encoder Values" },
		{ "Comment", "/** Raw encoder value for iris motor */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRTypes.h" },
		{ "ToolTip", "Raw encoder value for iris motor" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawIrisEncoderValue = { "RawIrisEncoderValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPrestonMDRFrameData, RawIrisEncoderValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawIrisEncoderValue_MetaData), Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawIrisEncoderValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawZoomEncoderValue_MetaData[] = {
		{ "Category", "Raw Encoder Values" },
		{ "Comment", "/** Raw encoder value for zoom motor */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRTypes.h" },
		{ "ToolTip", "Raw encoder value for zoom motor" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawZoomEncoderValue = { "RawZoomEncoderValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPrestonMDRFrameData, RawZoomEncoderValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawZoomEncoderValue_MetaData), Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawZoomEncoderValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawFocusEncoderValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawIrisEncoderValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewProp_RawZoomEncoderValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkPrestonMDR,
		Z_Construct_UScriptStruct_FLiveLinkCameraFrameData,
		&NewStructOps,
		"LiveLinkPrestonMDRFrameData",
		Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::PropPointers),
		sizeof(FLiveLinkPrestonMDRFrameData),
		alignof(FLiveLinkPrestonMDRFrameData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRFrameData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkPrestonMDRBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkPrestonMDRBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRBlueprintData;
class UScriptStruct* FLiveLinkPrestonMDRBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkPrestonMDR(), TEXT("LiveLinkPrestonMDRBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRBlueprintData.OuterSingleton;
}
template<> LIVELINKPRESTONMDR_API UScriptStruct* StaticStruct<FLiveLinkPrestonMDRBlueprintData>()
{
	return FLiveLinkPrestonMDRBlueprintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle Preston MDR data in blueprint\n */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRTypes.h" },
		{ "ToolTip", "Facility structure to handle Preston MDR data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPrestonMDRBlueprintData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewProp_StaticData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Static data that should not change every frame */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPrestonMDRBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewProp_StaticData_MetaData), Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewProp_StaticData_MetaData) }; // 1633215589
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewProp_FrameData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Dynamic data that can change every frame  */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLiveLinkPrestonMDRBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewProp_FrameData_MetaData), Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewProp_FrameData_MetaData) }; // 2165890359
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewProp_StaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewProp_FrameData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkPrestonMDR,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"LiveLinkPrestonMDRBlueprintData",
		Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::PropPointers),
		sizeof(FLiveLinkPrestonMDRBlueprintData),
		alignof(FLiveLinkPrestonMDRBlueprintData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRBlueprintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRBlueprintData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRTypes_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkPrestonMDRStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkPrestonMDRStaticData_Statics::NewStructOps, TEXT("LiveLinkPrestonMDRStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkPrestonMDRStaticData), 1633215589U) },
		{ FLiveLinkPrestonMDRFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkPrestonMDRFrameData_Statics::NewStructOps, TEXT("LiveLinkPrestonMDRFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkPrestonMDRFrameData), 2165890359U) },
		{ FLiveLinkPrestonMDRBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkPrestonMDRBlueprintData_Statics::NewStructOps, TEXT("LiveLinkPrestonMDRBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkPrestonMDRBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkPrestonMDRBlueprintData), 1030947595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRTypes_h_766094261(TEXT("/Script/LiveLinkPrestonMDR"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
