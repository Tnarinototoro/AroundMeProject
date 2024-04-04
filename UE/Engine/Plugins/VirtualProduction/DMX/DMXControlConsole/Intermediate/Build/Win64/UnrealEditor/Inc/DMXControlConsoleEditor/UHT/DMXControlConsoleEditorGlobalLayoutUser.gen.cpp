// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Layouts/DMXControlConsoleEditorGlobalLayoutUser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleEditorGlobalLayoutUser() {}
// Cross Module References
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsoleEditor();
// End Cross Module References
	void UDMXControlConsoleEditorGlobalLayoutUser::StaticRegisterNativesUDMXControlConsoleEditorGlobalLayoutUser()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleEditorGlobalLayoutUser);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_NoRegister()
	{
		return UDMXControlConsoleEditorGlobalLayoutUser::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LayoutName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsoleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A layout where Control Console data sorting order is customizable */" },
		{ "IncludePath", "Layouts/DMXControlConsoleEditorGlobalLayoutUser.h" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorGlobalLayoutUser.h" },
		{ "ToolTip", "A layout where Control Console data sorting order is customizable" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::NewProp_LayoutName_MetaData[] = {
		{ "Comment", "/** Name identifier of this Layout */" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorGlobalLayoutUser.h" },
		{ "ToolTip", "Name identifier of this Layout" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::NewProp_LayoutName = { "LayoutName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleEditorGlobalLayoutUser, LayoutName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::NewProp_LayoutName_MetaData), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::NewProp_LayoutName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::NewProp_LayoutName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleEditorGlobalLayoutUser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::ClassParams = {
		&UDMXControlConsoleEditorGlobalLayoutUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutUser.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutUser.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLEEDITOR_API UClass* StaticClass<UDMXControlConsoleEditorGlobalLayoutUser>()
	{
		return UDMXControlConsoleEditorGlobalLayoutUser::StaticClass();
	}
	UDMXControlConsoleEditorGlobalLayoutUser::UDMXControlConsoleEditorGlobalLayoutUser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleEditorGlobalLayoutUser);
	UDMXControlConsoleEditorGlobalLayoutUser::~UDMXControlConsoleEditorGlobalLayoutUser() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutUser_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutUser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser, UDMXControlConsoleEditorGlobalLayoutUser::StaticClass, TEXT("UDMXControlConsoleEditorGlobalLayoutUser"), &Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleEditorGlobalLayoutUser), 1036441075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutUser_h_711126544(TEXT("/Script/DMXControlConsoleEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutUser_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
