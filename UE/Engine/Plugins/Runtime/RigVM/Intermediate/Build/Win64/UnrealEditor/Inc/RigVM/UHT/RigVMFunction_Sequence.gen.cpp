// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Execution/RigVMFunction_Sequence.h"
#include "RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_Sequence() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_Sequence();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_Sequence>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_Sequence cannot be polymorphic unless super FRigVMStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence;
class UScriptStruct* FRigVMFunction_Sequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_Sequence, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_Sequence"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_Sequence_Execute;
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_Sequence::Execute"), &FRigVMFunction_Sequence::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.OuterSingleton, Arguments_FRigVMFunction_Sequence_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_Sequence>()
{
	return FRigVMFunction_Sequence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Execution" },
		{ "Comment", "/**\n * Allows for a single execution pulse to trigger a series of events in order.\n */" },
		{ "DisplayName", "Sequence" },
		{ "Icon", "EditorStyle|GraphEditor.Sequence_16x" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_Sequence.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Allows for a single execution pulse to trigger a series of events in order." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_Sequence>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution input\n" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_Sequence.h" },
		{ "ToolTip", "The execution input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_Sequence, ExecuteContext), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_ExecuteContext_MetaData), Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_ExecuteContext_MetaData) }; // 2528636812
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_A_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result A\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_Sequence.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result A" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_Sequence, A), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_A_MetaData), Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_A_MetaData) }; // 2528636812
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_B_MetaData[] = {
		{ "Aggregate", "" },
		{ "Category", "SequenceExecution" },
		{ "Comment", "// The execution result B\n" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Execution/RigVMFunction_Sequence.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result B" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigVMFunction_Sequence, B), Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_B_MetaData), Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_B_MetaData) }; // 2528636812
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_ExecuteContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewProp_B,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMStruct,
		&NewStructOps,
		"RigVMFunction_Sequence",
		Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::PropPointers),
		sizeof(FRigVMFunction_Sequence),
		alignof(FRigVMFunction_Sequence),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_Sequence()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence.InnerSingleton;
	}

void FRigVMFunction_Sequence::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_Sequence::Execute(FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Sequence_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Sequence_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_Sequence::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_Sequence_Statics::NewStructOps, TEXT("RigVMFunction_Sequence"), &Z_Registration_Info_UScriptStruct_RigVMFunction_Sequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_Sequence), 2242430156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Sequence_h_2825509934(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Sequence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_Sequence_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
