// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Layouts/DMXControlConsoleEditorGlobalLayoutBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleEditorGlobalLayoutBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_NoRegister();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_NoRegister();
	DMXCONTROLCONSOLEEDITOR_API UEnum* Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsoleEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXControlConsoleLayoutMode;
	static UEnum* EDMXControlConsoleLayoutMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXControlConsoleLayoutMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXControlConsoleLayoutMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode, (UObject*)Z_Construct_UPackage__Script_DMXControlConsoleEditor(), TEXT("EDMXControlConsoleLayoutMode"));
		}
		return Z_Registration_Info_UEnum_EDMXControlConsoleLayoutMode.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLEEDITOR_API UEnum* StaticEnum<EDMXControlConsoleLayoutMode>()
	{
		return EDMXControlConsoleLayoutMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode_Statics::Enumerators[] = {
		{ "EDMXControlConsoleLayoutMode::Horizontal", (int64)EDMXControlConsoleLayoutMode::Horizontal },
		{ "EDMXControlConsoleLayoutMode::Vertical", (int64)EDMXControlConsoleLayoutMode::Vertical },
		{ "EDMXControlConsoleLayoutMode::Grid", (int64)EDMXControlConsoleLayoutMode::Grid },
		{ "EDMXControlConsoleLayoutMode::None", (int64)EDMXControlConsoleLayoutMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum for DMX Control Console layout modes */" },
		{ "Grid.Name", "EDMXControlConsoleLayoutMode::Grid" },
		{ "Horizontal.Name", "EDMXControlConsoleLayoutMode::Horizontal" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorGlobalLayoutBase.h" },
		{ "None.Name", "EDMXControlConsoleLayoutMode::None" },
		{ "ToolTip", "Enum for DMX Control Console layout modes" },
		{ "Vertical.Name", "EDMXControlConsoleLayoutMode::Vertical" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXControlConsoleEditor,
		nullptr,
		"EDMXControlConsoleLayoutMode",
		"EDMXControlConsoleLayoutMode",
		Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode()
	{
		if (!Z_Registration_Info_UEnum_EDMXControlConsoleLayoutMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXControlConsoleLayoutMode.InnerSingleton, Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXControlConsoleLayoutMode.InnerSingleton;
	}
	void UDMXControlConsoleEditorGlobalLayoutBase::StaticRegisterNativesUDMXControlConsoleEditorGlobalLayoutBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleEditorGlobalLayoutBase);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_NoRegister()
	{
		return UDMXControlConsoleEditorGlobalLayoutBase::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayoutRows_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutRows_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayoutRows;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsoleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for Control Console layout */" },
		{ "IncludePath", "Layouts/DMXControlConsoleEditorGlobalLayoutBase.h" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorGlobalLayoutBase.h" },
		{ "ToolTip", "Base class for Control Console layout" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutRows_Inner = { "LayoutRows", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutRow_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutRows_MetaData[] = {
		{ "Comment", "/** Reference to Layout Rows array */" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorGlobalLayoutBase.h" },
		{ "ToolTip", "Reference to Layout Rows array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutRows = { "LayoutRows", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleEditorGlobalLayoutBase, LayoutRows), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutRows_MetaData), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutRows_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutMode_MetaData[] = {
		{ "Comment", "/** Current layout sorting method for this layout */" },
		{ "ModuleRelativePath", "Private/Layouts/DMXControlConsoleEditorGlobalLayoutBase.h" },
		{ "ToolTip", "Current layout sorting method for this layout" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutMode = { "LayoutMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleEditorGlobalLayoutBase, LayoutMode), Z_Construct_UEnum_DMXControlConsoleEditor_EDMXControlConsoleLayoutMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutMode_MetaData), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutMode_MetaData) }; // 804689902
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutRows_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::NewProp_LayoutMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleEditorGlobalLayoutBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::ClassParams = {
		&UDMXControlConsoleEditorGlobalLayoutBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutBase.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutBase.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLEEDITOR_API UClass* StaticClass<UDMXControlConsoleEditorGlobalLayoutBase>()
	{
		return UDMXControlConsoleEditorGlobalLayoutBase::StaticClass();
	}
	UDMXControlConsoleEditorGlobalLayoutBase::UDMXControlConsoleEditorGlobalLayoutBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleEditorGlobalLayoutBase);
	UDMXControlConsoleEditorGlobalLayoutBase::~UDMXControlConsoleEditorGlobalLayoutBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_Statics::EnumInfo[] = {
		{ EDMXControlConsoleLayoutMode_StaticEnum, TEXT("EDMXControlConsoleLayoutMode"), &Z_Registration_Info_UEnum_EDMXControlConsoleLayoutMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 804689902U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleEditorGlobalLayoutBase, UDMXControlConsoleEditorGlobalLayoutBase::StaticClass, TEXT("UDMXControlConsoleEditorGlobalLayoutBase"), &Z_Registration_Info_UClass_UDMXControlConsoleEditorGlobalLayoutBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleEditorGlobalLayoutBase), 73958749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_3237474941(TEXT("/Script/DMXControlConsoleEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Layouts_DMXControlConsoleEditorGlobalLayoutBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
