// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Graph/RigUnit_AnimNextBeginExecution.h"
#include "../Internal/Graph/GraphExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AnimNextBeginExecution() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextBase();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AnimNextBeginExecution>() == std::is_polymorphic<FRigUnit_AnimNextBase>(), "USTRUCT FRigUnit_AnimNextBeginExecution cannot be polymorphic unless super FRigUnit_AnimNextBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBeginExecution;
class UScriptStruct* FRigUnit_AnimNextBeginExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBeginExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBeginExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("RigUnit_AnimNextBeginExecution"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNextBeginExecution_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNextBeginExecution::Execute"), &FRigUnit_AnimNextBeginExecution::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBeginExecution.OuterSingleton, Arguments_FRigUnit_AnimNextBeginExecution_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBeginExecution.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FRigUnit_AnimNextBeginExecution>()
{
	return FRigUnit_AnimNextBeginExecution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n * Event for driving the skeleton hierarchy with variables and rig elements\n */" },
		{ "DisplayName", "Execute" },
		{ "Keywords", "Begin,Update,Tick,Forward,Event" },
		{ "ModuleRelativePath", "Internal/Graph/RigUnit_AnimNextBeginExecution.h" },
		{ "NodeColor", "1, 0, 0" },
		{ "ToolTip", "Event for driving the skeleton hierarchy with variables and rig elements" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextBeginExecution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Execute" },
		{ "ModuleRelativePath", "Internal/Graph/RigUnit_AnimNextBeginExecution.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AnimNextBeginExecution, ExecuteContext), Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::NewProp_ExecuteContext_MetaData), Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::NewProp_ExecuteContext_MetaData) }; // 1199802147
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::NewProp_ExecuteContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextBase,
		&NewStructOps,
		"RigUnit_AnimNextBeginExecution",
		Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::PropPointers),
		sizeof(FRigUnit_AnimNextBeginExecution),
		alignof(FRigUnit_AnimNextBeginExecution),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBeginExecution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBeginExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBeginExecution.InnerSingleton;
	}

void FRigUnit_AnimNextBeginExecution::Execute()
{
	FAnimNextGraphExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNextBeginExecution::Execute(FAnimNextGraphExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextBeginExecution_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextBeginExecution_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AnimNextBeginExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextBeginExecution_Statics::NewStructOps, TEXT("RigUnit_AnimNextBeginExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextBeginExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextBeginExecution), 1553608159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextBeginExecution_h_1823525963(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextBeginExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextBeginExecution_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
