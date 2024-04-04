// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldConditionTestTypes.h"
#include "WorldConditionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldConditionTestTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WorldConditionsTestSuite();
	WORLDCONDITIONS_API UClass* Z_Construct_UClass_UWorldConditionSchema();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionBase();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionQueryDefinition();
	WORLDCONDITIONSTESTSUITE_API UClass* Z_Construct_UClass_UWorldConditionOwnerClass();
	WORLDCONDITIONSTESTSUITE_API UClass* Z_Construct_UClass_UWorldConditionOwnerClass_NoRegister();
	WORLDCONDITIONSTESTSUITE_API UClass* Z_Construct_UClass_UWorldConditionTestCachedSchema();
	WORLDCONDITIONSTESTSUITE_API UClass* Z_Construct_UClass_UWorldConditionTestCachedSchema_NoRegister();
	WORLDCONDITIONSTESTSUITE_API UClass* Z_Construct_UClass_UWorldConditionTestSchema();
	WORLDCONDITIONSTESTSUITE_API UClass* Z_Construct_UClass_UWorldConditionTestSchema_NoRegister();
	WORLDCONDITIONSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionTest();
	WORLDCONDITIONSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionTestCached();
	WORLDCONDITIONSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionTestData();
	WORLDCONDITIONSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionTestState();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionTestData;
