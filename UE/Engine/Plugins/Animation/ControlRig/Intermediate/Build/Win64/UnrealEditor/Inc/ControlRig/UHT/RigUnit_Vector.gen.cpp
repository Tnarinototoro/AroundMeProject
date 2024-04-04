// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Deprecated/Math/RigUnit_Vector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Vector() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_BinaryVectorOp>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BinaryVectorOp cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp;
class UScriptStruct* FRigUnit_BinaryVectorOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BinaryVectorOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BinaryVectorOp>()
{
	return FRigUnit_BinaryVectorOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Argument0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Argument1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Comment", "/** Two args and a result of Vector type */" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
		{ "ToolTip", "Two args and a result of Vector type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BinaryVectorOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument0_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument0 = { "Argument0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BinaryVectorOp, Argument0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument0_MetaData), Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument1_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument1 = { "Argument1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BinaryVectorOp, Argument1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument1_MetaData), Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_BinaryVectorOp, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Result_MetaData), Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Result_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Argument1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_BinaryVectorOp",
		Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::PropPointers),
		sizeof(FRigUnit_BinaryVectorOp),
		alignof(FRigUnit_BinaryVectorOp),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_Multiply_VectorVector>() == std::is_polymorphic<FRigUnit_BinaryVectorOp>(), "USTRUCT FRigUnit_Multiply_VectorVector cannot be polymorphic unless super FRigUnit_BinaryVectorOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector;
class UScriptStruct* FRigUnit_Multiply_VectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Multiply_VectorVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Multiply_VectorVector_Execute;
		Arguments_FRigUnit_Multiply_VectorVector_Execute.Emplace(TEXT("Argument0"), TEXT("FVector"));
		Arguments_FRigUnit_Multiply_VectorVector_Execute.Emplace(TEXT("Argument1"), TEXT("FVector"));
		Arguments_FRigUnit_Multiply_VectorVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Multiply_VectorVector::Execute"), &FRigUnit_Multiply_VectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.OuterSingleton, Arguments_FRigUnit_Multiply_VectorVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Multiply_VectorVector>()
{
	return FRigUnit_Multiply_VectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Multiply(Vector)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Multiply_VectorVector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp,
		&NewStructOps,
		"RigUnit_Multiply_VectorVector",
		nullptr,
		0,
		sizeof(FRigUnit_Multiply_VectorVector),
		alignof(FRigUnit_Multiply_VectorVector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector.InnerSingleton;
	}

void FRigUnit_Multiply_VectorVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Multiply_VectorVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Add_VectorVector>() == std::is_polymorphic<FRigUnit_BinaryVectorOp>(), "USTRUCT FRigUnit_Add_VectorVector cannot be polymorphic unless super FRigUnit_BinaryVectorOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector;
class UScriptStruct* FRigUnit_Add_VectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Add_VectorVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Add_VectorVector_Execute;
		Arguments_FRigUnit_Add_VectorVector_Execute.Emplace(TEXT("Argument0"), TEXT("FVector"));
		Arguments_FRigUnit_Add_VectorVector_Execute.Emplace(TEXT("Argument1"), TEXT("FVector"));
		Arguments_FRigUnit_Add_VectorVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Add_VectorVector::Execute"), &FRigUnit_Add_VectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.OuterSingleton, Arguments_FRigUnit_Add_VectorVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Add_VectorVector>()
{
	return FRigUnit_Add_VectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Add(Vector)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Add_VectorVector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp,
		&NewStructOps,
		"RigUnit_Add_VectorVector",
		nullptr,
		0,
		sizeof(FRigUnit_Add_VectorVector),
		alignof(FRigUnit_Add_VectorVector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector.InnerSingleton;
	}

void FRigUnit_Add_VectorVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Add_VectorVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Subtract_VectorVector>() == std::is_polymorphic<FRigUnit_BinaryVectorOp>(), "USTRUCT FRigUnit_Subtract_VectorVector cannot be polymorphic unless super FRigUnit_BinaryVectorOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector;
class UScriptStruct* FRigUnit_Subtract_VectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Subtract_VectorVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Subtract_VectorVector_Execute;
		Arguments_FRigUnit_Subtract_VectorVector_Execute.Emplace(TEXT("Argument0"), TEXT("FVector"));
		Arguments_FRigUnit_Subtract_VectorVector_Execute.Emplace(TEXT("Argument1"), TEXT("FVector"));
		Arguments_FRigUnit_Subtract_VectorVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Subtract_VectorVector::Execute"), &FRigUnit_Subtract_VectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.OuterSingleton, Arguments_FRigUnit_Subtract_VectorVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Subtract_VectorVector>()
{
	return FRigUnit_Subtract_VectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Subtract(Vector)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Subtract_VectorVector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp,
		&NewStructOps,
		"RigUnit_Subtract_VectorVector",
		nullptr,
		0,
		sizeof(FRigUnit_Subtract_VectorVector),
		alignof(FRigUnit_Subtract_VectorVector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector.InnerSingleton;
	}

void FRigUnit_Subtract_VectorVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Subtract_VectorVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Divide_VectorVector>() == std::is_polymorphic<FRigUnit_BinaryVectorOp>(), "USTRUCT FRigUnit_Divide_VectorVector cannot be polymorphic unless super FRigUnit_BinaryVectorOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector;
class UScriptStruct* FRigUnit_Divide_VectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Divide_VectorVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Divide_VectorVector_Execute;
		Arguments_FRigUnit_Divide_VectorVector_Execute.Emplace(TEXT("Argument0"), TEXT("FVector"));
		Arguments_FRigUnit_Divide_VectorVector_Execute.Emplace(TEXT("Argument1"), TEXT("FVector"));
		Arguments_FRigUnit_Divide_VectorVector_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Divide_VectorVector::Execute"), &FRigUnit_Divide_VectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.OuterSingleton, Arguments_FRigUnit_Divide_VectorVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Divide_VectorVector>()
{
	return FRigUnit_Divide_VectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Divide(Vector)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Divide_VectorVector>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp,
		&NewStructOps,
		"RigUnit_Divide_VectorVector",
		nullptr,
		0,
		sizeof(FRigUnit_Divide_VectorVector),
		alignof(FRigUnit_Divide_VectorVector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector.InnerSingleton;
	}

void FRigUnit_Divide_VectorVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Divide_VectorVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_Distance_VectorVector>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_Distance_VectorVector cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector;
class UScriptStruct* FRigUnit_Distance_VectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Distance_VectorVector"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Distance_VectorVector_Execute;
		Arguments_FRigUnit_Distance_VectorVector_Execute.Emplace(TEXT("Argument0"), TEXT("FVector"));
		Arguments_FRigUnit_Distance_VectorVector_Execute.Emplace(TEXT("Argument1"), TEXT("FVector"));
		Arguments_FRigUnit_Distance_VectorVector_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Distance_VectorVector::Execute"), &FRigUnit_Distance_VectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.OuterSingleton, Arguments_FRigUnit_Distance_VectorVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Distance_VectorVector>()
{
	return FRigUnit_Distance_VectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Argument0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Argument1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Vector" },
		{ "Deprecated", "4.23.0" },
		{ "DisplayName", "Distance" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "NodeColor", "0.1 0.7 0.1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Distance_VectorVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument0_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument0 = { "Argument0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_Distance_VectorVector, Argument0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument0_MetaData), Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument1_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument1 = { "Argument1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_Distance_VectorVector, Argument1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument1_MetaData), Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/Math/RigUnit_Vector.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_Distance_VectorVector, Result), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Result_MetaData), Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Result_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Argument1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_Distance_VectorVector",
		Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::PropPointers),
		sizeof(FRigUnit_Distance_VectorVector),
		alignof(FRigUnit_Distance_VectorVector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector.InnerSingleton;
	}

void FRigUnit_Distance_VectorVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Distance_VectorVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Argument0,
		Argument1,
		Result
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_BinaryVectorOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics::NewStructOps, TEXT("RigUnit_BinaryVectorOp"), &Z_Registration_Info_UScriptStruct_RigUnit_BinaryVectorOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BinaryVectorOp), 3934632070U) },
		{ FRigUnit_Multiply_VectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::NewStructOps, TEXT("RigUnit_Multiply_VectorVector"), &Z_Registration_Info_UScriptStruct_RigUnit_Multiply_VectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Multiply_VectorVector), 144475172U) },
		{ FRigUnit_Add_VectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics::NewStructOps, TEXT("RigUnit_Add_VectorVector"), &Z_Registration_Info_UScriptStruct_RigUnit_Add_VectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Add_VectorVector), 1346913631U) },
		{ FRigUnit_Subtract_VectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics::NewStructOps, TEXT("RigUnit_Subtract_VectorVector"), &Z_Registration_Info_UScriptStruct_RigUnit_Subtract_VectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Subtract_VectorVector), 897021358U) },
		{ FRigUnit_Divide_VectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics::NewStructOps, TEXT("RigUnit_Divide_VectorVector"), &Z_Registration_Info_UScriptStruct_RigUnit_Divide_VectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Divide_VectorVector), 4204069950U) },
		{ FRigUnit_Distance_VectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics::NewStructOps, TEXT("RigUnit_Distance_VectorVector"), &Z_Registration_Info_UScriptStruct_RigUnit_Distance_VectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Distance_VectorVector), 3555444039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_398520424(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
