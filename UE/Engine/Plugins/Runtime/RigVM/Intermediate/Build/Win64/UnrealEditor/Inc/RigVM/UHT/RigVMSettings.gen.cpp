// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	RIGVM_API UClass* Z_Construct_UClass_URigVMEditorSettings();
	RIGVM_API UClass* Z_Construct_UClass_URigVMEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	void URigVMEditorSettings::StaticRegisterNativesURigVMEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEditorSettings);
	UClass* Z_Construct_UClass_URigVMEditorSettings_NoRegister()
	{
		return URigVMEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLinkMutableNodes_MetaData[];
#endif
		static void NewProp_bAutoLinkMutableNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLinkMutableNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Customize RigVM Rig Editor.\n */" },
		{ "DisplayName", "RigVM Editor" },
		{ "IncludePath", "RigVMSettings.h" },
		{ "ModuleRelativePath", "Public/RigVMSettings.h" },
		{ "ToolTip", "Customize RigVM Rig Editor." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// When this is checked mutable nodes (nodes with an execute pin)\n// will be hooked up automatically.\n" },
		{ "ModuleRelativePath", "Public/RigVMSettings.h" },
		{ "ToolTip", "When this is checked mutable nodes (nodes with an execute pin)\nwill be hooked up automatically." },
	};
#endif
	void Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_SetBit(void* Obj)
	{
		((URigVMEditorSettings*)Obj)->bAutoLinkMutableNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes = { "bAutoLinkMutableNodes", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URigVMEditorSettings), &Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_MetaData), Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMEditorSettings_Statics::NewProp_bAutoLinkMutableNodes,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEditorSettings_Statics::ClassParams = {
		&URigVMEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers), 0),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMEditorSettings_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSettings_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_URigVMEditorSettings()
	{
		if (!Z_Registration_Info_UClass_URigVMEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEditorSettings.OuterSingleton, Z_Construct_UClass_URigVMEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEditorSettings.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<URigVMEditorSettings>()
	{
		return URigVMEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEditorSettings);
	URigVMEditorSettings::~URigVMEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEditorSettings, URigVMEditorSettings::StaticClass, TEXT("URigVMEditorSettings"), &Z_Registration_Info_UClass_URigVMEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEditorSettings), 2670896325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_2969690950(TEXT("/Script/RigVM"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
