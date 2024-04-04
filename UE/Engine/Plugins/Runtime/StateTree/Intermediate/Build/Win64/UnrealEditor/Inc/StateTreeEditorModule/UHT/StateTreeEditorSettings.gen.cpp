// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeEditorSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorSettings();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorSettings_NoRegister();
	STATETREEEDITORMODULE_API UEnum* Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeSaveOnCompile;
	static UEnum* EStateTreeSaveOnCompile_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeSaveOnCompile.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeSaveOnCompile.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("EStateTreeSaveOnCompile"));
		}
		return Z_Registration_Info_UEnum_EStateTreeSaveOnCompile.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UEnum* StaticEnum<EStateTreeSaveOnCompile>()
	{
		return EStateTreeSaveOnCompile_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile_Statics::Enumerators[] = {
		{ "EStateTreeSaveOnCompile::Never", (int64)EStateTreeSaveOnCompile::Never },
		{ "EStateTreeSaveOnCompile::SuccessOnly", (int64)EStateTreeSaveOnCompile::SuccessOnly },
		{ "EStateTreeSaveOnCompile::Always", (int64)EStateTreeSaveOnCompile::Always },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile_Statics::Enum_MetaDataParams[] = {
		{ "Always.DisplayName", "Always" },
		{ "Always.Name", "EStateTreeSaveOnCompile::Always" },
		{ "ModuleRelativePath", "Public/StateTreeEditorSettings.h" },
		{ "Never.DisplayName", "Never" },
		{ "Never.Name", "EStateTreeSaveOnCompile::Never" },
		{ "SuccessOnly.DisplayName", "On Success Only" },
		{ "SuccessOnly.Name", "EStateTreeSaveOnCompile::SuccessOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		"EStateTreeSaveOnCompile",
		"EStateTreeSaveOnCompile",
		Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeSaveOnCompile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeSaveOnCompile.InnerSingleton, Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeSaveOnCompile.InnerSingleton;
	}
	void UStateTreeEditorSettings::StaticRegisterNativesUStateTreeEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeEditorSettings);
	UClass* Z_Construct_UClass_UStateTreeEditorSettings_NoRegister()
	{
		return UStateTreeEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SaveOnCompile_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveOnCompile_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SaveOnCompile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDebuggerAutoRecordOnPIE_MetaData[];
#endif
		static void NewProp_bShouldDebuggerAutoRecordOnPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDebuggerAutoRecordOnPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDebuggerResetDataOnNewPIESession_MetaData[];
#endif
		static void NewProp_bShouldDebuggerResetDataOnNewPIESession_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDebuggerResetDataOnNewPIESession;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateTreeEditorSettings.h" },
		{ "ModuleRelativePath", "Public/StateTreeEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_SaveOnCompile_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_SaveOnCompile_MetaData[] = {
		{ "Category", "Compiler" },
		{ "Comment", "/** Determines when to save StateTrees post-compile */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorSettings.h" },
		{ "ToolTip", "Determines when to save StateTrees post-compile" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_SaveOnCompile = { "SaveOnCompile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateTreeEditorSettings, SaveOnCompile), Z_Construct_UEnum_StateTreeEditorModule_EStateTreeSaveOnCompile, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_SaveOnCompile_MetaData), Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_SaveOnCompile_MetaData) }; // 1891510959
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerAutoRecordOnPIE_MetaData[] = {
		{ "Category", "Debugger" },
		{ "Comment", "/** If enabled, debugger starts recording information at the start of each PIE session. */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorSettings.h" },
		{ "ToolTip", "If enabled, debugger starts recording information at the start of each PIE session." },
	};
#endif
	void Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerAutoRecordOnPIE_SetBit(void* Obj)
	{
		((UStateTreeEditorSettings*)Obj)->bShouldDebuggerAutoRecordOnPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerAutoRecordOnPIE = { "bShouldDebuggerAutoRecordOnPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateTreeEditorSettings), &Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerAutoRecordOnPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerAutoRecordOnPIE_MetaData), Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerAutoRecordOnPIE_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerResetDataOnNewPIESession_MetaData[] = {
		{ "Category", "Debugger" },
		{ "Comment", "/** If enabled, debugger will clear previous tracks at the start of each PIE session. */" },
		{ "ModuleRelativePath", "Public/StateTreeEditorSettings.h" },
		{ "ToolTip", "If enabled, debugger will clear previous tracks at the start of each PIE session." },
	};
#endif
	void Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerResetDataOnNewPIESession_SetBit(void* Obj)
	{
		((UStateTreeEditorSettings*)Obj)->bShouldDebuggerResetDataOnNewPIESession = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerResetDataOnNewPIESession = { "bShouldDebuggerResetDataOnNewPIESession", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateTreeEditorSettings), &Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerResetDataOnNewPIESession_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerResetDataOnNewPIESession_MetaData), Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerResetDataOnNewPIESession_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_SaveOnCompile_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_SaveOnCompile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerAutoRecordOnPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeEditorSettings_Statics::NewProp_bShouldDebuggerResetDataOnNewPIESession,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeEditorSettings_Statics::ClassParams = {
		&UStateTreeEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTreeEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateTreeEditorSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeEditorSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStateTreeEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UStateTreeEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeEditorSettings.OuterSingleton, Z_Construct_UClass_UStateTreeEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeEditorSettings.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UClass* StaticClass<UStateTreeEditorSettings>()
	{
		return UStateTreeEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeEditorSettings);
	UStateTreeEditorSettings::~UStateTreeEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_Statics::EnumInfo[] = {
		{ EStateTreeSaveOnCompile_StaticEnum, TEXT("EStateTreeSaveOnCompile"), &Z_Registration_Info_UEnum_EStateTreeSaveOnCompile, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1891510959U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeEditorSettings, UStateTreeEditorSettings::StaticClass, TEXT("UStateTreeEditorSettings"), &Z_Registration_Info_UClass_UStateTreeEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeEditorSettings), 2113252016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_1760541728(TEXT("/Script/StateTreeEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
