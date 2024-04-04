// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IRemapCurvesDebuggingProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIRemapCurvesDebuggingProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_URemapCurvesDebuggingProvider();
	CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_URemapCurvesDebuggingProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CurveExpressionEditor();
// End Cross Module References
	void URemapCurvesDebuggingProvider::StaticRegisterNativesURemapCurvesDebuggingProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemapCurvesDebuggingProvider);
	UClass* Z_Construct_UClass_URemapCurvesDebuggingProvider_NoRegister()
	{
		return URemapCurvesDebuggingProvider::StaticClass();
	}
	struct Z_Construct_UClass_URemapCurvesDebuggingProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemapCurvesDebuggingProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveExpressionEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemapCurvesDebuggingProvider_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemapCurvesDebuggingProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IRemapCurvesDebuggingProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemapCurvesDebuggingProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRemapCurvesDebuggingProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemapCurvesDebuggingProvider_Statics::ClassParams = {
		&URemapCurvesDebuggingProvider::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemapCurvesDebuggingProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_URemapCurvesDebuggingProvider_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URemapCurvesDebuggingProvider()
	{
		if (!Z_Registration_Info_UClass_URemapCurvesDebuggingProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemapCurvesDebuggingProvider.OuterSingleton, Z_Construct_UClass_URemapCurvesDebuggingProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemapCurvesDebuggingProvider.OuterSingleton;
	}
	template<> CURVEEXPRESSIONEDITOR_API UClass* StaticClass<URemapCurvesDebuggingProvider>()
	{
		return URemapCurvesDebuggingProvider::StaticClass();
	}
	URemapCurvesDebuggingProvider::URemapCurvesDebuggingProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemapCurvesDebuggingProvider);
	URemapCurvesDebuggingProvider::~URemapCurvesDebuggingProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemapCurvesDebuggingProvider, URemapCurvesDebuggingProvider::StaticClass, TEXT("URemapCurvesDebuggingProvider"), &Z_Registration_Info_UClass_URemapCurvesDebuggingProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemapCurvesDebuggingProvider), 3809198313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_3766721455(TEXT("/Script/CurveExpressionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_IRemapCurvesDebuggingProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
