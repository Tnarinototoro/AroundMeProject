// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodePassThroughTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodePassThroughTexture() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureBase();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodePassThroughTexture::StaticRegisterNativesUCustomizableObjectNodePassThroughTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodePassThroughTexture);
	UClass* Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture_NoRegister()
	{
		return UCustomizableObjectNodePassThroughTexture::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeTextureBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodePassThroughTexture.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodePassThroughTexture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodePassThroughTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture_Statics::ClassParams = {
		&UCustomizableObjectNodePassThroughTexture::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodePassThroughTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodePassThroughTexture.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodePassThroughTexture.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodePassThroughTexture>()
	{
		return UCustomizableObjectNodePassThroughTexture::StaticClass();
	}
	UCustomizableObjectNodePassThroughTexture::UCustomizableObjectNodePassThroughTexture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodePassThroughTexture);
	UCustomizableObjectNodePassThroughTexture::~UCustomizableObjectNodePassThroughTexture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodePassThroughTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodePassThroughTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodePassThroughTexture, UCustomizableObjectNodePassThroughTexture::StaticClass, TEXT("UCustomizableObjectNodePassThroughTexture"), &Z_Registration_Info_UClass_UCustomizableObjectNodePassThroughTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodePassThroughTexture), 1777047105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodePassThroughTexture_h_1230838579(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodePassThroughTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodePassThroughTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
