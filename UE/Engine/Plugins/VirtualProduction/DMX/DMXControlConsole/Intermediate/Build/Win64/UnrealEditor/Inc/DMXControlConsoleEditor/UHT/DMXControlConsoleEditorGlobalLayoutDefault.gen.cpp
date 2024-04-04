// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Layouts/DMXControlConsoleEditorGlobalLayoutDefault.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleEditorGlobalLayoutDefault() {}
// Cross Module References
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroup_NoRegister();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsoleEditor();
// End Cross Module References
	void UDMXControlConsoleEditorGlobalLayoutDefault::StaticRegisterNativesUDMXControlConsoleEditorGlobalLayoutDefault()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleEditorGlobalLayoutDefault);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_NoRegister()
	{
		return UDMXControlConsoleEditorGlobalLayoutDefault::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActiveFaderGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFaderGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveFaderGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsoleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A layout where Control Console data are sorted by default */" },
		{ "IncludePath", "Layouts/DMXControlConsoleEditorGlobalLayoutDefault.h" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorGlobalLayoutDefault.h" },
		{ "ToolTip", "A layout where Control Console data are sorted by default" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::NewProp_ActiveFaderGroups_Inner = { "ActiveFaderGroups", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDMXControlConsoleFaderGroup_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::NewProp_ActiveFaderGroups_MetaData[] = {
		{ "Comment", "/** Array of currently active Fader Groups in the layout */" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorGlobalLayoutDefault.h" },
		{ "ToolTip", "Array of currently active Fader Groups in the layout" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::NewProp_ActiveFaderGroups = { "ActiveFaderGroups", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleEditorGlobalLayoutDefault, ActiveFaderGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::NewProp_ActiveFaderGroups_MetaData), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::NewProp_ActiveFaderGroups_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::NewProp_ActiveFaderGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::NewProp_ActiveFaderGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleEditorGlobalLayoutDefault>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::ClassParams = {
		&UDMXControlConsoleEditorGlobalLayoutDefault::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutDefault.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutDefault.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutDefault.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLEEDITOR_API UClass* StaticClass<UDMXControlConsoleEditorGlobalLayoutDefault>()
	{
		return UDMXControlConsoleEditorGlobalLayoutDefault::StaticClass();
	}
	UDMXControlConsoleEditorGlobalLayoutDefault::UDMXControlConsoleEditorGlobalLayoutDefault(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleEditorGlobalLayoutDefault);
	UDMXControlConsoleEditorGlobalLayoutDefault::~UDMXControlConsoleEditorGlobalLayoutDefault() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutDefault_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutDefault_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault, UDMXControlConsoleEditorGlobalLayoutDefault::StaticClass, TEXT("UDMXControlConsoleEditorGlobalLayoutDefault"), &Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutDefault, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleEditorGlobalLayoutDefault), 827056022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutDefault_h_2541781566(TEXT("/Script/DMXControlConsoleEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutDefault_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutDefault_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
