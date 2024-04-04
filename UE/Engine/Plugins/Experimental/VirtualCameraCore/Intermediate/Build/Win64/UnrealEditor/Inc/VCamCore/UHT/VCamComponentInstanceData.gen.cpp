// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamComponentInstanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamComponentInstanceData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamComponentInstanceData();
// End Cross Module References

static_assert(std::is_polymorphic<FVCamComponentInstanceData>() == std::is_polymorphic<FSceneComponentInstanceData>(), "USTRUCT FVCamComponentInstanceData cannot be polymorphic unless super FSceneComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamComponentInstanceData;
class UScriptStruct* FVCamComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("VCamComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_VCamComponentInstanceData.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FVCamComponentInstanceData>()
{
	return FVCamComponentInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Saves internal UVCamComponent state for Blueprint created components. */" },
		{ "ModuleRelativePath", "Public/VCamComponentInstanceData.h" },
		{ "ToolTip", "Saves internal UVCamComponent state for Blueprint created components." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamComponentInstanceData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"VCamComponentInstanceData",
		nullptr,
		0,
		sizeof(FVCamComponentInstanceData),
		alignof(FVCamComponentInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamComponentInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVCamComponentInstanceData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVCamComponentInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamComponentInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FVCamComponentInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamComponentInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponentInstanceData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponentInstanceData_h_Statics::ScriptStructInfo[] = {
		{ FVCamComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FVCamComponentInstanceData_Statics::NewStructOps, TEXT("VCamComponentInstanceData"), &Z_Registration_Info_UScriptStruct_VCamComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamComponentInstanceData), 75683746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponentInstanceData_h_2959960251(TEXT("/Script/VCamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponentInstanceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponentInstanceData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
