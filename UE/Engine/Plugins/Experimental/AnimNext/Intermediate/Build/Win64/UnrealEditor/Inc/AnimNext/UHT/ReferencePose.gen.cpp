// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReferencePose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReferencePose() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextReferencePose();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextReferencePose;
class UScriptStruct* FAnimNextReferencePose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextReferencePose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextReferencePose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextReferencePose, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextReferencePose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextReferencePose.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextReferencePose>()
{
	return FAnimNextReferencePose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextReferencePose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextReferencePose_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// USTRUCT wrapper for reference pose\n" },
		{ "ModuleRelativePath", "Public/ReferencePose.h" },
		{ "ToolTip", "USTRUCT wrapper for reference pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextReferencePose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextReferencePose>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextReferencePose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimNextReferencePose",
		nullptr,
		0,
		sizeof(FAnimNextReferencePose),
		alignof(FAnimNextReferencePose),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextReferencePose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextReferencePose_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextReferencePose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextReferencePose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextReferencePose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextReferencePose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextReferencePose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_ReferencePose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_ReferencePose_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextReferencePose::StaticStruct, Z_Construct_UScriptStruct_FAnimNextReferencePose_Statics::NewStructOps, TEXT("AnimNextReferencePose"), &Z_Registration_Info_UScriptStruct_AnimNextReferencePose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextReferencePose), 1121392232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_ReferencePose_h_1391541155(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_ReferencePose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Public_ReferencePose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
