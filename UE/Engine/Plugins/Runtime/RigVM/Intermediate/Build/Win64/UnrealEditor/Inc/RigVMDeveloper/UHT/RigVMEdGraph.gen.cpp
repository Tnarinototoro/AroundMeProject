// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraph/RigVMEdGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMEdGraph() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMController_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraph();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEditorSideObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void URigVMEdGraph::StaticRegisterNativesURigVMEdGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEdGraph);
	UClass* Z_Construct_UClass_URigVMEdGraph_NoRegister()
	{
		return URigVMEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelNodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModelNodePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFunctionDefinition_MetaData[];
#endif
		static void NewProp_bIsFunctionDefinition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFunctionDefinition;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateController;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraph_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/RigVMEdGraph.h" },
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_ModelNodePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraph.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_ModelNodePath = { "ModelNodePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraph, ModelNodePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_ModelNodePath_MetaData), Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_ModelNodePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_bIsFunctionDefinition_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraph.h" },
	};
#endif
	void Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_bIsFunctionDefinition_SetBit(void* Obj)
	{
		((URigVMEdGraph*)Obj)->bIsFunctionDefinition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_bIsFunctionDefinition = { "bIsFunctionDefinition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URigVMEdGraph), &Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_bIsFunctionDefinition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_bIsFunctionDefinition_MetaData), Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_bIsFunctionDefinition_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_TemplateController_MetaData[] = {
		{ "ModuleRelativePath", "Public/EdGraph/RigVMEdGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_TemplateController = { "TemplateController", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMEdGraph, TemplateController), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_TemplateController_MetaData), Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_TemplateController_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMEdGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_ModelNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_bIsFunctionDefinition,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEdGraph_Statics::NewProp_TemplateController,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URigVMEdGraph_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URigVMEditorSideObject_NoRegister, (int32)VTABLE_OFFSET(URigVMEdGraph, IRigVMEditorSideObject), false },  // 1986337853
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraph_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEdGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEdGraph_Statics::ClassParams = {
		&URigVMEdGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URigVMEdGraph_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraph_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEdGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEdGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URigVMEdGraph()
	{
		if (!Z_Registration_Info_UClass_URigVMEdGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEdGraph.OuterSingleton, Z_Construct_UClass_URigVMEdGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEdGraph.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMEdGraph>()
	{
		return URigVMEdGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEdGraph);
	URigVMEdGraph::~URigVMEdGraph() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMEdGraph)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEdGraph, URigVMEdGraph::StaticClass, TEXT("URigVMEdGraph"), &Z_Registration_Info_UClass_URigVMEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEdGraph), 4069099436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_4200121986(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
