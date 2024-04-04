// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/Param/AnimNextParameterBlock_EdGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextParameterBlock_EdGraphNode() {}
// Cross Module References
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode();
	ANIMNEXTUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode_NoRegister();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraphNode();
	UPackage* Z_Construct_UPackage__Script_AnimNextUncookedOnly();
// End Cross Module References
	void UAnimNextParameterBlock_EdGraphNode::StaticRegisterNativesUAnimNextParameterBlock_EdGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextParameterBlock_EdGraphNode);
	UClass* Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode_NoRegister()
	{
		return UAnimNextParameterBlock_EdGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextUncookedOnly,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Param/AnimNextParameterBlock_EdGraphNode.h" },
		{ "ModuleRelativePath", "Internal/Param/AnimNextParameterBlock_EdGraphNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextParameterBlock_EdGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode_Statics::ClassParams = {
		&UAnimNextParameterBlock_EdGraphNode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode()
	{
		if (!Z_Registration_Info_UClass_UAnimNextParameterBlock_EdGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextParameterBlock_EdGraphNode.OuterSingleton, Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextParameterBlock_EdGraphNode.OuterSingleton;
	}
	template<> ANIMNEXTUNCOOKEDONLY_API UClass* StaticClass<UAnimNextParameterBlock_EdGraphNode>()
	{
		return UAnimNextParameterBlock_EdGraphNode::StaticClass();
	}
	UAnimNextParameterBlock_EdGraphNode::UAnimNextParameterBlock_EdGraphNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextParameterBlock_EdGraphNode);
	UAnimNextParameterBlock_EdGraphNode::~UAnimNextParameterBlock_EdGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EdGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EdGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextParameterBlock_EdGraphNode, UAnimNextParameterBlock_EdGraphNode::StaticClass, TEXT("UAnimNextParameterBlock_EdGraphNode"), &Z_Registration_Info_UClass_UAnimNextParameterBlock_EdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextParameterBlock_EdGraphNode), 3338258327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EdGraphNode_h_2845365568(TEXT("/Script/AnimNextUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EdGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextUncookedOnly_Internal_Param_AnimNextParameterBlock_EdGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
