// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EdGraphNode_PluginReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_PluginReference() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	PLUGINREFERENCEVIEWER_API UClass* Z_Construct_UClass_UEdGraphNode_PluginReference();
	PLUGINREFERENCEVIEWER_API UClass* Z_Construct_UClass_UEdGraphNode_PluginReference_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PluginReferenceViewer();
// End Cross Module References
	void UEdGraphNode_PluginReference::StaticRegisterNativesUEdGraphNode_PluginReference()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_PluginReference);
	UClass* Z_Construct_UClass_UEdGraphNode_PluginReference_NoRegister()
	{
		return UEdGraphNode_PluginReference::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_PluginReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_PluginReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PluginReferenceViewer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_PluginReference_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_PluginReference_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphNode_PluginReference.h" },
		{ "ModuleRelativePath", "Private/EdGraphNode_PluginReference.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_PluginReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_PluginReference>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_PluginReference_Statics::ClassParams = {
		&UEdGraphNode_PluginReference::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_PluginReference_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_PluginReference_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEdGraphNode_PluginReference()
	{
		if (!Z_Registration_Info_UClass_UEdGraphNode_PluginReference.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_PluginReference.OuterSingleton, Z_Construct_UClass_UEdGraphNode_PluginReference_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphNode_PluginReference.OuterSingleton;
	}
	template<> PLUGINREFERENCEVIEWER_API UClass* StaticClass<UEdGraphNode_PluginReference>()
	{
		return UEdGraphNode_PluginReference::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_PluginReference);
	UEdGraphNode_PluginReference::~UEdGraphNode_PluginReference() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_PluginReference, UEdGraphNode_PluginReference::StaticClass, TEXT("UEdGraphNode_PluginReference"), &Z_Registration_Info_UClass_UEdGraphNode_PluginReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_PluginReference), 194310825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h_788101142(TEXT("/Script/PluginReferenceViewer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraphNode_PluginReference_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
