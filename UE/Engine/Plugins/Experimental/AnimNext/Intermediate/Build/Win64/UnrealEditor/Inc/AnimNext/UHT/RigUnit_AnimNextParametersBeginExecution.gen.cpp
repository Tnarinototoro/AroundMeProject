// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/RigUnit_AnimNextParametersBeginExecution.h"
#include "../Internal/Param/ParametersExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AnimNextParametersBeginExecution() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AnimNextParametersBeginExecution>() == std::is_polymorphic<FRigUnit_AnimNextParametersBase>(), "USTRUCT FRigUnit_AnimNextParametersBeginExecution cannot be polymorphic unless super FRigUnit_AnimNextParametersBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBeginExecution;
class UScriptStruct* FRigUnit_AnimNextParametersBeginExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBeginExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBeginExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("RigUnit_AnimNextParametersBeginExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNextParametersBeginExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNextParametersBeginExecution::Execute"), &FRigUnit_AnimNextParametersBeginExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBeginExecution.OuterSingleton, Arguments_FRigUnit_AnimNextParametersBeginExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBeginExecution.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FRigUnit_AnimNextParametersBeginExecution>()
{
	return FRigUnit_AnimNextParametersBeginExecution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "DisplayName", "Execute" },
		{ "Keywords", "Begin,Update,Tick,Forward,Event" },
		{ "ModuleRelativePath", "Internal/Param/RigUnit_AnimNextParametersBeginExecution.h" },
		{ "NodeColor", "1, 0, 0" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextParametersBeginExecution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Internal/Param/RigUnit_AnimNextParametersBeginExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AnimNextParametersBeginExecution, ExecuteContext), Z_Construct_UScriptStruct_FAnimNextParametersExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::NewProp_ExecuteContext_MetaData), Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::NewProp_ExecuteContext_MetaData) }; // 1677647416
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::NewProp_ExecuteContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBase,
		&NewStructOps,
		"RigUnit_AnimNextParametersBeginExecution",
		Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::PropPointers),
		sizeof(FRigUnit_AnimNextParametersBeginExecution),
		alignof(FRigUnit_AnimNextParametersBeginExecution),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBeginExecution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBeginExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBeginExecution.InnerSingleton;
	}

void FRigUnit_AnimNextParametersBeginExecution::Execute()
{
	FAnimNextParametersExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNextParametersBeginExecution::Execute(FAnimNextParametersExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigUnit_AnimNextParametersBeginExecution_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigUnit_AnimNextParametersBeginExecution_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AnimNextParametersBeginExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextParametersBeginExecution_Statics::NewStructOps, TEXT("RigUnit_AnimNextParametersBeginExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextParametersBeginExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextParametersBeginExecution), 3014365064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigUnit_AnimNextParametersBeginExecution_h_1331674648(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigUnit_AnimNextParametersBeginExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Param_RigUnit_AnimNextParametersBeginExecution_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
