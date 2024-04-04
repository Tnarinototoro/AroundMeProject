// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_RemapCurves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RemapCurves() {}
// Cross Module References
	CURVEEXPRESSION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RemapCurves();
	CURVEEXPRESSION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase();
	UPackage* Z_Construct_UPackage__Script_CurveExpression();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_RemapCurves>() == std::is_polymorphic<FAnimNode_RemapCurvesBase>(), "USTRUCT FAnimNode_RemapCurves cannot be polymorphic unless super FAnimNode_RemapCurvesBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RemapCurves;
class UScriptStruct* FAnimNode_RemapCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RemapCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RemapCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RemapCurves, (UObject*)Z_Construct_UPackage__Script_CurveExpression(), TEXT("AnimNode_RemapCurves"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RemapCurves.OuterSingleton;
}
template<> CURVEEXPRESSION_API UScriptStruct* StaticStruct<FAnimNode_RemapCurves>()
{
	return FAnimNode_RemapCurves::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_RemapCurves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RemapCurves_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_RemapCurves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RemapCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RemapCurves>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RemapCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CurveExpression,
		Z_Construct_UScriptStruct_FAnimNode_RemapCurvesBase,
		&NewStructOps,
		"AnimNode_RemapCurves",
		nullptr,
		0,
		sizeof(FAnimNode_RemapCurves),
		alignof(FAnimNode_RemapCurves),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RemapCurves_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_RemapCurves_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RemapCurves()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_RemapCurves.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RemapCurves.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RemapCurves_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_RemapCurves.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurves_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurves_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_RemapCurves::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RemapCurves_Statics::NewStructOps, TEXT("AnimNode_RemapCurves"), &Z_Registration_Info_UScriptStruct_AnimNode_RemapCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RemapCurves), 3267587610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurves_h_1370010793(TEXT("/Script/CurveExpression"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurves_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_AnimNode_RemapCurves_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
