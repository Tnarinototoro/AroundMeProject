// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Graph/AnimNext_LODPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNext_LODPose() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphLODPose();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphReferencePose();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextGraphReferencePose;
class UScriptStruct* FAnimNextGraphReferencePose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextGraphReferencePose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextGraphReferencePose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextGraphReferencePose, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextGraphReferencePose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextGraphReferencePose.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextGraphReferencePose>()
{
	return FAnimNextGraphReferencePose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextGraphReferencePose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextGraphReferencePose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "ReferencePose" },
		{ "ModuleRelativePath", "Internal/Graph/AnimNext_LODPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextGraphReferencePose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextGraphReferencePose>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextGraphReferencePose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimNextGraphReferencePose",
		nullptr,
		0,
		sizeof(FAnimNextGraphReferencePose),
		alignof(FAnimNextGraphReferencePose),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextGraphReferencePose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextGraphReferencePose_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphReferencePose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextGraphReferencePose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextGraphReferencePose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextGraphReferencePose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextGraphReferencePose.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextGraphLODPose;
class UScriptStruct* FAnimNextGraphLODPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextGraphLODPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextGraphLODPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextGraphLODPose, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextGraphLODPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextGraphLODPose.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextGraphLODPose>()
{
	return FAnimNextGraphLODPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextGraphLODPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextGraphLODPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "LODPose" },
		{ "ModuleRelativePath", "Internal/Graph/AnimNext_LODPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextGraphLODPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextGraphLODPose>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextGraphLODPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		nullptr,
		&NewStructOps,
		"AnimNextGraphLODPose",
		nullptr,
		0,
		sizeof(FAnimNextGraphLODPose),
		alignof(FAnimNextGraphLODPose),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextGraphLODPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextGraphLODPose_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphLODPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextGraphLODPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextGraphLODPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextGraphLODPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextGraphLODPose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimNext_LODPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimNext_LODPose_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextGraphReferencePose::StaticStruct, Z_Construct_UScriptStruct_FAnimNextGraphReferencePose_Statics::NewStructOps, TEXT("AnimNextGraphReferencePose"), &Z_Registration_Info_UScriptStruct_AnimNextGraphReferencePose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextGraphReferencePose), 2636906778U) },
		{ FAnimNextGraphLODPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNextGraphLODPose_Statics::NewStructOps, TEXT("AnimNextGraphLODPose"), &Z_Registration_Info_UScriptStruct_AnimNextGraphLODPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextGraphLODPose), 3159281171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimNext_LODPose_h_657071589(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimNext_LODPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimNext_LODPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