class UScriptStruct* FWorldConditionTestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionTestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionTestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionTestData, (UObject*)Z_Construct_UPackage__Script_WorldConditionsTestSuite(), TEXT("WorldConditionTestData"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionTestData.OuterSingleton;
}
template<> WORLDCONDITIONSTESTSUITE_API UScriptStruct* StaticStruct<FWorldConditionTestData>()
{
	return FWorldConditionTestData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionTestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionTestData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldConditionTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionTestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionTestData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionTestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditionsTestSuite,
		nullptr,
		&NewStructOps,
		"WorldConditionTestData",
		nullptr,
		0,
		sizeof(FWorldConditionTestData),
		alignof(FWorldConditionTestData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionTestData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldConditionTestData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionTestData()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionTestData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionTestData.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionTestData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionTestData.InnerSingleton;
	}
	void UWorldConditionTestSchema::StaticRegisterNativesUWorldConditionTestSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldConditionTestSchema);
	UClass* Z_Construct_UClass_UWorldConditionTestSchema_NoRegister()
	{
		return UWorldConditionTestSchema::StaticClass();
	}
	struct Z_Construct_UClass_UWorldConditionTestSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldConditionTestSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldConditionSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditionsTestSuite,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionTestSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldConditionTestSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldConditionTestTypes.h" },
		{ "ModuleRelativePath", "Public/WorldConditionTestTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldConditionTestSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldConditionTestSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldConditionTestSchema_Statics::ClassParams = {
		&UWorldConditionTestSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionTestSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldConditionTestSchema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWorldConditionTestSchema()
	{
		if (!Z_Registration_Info_UClass_UWorldConditionTestSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldConditionTestSchema.OuterSingleton, Z_Construct_UClass_UWorldConditionTestSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldConditionTestSchema.OuterSingleton;
	}
	template<> WORLDCONDITIONSTESTSUITE_API UClass* StaticClass<UWorldConditionTestSchema>()
	{
		return UWorldConditionTestSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldConditionTestSchema);
	UWorldConditionTestSchema::~UWorldConditionTestSchema() {}
	void UWorldConditionTestCachedSchema::StaticRegisterNativesUWorldConditionTestCachedSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldConditionTestCachedSchema);
	UClass* Z_Construct_UClass_UWorldConditionTestCachedSchema_NoRegister()
	{
		return UWorldConditionTestCachedSchema::StaticClass();
	}
	struct Z_Construct_UClass_UWorldConditionTestCachedSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldConditionTestCachedSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldConditionSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditionsTestSuite,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionTestCachedSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldConditionTestCachedSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldConditionTestTypes.h" },
		{ "ModuleRelativePath", "Public/WorldConditionTestTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldConditionTestCachedSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldConditionTestCachedSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldConditionTestCachedSchema_Statics::ClassParams = {
		&UWorldConditionTestCachedSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionTestCachedSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldConditionTestCachedSchema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWorldConditionTestCachedSchema()
	{
		if (!Z_Registration_Info_UClass_UWorldConditionTestCachedSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldConditionTestCachedSchema.OuterSingleton, Z_Construct_UClass_UWorldConditionTestCachedSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldConditionTestCachedSchema.OuterSingleton;
	}
	template<> WORLDCONDITIONSTESTSUITE_API UClass* StaticClass<UWorldConditionTestCachedSchema>()
	{
		return UWorldConditionTestCachedSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldConditionTestCachedSchema);
	UWorldConditionTestCachedSchema::~UWorldConditionTestCachedSchema() {}

static_assert(std::is_polymorphic<FWorldConditionTest>() == std::is_polymorphic<FWorldConditionBase>(), "USTRUCT FWorldConditionTest cannot be polymorphic unless super FWorldConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionTest;
class UScriptStruct* FWorldConditionTest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionTest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionTest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionTest, (UObject*)Z_Construct_UPackage__Script_WorldConditionsTestSuite(), TEXT("WorldConditionTest"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionTest.OuterSingleton;
}
template<> WORLDCONDITIONSTESTSUITE_API UScriptStruct* StaticStruct<FWorldConditionTest>()
{
	return FWorldConditionTest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionTest_Statics::Struct_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/WorldConditionTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionTest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionTest>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionTest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditionsTestSuite,
		Z_Construct_UScriptStruct_FWorldConditionBase,
		&NewStructOps,
		"WorldConditionTest",
		nullptr,
		0,
		sizeof(FWorldConditionTest),
		alignof(FWorldConditionTest),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionTest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldConditionTest_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionTest()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionTest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionTest.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionTest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionTest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionTestState;
class UScriptStruct* FWorldConditionTestState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionTestState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionTestState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionTestState, (UObject*)Z_Construct_UPackage__Script_WorldConditionsTestSuite(), TEXT("WorldConditionTestState"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionTestState.OuterSingleton;
}
template<> WORLDCONDITIONSTESTSUITE_API UScriptStruct* StaticStruct<FWorldConditionTestState>()
{
	return FWorldConditionTestState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionTestState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionTestState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldConditionTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionTestState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionTestState>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionTestState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditionsTestSuite,
		nullptr,
		&NewStructOps,
		"WorldConditionTestState",
		nullptr,
		0,
		sizeof(FWorldConditionTestState),
		alignof(FWorldConditionTestState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionTestState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldConditionTestState_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionTestState()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionTestState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionTestState.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionTestState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionTestState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWorldConditionTestCached>() == std::is_polymorphic<FWorldConditionBase>(), "USTRUCT FWorldConditionTestCached cannot be polymorphic unless super FWorldConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionTestCached;
class UScriptStruct* FWorldConditionTestCached::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionTestCached.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionTestCached.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionTestCached, (UObject*)Z_Construct_UPackage__Script_WorldConditionsTestSuite(), TEXT("WorldConditionTestCached"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionTestCached.OuterSingleton;
}
template<> WORLDCONDITIONSTESTSUITE_API UScriptStruct* StaticStruct<FWorldConditionTestCached>()
{
	return FWorldConditionTestCached::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionTestCached_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionTestCached_Statics::Struct_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/WorldConditionTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionTestCached_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionTestCached>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionTestCached_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditionsTestSuite,
		Z_Construct_UScriptStruct_FWorldConditionBase,
		&NewStructOps,
		"WorldConditionTestCached",
		nullptr,
		0,
		sizeof(FWorldConditionTestCached),
		alignof(FWorldConditionTestCached),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionTestCached_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldConditionTestCached_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionTestCached()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionTestCached.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionTestCached.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionTestCached_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionTestCached.InnerSingleton;
	}
	void UWorldConditionOwnerClass::StaticRegisterNativesUWorldConditionOwnerClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldConditionOwnerClass);
	UClass* Z_Construct_UClass_UWorldConditionOwnerClass_NoRegister()
	{
		return UWorldConditionOwnerClass::StaticClass();
	}
	struct Z_Construct_UClass_UWorldConditionOwnerClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldConditionOwnerClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditionsTestSuite,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionOwnerClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldConditionOwnerClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldConditionTestTypes.h" },
		{ "ModuleRelativePath", "Public/WorldConditionTestTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldConditionOwnerClass_Statics::NewProp_Definition_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/WorldConditionTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldConditionOwnerClass_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldConditionOwnerClass, Definition), Z_Construct_UScriptStruct_FWorldConditionQueryDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionOwnerClass_Statics::NewProp_Definition_MetaData), Z_Construct_UClass_UWorldConditionOwnerClass_Statics::NewProp_Definition_MetaData) }; // 1103548350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldConditionOwnerClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldConditionOwnerClass_Statics::NewProp_Definition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldConditionOwnerClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldConditionOwnerClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldConditionOwnerClass_Statics::ClassParams = {
		&UWorldConditionOwnerClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldConditionOwnerClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionOwnerClass_Statics::PropPointers),
		0,
		0x010000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionOwnerClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldConditionOwnerClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldConditionOwnerClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWorldConditionOwnerClass()
	{
		if (!Z_Registration_Info_UClass_UWorldConditionOwnerClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldConditionOwnerClass.OuterSingleton, Z_Construct_UClass_UWorldConditionOwnerClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldConditionOwnerClass.OuterSingleton;
	}
	template<> WORLDCONDITIONSTESTSUITE_API UClass* StaticClass<UWorldConditionOwnerClass>()
	{
		return UWorldConditionOwnerClass::StaticClass();
	}
	UWorldConditionOwnerClass::UWorldConditionOwnerClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldConditionOwnerClass);
	UWorldConditionOwnerClass::~UWorldConditionOwnerClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditionsTestSuite_Public_WorldConditionTestTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditionsTestSuite_Public_WorldConditionTestTypes_h_Statics::ScriptStructInfo[] = {
		{ FWorldConditionTestData::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionTestData_Statics::NewStructOps, TEXT("WorldConditionTestData"), &Z_Registration_Info_UScriptStruct_WorldConditionTestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionTestData), 2212854323U) },
		{ FWorldConditionTest::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionTest_Statics::NewStructOps, TEXT("WorldConditionTest"), &Z_Registration_Info_UScriptStruct_WorldConditionTest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionTest), 1001985443U) },
		{ FWorldConditionTestState::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionTestState_Statics::NewStructOps, TEXT("WorldConditionTestState"), &Z_Registration_Info_UScriptStruct_WorldConditionTestState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionTestState), 1005035539U) },
		{ FWorldConditionTestCached::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionTestCached_Statics::NewStructOps, TEXT("WorldConditionTestCached"), &Z_Registration_Info_UScriptStruct_WorldConditionTestCached, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionTestCached), 2996370814U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditionsTestSuite_Public_WorldConditionTestTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldConditionTestSchema, UWorldConditionTestSchema::StaticClass, TEXT("UWorldConditionTestSchema"), &Z_Registration_Info_UClass_UWorldConditionTestSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldConditionTestSchema), 157085823U) },
		{ Z_Construct_UClass_UWorldConditionTestCachedSchema, UWorldConditionTestCachedSchema::StaticClass, TEXT("UWorldConditionTestCachedSchema"), &Z_Registration_Info_UClass_UWorldConditionTestCachedSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldConditionTestCachedSchema), 879367830U) },
		{ Z_Construct_UClass_UWorldConditionOwnerClass, UWorldConditionOwnerClass::StaticClass, TEXT("UWorldConditionOwnerClass"), &Z_Registration_Info_UClass_UWorldConditionOwnerClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldConditionOwnerClass), 3255713138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditionsTestSuite_Public_WorldConditionTestTypes_h_3600941853(TEXT("/Script/WorldConditionsTestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditionsTestSuite_Public_WorldConditionTestTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditionsTestSuite_Public_WorldConditionTestTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditionsTestSuite_Public_WorldConditionTestTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditionsTestSuite_Public_WorldConditionTestTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
