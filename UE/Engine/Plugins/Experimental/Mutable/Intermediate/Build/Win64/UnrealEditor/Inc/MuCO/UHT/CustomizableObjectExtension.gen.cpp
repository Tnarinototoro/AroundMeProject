// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCO/CustomizableObjectExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectExtension() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectExtension();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectExtension_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	void UCustomizableObjectExtension::StaticRegisterNativesUCustomizableObjectExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectExtension);
	UClass* Z_Construct_UClass_UCustomizableObjectExtension_NoRegister()
	{
		return UCustomizableObjectExtension::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectExtension_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An extension that adds functionality to the Customizable Object system\n *\n * To create a new extension, make a subclass of this class and register it by calling\n * ICustomizableObjectModule::Get().RegisterExtension().\n */" },
		{ "IncludePath", "MuCO/CustomizableObjectExtension.h" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectExtension.h" },
		{ "ToolTip", "An extension that adds functionality to the Customizable Object system\n\nTo create a new extension, make a subclass of this class and register it by calling\nICustomizableObjectModule::Get().RegisterExtension()." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectExtension_Statics::ClassParams = {
		&UCustomizableObjectExtension::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectExtension_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizableObjectExtension_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomizableObjectExtension()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectExtension.OuterSingleton, Z_Construct_UClass_UCustomizableObjectExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectExtension.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableObjectExtension>()
	{
		return UCustomizableObjectExtension::StaticClass();
	}
	UCustomizableObjectExtension::UCustomizableObjectExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectExtension);
	UCustomizableObjectExtension::~UCustomizableObjectExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectExtension, UCustomizableObjectExtension::StaticClass, TEXT("UCustomizableObjectExtension"), &Z_Registration_Info_UClass_UCustomizableObjectExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectExtension), 1103739806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectExtension_h_2534538684(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
