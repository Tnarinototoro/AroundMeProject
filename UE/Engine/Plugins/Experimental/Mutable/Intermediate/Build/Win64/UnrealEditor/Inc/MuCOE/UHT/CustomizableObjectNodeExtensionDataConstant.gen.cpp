// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeExtensionDataConstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeExtensionDataConstant() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeExtensionDataConstant::StaticRegisterNativesUCustomizableObjectNodeExtensionDataConstant()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeExtensionDataConstant);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant_NoRegister()
	{
		return UCustomizableObjectNodeExtensionDataConstant::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A base class for nodes that output a constant ExtensionData.\n *\n * This is typically used to import an Unreal asset into the Customizable Object graph.\n */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeExtensionDataConstant.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExtensionDataConstant.h" },
		{ "ToolTip", "A base class for nodes that output a constant ExtensionData.\n\nThis is typically used to import an Unreal asset into the Customizable Object graph." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeExtensionDataConstant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant_Statics::ClassParams = {
		&UCustomizableObjectNodeExtensionDataConstant::StaticClass,
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
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeExtensionDataConstant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeExtensionDataConstant.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeExtensionDataConstant.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeExtensionDataConstant>()
	{
		return UCustomizableObjectNodeExtensionDataConstant::StaticClass();
	}
	UCustomizableObjectNodeExtensionDataConstant::UCustomizableObjectNodeExtensionDataConstant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeExtensionDataConstant);
	UCustomizableObjectNodeExtensionDataConstant::~UCustomizableObjectNodeExtensionDataConstant() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtensionDataConstant_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtensionDataConstant_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeExtensionDataConstant, UCustomizableObjectNodeExtensionDataConstant::StaticClass, TEXT("UCustomizableObjectNodeExtensionDataConstant"), &Z_Registration_Info_UClass_UCustomizableObjectNodeExtensionDataConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeExtensionDataConstant), 2497213885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtensionDataConstant_h_3464141084(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtensionDataConstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExtensionDataConstant_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
