// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMRerouteNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMRerouteNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMRerouteNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMRerouteNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void URigVMRerouteNode::StaticRegisterNativesURigVMRerouteNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMRerouteNode);
	UClass* Z_Construct_UClass_URigVMRerouteNode_NoRegister()
	{
		return URigVMRerouteNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMRerouteNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMRerouteNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMRerouteNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMRerouteNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A reroute node is used to visually improve the \n * data flow within a Graph. Reroutes are purely \n * cosmetic and have no impact on the resulting\n * VM whatsoever. Reroutes can furthermore be\n * displayed as full nodes or as small circles.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMRerouteNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMRerouteNode.h" },
		{ "ToolTip", "A reroute node is used to visually improve the\ndata flow within a Graph. Reroutes are purely\ncosmetic and have no impact on the resulting\nVM whatsoever. Reroutes can furthermore be\ndisplayed as full nodes or as small circles." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMRerouteNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMRerouteNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMRerouteNode_Statics::ClassParams = {
		&URigVMRerouteNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMRerouteNode_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMRerouteNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URigVMRerouteNode()
	{
		if (!Z_Registration_Info_UClass_URigVMRerouteNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMRerouteNode.OuterSingleton, Z_Construct_UClass_URigVMRerouteNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMRerouteNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMRerouteNode>()
	{
		return URigVMRerouteNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMRerouteNode);
	URigVMRerouteNode::~URigVMRerouteNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMRerouteNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMRerouteNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMRerouteNode, URigVMRerouteNode::StaticClass, TEXT("URigVMRerouteNode"), &Z_Registration_Info_UClass_URigVMRerouteNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMRerouteNode), 3619332683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMRerouteNode_h_2830271016(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMRerouteNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMRerouteNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
