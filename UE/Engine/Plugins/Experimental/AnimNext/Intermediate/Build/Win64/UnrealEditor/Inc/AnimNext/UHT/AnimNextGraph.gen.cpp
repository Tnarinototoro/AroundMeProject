// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Graph/AnimNextGraph.h"
#include "RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextGraph() {}
// Cross Module References
	ANIMNEXT_API UClass* Z_Construct_UClass_UAnimNextGraph();
	ANIMNEXT_API UClass* Z_Construct_UClass_UAnimNextGraph_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVM_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
	UPackage* Z_Construct_UPackage__Script_AnimNext();
// End Cross Module References
	void UAnimNextGraph::StaticRegisterNativesUAnimNextGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextGraph);
	UClass* Z_Construct_UClass_UAnimNextGraph_NoRegister()
	{
		return UAnimNextGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigVM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RigVM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtendedExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtendedExecuteContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRuntimeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMRuntimeSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNext,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A user-created graph of logic used to supply data\n" },
		{ "IncludePath", "Graph/AnimNextGraph.h" },
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph.h" },
		{ "ToolTip", "A user-created graph of logic used to supply data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_RigVM_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_RigVM = { "RigVM", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph, RigVM), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_RigVM_MetaData), Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_RigVM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_ExtendedExecuteContext_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_ExtendedExecuteContext = { "ExtendedExecuteContext", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph, ExtendedExecuteContext), Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_ExtendedExecuteContext_MetaData), Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_ExtendedExecuteContext_MetaData) }; // 1449618519
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_VMRuntimeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_VMRuntimeSettings = { "VMRuntimeSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph, VMRuntimeSettings), Z_Construct_UScriptStruct_FRigVMRuntimeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_VMRuntimeSettings_MetaData), Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_VMRuntimeSettings_MetaData) }; // 2055583755
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_EditorData_MetaData[] = {
		{ "Category", "Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Internal/Graph/AnimNextGraph.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x00460008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNextGraph, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_EditorData_MetaData), Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_EditorData_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_RigVM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_ExtendedExecuteContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_VMRuntimeSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextGraph_Statics::NewProp_EditorData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextGraph_Statics::ClassParams = {
		&UAnimNextGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimNextGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimNextGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextGraph.OuterSingleton, Z_Construct_UClass_UAnimNextGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextGraph.OuterSingleton;
	}
	template<> ANIMNEXT_API UClass* StaticClass<UAnimNextGraph>()
	{
		return UAnimNextGraph::StaticClass();
	}
	UAnimNextGraph::UAnimNextGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextGraph);
	UAnimNextGraph::~UAnimNextGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimNextGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimNextGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextGraph, UAnimNextGraph::StaticClass, TEXT("UAnimNextGraph"), &Z_Registration_Info_UClass_UAnimNextGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextGraph), 1829782233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimNextGraph_h_1755012164(TEXT("/Script/AnimNext"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimNextGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Graph_AnimNextGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
