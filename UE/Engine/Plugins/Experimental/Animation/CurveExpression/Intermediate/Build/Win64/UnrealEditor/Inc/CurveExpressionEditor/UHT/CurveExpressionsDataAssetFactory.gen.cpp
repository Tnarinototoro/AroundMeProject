// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/CurveExpressionsDataAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveExpressionsDataAssetFactory() {}
// Cross Module References
	CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_UCurveExpressionsDataAssetFactory();
	CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_UCurveExpressionsDataAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CurveExpressionEditor();
// End Cross Module References
	void UCurveExpressionsDataAssetFactory::StaticRegisterNativesUCurveExpressionsDataAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveExpressionsDataAssetFactory);
	UClass* Z_Construct_UClass_UCurveExpressionsDataAssetFactory_NoRegister()
	{
		return UCurveExpressionsDataAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveExpressionsDataAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveExpressionsDataAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveExpressionEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveExpressionsDataAssetFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveExpressionsDataAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CurveExpressionsDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/CurveExpressionsDataAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveExpressionsDataAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveExpressionsDataAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveExpressionsDataAssetFactory_Statics::ClassParams = {
		&UCurveExpressionsDataAssetFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveExpressionsDataAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveExpressionsDataAssetFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCurveExpressionsDataAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UCurveExpressionsDataAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveExpressionsDataAssetFactory.OuterSingleton, Z_Construct_UClass_UCurveExpressionsDataAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveExpressionsDataAssetFactory.OuterSingleton;
	}
	template<> CURVEEXPRESSIONEDITOR_API UClass* StaticClass<UCurveExpressionsDataAssetFactory>()
	{
		return UCurveExpressionsDataAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveExpressionsDataAssetFactory);
	UCurveExpressionsDataAssetFactory::~UCurveExpressionsDataAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Private_CurveExpressionsDataAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Private_CurveExpressionsDataAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveExpressionsDataAssetFactory, UCurveExpressionsDataAssetFactory::StaticClass, TEXT("UCurveExpressionsDataAssetFactory"), &Z_Registration_Info_UClass_UCurveExpressionsDataAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveExpressionsDataAssetFactory), 2278881081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Private_CurveExpressionsDataAssetFactory_h_4086260810(TEXT("/Script/CurveExpressionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Private_CurveExpressionsDataAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Private_CurveExpressionsDataAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
