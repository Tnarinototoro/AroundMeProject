// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DMXControlConsoleRawFader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleRawFader() {}
// Cross Module References
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderBase();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleRawFader();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleRawFader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	void UDMXControlConsoleRawFader::StaticRegisterNativesUDMXControlConsoleRawFader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleRawFader);
	UClass* Z_Construct_UClass_UDMXControlConsoleRawFader_NoRegister()
	{
		return UDMXControlConsoleRawFader::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleRawFader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXControlConsoleFaderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX Fader DMX Fader|Oscillator" },
		{ "Comment", "/** A fader matching that sends Raw DMX */" },
		{ "IncludePath", "DMXControlConsoleRawFader.h" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleRawFader.h" },
		{ "ToolTip", "A fader matching that sends Raw DMX" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleRawFader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::ClassParams = {
		&UDMXControlConsoleRawFader::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDMXControlConsoleRawFader()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleRawFader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleRawFader.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleRawFader.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleRawFader>()
	{
		return UDMXControlConsoleRawFader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleRawFader);
	UDMXControlConsoleRawFader::~UDMXControlConsoleRawFader() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleRawFader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleRawFader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleRawFader, UDMXControlConsoleRawFader::StaticClass, TEXT("UDMXControlConsoleRawFader"), &Z_Registration_Info_UClass_UDMXControlConsoleRawFader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleRawFader), 2383318496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleRawFader_h_1464987469(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleRawFader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleRawFader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
