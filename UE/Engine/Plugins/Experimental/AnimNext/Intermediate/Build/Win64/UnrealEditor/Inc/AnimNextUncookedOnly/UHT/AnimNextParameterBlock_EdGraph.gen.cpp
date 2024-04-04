// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/AnimNextParameterBlock_EdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextParameterBlock_EdGraph() {}
// Cross Module References
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlock_EdGraph();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_NoRegister();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraph();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimNextParameterBlock_EdGraph::StaticRegisterNativesUAnimNextParameterBlock_EdGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlock_EdGraph);
	UClass* Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_NoRegister()
	{
		return UAnimNextParameterBlock_EdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Param/AnimNextParameterBlock_EdGraph.h" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EdGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterBlock_EdGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_Statics::ClassParams = {
		&UAnimNextParameterBlock_EdGraph::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextParameterBlock_EdGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlock_EdGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlock_EdGraph.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlock_EdGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlock_EdGraph.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterBlock_EdGraph>()
	{
		return UAnimNextParameterBlock_EdGraph::StaticClass();
	}
	UAnimNextParameterBlock_EdGraph::UAnimNextParameterBlock_EdGraph() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlock_EdGraph);
	UAnimNextParameterBlock_EdGraph::~UAnimNextParameterBlock_EdGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EdGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EdGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterBlock_EdGraph, UAnimNextParameterBlock_EdGraph::StaticClass, TEXT("UAnimNextParameterBlock_EdGraph"), &Z_Registration_Info_UClass_UAnimNextParameterBlock_EdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlock_EdGraph), 458688039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EdGraph_h_750745733(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EdGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
