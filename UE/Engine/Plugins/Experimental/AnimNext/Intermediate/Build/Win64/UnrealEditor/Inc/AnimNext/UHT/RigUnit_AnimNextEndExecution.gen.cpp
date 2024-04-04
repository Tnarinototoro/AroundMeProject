// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Graph/RigUnit_AnimNextEndExecution.h"
#include "../Internal/Graph/AnimNext_LODPose.h"
#include "../Internal/Graph/GraphExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AnimNextEndExecution() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextGraphLODPose();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextBase();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float();
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AnimNextEndExecution>() == std::is_polymorphic<FRigUnit_AnimNextBase>(), "USTRUCT FRigUnit_AnimNextEndExecution cannot be polymorphic unless super FRigUnit_AnimNextBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution;
class UScriptStruct* FRigUnit_AnimNextEndExecution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("RigUnit_AnimNextEndExecution"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FRigUnit_AnimNextEndExecution>()
{
	return FRigUnit_AnimNextEndExecution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Event for writing back calculated results to external variables */" },
		{ "DisplayName", "End Execute" },
		{ "ModuleRelativePath", "Internal/Graph/RigUnit_AnimNextEndExecution.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Event for writing back calculated results to external variables" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextEndExecution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "EndExecution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "End Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Internal/Graph/RigUnit_AnimNextEndExecution.h" },
		{ "ToolTip", "The execution result" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AnimNextEndExecution, ExecuteContext), Z_Construct_UScriptStruct_FAnimNextGraphExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::NewProp_ExecuteContext_MetaData), Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::NewProp_ExecuteContext_MetaData) }; // 1199802147
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::NewProp_ExecuteContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextBase,
		&NewStructOps,
		"RigUnit_AnimNextEndExecution",
		Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::PropPointers),
		sizeof(FRigUnit_AnimNextEndExecution),
		alignof(FRigUnit_AnimNextEndExecution),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AnimNextEndExecution_Bool>() == std::is_polymorphic<FRigUnit_AnimNextEndExecution>(), "USTRUCT FRigUnit_AnimNextEndExecution_Bool cannot be polymorphic unless super FRigUnit_AnimNextEndExecution is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Bool;
