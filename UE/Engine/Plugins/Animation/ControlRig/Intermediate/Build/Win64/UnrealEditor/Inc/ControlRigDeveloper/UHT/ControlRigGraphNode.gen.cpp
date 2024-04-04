// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/ControlRigGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigGraphNode() {}
// Cross Module References
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraphNode();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraphNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_ControlRigDeveloper();
// End Cross Module References
	void UControlRigGraphNode::StaticRegisterNativesUControlRigGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigGraphNode);
	UClass* Z_Construct_UClass_UControlRigGraphNode_NoRegister()
	{
		return UControlRigGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigGraphNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigGraphNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for animation ControlRig-related nodes */" },
		{ "IncludePath", "Graph/ControlRigGraphNode.h" },
		{ "ModuleRelativePath", "Public/Graph/ControlRigGraphNode.h" },
		{ "ToolTip", "Base class for animation ControlRig-related nodes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigGraphNode_Statics::ClassParams = {
		&UControlRigGraphNode::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigGraphNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UControlRigGraphNode()
	{
		if (!Z_Registration_Info_UClass_UControlRigGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigGraphNode.OuterSingleton, Z_Construct_UClass_UControlRigGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigGraphNode.OuterSingleton;
	}
	template<> CONTROLRIGDEVELOPER_API UClass* StaticClass<UControlRigGraphNode>()
	{
		return UControlRigGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigGraphNode);
	UControlRigGraphNode::~UControlRigGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigGraphNode, UControlRigGraphNode::StaticClass, TEXT("UControlRigGraphNode"), &Z_Registration_Info_UClass_UControlRigGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigGraphNode), 1368443735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h_1113810312(TEXT("/Script/ControlRigDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
