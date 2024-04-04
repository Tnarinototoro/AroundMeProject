// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PluginReferenceViewerSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginReferenceViewerSchema() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	PLUGINREFERENCEVIEWER_API UClass* Z_Construct_UClass_UPluginReferenceViewerSchema();
	PLUGINREFERENCEVIEWER_API UClass* Z_Construct_UClass_UPluginReferenceViewerSchema_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PluginReferenceViewer();
// End Cross Module References
	void UPluginReferenceViewerSchema::StaticRegisterNativesUPluginReferenceViewerSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPluginReferenceViewerSchema);
	UClass* Z_Construct_UClass_UPluginReferenceViewerSchema_NoRegister()
	{
		return UPluginReferenceViewerSchema::StaticClass();
	}
	struct Z_Construct_UClass_UPluginReferenceViewerSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPluginReferenceViewerSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_PluginReferenceViewer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPluginReferenceViewerSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginReferenceViewerSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PluginReferenceViewerSchema.h" },
		{ "ModuleRelativePath", "Private/PluginReferenceViewerSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPluginReferenceViewerSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPluginReferenceViewerSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPluginReferenceViewerSchema_Statics::ClassParams = {
		&UPluginReferenceViewerSchema::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPluginReferenceViewerSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UPluginReferenceViewerSchema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPluginReferenceViewerSchema()
	{
		if (!Z_Registration_Info_UClass_UPluginReferenceViewerSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPluginReferenceViewerSchema.OuterSingleton, Z_Construct_UClass_UPluginReferenceViewerSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPluginReferenceViewerSchema.OuterSingleton;
	}
	template<> PLUGINREFERENCEVIEWER_API UClass* StaticClass<UPluginReferenceViewerSchema>()
	{
		return UPluginReferenceViewerSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPluginReferenceViewerSchema);
	UPluginReferenceViewerSchema::~UPluginReferenceViewerSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPluginReferenceViewerSchema, UPluginReferenceViewerSchema::StaticClass, TEXT("UPluginReferenceViewerSchema"), &Z_Registration_Info_UClass_UPluginReferenceViewerSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPluginReferenceViewerSchema), 1013243162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h_3974089278(TEXT("/Script/PluginReferenceViewer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PluginReferenceViewer_Source_PluginReferenceViewer_Private_PluginReferenceViewerSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
