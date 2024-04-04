// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_FunctionReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_FunctionReference() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_FunctionReference();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_FunctionReference_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePinRouter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNode_FunctionReference::StaticRegisterNativesUOptimusNode_FunctionReference()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_FunctionReference);
	UClass* Z_Construct_UClass_UOptimusNode_FunctionReference_NoRegister()
	{
		return UOptimusNode_FunctionReference::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_FunctionReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_FunctionReference.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_FunctionReference.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::NewProp_FunctionGraph_MetaData[] = {
		{ "Comment", "/** The graph that owns us. This contains all the necessary pin information to add on\n\x09 * the terminal node.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_FunctionReference.h" },
		{ "ToolTip", "The graph that owns us. This contains all the necessary pin information to add on\nthe terminal node." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::NewProp_FunctionGraph = { "FunctionGraph", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOptimusNode_FunctionReference, FunctionGraph), Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::NewProp_FunctionGraph_MetaData), Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::NewProp_FunctionGraph_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::NewProp_FunctionGraph,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusNodePinRouter_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_FunctionReference, IOptimusNodePinRouter), false },  // 1889985175
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_FunctionReference>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::ClassParams = {
		&UOptimusNode_FunctionReference::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x010000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::Class_MetaDataParams), Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOptimusNode_FunctionReference()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_FunctionReference.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_FunctionReference.OuterSingleton, Z_Construct_UClass_UOptimusNode_FunctionReference_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_FunctionReference.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_FunctionReference>()
	{
		return UOptimusNode_FunctionReference::StaticClass();
	}
	UOptimusNode_FunctionReference::UOptimusNode_FunctionReference() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_FunctionReference);
	UOptimusNode_FunctionReference::~UOptimusNode_FunctionReference() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_FunctionReference, UOptimusNode_FunctionReference::StaticClass, TEXT("UOptimusNode_FunctionReference"), &Z_Registration_Info_UClass_UOptimusNode_FunctionReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_FunctionReference), 889400934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_1843343997(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_FunctionReference_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
