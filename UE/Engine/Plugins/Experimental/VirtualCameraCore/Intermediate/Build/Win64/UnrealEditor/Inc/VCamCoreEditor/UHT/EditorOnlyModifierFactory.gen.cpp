// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/EditorOnlyModifierFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorOnlyModifierFactory() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCoreEditor();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UEditorOnlyModifierFactory();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UEditorOnlyModifierFactory_NoRegister();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamObjectWithInputFactory();
// End Cross Module References
	void UEditorOnlyModifierFactory::StaticRegisterNativesUEditorOnlyModifierFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorOnlyModifierFactory);
	UClass* Z_Construct_UClass_UEditorOnlyModifierFactory_NoRegister()
	{
		return UEditorOnlyModifierFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEditorOnlyModifierFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorOnlyModifierFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamObjectWithInputFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCoreEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorOnlyModifierFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorOnlyModifierFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/EditorOnlyModifierFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/EditorOnlyModifierFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorOnlyModifierFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorOnlyModifierFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorOnlyModifierFactory_Statics::ClassParams = {
		&UEditorOnlyModifierFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditorOnlyModifierFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditorOnlyModifierFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEditorOnlyModifierFactory()
	{
		if (!Z_Registration_Info_UClass_UEditorOnlyModifierFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorOnlyModifierFactory.OuterSingleton, Z_Construct_UClass_UEditorOnlyModifierFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorOnlyModifierFactory.OuterSingleton;
	}
	template<> VCAMCOREEDITOR_API UClass* StaticClass<UEditorOnlyModifierFactory>()
	{
		return UEditorOnlyModifierFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorOnlyModifierFactory);
	UEditorOnlyModifierFactory::~UEditorOnlyModifierFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorOnlyModifierFactory, UEditorOnlyModifierFactory::StaticClass, TEXT("UEditorOnlyModifierFactory"), &Z_Registration_Info_UClass_UEditorOnlyModifierFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorOnlyModifierFactory), 4258653561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h_1791091660(TEXT("/Script/VCamCoreEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
