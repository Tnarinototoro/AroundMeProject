// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNextDecoratorBaseTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextDecoratorBaseTest() {}
// Cross Module References
	ANIMNEXT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData();
	ANIMNEXTTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData();
	ANIMNEXTTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData();
	ANIMNEXTTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData();
	ANIMNEXTTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData();
	ANIMNEXTTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData();
	ANIMNEXTTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_AnimNextTestSuite();
// End Cross Module References

static_assert(std::is_polymorphic<FDecoratorA_BaseSharedData>() == std::is_polymorphic<FAnimNextDecoratorSharedData>(), "USTRUCT FDecoratorA_BaseSharedData cannot be polymorphic unless super FAnimNextDecoratorSharedData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DecoratorA_BaseSharedData;
class UScriptStruct* FDecoratorA_BaseSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DecoratorA_BaseSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DecoratorA_BaseSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData, (UObject*)Z_Construct_UPackage__Script_AnimNextTestSuite(), TEXT("DecoratorA_BaseSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_DecoratorA_BaseSharedData.OuterSingleton;
}
template<> ANIMNEXTTESTSUITE_API UScriptStruct* StaticStruct<FDecoratorA_BaseSharedData>()
{
	return FDecoratorA_BaseSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorUID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DecoratorUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecoratorA_BaseSharedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::NewProp_DecoratorUID_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::NewProp_DecoratorUID = { "DecoratorUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorA_BaseSharedData, DecoratorUID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::NewProp_DecoratorUID_MetaData), Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::NewProp_DecoratorUID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::NewProp_DecoratorUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextTestSuite,
		Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData,
		&NewStructOps,
		"DecoratorA_BaseSharedData",
		Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::PropPointers),
		sizeof(FDecoratorA_BaseSharedData),
		alignof(FDecoratorA_BaseSharedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_DecoratorA_BaseSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DecoratorA_BaseSharedData.InnerSingleton, Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DecoratorA_BaseSharedData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDecoratorAB_AddSharedData>() == std::is_polymorphic<FAnimNextDecoratorSharedData>(), "USTRUCT FDecoratorAB_AddSharedData cannot be polymorphic unless super FAnimNextDecoratorSharedData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DecoratorAB_AddSharedData;
class UScriptStruct* FDecoratorAB_AddSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DecoratorAB_AddSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DecoratorAB_AddSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData, (UObject*)Z_Construct_UPackage__Script_AnimNextTestSuite(), TEXT("DecoratorAB_AddSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_DecoratorAB_AddSharedData.OuterSingleton;
}
template<> ANIMNEXTTESTSUITE_API UScriptStruct* StaticStruct<FDecoratorAB_AddSharedData>()
{
	return FDecoratorAB_AddSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorUID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DecoratorUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecoratorAB_AddSharedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::NewProp_DecoratorUID_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::NewProp_DecoratorUID = { "DecoratorUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorAB_AddSharedData, DecoratorUID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::NewProp_DecoratorUID_MetaData), Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::NewProp_DecoratorUID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::NewProp_DecoratorUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextTestSuite,
		Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData,
		&NewStructOps,
		"DecoratorAB_AddSharedData",
		Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::PropPointers),
		sizeof(FDecoratorAB_AddSharedData),
		alignof(FDecoratorAB_AddSharedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_DecoratorAB_AddSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DecoratorAB_AddSharedData.InnerSingleton, Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DecoratorAB_AddSharedData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDecoratorAC_AddSharedData>() == std::is_polymorphic<FAnimNextDecoratorSharedData>(), "USTRUCT FDecoratorAC_AddSharedData cannot be polymorphic unless super FAnimNextDecoratorSharedData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DecoratorAC_AddSharedData;
class UScriptStruct* FDecoratorAC_AddSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DecoratorAC_AddSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DecoratorAC_AddSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData, (UObject*)Z_Construct_UPackage__Script_AnimNextTestSuite(), TEXT("DecoratorAC_AddSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_DecoratorAC_AddSharedData.OuterSingleton;
}
template<> ANIMNEXTTESTSUITE_API UScriptStruct* StaticStruct<FDecoratorAC_AddSharedData>()
{
	return FDecoratorAC_AddSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorUID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DecoratorUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecoratorAC_AddSharedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::NewProp_DecoratorUID_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::NewProp_DecoratorUID = { "DecoratorUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorAC_AddSharedData, DecoratorUID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::NewProp_DecoratorUID_MetaData), Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::NewProp_DecoratorUID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::NewProp_DecoratorUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextTestSuite,
		Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData,
		&NewStructOps,
		"DecoratorAC_AddSharedData",
		Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::PropPointers),
		sizeof(FDecoratorAC_AddSharedData),
		alignof(FDecoratorAC_AddSharedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_DecoratorAC_AddSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DecoratorAC_AddSharedData.InnerSingleton, Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DecoratorAC_AddSharedData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDecoratorSerialization_BaseSharedData>() == std::is_polymorphic<FAnimNextDecoratorSharedData>(), "USTRUCT FDecoratorSerialization_BaseSharedData cannot be polymorphic unless super FAnimNextDecoratorSharedData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DecoratorSerialization_BaseSharedData;
class UScriptStruct* FDecoratorSerialization_BaseSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DecoratorSerialization_BaseSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DecoratorSerialization_BaseSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData, (UObject*)Z_Construct_UPackage__Script_AnimNextTestSuite(), TEXT("DecoratorSerialization_BaseSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_DecoratorSerialization_BaseSharedData.OuterSingleton;
}
template<> ANIMNEXTTESTSUITE_API UScriptStruct* StaticStruct<FDecoratorSerialization_BaseSharedData>()
{
	return FDecoratorSerialization_BaseSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerArray_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerTArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerTArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntegerTArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorTArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorTArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorTArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecoratorSerialization_BaseSharedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Integer_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_BaseSharedData, Integer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Integer_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Integer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerArray = { "IntegerArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(IntegerArray, FDecoratorSerialization_BaseSharedData), STRUCT_OFFSET(FDecoratorSerialization_BaseSharedData, IntegerArray), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerArray_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerArray_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerTArray_Inner = { "IntegerTArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerTArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerTArray = { "IntegerTArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_BaseSharedData, IntegerTArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerTArray_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerTArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Vector_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_BaseSharedData, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Vector_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Vector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(VectorArray, FDecoratorSerialization_BaseSharedData), STRUCT_OFFSET(FDecoratorSerialization_BaseSharedData, VectorArray), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorArray_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorTArray_Inner = { "VectorTArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorTArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorTArray = { "VectorTArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_BaseSharedData, VectorTArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorTArray_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorTArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_BaseSharedData, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_String_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_String_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_BaseSharedData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Integer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerTArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_IntegerTArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorTArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_VectorTArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextTestSuite,
		Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData,
		&NewStructOps,
		"DecoratorSerialization_BaseSharedData",
		Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::PropPointers),
		sizeof(FDecoratorSerialization_BaseSharedData),
		alignof(FDecoratorSerialization_BaseSharedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_DecoratorSerialization_BaseSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DecoratorSerialization_BaseSharedData.InnerSingleton, Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DecoratorSerialization_BaseSharedData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDecoratorSerialization_AddSharedData>() == std::is_polymorphic<FAnimNextDecoratorSharedData>(), "USTRUCT FDecoratorSerialization_AddSharedData cannot be polymorphic unless super FAnimNextDecoratorSharedData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DecoratorSerialization_AddSharedData;
class UScriptStruct* FDecoratorSerialization_AddSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DecoratorSerialization_AddSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DecoratorSerialization_AddSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData, (UObject*)Z_Construct_UPackage__Script_AnimNextTestSuite(), TEXT("DecoratorSerialization_AddSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_DecoratorSerialization_AddSharedData.OuterSingleton;
}
template<> ANIMNEXTTESTSUITE_API UScriptStruct* StaticStruct<FDecoratorSerialization_AddSharedData>()
{
	return FDecoratorSerialization_AddSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerArray_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerTArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerTArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntegerTArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorTArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorTArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorTArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecoratorSerialization_AddSharedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Integer_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_AddSharedData, Integer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Integer_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Integer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerArray = { "IntegerArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(IntegerArray, FDecoratorSerialization_AddSharedData), STRUCT_OFFSET(FDecoratorSerialization_AddSharedData, IntegerArray), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerArray_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerArray_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerTArray_Inner = { "IntegerTArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerTArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerTArray = { "IntegerTArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_AddSharedData, IntegerTArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerTArray_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerTArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Vector_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_AddSharedData, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Vector_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Vector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(VectorArray, FDecoratorSerialization_AddSharedData), STRUCT_OFFSET(FDecoratorSerialization_AddSharedData, VectorArray), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorArray_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorTArray_Inner = { "VectorTArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorTArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorTArray = { "VectorTArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_AddSharedData, VectorTArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorTArray_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorTArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_AddSharedData, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_String_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_String_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorSerialization_AddSharedData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Integer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerTArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_IntegerTArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorTArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_VectorTArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextTestSuite,
		Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData,
		&NewStructOps,
		"DecoratorSerialization_AddSharedData",
		Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::PropPointers),
		sizeof(FDecoratorSerialization_AddSharedData),
		alignof(FDecoratorSerialization_AddSharedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_DecoratorSerialization_AddSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DecoratorSerialization_AddSharedData.InnerSingleton, Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DecoratorSerialization_AddSharedData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDecoratorNativeSerialization_AddSharedData>() == std::is_polymorphic<FAnimNextDecoratorSharedData>(), "USTRUCT FDecoratorNativeSerialization_AddSharedData cannot be polymorphic unless super FAnimNextDecoratorSharedData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DecoratorNativeSerialization_AddSharedData;
class UScriptStruct* FDecoratorNativeSerialization_AddSharedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DecoratorNativeSerialization_AddSharedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DecoratorNativeSerialization_AddSharedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData, (UObject*)Z_Construct_UPackage__Script_AnimNextTestSuite(), TEXT("DecoratorNativeSerialization_AddSharedData"));
	}
	return Z_Registration_Info_UScriptStruct_DecoratorNativeSerialization_AddSharedData.OuterSingleton;
}
template<> ANIMNEXTTESTSUITE_API UScriptStruct* StaticStruct<FDecoratorNativeSerialization_AddSharedData>()
{
	return FDecoratorNativeSerialization_AddSharedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Integer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Integer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerArray_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerTArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerTArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntegerTArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorTArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorTArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorTArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecoratorNativeSerialization_AddSharedData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Integer_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Integer = { "Integer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorNativeSerialization_AddSharedData, Integer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Integer_MetaData), Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Integer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerArray = { "IntegerArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(IntegerArray, FDecoratorNativeSerialization_AddSharedData), STRUCT_OFFSET(FDecoratorNativeSerialization_AddSharedData, IntegerArray), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerArray_MetaData), Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerArray_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerTArray_Inner = { "IntegerTArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerTArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerTArray = { "IntegerTArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorNativeSerialization_AddSharedData, IntegerTArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerTArray_MetaData), Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerTArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Vector_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorNativeSerialization_AddSharedData, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Vector_MetaData), Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Vector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(VectorArray, FDecoratorNativeSerialization_AddSharedData), STRUCT_OFFSET(FDecoratorNativeSerialization_AddSharedData, VectorArray), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorArray_MetaData), Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorTArray_Inner = { "VectorTArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorTArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorTArray = { "VectorTArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorNativeSerialization_AddSharedData, VectorTArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorTArray_MetaData), Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorTArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorNativeSerialization_AddSharedData, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_String_MetaData), Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_String_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimNextDecoratorBaseTest.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDecoratorNativeSerialization_AddSharedData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Integer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerTArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_IntegerTArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorTArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_VectorTArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextTestSuite,
		Z_Construct_UScriptStruct_FAnimNextDecoratorSharedData,
		&NewStructOps,
		"DecoratorNativeSerialization_AddSharedData",
		Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::PropPointers),
		sizeof(FDecoratorNativeSerialization_AddSharedData),
		alignof(FDecoratorNativeSerialization_AddSharedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData()
	{
		if (!Z_Registration_Info_UScriptStruct_DecoratorNativeSerialization_AddSharedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DecoratorNativeSerialization_AddSharedData.InnerSingleton, Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DecoratorNativeSerialization_AddSharedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextDecoratorBaseTest_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextDecoratorBaseTest_h_Statics::ScriptStructInfo[] = {
		{ FDecoratorA_BaseSharedData::StaticStruct, Z_Construct_UScriptStruct_FDecoratorA_BaseSharedData_Statics::NewStructOps, TEXT("DecoratorA_BaseSharedData"), &Z_Registration_Info_UScriptStruct_DecoratorA_BaseSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDecoratorA_BaseSharedData), 2891670492U) },
		{ FDecoratorAB_AddSharedData::StaticStruct, Z_Construct_UScriptStruct_FDecoratorAB_AddSharedData_Statics::NewStructOps, TEXT("DecoratorAB_AddSharedData"), &Z_Registration_Info_UScriptStruct_DecoratorAB_AddSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDecoratorAB_AddSharedData), 708018525U) },
		{ FDecoratorAC_AddSharedData::StaticStruct, Z_Construct_UScriptStruct_FDecoratorAC_AddSharedData_Statics::NewStructOps, TEXT("DecoratorAC_AddSharedData"), &Z_Registration_Info_UScriptStruct_DecoratorAC_AddSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDecoratorAC_AddSharedData), 3244822686U) },
		{ FDecoratorSerialization_BaseSharedData::StaticStruct, Z_Construct_UScriptStruct_FDecoratorSerialization_BaseSharedData_Statics::NewStructOps, TEXT("DecoratorSerialization_BaseSharedData"), &Z_Registration_Info_UScriptStruct_DecoratorSerialization_BaseSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDecoratorSerialization_BaseSharedData), 3805318221U) },
		{ FDecoratorSerialization_AddSharedData::StaticStruct, Z_Construct_UScriptStruct_FDecoratorSerialization_AddSharedData_Statics::NewStructOps, TEXT("DecoratorSerialization_AddSharedData"), &Z_Registration_Info_UScriptStruct_DecoratorSerialization_AddSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDecoratorSerialization_AddSharedData), 623838203U) },
		{ FDecoratorNativeSerialization_AddSharedData::StaticStruct, Z_Construct_UScriptStruct_FDecoratorNativeSerialization_AddSharedData_Statics::NewStructOps, TEXT("DecoratorNativeSerialization_AddSharedData"), &Z_Registration_Info_UScriptStruct_DecoratorNativeSerialization_AddSharedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDecoratorNativeSerialization_AddSharedData), 537538250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextDecoratorBaseTest_h_2315558847(TEXT("/Script/AnimNextTestSuite"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextDecoratorBaseTest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextTestSuite_Private_AnimNextDecoratorBaseTest_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
