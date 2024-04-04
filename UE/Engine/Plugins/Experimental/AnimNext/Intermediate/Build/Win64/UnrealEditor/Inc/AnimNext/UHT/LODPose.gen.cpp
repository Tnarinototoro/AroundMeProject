// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LODPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODPose() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextLODPose();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextLODPose;
class UScriptStruct* FAnimNextLODPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextLODPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextLODPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextLODPose, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextLODPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextLODPose.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextLODPose>()
{
	return FAnimNextLODPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextLODPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextLODPose_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// USTRUCT wrapper for LOD pose\n" },
		{ "ModuleRelativePath", "Public/LODPose.h" },
		{ "ToolTip", "USTRUCT wrapper for LOD pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextLODPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextLODPose>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextLODPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimNextLODPose",
		nullptr,
		0,
		sizeof(FAnimNextLODPose),
		alignof(FAnimNextLODPose),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextLODPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextLODPose_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextLODPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextLODPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextLODPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextLODPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextLODPose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_LODPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_LODPose_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextLODPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNextLODPose_Statics::NewStructOps, TEXT("AnimNextLODPose"), &Z_Registration_Info_UScriptStruct_AnimNextLODPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextLODPose), 2327910503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_LODPose_h_2228890219(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_LODPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_LODPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
