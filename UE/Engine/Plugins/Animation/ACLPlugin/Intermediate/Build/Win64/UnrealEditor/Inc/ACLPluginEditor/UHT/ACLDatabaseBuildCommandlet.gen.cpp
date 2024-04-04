// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLDatabaseBuildCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACLDatabaseBuildCommandlet() {}
// Cross Module References
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UACLDatabaseBuildCommandlet();
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UACLDatabaseBuildCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_ACLPluginEditor();
// End Cross Module References
	void UACLDatabaseBuildCommandlet::StaticRegisterNativesUACLDatabaseBuildCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACLDatabaseBuildCommandlet);
	UClass* Z_Construct_UClass_UACLDatabaseBuildCommandlet_NoRegister()
	{
		return UACLDatabaseBuildCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPluginEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * This commandlet is used to update instances of UAnimationCompressionLibraryDatabase to ensure their mapping is up-to-date.\n */" },
		{ "IncludePath", "ACLDatabaseBuildCommandlet.h" },
		{ "ModuleRelativePath", "Classes/ACLDatabaseBuildCommandlet.h" },
		{ "ToolTip", "* This commandlet is used to update instances of UAnimationCompressionLibraryDatabase to ensure their mapping is up-to-date." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACLDatabaseBuildCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::ClassParams = {
		&UACLDatabaseBuildCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACLDatabaseBuildCommandlet()
	{
		if (!Z_Registration_Info_UClass_UACLDatabaseBuildCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACLDatabaseBuildCommandlet.OuterSingleton, Z_Construct_UClass_UACLDatabaseBuildCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACLDatabaseBuildCommandlet.OuterSingleton;
	}
	template<> ACLPLUGINEDITOR_API UClass* StaticClass<UACLDatabaseBuildCommandlet>()
	{
		return UACLDatabaseBuildCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACLDatabaseBuildCommandlet);
	UACLDatabaseBuildCommandlet::~UACLDatabaseBuildCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACLDatabaseBuildCommandlet, UACLDatabaseBuildCommandlet::StaticClass, TEXT("UACLDatabaseBuildCommandlet"), &Z_Registration_Info_UClass_UACLDatabaseBuildCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACLDatabaseBuildCommandlet), 2436161076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h_383287963(TEXT("/Script/ACLPluginEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLDatabaseBuildCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
