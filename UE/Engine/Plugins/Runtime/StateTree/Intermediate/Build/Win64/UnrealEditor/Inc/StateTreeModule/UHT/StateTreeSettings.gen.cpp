// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSettings();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	void UStateTreeSettings::StaticRegisterNativesUStateTreeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeSettings);
	UClass* Z_Construct_UClass_UStateTreeSettings_NoRegister()
	{
		return UStateTreeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_MetaData[];
#endif
		static void NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartDebuggerTracesOnNonEditorTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default StateTree settings\n */" },
		{ "DisplayName", "StateTree" },
		{ "IncludePath", "StateTreeSettings.h" },
		{ "ModuleRelativePath", "Public/StateTreeSettings.h" },
		{ "ToolTip", "Default StateTree settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeSettings_Statics::NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_MetaData[] = {
		{ "Category", "StateTree" },
		{ "Comment", "/**\n\x09 * Editor targets relies on PIE and StateTreeEditor to start/stop traces.\n\x09 * This is to start traces automatically when launching Standalone, Client or Server builds. \n\x09 * It's also possible to do it manually using 'statetree.startdebuggertraces' and 'statetree.stopdebuggertraces' in the console.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StateTreeSettings.h" },
		{ "ToolTip", "Editor targets relies on PIE and StateTreeEditor to start/stop traces.\nThis is to start traces automatically when launching Standalone, Client or Server builds.\nIt's also possible to do it manually using 'statetree.startdebuggertraces' and 'statetree.stopdebuggertraces' in the console." },
	};
#endif
	void Z_Construct_UClass_UStateTreeSettings_Statics::NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_SetBit(void* Obj)
	{
		((UStateTreeSettings*)Obj)->bAutoStartDebuggerTracesOnNonEditorTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeSettings_Statics::NewProp_bAutoStartDebuggerTracesOnNonEditorTargets = { "bAutoStartDebuggerTracesOnNonEditorTargets", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateTreeSettings), &Z_Construct_UClass_UStateTreeSettings_Statics::NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSettings_Statics::NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_MetaData), Z_Construct_UClass_UStateTreeSettings_Statics::NewProp_bAutoStartDebuggerTracesOnNonEditorTargets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeSettings_Statics::NewProp_bAutoStartDebuggerTracesOnNonEditorTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeSettings_Statics::ClassParams = {
		&UStateTreeSettings::StaticClass,
		"StateTree",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTreeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStateTreeSettings()
	{
		if (!Z_Registration_Info_UClass_UStateTreeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeSettings.OuterSingleton, Z_Construct_UClass_UStateTreeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeSettings.OuterSingleton;
	}
	template<> STATETREEMODULE_API UClass* StaticClass<UStateTreeSettings>()
	{
		return UStateTreeSettings::StaticClass();
	}
	UStateTreeSettings::UStateTreeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeSettings);
	UStateTreeSettings::~UStateTreeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeSettings, UStateTreeSettings::StaticClass, TEXT("UStateTreeSettings"), &Z_Registration_Info_UClass_UStateTreeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeSettings), 1709914835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_3772786602(TEXT("/Script/StateTreeModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
