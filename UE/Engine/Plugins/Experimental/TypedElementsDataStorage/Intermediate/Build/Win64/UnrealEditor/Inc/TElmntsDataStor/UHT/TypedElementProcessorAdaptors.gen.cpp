// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Processors/TypedElementProcessorAdaptors.h"
#include "MassEntityQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementProcessorAdaptors() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityQuery();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries();
	TYPEDELEMENTSDATASTORAGE_API UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_NoRegister();
	TYPEDELEMENTSDATASTORAGE_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementQueryProcessorData();
	UPackage* Z_Construct_UPackage__Script_TypedElementsDataStorage();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementQueryProcessorData;
class UScriptStruct* FTypedElementQueryProcessorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementQueryProcessorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementQueryProcessorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementQueryProcessorData, (UObject*)Z_Construct_UPackage__Script_TypedElementsDataStorage(), TEXT("TypedElementQueryProcessorData"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementQueryProcessorData.OuterSingleton;
}
template<> TYPEDELEMENTSDATASTORAGE_API UScriptStruct* StaticStruct<FTypedElementQueryProcessorData>()
{
	return FTypedElementQueryProcessorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementQueryProcessorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementQueryProcessorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementQueryProcessorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementQueryProcessorData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementQueryProcessorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
		nullptr,
		&NewStructOps,
		"TypedElementQueryProcessorData",
		nullptr,
		0,
		sizeof(FTypedElementQueryProcessorData),
		alignof(FTypedElementQueryProcessorData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementQueryProcessorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTypedElementQueryProcessorData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementQueryProcessorData()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementQueryProcessorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementQueryProcessorData.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementQueryProcessorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementQueryProcessorData.InnerSingleton;
	}
	void UTypedElementQueryProcessorCallbackAdapterProcessorBase::StaticRegisterNativesUTypedElementQueryProcessorCallbackAdapterProcessorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryProcessorCallbackAdapterProcessorBase);
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_NoRegister()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessorBase::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adapts processor queries callback for MASS.\n */" },
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
		{ "ToolTip", "Adapts processor queries callback for MASS." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypedElementQueryProcessorCallbackAdapterProcessorBase, Data), Z_Construct_UScriptStruct_FTypedElementQueryProcessorData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::NewProp_Data_MetaData) }; // 2538592415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryProcessorCallbackAdapterProcessorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::ClassParams = {
		&UTypedElementQueryProcessorCallbackAdapterProcessorBase::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::PropPointers),
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase.OuterSingleton, Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryProcessorCallbackAdapterProcessorBase>()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryProcessorCallbackAdapterProcessorBase);
	UTypedElementQueryProcessorCallbackAdapterProcessorBase::~UTypedElementQueryProcessorCallbackAdapterProcessorBase() {}
	void UTypedElementQueryProcessorCallbackAdapterProcessor::StaticRegisterNativesUTypedElementQueryProcessorCallbackAdapterProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryProcessorCallbackAdapterProcessor);
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor_NoRegister()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryProcessorCallbackAdapterProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor_Statics::ClassParams = {
		&UTypedElementQueryProcessorCallbackAdapterProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor.OuterSingleton, Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryProcessorCallbackAdapterProcessor>()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessor::StaticClass();
	}
	UTypedElementQueryProcessorCallbackAdapterProcessor::UTypedElementQueryProcessorCallbackAdapterProcessor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryProcessorCallbackAdapterProcessor);
	UTypedElementQueryProcessorCallbackAdapterProcessor::~UTypedElementQueryProcessorCallbackAdapterProcessor() {}
	void UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery::StaticRegisterNativesUTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery);
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_NoRegister()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeSubqueries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeSubqueries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mass verifies that queries that are used by processors are on the processor themselves. It does this by taking the address of the query \n * and seeing if it's within the start and end address of the processor. When a dynamic array is used those addresses are going to be \n * elsewhere, so the two options are to store a single fixed size array on a processor or have multiple instances. With Mass' queries being \n * not an insignificant size it's preferable to have several variants with queries to allow the choice for the minimal size. Unfortunately \n * UHT doesn't allow for templates so it had to be done in an explicit way.\n */" },
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
		{ "ToolTip", "Mass verifies that queries that are used by processors are on the processor themselves. It does this by taking the address of the query\nand seeing if it's within the start and end address of the processor. When a dynamic array is used those addresses are going to be\nelsewhere, so the two options are to store a single fixed size array on a processor or have multiple instances. With Mass' queries being\nnot an insignificant size it's preferable to have several variants with queries to allow the choice for the minimal size. Unfortunately\nUHT doesn't allow for templates so it had to be done in an explicit way." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::NewProp_NativeSubqueries_MetaData[] = {
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::NewProp_NativeSubqueries = { "NativeSubqueries", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(NativeSubqueries, UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery), STRUCT_OFFSET(UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery, NativeSubqueries), Z_Construct_UScriptStruct_FMassEntityQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::NewProp_NativeSubqueries_MetaData), Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::NewProp_NativeSubqueries_MetaData) }; // 3187592891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::NewProp_NativeSubqueries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::ClassParams = {
		&UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::PropPointers),
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery.OuterSingleton, Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery>()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery::StaticClass();
	}
	UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery::UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery);
	UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery::~UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery() {}
	void UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries::StaticRegisterNativesUTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries);
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_NoRegister()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeSubqueries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeSubqueries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::NewProp_NativeSubqueries_MetaData[] = {
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::NewProp_NativeSubqueries = { "NativeSubqueries", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(NativeSubqueries, UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries), STRUCT_OFFSET(UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries, NativeSubqueries), Z_Construct_UScriptStruct_FMassEntityQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::NewProp_NativeSubqueries_MetaData), Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::NewProp_NativeSubqueries_MetaData) }; // 3187592891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::NewProp_NativeSubqueries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::ClassParams = {
		&UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::PropPointers),
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries.OuterSingleton, Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries>()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries::StaticClass();
	}
	UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries::UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries);
	UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries::~UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries() {}
	void UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries::StaticRegisterNativesUTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries);
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_NoRegister()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeSubqueries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeSubqueries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::NewProp_NativeSubqueries_MetaData[] = {
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::NewProp_NativeSubqueries = { "NativeSubqueries", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(NativeSubqueries, UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries), STRUCT_OFFSET(UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries, NativeSubqueries), Z_Construct_UScriptStruct_FMassEntityQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::NewProp_NativeSubqueries_MetaData), Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::NewProp_NativeSubqueries_MetaData) }; // 3187592891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::NewProp_NativeSubqueries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::ClassParams = {
		&UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::PropPointers),
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries.OuterSingleton, Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries>()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries::StaticClass();
	}
	UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries::UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries);
	UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries::~UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries() {}
	void UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries::StaticRegisterNativesUTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries);
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_NoRegister()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeSubqueries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeSubqueries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::NewProp_NativeSubqueries_MetaData[] = {
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::NewProp_NativeSubqueries = { "NativeSubqueries", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(NativeSubqueries, UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries), STRUCT_OFFSET(UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries, NativeSubqueries), Z_Construct_UScriptStruct_FMassEntityQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::NewProp_NativeSubqueries_MetaData), Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::NewProp_NativeSubqueries_MetaData) }; // 3187592891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::NewProp_NativeSubqueries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::ClassParams = {
		&UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::PropPointers),
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries.OuterSingleton, Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries>()
	{
		return UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries::StaticClass();
	}
	UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries::UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries);
	UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries::~UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries() {}
	void UTypedElementQueryObserverCallbackAdapterProcessorBase::StaticRegisterNativesUTypedElementQueryObserverCallbackAdapterProcessorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryObserverCallbackAdapterProcessorBase);
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_NoRegister()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessorBase::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adapts observer queries callback for MASS.\n */" },
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
		{ "ToolTip", "Adapts observer queries callback for MASS." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTypedElementQueryObserverCallbackAdapterProcessorBase, Data), Z_Construct_UScriptStruct_FTypedElementQueryProcessorData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::NewProp_Data_MetaData) }; // 2538592415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryObserverCallbackAdapterProcessorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::ClassParams = {
		&UTypedElementQueryObserverCallbackAdapterProcessorBase::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::PropPointers),
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase.OuterSingleton, Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryObserverCallbackAdapterProcessorBase>()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryObserverCallbackAdapterProcessorBase);
	UTypedElementQueryObserverCallbackAdapterProcessorBase::~UTypedElementQueryObserverCallbackAdapterProcessorBase() {}
	void UTypedElementQueryObserverCallbackAdapterProcessor::StaticRegisterNativesUTypedElementQueryObserverCallbackAdapterProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryObserverCallbackAdapterProcessor);
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor_NoRegister()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryObserverCallbackAdapterProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor_Statics::ClassParams = {
		&UTypedElementQueryObserverCallbackAdapterProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessor.OuterSingleton, Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessor.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryObserverCallbackAdapterProcessor>()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessor::StaticClass();
	}
	UTypedElementQueryObserverCallbackAdapterProcessor::UTypedElementQueryObserverCallbackAdapterProcessor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryObserverCallbackAdapterProcessor);
	UTypedElementQueryObserverCallbackAdapterProcessor::~UTypedElementQueryObserverCallbackAdapterProcessor() {}
	void UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery::StaticRegisterNativesUTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery);
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_NoRegister()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeSubqueries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeSubqueries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mass verifies that queries that are used by processors are on the processor themselves. It does this by taking the address of the query\n * and seeing if it's within the start and end address of the processor. When a dynamic array is used those addresses are going to be\n * elsewhere, so the two options are to store a single fixed size array on a processor or have multiple instances. With Mass' queries being\n * not an insignificant size it's preferable to have several variants with queries to allow the choice for the minimal size. Unfortunately\n * UHT doesn't allow for templates so it had to be done in an explicit way.\n */" },
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
		{ "ToolTip", "Mass verifies that queries that are used by processors are on the processor themselves. It does this by taking the address of the query\nand seeing if it's within the start and end address of the processor. When a dynamic array is used those addresses are going to be\nelsewhere, so the two options are to store a single fixed size array on a processor or have multiple instances. With Mass' queries being\nnot an insignificant size it's preferable to have several variants with queries to allow the choice for the minimal size. Unfortunately\nUHT doesn't allow for templates so it had to be done in an explicit way." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::NewProp_NativeSubqueries_MetaData[] = {
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::NewProp_NativeSubqueries = { "NativeSubqueries", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(NativeSubqueries, UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery), STRUCT_OFFSET(UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery, NativeSubqueries), Z_Construct_UScriptStruct_FMassEntityQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::NewProp_NativeSubqueries_MetaData), Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::NewProp_NativeSubqueries_MetaData) }; // 3187592891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::NewProp_NativeSubqueries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::ClassParams = {
		&UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::PropPointers),
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery.OuterSingleton, Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery>()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery::StaticClass();
	}
	UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery::UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery);
	UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery::~UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery() {}
	void UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries::StaticRegisterNativesUTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries);
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_NoRegister()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeSubqueries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeSubqueries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::NewProp_NativeSubqueries_MetaData[] = {
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::NewProp_NativeSubqueries = { "NativeSubqueries", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(NativeSubqueries, UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries), STRUCT_OFFSET(UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries, NativeSubqueries), Z_Construct_UScriptStruct_FMassEntityQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::NewProp_NativeSubqueries_MetaData), Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::NewProp_NativeSubqueries_MetaData) }; // 3187592891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::NewProp_NativeSubqueries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::ClassParams = {
		&UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::PropPointers),
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries.OuterSingleton, Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries>()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries::StaticClass();
	}
	UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries::UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries);
	UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries::~UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries() {}
	void UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries::StaticRegisterNativesUTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries);
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_NoRegister()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeSubqueries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeSubqueries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::NewProp_NativeSubqueries_MetaData[] = {
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::NewProp_NativeSubqueries = { "NativeSubqueries", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(NativeSubqueries, UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries), STRUCT_OFFSET(UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries, NativeSubqueries), Z_Construct_UScriptStruct_FMassEntityQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::NewProp_NativeSubqueries_MetaData), Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::NewProp_NativeSubqueries_MetaData) }; // 3187592891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::NewProp_NativeSubqueries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::ClassParams = {
		&UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::PropPointers),
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries.OuterSingleton, Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries>()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries::StaticClass();
	}
	UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries::UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries);
	UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries::~UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries() {}
	void UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries::StaticRegisterNativesUTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries);
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_NoRegister()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeSubqueries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeSubqueries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementsDataStorage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Processors/TypedElementProcessorAdaptors.h" },
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::NewProp_NativeSubqueries_MetaData[] = {
		{ "ModuleRelativePath", "Private/Processors/TypedElementProcessorAdaptors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::NewProp_NativeSubqueries = { "NativeSubqueries", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(NativeSubqueries, UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries), STRUCT_OFFSET(UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries, NativeSubqueries), Z_Construct_UScriptStruct_FMassEntityQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::NewProp_NativeSubqueries_MetaData), Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::NewProp_NativeSubqueries_MetaData) }; // 3187592891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::NewProp_NativeSubqueries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::ClassParams = {
		&UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::PropPointers),
		0,
		0x400030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::Class_MetaDataParams), Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries()
	{
		if (!Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries.OuterSingleton, Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries.OuterSingleton;
	}
	template<> TYPEDELEMENTSDATASTORAGE_API UClass* StaticClass<UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries>()
	{
		return UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries::StaticClass();
	}
	UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries::UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries);
	UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries::~UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementProcessorAdaptors_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementProcessorAdaptors_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementQueryProcessorData::StaticStruct, Z_Construct_UScriptStruct_FTypedElementQueryProcessorData_Statics::NewStructOps, TEXT("TypedElementQueryProcessorData"), &Z_Registration_Info_UScriptStruct_TypedElementQueryProcessorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementQueryProcessorData), 2538592415U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementProcessorAdaptors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase, UTypedElementQueryProcessorCallbackAdapterProcessorBase::StaticClass, TEXT("UTypedElementQueryProcessorCallbackAdapterProcessorBase"), &Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryProcessorCallbackAdapterProcessorBase), 2460434932U) },
		{ Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor, UTypedElementQueryProcessorCallbackAdapterProcessor::StaticClass, TEXT("UTypedElementQueryProcessorCallbackAdapterProcessor"), &Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryProcessorCallbackAdapterProcessor), 2502342935U) },
		{ Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery, UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery::StaticClass, TEXT("UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery"), &Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery), 2057737549U) },
		{ Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries, UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries::StaticClass, TEXT("UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries"), &Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryProcessorCallbackAdapterProcessorWith2Subqueries), 1642788662U) },
		{ Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries, UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries::StaticClass, TEXT("UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries"), &Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryProcessorCallbackAdapterProcessorWith3Subqueries), 4021670515U) },
		{ Z_Construct_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries, UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries::StaticClass, TEXT("UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries"), &Z_Registration_Info_UClass_UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryProcessorCallbackAdapterProcessorWith4Subqueries), 3389662928U) },
		{ Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase, UTypedElementQueryObserverCallbackAdapterProcessorBase::StaticClass, TEXT("UTypedElementQueryObserverCallbackAdapterProcessorBase"), &Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryObserverCallbackAdapterProcessorBase), 3388612756U) },
		{ Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessor, UTypedElementQueryObserverCallbackAdapterProcessor::StaticClass, TEXT("UTypedElementQueryObserverCallbackAdapterProcessor"), &Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryObserverCallbackAdapterProcessor), 880919423U) },
		{ Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery, UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery::StaticClass, TEXT("UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery"), &Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryObserverCallbackAdapterProcessorWith1Subquery), 3006627375U) },
		{ Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries, UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries::StaticClass, TEXT("UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries"), &Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryObserverCallbackAdapterProcessorWith2Subqueries), 2035098700U) },
		{ Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries, UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries::StaticClass, TEXT("UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries"), &Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryObserverCallbackAdapterProcessorWith3Subqueries), 3102835896U) },
		{ Z_Construct_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries, UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries::StaticClass, TEXT("UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries"), &Z_Registration_Info_UClass_UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementQueryObserverCallbackAdapterProcessorWith4Subqueries), 852060463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementProcessorAdaptors_h_12337188(TEXT("/Script/TypedElementsDataStorage"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementProcessorAdaptors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementProcessorAdaptors_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementProcessorAdaptors_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TypedElementsDataStorage_Source_TypedElementsDataStorage_Private_Processors_TypedElementProcessorAdaptors_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
