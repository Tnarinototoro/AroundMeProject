// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Graph/GraphExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphExecuteContext() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNextGraphExecuteContext>() == std::is_polymorphic<FRigVMExecuteContext>(), "USTRUCT FAnimNextGraphExecuteContext cannot be polymorphic unless super FRigVMExecuteContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextGraphExecuteContext;
class UScriptStruct* FAnimNextGraphExecuteContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextGraphExecuteContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextGraphExecuteContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("AnimNextGraphExecuteContext"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextGraphExecuteContext.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FAnimNextGraphExecuteContext>()
{
	return FAnimNextGraphExecuteContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Internal/Graph/GraphExecuteContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextGraphExecuteContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigVMExecuteContext,
		&NewStructOps,
		"AnimNextGraphExecuteContext",
		nullptr,
		0,
		sizeof(FAnimNextGraphExecuteContext),
		alignof(FAnimNextGraphExecuteContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextGraphExecuteContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextGraphExecuteContext.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextGraphExecuteContext.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AnimNextBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_AnimNextBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBase;
class UScriptStruct* FRigUnit_AnimNextBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextBase, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("RigUnit_AnimNextBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBase.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FRigUnit_AnimNextBase>()
{
	return FRigUnit_AnimNextBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextBase_Statics::Struct_MetaDataParams[] = {
		{ "ExecuteContext", "FAnimNextGraphExecuteContext" },
		{ "ModuleRelativePath", "Internal/Graph/GraphExecuteContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_AnimNextBase",
		nullptr,
		0,
		sizeof(FRigUnit_AnimNextBase),
		alignof(FRigUnit_AnimNextBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AnimNextBase_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_GraphExecuteContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_GraphExecuteContext_h_Statics::ScriptStructInfo[] = {
		{ FAnimNextGraphExecuteContext::StaticStruct, Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext_Statics::NewStructOps, TEXT("AnimNextGraphExecuteContext"), &Z_Registration_Info_UScriptStruct_AnimNextGraphExecuteContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextGraphExecuteContext), 1199802147U) },
		{ FRigUnit_AnimNextBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextBase_Statics::NewStructOps, TEXT("RigUnit_AnimNextBase"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextBase), 2241264795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_GraphExecuteContext_h_1461679186(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_GraphExecuteContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_GraphExecuteContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
