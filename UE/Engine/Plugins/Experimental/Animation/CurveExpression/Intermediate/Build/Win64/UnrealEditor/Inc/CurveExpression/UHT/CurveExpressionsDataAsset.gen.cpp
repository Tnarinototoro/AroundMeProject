// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurveExpressionsDataAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveExpressionsDataAsset() {}
// Cross Module References
	CURVEEXPRESSION_API UClass* Z_Construct_UClass_UCurveExpressionsDataAsset();
	CURVEEXPRESSION_API UClass* Z_Construct_UClass_UCurveExpressionsDataAsset_NoRegister();
	CURVEEXPRESSION_API UScriptStruct* Z_Construct_UScriptStruct_FCurveExpressionList();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_CurveExpression();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveExpressionList;
class UScriptStruct* FCurveExpressionList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveExpressionList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveExpressionList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveExpressionList, (UObject*)Z_Construct_UPackage__Script_CurveExpression(), TEXT("CurveExpressionList"));
	}
	return Z_Registration_Info_UScriptStruct_CurveExpressionList.OuterSingleton;
}
template<> CURVEEXPRESSION_API UScriptStruct* StaticStruct<FCurveExpressionList>()
{
	return FCurveExpressionList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveExpressionList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignmentExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssignmentExpressions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveExpressionList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CurveExpressionsDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveExpressionList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveExpressionList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveExpressionList_Statics::NewProp_AssignmentExpressions_MetaData[] = {
		{ "Category", "Curve Expressions" },
		{ "ModuleRelativePath", "Public/CurveExpressionsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurveExpressionList_Statics::NewProp_AssignmentExpressions = { "AssignmentExpressions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveExpressionList, AssignmentExpressions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveExpressionList_Statics::NewProp_AssignmentExpressions_MetaData), Z_Construct_UScriptStruct_FCurveExpressionList_Statics::NewProp_AssignmentExpressions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveExpressionList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveExpressionList_Statics::NewProp_AssignmentExpressions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveExpressionList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CurveExpression,
		nullptr,
		&NewStructOps,
		"CurveExpressionList",
		Z_Construct_UScriptStruct_FCurveExpressionList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveExpressionList_Statics::PropPointers),
		sizeof(FCurveExpressionList),
		alignof(FCurveExpressionList),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveExpressionList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurveExpressionList_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveExpressionList_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCurveExpressionList()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveExpressionList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveExpressionList.InnerSingleton, Z_Construct_UScriptStruct_FCurveExpressionList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveExpressionList.InnerSingleton;
	}
	void UCurveExpressionsDataAsset::StaticRegisterNativesUCurveExpressionsDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveExpressionsDataAsset);
	UClass* Z_Construct_UClass_UCurveExpressionsDataAsset_NoRegister()
	{
		return UCurveExpressionsDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCurveExpressionsDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expressions;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_NamedConstants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedConstants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamedConstants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveExpression,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CurveExpressionsDataAsset.h" },
		{ "ModuleRelativePath", "Public/CurveExpressionsDataAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_Expressions_MetaData[] = {
		{ "Category", "Expressions" },
		{ "ModuleRelativePath", "Public/CurveExpressionsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_Expressions = { "Expressions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveExpressionsDataAsset, Expressions), Z_Construct_UScriptStruct_FCurveExpressionList, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_Expressions_MetaData), Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_Expressions_MetaData) }; // 1558340293
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_NamedConstants_Inner = { "NamedConstants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_NamedConstants_MetaData[] = {
		{ "ModuleRelativePath", "Public/CurveExpressionsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_NamedConstants = { "NamedConstants", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveExpressionsDataAsset, NamedConstants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_NamedConstants_MetaData), Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_NamedConstants_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_Expressions,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_NamedConstants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::NewProp_NamedConstants,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveExpressionsDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::ClassParams = {
		&UCurveExpressionsDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCurveExpressionsDataAsset()
	{
		if (!Z_Registration_Info_UClass_UCurveExpressionsDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveExpressionsDataAsset.OuterSingleton, Z_Construct_UClass_UCurveExpressionsDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveExpressionsDataAsset.OuterSingleton;
	}
	template<> CURVEEXPRESSION_API UClass* StaticClass<UCurveExpressionsDataAsset>()
	{
		return UCurveExpressionsDataAsset::StaticClass();
	}
	UCurveExpressionsDataAsset::UCurveExpressionsDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveExpressionsDataAsset);
	UCurveExpressionsDataAsset::~UCurveExpressionsDataAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCurveExpressionsDataAsset)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_CurveExpressionsDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_CurveExpressionsDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FCurveExpressionList::StaticStruct, Z_Construct_UScriptStruct_FCurveExpressionList_Statics::NewStructOps, TEXT("CurveExpressionList"), &Z_Registration_Info_UScriptStruct_CurveExpressionList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveExpressionList), 1558340293U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_CurveExpressionsDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveExpressionsDataAsset, UCurveExpressionsDataAsset::StaticClass, TEXT("UCurveExpressionsDataAsset"), &Z_Registration_Info_UClass_UCurveExpressionsDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveExpressionsDataAsset), 586349761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_CurveExpressionsDataAsset_h_3887384736(TEXT("/Script/CurveExpression"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_CurveExpressionsDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_CurveExpressionsDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_CurveExpressionsDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Runtime_Public_CurveExpressionsDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
