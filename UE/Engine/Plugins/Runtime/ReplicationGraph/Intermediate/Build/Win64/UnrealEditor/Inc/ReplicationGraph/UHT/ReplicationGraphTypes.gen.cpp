// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplicationGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationGraphTypes() {}
// Cross Module References
	REPLICATIONGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FClassReplicationInfo();
	UPackage* Z_Construct_UPackage__Script_ReplicationGraph();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassReplicationInfo;
class UScriptStruct* FClassReplicationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassReplicationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassReplicationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassReplicationInfo, (UObject*)Z_Construct_UPackage__Script_ReplicationGraph(), TEXT("ClassReplicationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ClassReplicationInfo.OuterSingleton;
}
template<> REPLICATIONGRAPH_API UScriptStruct* StaticStruct<FClassReplicationInfo>()
{
	return FClassReplicationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassReplicationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistancePriorityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistancePriorityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarvationPriorityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarvationPriorityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedNetPriorityBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedNetPriorityBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationPeriodFrame_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_ReplicationPeriodFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastPath_ReplicationPeriodFrame_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_FastPath_ReplicationPeriodFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorChannelFrameTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_ActorChannelFrameTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullDistanceSquared_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CullDistanceSquared;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Per-Class actor data about how the actor replicates */" },
		{ "ModuleRelativePath", "Public/ReplicationGraphTypes.h" },
		{ "ToolTip", "Per-Class actor data about how the actor replicates" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassReplicationInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_DistancePriorityScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_DistancePriorityScale = { "DistancePriorityScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassReplicationInfo, DistancePriorityScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_DistancePriorityScale_MetaData), Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_DistancePriorityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_StarvationPriorityScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_StarvationPriorityScale = { "StarvationPriorityScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassReplicationInfo, StarvationPriorityScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_StarvationPriorityScale_MetaData), Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_StarvationPriorityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_AccumulatedNetPriorityBias_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_AccumulatedNetPriorityBias = { "AccumulatedNetPriorityBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassReplicationInfo, AccumulatedNetPriorityBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_AccumulatedNetPriorityBias_MetaData), Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_AccumulatedNetPriorityBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_ReplicationPeriodFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_ReplicationPeriodFrame = { "ReplicationPeriodFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassReplicationInfo, ReplicationPeriodFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_ReplicationPeriodFrame_MetaData), Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_ReplicationPeriodFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_FastPath_ReplicationPeriodFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_FastPath_ReplicationPeriodFrame = { "FastPath_ReplicationPeriodFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassReplicationInfo, FastPath_ReplicationPeriodFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_FastPath_ReplicationPeriodFrame_MetaData), Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_FastPath_ReplicationPeriodFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_ActorChannelFrameTimeout_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_ActorChannelFrameTimeout = { "ActorChannelFrameTimeout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassReplicationInfo, ActorChannelFrameTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_ActorChannelFrameTimeout_MetaData), Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_ActorChannelFrameTimeout_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_CullDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassReplicationInfo, CullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_CullDistance_MetaData), Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_CullDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_CullDistanceSquared_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicationGraphTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_CullDistanceSquared = { "CullDistanceSquared", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassReplicationInfo, CullDistanceSquared), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_CullDistanceSquared_MetaData), Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_CullDistanceSquared_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_DistancePriorityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_StarvationPriorityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_AccumulatedNetPriorityBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_ReplicationPeriodFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_FastPath_ReplicationPeriodFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_ActorChannelFrameTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_CullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewProp_CullDistanceSquared,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReplicationGraph,
		nullptr,
		&NewStructOps,
		"ClassReplicationInfo",
		Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::PropPointers),
		sizeof(FClassReplicationInfo),
		alignof(FClassReplicationInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FClassReplicationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassReplicationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassReplicationInfo.InnerSingleton, Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassReplicationInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraphTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraphTypes_h_Statics::ScriptStructInfo[] = {
		{ FClassReplicationInfo::StaticStruct, Z_Construct_UScriptStruct_FClassReplicationInfo_Statics::NewStructOps, TEXT("ClassReplicationInfo"), &Z_Registration_Info_UScriptStruct_ClassReplicationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassReplicationInfo), 1907626283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraphTypes_h_2714288216(TEXT("/Script/ReplicationGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraphTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_ReplicationGraphTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
