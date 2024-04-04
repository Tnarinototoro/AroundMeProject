// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTreeTestTypes.h"
#include "GameplayTagContainer.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTestTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskBase();
	STATETREETESTSUITE_API UClass* Z_Construct_UClass_UStateTreeTest_PropertyObject();
	STATETREETESTSUITE_API UClass* Z_Construct_UClass_UStateTreeTest_PropertyObject_NoRegister();
	STATETREETESTSUITE_API UClass* Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced();
	STATETREETESTSUITE_API UClass* Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_NoRegister();
	STATETREETESTSUITE_API UClass* Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB();
	STATETREETESTSUITE_API UClass* Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_NoRegister();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTestCondition();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestEval_A();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestEval_AInstanceData();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTask_B();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTask_BInstanceData();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTask_PrintValue();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTask_Stand();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTask_StandInstanceData();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_StateTreeTestSuite();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestEval_AInstanceData;
class UScriptStruct* FTestEval_AInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestEval_AInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestEval_AInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestEval_AInstanceData>()
{
	return FTestEval_AInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolA_MetaData[];
#endif
		static void NewProp_bBoolA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestEval_AInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_FloatA_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_FloatA = { "FloatA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestEval_AInstanceData, FloatA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_FloatA_MetaData), Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_FloatA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_IntA_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_IntA = { "IntA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestEval_AInstanceData, IntA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_IntA_MetaData), Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_IntA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA_SetBit(void* Obj)
	{
		((FTestEval_AInstanceData*)Obj)->bBoolA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA = { "bBoolA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTestEval_AInstanceData), &Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA_MetaData), Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_FloatA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_IntA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"TestEval_AInstanceData",
		Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::PropPointers),
		sizeof(FTestEval_AInstanceData),
		alignof(FTestEval_AInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTestEval_AInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestEval_A>() == std::is_polymorphic<FStateTreeEvaluatorBase>(), "USTRUCT FTestEval_A cannot be polymorphic unless super FStateTreeEvaluatorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestEval_A;
class UScriptStruct* FTestEval_A::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestEval_A.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestEval_A.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestEval_A, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestEval_A"));
	}
	return Z_Registration_Info_UScriptStruct_TestEval_A.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestEval_A>()
{
	return FTestEval_A::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestEval_A_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestEval_A_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestEval_A_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestEval_A>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestEval_A_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		Z_Construct_UScriptStruct_FStateTreeEvaluatorBase,
		&NewStructOps,
		"TestEval_A",
		nullptr,
		0,
		sizeof(FTestEval_A),
		alignof(FTestEval_A),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_A_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestEval_A_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestEval_A()
	{
		if (!Z_Registration_Info_UScriptStruct_TestEval_A.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestEval_A.InnerSingleton, Z_Construct_UScriptStruct_FTestEval_A_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestEval_A.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTask_BInstanceData;
class UScriptStruct* FTestTask_BInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTask_BInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestTask_BInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestTask_BInstanceData>()
{
	return FTestTask_BInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolB_MetaData[];
#endif
		static void NewProp_bBoolB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTask_BInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_FloatB_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_FloatB = { "FloatB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestTask_BInstanceData, FloatB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_FloatB_MetaData), Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_FloatB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_IntB_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_IntB = { "IntB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestTask_BInstanceData, IntB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_IntB_MetaData), Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_IntB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB_SetBit(void* Obj)
	{
		((FTestTask_BInstanceData*)Obj)->bBoolB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB = { "bBoolB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTestTask_BInstanceData), &Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB_MetaData), Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_FloatB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_IntB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"TestTask_BInstanceData",
		Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::PropPointers),
		sizeof(FTestTask_BInstanceData),
		alignof(FTestTask_BInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTestTask_BInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestTask_B>() == std::is_polymorphic<FStateTreeTaskBase>(), "USTRUCT FTestTask_B cannot be polymorphic unless super FStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTask_B;
class UScriptStruct* FTestTask_B::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTask_B.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTask_B.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTask_B, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestTask_B"));
	}
	return Z_Registration_Info_UScriptStruct_TestTask_B.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestTask_B>()
{
	return FTestTask_B::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTask_B_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_B_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTask_B_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTask_B>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTask_B_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		Z_Construct_UScriptStruct_FStateTreeTaskBase,
		&NewStructOps,
		"TestTask_B",
		nullptr,
		0,
		sizeof(FTestTask_B),
		alignof(FTestTask_B),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_B_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTask_B_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestTask_B()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTask_B.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTask_B.InnerSingleton, Z_Construct_UScriptStruct_FTestTask_B_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTask_B.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTask_PrintValueInstanceData;
class UScriptStruct* FTestTask_PrintValueInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTask_PrintValueInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTask_PrintValueInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestTask_PrintValueInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_TestTask_PrintValueInstanceData.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestTask_PrintValueInstanceData>()
{
	return FTestTask_PrintValueInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTask_PrintValueInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestTask_PrintValueInstanceData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"TestTask_PrintValueInstanceData",
		Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::PropPointers),
		sizeof(FTestTask_PrintValueInstanceData),
		alignof(FTestTask_PrintValueInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTask_PrintValueInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTask_PrintValueInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTask_PrintValueInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestTask_PrintValue>() == std::is_polymorphic<FStateTreeTaskBase>(), "USTRUCT FTestTask_PrintValue cannot be polymorphic unless super FStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTask_PrintValue;
class UScriptStruct* FTestTask_PrintValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTask_PrintValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTask_PrintValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTask_PrintValue, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestTask_PrintValue"));
	}
	return Z_Registration_Info_UScriptStruct_TestTask_PrintValue.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestTask_PrintValue>()
{
	return FTestTask_PrintValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTask_PrintValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_PrintValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTask_PrintValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTask_PrintValue>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTask_PrintValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		Z_Construct_UScriptStruct_FStateTreeTaskBase,
		&NewStructOps,
		"TestTask_PrintValue",
		nullptr,
		0,
		sizeof(FTestTask_PrintValue),
		alignof(FTestTask_PrintValue),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_PrintValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTask_PrintValue_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestTask_PrintValue()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTask_PrintValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTask_PrintValue.InnerSingleton, Z_Construct_UScriptStruct_FTestTask_PrintValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTask_PrintValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData;
class UScriptStruct* FTestTask_StandInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTask_StandInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestTask_StandInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestTask_StandInstanceData>()
{
	return FTestTask_StandInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTick_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTask_StandInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewProp_CurrentTick_MetaData[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewProp_CurrentTick = { "CurrentTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestTask_StandInstanceData, CurrentTick), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewProp_CurrentTick_MetaData), Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewProp_CurrentTick_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewProp_CurrentTick,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"TestTask_StandInstanceData",
		Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::PropPointers),
		sizeof(FTestTask_StandInstanceData),
		alignof(FTestTask_StandInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTestTask_StandInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestTask_Stand>() == std::is_polymorphic<FStateTreeTaskBase>(), "USTRUCT FTestTask_Stand cannot be polymorphic unless super FStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTask_Stand;
class UScriptStruct* FTestTask_Stand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTask_Stand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTask_Stand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTask_Stand, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestTask_Stand"));
	}
	return Z_Registration_Info_UScriptStruct_TestTask_Stand.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestTask_Stand>()
{
	return FTestTask_Stand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTask_Stand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TicksToCompletion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TicksToCompletion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TickCompletionResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickCompletionResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TickCompletionResult;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnterStateResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterStateResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnterStateResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_Stand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTask_Stand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TicksToCompletion_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TicksToCompletion = { "TicksToCompletion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestTask_Stand, TicksToCompletion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TicksToCompletion_MetaData), Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TicksToCompletion_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickCompletionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickCompletionResult_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickCompletionResult = { "TickCompletionResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestTask_Stand, TickCompletionResult), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickCompletionResult_MetaData), Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickCompletionResult_MetaData) }; // 2636554957
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult = { "EnterStateResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestTask_Stand, EnterStateResult), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult_MetaData), Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult_MetaData) }; // 2636554957
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestTask_Stand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TicksToCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickCompletionResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickCompletionResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		Z_Construct_UScriptStruct_FStateTreeTaskBase,
		&NewStructOps,
		"TestTask_Stand",
		Z_Construct_UScriptStruct_FTestTask_Stand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::PropPointers),
		sizeof(FTestTask_Stand),
		alignof(FTestTask_Stand),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestTask_Stand_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTestTask_Stand()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTask_Stand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTask_Stand.InnerSingleton, Z_Construct_UScriptStruct_FTestTask_Stand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTask_Stand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData;
class UScriptStruct* FStateTreeTestConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("StateTreeTestConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FStateTreeTestConditionInstanceData>()
{
	return FStateTreeTestConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTestConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTestConditionInstanceData, Count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewProp_Count_MetaData), Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewProp_Count_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewProp_Count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"StateTreeTestConditionInstanceData",
		Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::PropPointers),
		sizeof(FStateTreeTestConditionInstanceData),
		alignof(FStateTreeTestConditionInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStateTreeTestCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FStateTreeTestCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTestCondition;
class UScriptStruct* FStateTreeTestCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTestCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTestCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTestCondition, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("StateTreeTestCondition"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTestCondition.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FStateTreeTestCondition>()
{
	return FStateTreeTestCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::Struct_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTestCondition>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
		&NewStructOps,
		"StateTreeTestCondition",
		nullptr,
		0,
		sizeof(FStateTreeTestCondition),
		alignof(FStateTreeTestCondition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTestCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTestCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTestCondition.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTestCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStructB;
class UScriptStruct* FStateTreeTest_PropertyStructB::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStructB.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStructB.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("StateTreeTest_PropertyStructB"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStructB.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FStateTreeTest_PropertyStructB>()
{
	return FStateTreeTest_PropertyStructB::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTest_PropertyStructB>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::NewProp_B_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTest_PropertyStructB, B), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::NewProp_B_MetaData), Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::NewProp_B_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::NewProp_B,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"StateTreeTest_PropertyStructB",
		Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::PropPointers),
		sizeof(FStateTreeTest_PropertyStructB),
		alignof(FStateTreeTest_PropertyStructB),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStructB.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStructB.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStructB.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStruct;
class UScriptStruct* FStateTreeTest_PropertyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("StateTreeTest_PropertyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStruct.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FStateTreeTest_PropertyStruct>()
{
	return FStateTreeTest_PropertyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTest_PropertyStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_A_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTest_PropertyStruct, A), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_A_MetaData), Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_A_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_B_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTest_PropertyStruct, B), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_B_MetaData), Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_B_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_StructB_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_StructB = { "StructB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTest_PropertyStruct, StructB), Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_StructB_MetaData), Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_StructB_MetaData) }; // 4156277733
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewProp_StructB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"StateTreeTest_PropertyStruct",
		Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::PropPointers),
		sizeof(FStateTreeTest_PropertyStruct),
		alignof(FStateTreeTest_PropertyStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStruct.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStruct.InnerSingleton;
	}
	void UStateTreeTest_PropertyObjectInstanced::StaticRegisterNativesUStateTreeTest_PropertyObjectInstanced()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeTest_PropertyObjectInstanced);
	UClass* Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_NoRegister()
	{
		return UStateTreeTest_PropertyObjectInstanced::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayOfTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateTreeTestTypes.h" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_A_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTest_PropertyObjectInstanced, A), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_A_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_A_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_InstancedStruct_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTest_PropertyObjectInstanced, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_InstancedStruct_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_InstancedStruct_MetaData) }; // 2114042832
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_ArrayOfTags_Inner = { "ArrayOfTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_ArrayOfTags_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_ArrayOfTags = { "ArrayOfTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTest_PropertyObjectInstanced, ArrayOfTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_ArrayOfTags_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_ArrayOfTags_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_InstancedStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_ArrayOfTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::NewProp_ArrayOfTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeTest_PropertyObjectInstanced>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::ClassParams = {
		&UStateTreeTest_PropertyObjectInstanced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::PropPointers),
		0,
		0x040000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced()
	{
		if (!Z_Registration_Info_UClass_UStateTreeTest_PropertyObjectInstanced.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeTest_PropertyObjectInstanced.OuterSingleton, Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeTest_PropertyObjectInstanced.OuterSingleton;
	}
	template<> STATETREETESTSUITE_API UClass* StaticClass<UStateTreeTest_PropertyObjectInstanced>()
	{
		return UStateTreeTest_PropertyObjectInstanced::StaticClass();
	}
	UStateTreeTest_PropertyObjectInstanced::UStateTreeTest_PropertyObjectInstanced(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeTest_PropertyObjectInstanced);
	UStateTreeTest_PropertyObjectInstanced::~UStateTreeTest_PropertyObjectInstanced() {}
	void UStateTreeTest_PropertyObjectInstancedWithB::StaticRegisterNativesUStateTreeTest_PropertyObjectInstancedWithB()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeTest_PropertyObjectInstancedWithB);
	UClass* Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_NoRegister()
	{
		return UStateTreeTest_PropertyObjectInstancedWithB::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateTreeTestTypes.h" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::NewProp_B_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTest_PropertyObjectInstancedWithB, B), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::NewProp_B_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::NewProp_B_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::NewProp_B,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeTest_PropertyObjectInstancedWithB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::ClassParams = {
		&UStateTreeTest_PropertyObjectInstancedWithB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::PropPointers),
		0,
		0x040000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB()
	{
		if (!Z_Registration_Info_UClass_UStateTreeTest_PropertyObjectInstancedWithB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeTest_PropertyObjectInstancedWithB.OuterSingleton, Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeTest_PropertyObjectInstancedWithB.OuterSingleton;
	}
	template<> STATETREETESTSUITE_API UClass* StaticClass<UStateTreeTest_PropertyObjectInstancedWithB>()
	{
		return UStateTreeTest_PropertyObjectInstancedWithB::StaticClass();
	}
	UStateTreeTest_PropertyObjectInstancedWithB::UStateTreeTest_PropertyObjectInstancedWithB(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeTest_PropertyObjectInstancedWithB);
	UStateTreeTest_PropertyObjectInstancedWithB::~UStateTreeTest_PropertyObjectInstancedWithB() {}
	void UStateTreeTest_PropertyObject::StaticRegisterNativesUStateTreeTest_PropertyObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeTest_PropertyObject);
	UClass* Z_Construct_UClass_UStateTreeTest_PropertyObject_NoRegister()
	{
		return UStateTreeTest_PropertyObject::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstancedObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfInstancedObjects_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrayOfInstancedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfInstancedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfInstancedObjects;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayOfInts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfInts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfInts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayOfInstancedStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfInstancedStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfInstancedStructs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayOfStruct_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayOfStruct_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayOfStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateTreeTestTypes.h" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_InstancedObject_MetaData[] = {
		{ "Category", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_InstancedObject = { "InstancedObject", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTest_PropertyObject, InstancedObject), Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_InstancedObject_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_InstancedObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedObjects_Inner_MetaData[] = {
		{ "Category", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedObjects_Inner = { "ArrayOfInstancedObjects", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedObjects_Inner_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedObjects_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedObjects_MetaData[] = {
		{ "Category", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedObjects = { "ArrayOfInstancedObjects", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTest_PropertyObject, ArrayOfInstancedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedObjects_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedObjects_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInts_Inner = { "ArrayOfInts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInts_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInts = { "ArrayOfInts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTest_PropertyObject, ArrayOfInts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInts_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_InstancedStruct_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTest_PropertyObject, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_InstancedStruct_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_InstancedStruct_MetaData) }; // 2114042832
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedStructs_Inner = { "ArrayOfInstancedStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 2114042832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedStructs_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedStructs = { "ArrayOfInstancedStructs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTest_PropertyObject, ArrayOfInstancedStructs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedStructs_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedStructs_MetaData) }; // 2114042832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_Struct_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTest_PropertyObject, Struct), Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_Struct_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_Struct_MetaData) }; // 464941097
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfStruct_Inner = { "ArrayOfStruct", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct, METADATA_PARAMS(0, nullptr) }; // 464941097
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfStruct_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfStruct = { "ArrayOfStruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeTest_PropertyObject, ArrayOfStruct), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfStruct_MetaData), Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfStruct_MetaData) }; // 464941097
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_InstancedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_InstancedStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfInstancedStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfStruct_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::NewProp_ArrayOfStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeTest_PropertyObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::ClassParams = {
		&UStateTreeTest_PropertyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::PropPointers),
		0,
		0x048000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStateTreeTest_PropertyObject()
	{
		if (!Z_Registration_Info_UClass_UStateTreeTest_PropertyObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeTest_PropertyObject.OuterSingleton, Z_Construct_UClass_UStateTreeTest_PropertyObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeTest_PropertyObject.OuterSingleton;
	}
	template<> STATETREETESTSUITE_API UClass* StaticClass<UStateTreeTest_PropertyObject>()
	{
		return UStateTreeTest_PropertyObject::StaticClass();
	}
	UStateTreeTest_PropertyObject::UStateTreeTest_PropertyObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeTest_PropertyObject);
	UStateTreeTest_PropertyObject::~UStateTreeTest_PropertyObject() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyCopy;
class UScriptStruct* FStateTreeTest_PropertyCopy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyCopy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyCopy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("StateTreeTest_PropertyCopy"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyCopy.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FStateTreeTest_PropertyCopy>()
{
	return FStateTreeTest_PropertyCopy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTest_PropertyCopy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTest_PropertyCopy, Item), Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Item_MetaData), Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Item_MetaData) }; // 464941097
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct, METADATA_PARAMS(0, nullptr) }; // 464941097
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Array_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTest_PropertyCopy, Array), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Array_MetaData), Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Array_MetaData) }; // 464941097
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewProp_Array,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"StateTreeTest_PropertyCopy",
		Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::PropPointers),
		sizeof(FStateTreeTest_PropertyCopy),
		alignof(FStateTreeTest_PropertyCopy),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyCopy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyCopy.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyCopy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_Statics::ScriptStructInfo[] = {
		{ FTestEval_AInstanceData::StaticStruct, Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewStructOps, TEXT("TestEval_AInstanceData"), &Z_Registration_Info_UScriptStruct_TestEval_AInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestEval_AInstanceData), 2127698921U) },
		{ FTestEval_A::StaticStruct, Z_Construct_UScriptStruct_FTestEval_A_Statics::NewStructOps, TEXT("TestEval_A"), &Z_Registration_Info_UScriptStruct_TestEval_A, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestEval_A), 3314654860U) },
		{ FTestTask_BInstanceData::StaticStruct, Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewStructOps, TEXT("TestTask_BInstanceData"), &Z_Registration_Info_UScriptStruct_TestTask_BInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTask_BInstanceData), 3767531389U) },
		{ FTestTask_B::StaticStruct, Z_Construct_UScriptStruct_FTestTask_B_Statics::NewStructOps, TEXT("TestTask_B"), &Z_Registration_Info_UScriptStruct_TestTask_B, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTask_B), 790679272U) },
		{ FTestTask_PrintValueInstanceData::StaticStruct, Z_Construct_UScriptStruct_FTestTask_PrintValueInstanceData_Statics::NewStructOps, TEXT("TestTask_PrintValueInstanceData"), &Z_Registration_Info_UScriptStruct_TestTask_PrintValueInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTask_PrintValueInstanceData), 335759962U) },
		{ FTestTask_PrintValue::StaticStruct, Z_Construct_UScriptStruct_FTestTask_PrintValue_Statics::NewStructOps, TEXT("TestTask_PrintValue"), &Z_Registration_Info_UScriptStruct_TestTask_PrintValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTask_PrintValue), 713021070U) },
		{ FTestTask_StandInstanceData::StaticStruct, Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewStructOps, TEXT("TestTask_StandInstanceData"), &Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTask_StandInstanceData), 377348907U) },
		{ FTestTask_Stand::StaticStruct, Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewStructOps, TEXT("TestTask_Stand"), &Z_Registration_Info_UScriptStruct_TestTask_Stand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTask_Stand), 4247711062U) },
		{ FStateTreeTestConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewStructOps, TEXT("StateTreeTestConditionInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTestConditionInstanceData), 2917505486U) },
		{ FStateTreeTestCondition::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::NewStructOps, TEXT("StateTreeTestCondition"), &Z_Registration_Info_UScriptStruct_StateTreeTestCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTestCondition), 978539523U) },
		{ FStateTreeTest_PropertyStructB::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTest_PropertyStructB_Statics::NewStructOps, TEXT("StateTreeTest_PropertyStructB"), &Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStructB, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTest_PropertyStructB), 4156277733U) },
		{ FStateTreeTest_PropertyStruct::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTest_PropertyStruct_Statics::NewStructOps, TEXT("StateTreeTest_PropertyStruct"), &Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTest_PropertyStruct), 464941097U) },
		{ FStateTreeTest_PropertyCopy::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTest_PropertyCopy_Statics::NewStructOps, TEXT("StateTreeTest_PropertyCopy"), &Z_Registration_Info_UScriptStruct_StateTreeTest_PropertyCopy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTest_PropertyCopy), 1287334312U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeTest_PropertyObjectInstanced, UStateTreeTest_PropertyObjectInstanced::StaticClass, TEXT("UStateTreeTest_PropertyObjectInstanced"), &Z_Registration_Info_UClass_UStateTreeTest_PropertyObjectInstanced, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeTest_PropertyObjectInstanced), 2812919669U) },
		{ Z_Construct_UClass_UStateTreeTest_PropertyObjectInstancedWithB, UStateTreeTest_PropertyObjectInstancedWithB::StaticClass, TEXT("UStateTreeTest_PropertyObjectInstancedWithB"), &Z_Registration_Info_UClass_UStateTreeTest_PropertyObjectInstancedWithB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeTest_PropertyObjectInstancedWithB), 112175969U) },
		{ Z_Construct_UClass_UStateTreeTest_PropertyObject, UStateTreeTest_PropertyObject::StaticClass, TEXT("UStateTreeTest_PropertyObject"), &Z_Registration_Info_UClass_UStateTreeTest_PropertyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeTest_PropertyObject), 835016458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_704013152(TEXT("/Script/StateTreeTestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
