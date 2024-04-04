// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Layouts/DMXControlConsoleEditorGlobalLayoutRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleEditorGlobalLayoutRow() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroup_NoRegister();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsoleEditor();
// End Cross Module References
	void UDMXControlConsoleEditorGlobalLayoutRow::StaticRegisterNativesUDMXControlConsoleEditorGlobalLayoutRow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleEditorGlobalLayoutRow);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_NoRegister()
	{
		return UDMXControlConsoleEditorGlobalLayoutRow::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FaderGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaderGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FaderGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsoleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A row of Fader Groups in the Control Console Global Layout */" },
		{ "IncludePath", "Layouts/DMXControlConsoleEditorGlobalLayoutRow.h" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorGlobalLayoutRow.h" },
		{ "ToolTip", "A row of Fader Groups in the Control Console Global Layout" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::NewProp_FaderGroups_Inner = { "FaderGroups", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDMXControlConsoleFaderGroup_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::NewProp_FaderGroups_MetaData[] = {
		{ "Comment", "/** Reference to Fader Groups array */" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorGlobalLayoutRow.h" },
		{ "ToolTip", "Reference to Fader Groups array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::NewProp_FaderGroups = { "FaderGroups", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleEditorGlobalLayoutRow, FaderGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::NewProp_FaderGroups_MetaData), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::NewProp_FaderGroups_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::NewProp_FaderGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::NewProp_FaderGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleEditorGlobalLayoutRow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::ClassParams = {
		&UDMXControlConsoleEditorGlobalLayoutRow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutRow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutRow.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutRow.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLEEDITOR_API UClass* StaticClass<UDMXControlConsoleEditorGlobalLayoutRow>()
	{
		return UDMXControlConsoleEditorGlobalLayoutRow::StaticClass();
	}
	UDMXControlConsoleEditorGlobalLayoutRow::UDMXControlConsoleEditorGlobalLayoutRow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleEditorGlobalLayoutRow);
	UDMXControlConsoleEditorGlobalLayoutRow::~UDMXControlConsoleEditorGlobalLayoutRow() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutRow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutRow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow, UDMXControlConsoleEditorGlobalLayoutRow::StaticClass, TEXT("UDMXControlConsoleEditorGlobalLayoutRow"), &Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutRow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleEditorGlobalLayoutRow), 544653401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutRow_h_1793759643(TEXT("/Script/DMXControlConsoleEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutRow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutRow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
