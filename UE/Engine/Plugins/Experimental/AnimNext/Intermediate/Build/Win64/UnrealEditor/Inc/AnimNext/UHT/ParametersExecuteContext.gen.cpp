// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/ParametersExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParametersExecuteContext() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNextParametersExecuteContext>() == std::is_polymorphic<FAnimNextGraphExecuteContext>(), "USTRUCT FAnimNextParametersExecuteContext cannot be polymorphic unless super FAnimNextGraphExecuteContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextParametersExecuteContext;
class UScriptStruct* FAnimNextParametersExecuteContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextParametersExecuteContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextParametersExecuteContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextParametersExecuteContext"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextParametersExecuteContext.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextParametersExecuteContext>()
{
	return FAnimNextParametersExecuteContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Internal/Param/ParametersExecuteContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextParametersExecuteContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext,
		&NewStructOps,
		"AnimNextParametersExecuteContext",
		nullptr,
		0,
		sizeof(FAnimNextParametersExecuteContext),
		alignof(FAnimNextParametersExecuteContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextParametersExecuteContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextParametersExecuteContext.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextParametersExecuteContext.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AnimNextParametersBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_AnimNextParametersBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBase;
class UScriptStruct* FRigUnit_AnimNextParametersBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("RigUnit_AnimNextParametersBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBase.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FRigUnit_AnimNextParametersBase>()
{
	return FRigUnit_AnimNextParametersBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase_Statics::Struct_MetaDataParams[] = {
		{ "ExecuteContext", "FAnimNextParametersExecuteContext" },
		{ "ModuleRelativePath", "Internal/Param/ParametersExecuteContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextParametersBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_AnimNextParametersBase",
		nullptr,
		0,
		sizeof(FRigUnit_AnimNextParametersBase),
		alignof(FRigUnit_AnimNextParametersBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_ParametersExecuteContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_ParametersExecuteContext_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextParametersExecuteContext::StaticStruct, Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext_Statics::NewStructOps, TEXT("AnimNextParametersExecuteContext"), &Z_Registration_Info_UScriptStruct_AnimNextParametersExecuteContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextParametersExecuteContext), 1677647416U) },
		{ FRigUnit_AnimNextParametersBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase_Statics::NewStructOps, TEXT("RigUnit_AnimNextParametersBase"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextParametersBase), 1010019705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_ParametersExecuteContext_h_1402951437(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_ParametersExecuteContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_ParametersExecuteContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