class UScriptStruct* FRigUnit_AnimNextEndExecution_Bool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Bool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Bool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("RigUnit_AnimNextEndExecution_Bool"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNextEndExecution_Bool_Execute;
		Arguments_FRigUnit_AnimNextEndExecution_Bool_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNextEndExecution_Bool::Execute"), &FRigUnit_AnimNextEndExecution_Bool::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Bool.OuterSingleton, Arguments_FRigUnit_AnimNextEndExecution_Bool_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Bool.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FRigUnit_AnimNextEndExecution_Bool>()
{
	return FRigUnit_AnimNextEndExecution_Bool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Event for writing back a calculated bool */" },
		{ "DisplayName", "End Execute Bool" },
		{ "ModuleRelativePath", "Internal/Graph/RigUnit_AnimNextEndExecution.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Event for writing back a calculated bool" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextEndExecution_Bool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Result" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Internal/Graph/RigUnit_AnimNextEndExecution.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_AnimNextEndExecution_Bool*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_AnimNextEndExecution_Bool), &Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::NewProp_Result_MetaData), Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::NewProp_Result_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution,
		&NewStructOps,
		"RigUnit_AnimNextEndExecution_Bool",
		Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::PropPointers),
		sizeof(FRigUnit_AnimNextEndExecution_Bool),
		alignof(FRigUnit_AnimNextEndExecution_Bool),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Bool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Bool.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Bool.InnerSingleton;
	}

void FRigUnit_AnimNextEndExecution_Bool::Execute()
{
	FAnimNextGraphExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNextEndExecution_Bool::Execute(FAnimNextGraphExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_AnimNextEndExecution_Float>() == std::is_polymorphic<FRigUnit_AnimNextEndExecution>(), "USTRUCT FRigUnit_AnimNextEndExecution_Float cannot be polymorphic unless super FRigUnit_AnimNextEndExecution is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Float;
class UScriptStruct* FRigUnit_AnimNextEndExecution_Float::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Float.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Float.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("RigUnit_AnimNextEndExecution_Float"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNextEndExecution_Float_Execute;
		Arguments_FRigUnit_AnimNextEndExecution_Float_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNextEndExecution_Float::Execute"), &FRigUnit_AnimNextEndExecution_Float::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Float.OuterSingleton, Arguments_FRigUnit_AnimNextEndExecution_Float_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Float.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FRigUnit_AnimNextEndExecution_Float>()
{
	return FRigUnit_AnimNextEndExecution_Float::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Event for writing back a calculated float */" },
		{ "DisplayName", "End Execute Float" },
		{ "ModuleRelativePath", "Internal/Graph/RigUnit_AnimNextEndExecution.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Event for writing back a calculated float" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextEndExecution_Float>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Result" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Internal/Graph/RigUnit_AnimNextEndExecution.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AnimNextEndExecution_Float, Result), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::NewProp_Result_MetaData), Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::NewProp_Result_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution,
		&NewStructOps,
		"RigUnit_AnimNextEndExecution_Float",
		Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::PropPointers),
		sizeof(FRigUnit_AnimNextEndExecution_Float),
		alignof(FRigUnit_AnimNextEndExecution_Float),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Float.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Float.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Float.InnerSingleton;
	}

void FRigUnit_AnimNextEndExecution_Float::Execute()
{
	FAnimNextGraphExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNextEndExecution_Float::Execute(FAnimNextGraphExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_AnimNextEndExecution_LODPose>() == std::is_polymorphic<FRigUnit_AnimNextEndExecution>(), "USTRUCT FRigUnit_AnimNextEndExecution_LODPose cannot be polymorphic unless super FRigUnit_AnimNextEndExecution is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_LODPose;
class UScriptStruct* FRigUnit_AnimNextEndExecution_LODPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_LODPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_LODPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose, (UObject*)Z_Construct_UPackage__Script_AnimNext(), TEXT("RigUnit_AnimNextEndExecution_LODPose"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNextEndExecution_LODPose_Execute;
		Arguments_FRigUnit_AnimNextEndExecution_LODPose_Execute.Emplace(TEXT("Result"), TEXT("FAnimNextGraphLODPose"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNextEndExecution_LODPose::Execute"), &FRigUnit_AnimNextEndExecution_LODPose::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_LODPose.OuterSingleton, Arguments_FRigUnit_AnimNextEndExecution_LODPose_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_LODPose.OuterSingleton;
}
template<> ANIMNEXT_API UScriptStruct* StaticStruct<FRigUnit_AnimNextEndExecution_LODPose>()
{
	return FRigUnit_AnimNextEndExecution_LODPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Event for writing back a calculated pose */" },
		{ "DisplayName", "End Execute LODPose" },
		{ "ModuleRelativePath", "Internal/Graph/RigUnit_AnimNextEndExecution.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Event for writing back a calculated pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextEndExecution_LODPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Result" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Internal/Graph/RigUnit_AnimNextEndExecution.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_AnimNextEndExecution_LODPose, Result), Z_Construct_UScriptStruct_FAnimNextGraphLODPose, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::NewProp_Result_MetaData), Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::NewProp_Result_MetaData) }; // 3159281171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution,
		&NewStructOps,
		"RigUnit_AnimNextEndExecution_LODPose",
		Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::PropPointers),
		sizeof(FRigUnit_AnimNextEndExecution_LODPose),
		alignof(FRigUnit_AnimNextEndExecution_LODPose),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_LODPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_LODPose.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_LODPose.InnerSingleton;
	}

void FRigUnit_AnimNextEndExecution_LODPose::Execute()
{
	FAnimNextGraphExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNextEndExecution_LODPose::Execute(FAnimNextGraphExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Result
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextEndExecution_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextEndExecution_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AnimNextEndExecution::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Statics::NewStructOps, TEXT("RigUnit_AnimNextEndExecution"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextEndExecution), 3903887397U) },
		{ FRigUnit_AnimNextEndExecution_Bool::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Bool_Statics::NewStructOps, TEXT("RigUnit_AnimNextEndExecution_Bool"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Bool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextEndExecution_Bool), 2815493601U) },
		{ FRigUnit_AnimNextEndExecution_Float::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_Float_Statics::NewStructOps, TEXT("RigUnit_AnimNextEndExecution_Float"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_Float, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextEndExecution_Float), 3292863675U) },
		{ FRigUnit_AnimNextEndExecution_LODPose::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextEndExecution_LODPose_Statics::NewStructOps, TEXT("RigUnit_AnimNextEndExecution_LODPose"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextEndExecution_LODPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextEndExecution_LODPose), 2918353615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextEndExecution_h_1802205206(TEXT("/Script/AnimNext"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextEndExecution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_RigUnit_AnimNextEndExecution_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
