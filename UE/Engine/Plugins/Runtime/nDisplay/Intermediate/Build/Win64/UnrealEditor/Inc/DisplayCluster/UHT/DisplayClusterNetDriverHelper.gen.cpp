// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cluster/DisplayClusterNetDriverHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterNetDriverHelper() {}
// Cross Module References
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterNetDriverHelper();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterNetDriverHelper;
class UScriptStruct* FDisplayClusterNetDriverHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterNetDriverHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterNetDriverHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterNetDriverHelper, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("DisplayClusterNetDriverHelper"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterNetDriverHelper.OuterSingleton;
}
template<> DISPLAYCLUSTER_API UScriptStruct* StaticStruct<FDisplayClusterNetDriverHelper>()
{
	return FDisplayClusterNetDriverHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterNetDriverHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterNetDriverHelper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper for DisplayCluster synchronous replication\n */" },
		{ "ModuleRelativePath", "Public/Cluster/DisplayClusterNetDriverHelper.h" },
		{ "ToolTip", "Helper for DisplayCluster synchronous replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterNetDriverHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterNetDriverHelper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterNetDriverHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		&NewStructOps,
		"DisplayClusterNetDriverHelper",
		nullptr,
		0,
		sizeof(FDisplayClusterNetDriverHelper),
		alignof(FDisplayClusterNetDriverHelper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterNetDriverHelper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterNetDriverHelper_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterNetDriverHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterNetDriverHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterNetDriverHelper.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterNetDriverHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterNetDriverHelper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_DisplayClusterNetDriverHelper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_DisplayClusterNetDriverHelper_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterNetDriverHelper::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterNetDriverHelper_Statics::NewStructOps, TEXT("DisplayClusterNetDriverHelper"), &Z_Registration_Info_UScriptStruct_DisplayClusterNetDriverHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterNetDriverHelper), 1490310789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_DisplayClusterNetDriverHelper_h_1989952410(TEXT("/Script/DisplayCluster"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_DisplayClusterNetDriverHelper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_DisplayClusterNetDriverHelper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
