// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLStatsDumpCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACLStatsDumpCommandlet() {}
// Cross Module References
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UACLStatsDumpCommandlet();
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UACLStatsDumpCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_ACLPluginEditor();
// End Cross Module References
	void UACLStatsDumpCommandlet::StaticRegisterNativesUACLStatsDumpCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UACLStatsDumpCommandlet);
	UClass* Z_Construct_UClass_UACLStatsDumpCommandlet_NoRegister()
	{
		return UACLStatsDumpCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UACLStatsDumpCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPluginEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * This commandlet is used to extract and dump animation compression statistics.\n *\n * See cpp implementation for example usage and supported arguments.\n */" },
		{ "IncludePath", "ACLStatsDumpCommandlet.h" },
		{ "ModuleRelativePath", "Classes/ACLStatsDumpCommandlet.h" },
		{ "ToolTip", "* This commandlet is used to extract and dump animation compression statistics.\n*\n* See cpp implementation for example usage and supported arguments." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UACLStatsDumpCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::ClassParams = {
		&UACLStatsDumpCommandlet::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UACLStatsDumpCommandlet()
	{
		if (!Z_Registration_Info_UClass_UACLStatsDumpCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UACLStatsDumpCommandlet.OuterSingleton, Z_Construct_UClass_UACLStatsDumpCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UACLStatsDumpCommandlet.OuterSingleton;
	}
	template<> ACLPLUGINEDITOR_API UClass* StaticClass<UACLStatsDumpCommandlet>()
	{
		return UACLStatsDumpCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UACLStatsDumpCommandlet);
	UACLStatsDumpCommandlet::~UACLStatsDumpCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UACLStatsDumpCommandlet, UACLStatsDumpCommandlet::StaticClass, TEXT("UACLStatsDumpCommandlet"), &Z_Registration_Info_UClass_UACLStatsDumpCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UACLStatsDumpCommandlet), 325986713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h_93915851(TEXT("/Script/ACLPluginEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPluginEditor_Classes_ACLStatsDumpCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
