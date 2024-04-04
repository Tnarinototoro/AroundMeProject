// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Layouts/DMXControlConsoleEditorLayoutsBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleEditorLayoutsBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	void UDMXControlConsoleEditorLayoutsBase::StaticRegisterNativesUDMXControlConsoleEditorLayoutsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleEditorLayoutsBase);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase_NoRegister()
	{
		return UDMXControlConsoleEditorLayoutsBase::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for Control Console layouts */" },
		{ "IncludePath", "Layouts/DMXControlConsoleEditorLayoutsBase.h" },
		{ "ModuleRelativePath", "Public/Layouts/DMXControlConsoleEditorLayoutsBase.h" },
		{ "ToolTip", "Base class for Control Console layouts" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleEditorLayoutsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase_Statics::ClassParams = {
		&UDMXControlConsoleEditorLayoutsBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleEditorLayoutsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleEditorLayoutsBase.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleEditorLayoutsBase.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleEditorLayoutsBase>()
	{
		return UDMXControlConsoleEditorLayoutsBase::StaticClass();
	}
	UDMXControlConsoleEditorLayoutsBase::UDMXControlConsoleEditorLayoutsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleEditorLayoutsBase);
	UDMXControlConsoleEditorLayoutsBase::~UDMXControlConsoleEditorLayoutsBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Public_Layouts_DMXControlConsoleEditorLayoutsBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Public_Layouts_DMXControlConsoleEditorLayoutsBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleEditorLayoutsBase, UDMXControlConsoleEditorLayoutsBase::StaticClass, TEXT("UDMXControlConsoleEditorLayoutsBase"), &Z_Registration_Info_UClass_UDMXControlConsoleEditorLayoutsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleEditorLayoutsBase), 2064413808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Public_Layouts_DMXControlConsoleEditorLayoutsBase_h_3215862934(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Public_Layouts_DMXControlConsoleEditorLayoutsBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Public_Layouts_DMXControlConsoleEditorLayoutsBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
