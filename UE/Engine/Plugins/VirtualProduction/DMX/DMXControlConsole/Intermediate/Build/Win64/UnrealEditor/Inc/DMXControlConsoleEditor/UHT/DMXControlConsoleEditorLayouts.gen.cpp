// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Layouts/DMXControlConsoleEditorLayouts.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleEditorLayouts() {}
// Cross Module References
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_NoRegister();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_NoRegister();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_NoRegister();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorLayouts();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorLayouts_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsoleEditor();
// End Cross Module References
	void UDMXControlConsoleEditorLayouts::StaticRegisterNativesUDMXControlConsoleEditorLayouts()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleEditorLayouts);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorLayouts_NoRegister()
	{
		return UDMXControlConsoleEditorLayouts::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayout_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultLayout;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserLayouts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserLayouts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserLayouts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLayout_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveLayout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsoleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Control Console container class for layouts data */" },
		{ "IncludePath", "Layouts/DMXControlConsoleEditorLayouts.h" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorLayouts.h" },
		{ "ToolTip", "Control Console container class for layouts data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_DefaultLayout_MetaData[] = {
		{ "Comment", "/** Reference to Default Layout */" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorLayouts.h" },
		{ "ToolTip", "Reference to Default Layout" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_DefaultLayout = { "DefaultLayout", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleEditorLayouts, DefaultLayout), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutDefault_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_DefaultLayout_MetaData), Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_DefaultLayout_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_UserLayouts_Inner = { "UserLayouts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutUser_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_UserLayouts_MetaData[] = {
		{ "Comment", "/** Array of User Layouts */" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorLayouts.h" },
		{ "ToolTip", "Array of User Layouts" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_UserLayouts = { "UserLayouts", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleEditorLayouts, UserLayouts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_UserLayouts_MetaData), Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_UserLayouts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_ActiveLayout_MetaData[] = {
		{ "Comment", "/** Reference to active Layout in use */" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorLayouts.h" },
		{ "ToolTip", "Reference to active Layout in use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_ActiveLayout = { "ActiveLayout", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleEditorLayouts, ActiveLayout), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_ActiveLayout_MetaData), Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_ActiveLayout_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_DefaultLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_UserLayouts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_UserLayouts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::NewProp_ActiveLayout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleEditorLayouts>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::ClassParams = {
		&UDMXControlConsoleEditorLayouts::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorLayouts()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleEditorLayouts.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleEditorLayouts.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleEditorLayouts_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleEditorLayouts.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLEEDITOR_API UClass* StaticClass<UDMXControlConsoleEditorLayouts>()
	{
		return UDMXControlConsoleEditorLayouts::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleEditorLayouts);
	UDMXControlConsoleEditorLayouts::~UDMXControlConsoleEditorLayouts() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorLayouts_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorLayouts_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleEditorLayouts, UDMXControlConsoleEditorLayouts::StaticClass, TEXT("UDMXControlConsoleEditorLayouts"), &Z_Registration_Info_UClass_UDMXControlConsoleEditorLayouts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleEditorLayouts), 2450075879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorLayouts_h_3628244962(TEXT("/Script/DMXControlConsoleEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorLayouts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorLayouts_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
