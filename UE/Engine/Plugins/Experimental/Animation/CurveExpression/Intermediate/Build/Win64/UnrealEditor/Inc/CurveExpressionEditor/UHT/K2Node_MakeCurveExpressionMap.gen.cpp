// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_MakeCurveExpressionMap.h"
#include "CurveExpressionsDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MakeCurveExpressionMap() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	CURVEEXPRESSION_API UScriptStruct* Z_Construct_UScriptStruct_FCurveExpressionList();
	CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_UK2Node_MakeCurveExpressionMap();
	CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CurveExpressionEditor();
// End Cross Module References
	void UK2Node_MakeCurveExpressionMap::StaticRegisterNativesUK2Node_MakeCurveExpressionMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_MakeCurveExpressionMap);
	UClass* Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_NoRegister()
	{
		return UK2Node_MakeCurveExpressionMap::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Expressions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveExpressionEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_MakeCurveExpressionMap.h" },
		{ "ModuleRelativePath", "Public/K2Node_MakeCurveExpressionMap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::NewProp_Expressions_MetaData[] = {
		{ "Category", "Expressions" },
		{ "Comment", "// End of UK2Node interface\n" },
		{ "ModuleRelativePath", "Public/K2Node_MakeCurveExpressionMap.h" },
		{ "ToolTip", "End of UK2Node interface" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::NewProp_Expressions = { "Expressions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_MakeCurveExpressionMap, Expressions), Z_Construct_UScriptStruct_FCurveExpressionList, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::NewProp_Expressions_MetaData), Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::NewProp_Expressions_MetaData) }; // 1558340293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::NewProp_Expressions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MakeCurveExpressionMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::ClassParams = {
		&UK2Node_MakeCurveExpressionMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UK2Node_MakeCurveExpressionMap()
	{
		if (!Z_Registration_Info_UClass_UK2Node_MakeCurveExpressionMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_MakeCurveExpressionMap.OuterSingleton, Z_Construct_UClass_UK2Node_MakeCurveExpressionMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_MakeCurveExpressionMap.OuterSingleton;
	}
	template<> CURVEEXPRESSIONEDITOR_API UClass* StaticClass<UK2Node_MakeCurveExpressionMap>()
	{
		return UK2Node_MakeCurveExpressionMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MakeCurveExpressionMap);
	UK2Node_MakeCurveExpressionMap::~UK2Node_MakeCurveExpressionMap() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_K2Node_MakeCurveExpressionMap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_K2Node_MakeCurveExpressionMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_MakeCurveExpressionMap, UK2Node_MakeCurveExpressionMap::StaticClass, TEXT("UK2Node_MakeCurveExpressionMap"), &Z_Registration_Info_UClass_UK2Node_MakeCurveExpressionMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_MakeCurveExpressionMap), 397483992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_K2Node_MakeCurveExpressionMap_h_3394965340(TEXT("/Script/CurveExpressionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_K2Node_MakeCurveExpressionMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_K2Node_MakeCurveExpressionMap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
