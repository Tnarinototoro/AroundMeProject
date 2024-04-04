// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/ICustomizableObjectExtensionNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICustomizableObjectExtensionNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectExtensionNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectExtensionNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectExtensionNode::StaticRegisterNativesUCustomizableObjectExtensionNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectExtensionNode);
	UClass* Z_Construct_UClass_UCustomizableObjectExtensionNode_NoRegister()
	{
		return UCustomizableObjectExtensionNode::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectExtensionNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectExtensionNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectExtensionNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectExtensionNode_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/ICustomizableObjectExtensionNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectExtensionNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICustomizableObjectExtensionNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectExtensionNode_Statics::ClassParams = {
		&UCustomizableObjectExtensionNode::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectExtensionNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectExtensionNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomizableObjectExtensionNode()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectExtensionNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectExtensionNode.OuterSingleton, Z_Construct_UClass_UCustomizableObjectExtensionNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectExtensionNode.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectExtensionNode>()
	{
		return UCustomizableObjectExtensionNode::StaticClass();
	}
	UCustomizableObjectExtensionNode::UCustomizableObjectExtensionNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectExtensionNode);
	UCustomizableObjectExtensionNode::~UCustomizableObjectExtensionNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_ICustomizableObjectExtensionNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_ICustomizableObjectExtensionNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectExtensionNode, UCustomizableObjectExtensionNode::StaticClass, TEXT("UCustomizableObjectExtensionNode"), &Z_Registration_Info_UClass_UCustomizableObjectExtensionNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectExtensionNode), 721237540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_ICustomizableObjectExtensionNode_h_411424864(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_ICustomizableObjectExtensionNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_ICustomizableObjectExtensionNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
