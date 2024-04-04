// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EdGraph_PluginReferenceViewer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph_PluginReferenceViewer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	PLUGINREFERENCEVIEWER_API UClass* Z_Construct_UClass_UEdGraph_PluginReferenceViewer();
	PLUGINREFERENCEVIEWER_API UClass* Z_Construct_UClass_UEdGraph_PluginReferenceViewer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PluginReferenceViewer();
// End Cross Module References
	void UEdGraph_PluginReferenceViewer::StaticRegisterNativesUEdGraph_PluginReferenceViewer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph_PluginReferenceViewer);
	UClass* Z_Construct_UClass_UEdGraph_PluginReferenceViewer_NoRegister()
	{
		return UEdGraph_PluginReferenceViewer::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraph_PluginReferenceViewer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraph_PluginReferenceViewer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PluginReferenceViewer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_PluginReferenceViewer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_PluginReferenceViewer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph_PluginReferenceViewer.h" },
		{ "ModuleRelativePath", "Private/EdGraph_PluginReferenceViewer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraph_PluginReferenceViewer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph_PluginReferenceViewer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_PluginReferenceViewer_Statics::ClassParams = {
		&UEdGraph_PluginReferenceViewer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_PluginReferenceViewer_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraph_PluginReferenceViewer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEdGraph_PluginReferenceViewer()
	{
		if (!Z_Registration_Info_UClass_UEdGraph_PluginReferenceViewer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph_PluginReferenceViewer.OuterSingleton, Z_Construct_UClass_UEdGraph_PluginReferenceViewer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraph_PluginReferenceViewer.OuterSingleton;
	}
	template<> PLUGINREFERENCEVIEWER_API UClass* StaticClass<UEdGraph_PluginReferenceViewer>()
	{
		return UEdGraph_PluginReferenceViewer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph_PluginReferenceViewer);
	UEdGraph_PluginReferenceViewer::~UEdGraph_PluginReferenceViewer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraph_PluginReferenceViewer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraph_PluginReferenceViewer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraph_PluginReferenceViewer, UEdGraph_PluginReferenceViewer::StaticClass, TEXT("UEdGraph_PluginReferenceViewer"), &Z_Registration_Info_UClass_UEdGraph_PluginReferenceViewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph_PluginReferenceViewer), 943682956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraph_PluginReferenceViewer_h_3070148499(TEXT("/Script/PluginReferenceViewer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraph_PluginReferenceViewer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_EdGraph_PluginReferenceViewer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
