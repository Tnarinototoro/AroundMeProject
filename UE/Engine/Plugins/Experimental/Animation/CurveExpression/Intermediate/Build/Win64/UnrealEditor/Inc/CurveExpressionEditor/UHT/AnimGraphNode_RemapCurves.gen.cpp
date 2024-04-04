// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_RemapCurves.h"
#include "AnimNode_RemapCurves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_RemapCurves() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	CURVEEXPRESSION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RemapCurves();
	CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_RemapCurves();
	CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_RemapCurves_NoRegister();
	CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_URemapCurvesDebuggingProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CurveExpressionEditor();
// End Cross Module References
	void UAnimGraphNode_RemapCurves::StaticRegisterNativesUAnimGraphNode_RemapCurves()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_RemapCurves);
	UClass* Z_Construct_UClass_UAnimGraphNode_RemapCurves_NoRegister()
	{
		return UAnimGraphNode_RemapCurves::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveExpressionEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_RemapCurves.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RemapCurves.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RemapCurves.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_RemapCurves, Node), Z_Construct_UScriptStruct_FAnimNode_RemapCurves, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::NewProp_Node_MetaData) }; // 3267587610
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::NewProp_Node,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URemapCurvesDebuggingProvider_NoRegister, (int32)VTABLE_OFFSET(UAnimGraphNode_RemapCurves, IRemapCurvesDebuggingProvider), false },  // 3809198313
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_RemapCurves>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::ClassParams = {
		&UAnimGraphNode_RemapCurves::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimGraphNode_RemapCurves()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_RemapCurves.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_RemapCurves.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_RemapCurves_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_RemapCurves.OuterSingleton;
	}
	template<> CURVEEXPRESSIONEDITOR_API UClass* StaticClass<UAnimGraphNode_RemapCurves>()
	{
		return UAnimGraphNode_RemapCurves::StaticClass();
	}
	UAnimGraphNode_RemapCurves::UAnimGraphNode_RemapCurves(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_RemapCurves);
	UAnimGraphNode_RemapCurves::~UAnimGraphNode_RemapCurves() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_AnimGraphNode_RemapCurves_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_AnimGraphNode_RemapCurves_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_RemapCurves, UAnimGraphNode_RemapCurves::StaticClass, TEXT("UAnimGraphNode_RemapCurves"), &Z_Registration_Info_UClass_UAnimGraphNode_RemapCurves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_RemapCurves), 726542969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_AnimGraphNode_RemapCurves_h_2078005996(TEXT("/Script/CurveExpressionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_AnimGraphNode_RemapCurves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_AnimGraphNode_RemapCurves_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
