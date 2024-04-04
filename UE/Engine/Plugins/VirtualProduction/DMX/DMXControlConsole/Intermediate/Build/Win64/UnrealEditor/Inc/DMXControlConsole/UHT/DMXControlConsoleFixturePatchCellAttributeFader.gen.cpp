// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DMXControlConsoleFixturePatchCellAttributeFader.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleFixturePatchCellAttributeFader() {}
// Cross Module References
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderBase();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_NoRegister();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	void UDMXControlConsoleFixturePatchCellAttributeFader::StaticRegisterNativesUDMXControlConsoleFixturePatchCellAttributeFader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleFixturePatchCellAttributeFader);
	UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_NoRegister()
	{
		return UDMXControlConsoleFixturePatchCellAttributeFader::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXControlConsoleFaderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX Fader DMX Fader|Oscillator" },
		{ "Comment", "/** A fader matching a Fixture Cell Attribute in the DMX Control Console. */" },
		{ "IncludePath", "DMXControlConsoleFixturePatchCellAttributeFader.h" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchCellAttributeFader.h" },
		{ "ToolTip", "A fader matching a Fixture Cell Attribute in the DMX Control Console." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** Name of the attribute mapped to this Fader */" },
		{ "DisplayName", "Attribute Mapping" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchCellAttributeFader.h" },
		{ "ToolTip", "Name of the attribute mapped to this Fader" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMXControlConsoleFixturePatchCellAttributeFader, Attribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_Attribute_MetaData), Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_Attribute_MetaData) }; // 3990846017
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_Attribute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleFixturePatchCellAttributeFader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::ClassParams = {
		&UDMXControlConsoleFixturePatchCellAttributeFader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchCellAttributeFader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchCellAttributeFader.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchCellAttributeFader.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleFixturePatchCellAttributeFader>()
	{
		return UDMXControlConsoleFixturePatchCellAttributeFader::StaticClass();
	}
	UDMXControlConsoleFixturePatchCellAttributeFader::UDMXControlConsoleFixturePatchCellAttributeFader() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleFixturePatchCellAttributeFader);
	UDMXControlConsoleFixturePatchCellAttributeFader::~UDMXControlConsoleFixturePatchCellAttributeFader() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchCellAttributeFader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchCellAttributeFader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader, UDMXControlConsoleFixturePatchCellAttributeFader::StaticClass, TEXT("UDMXControlConsoleFixturePatchCellAttributeFader"), &Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchCellAttributeFader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleFixturePatchCellAttributeFader), 38468109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchCellAttributeFader_h_1766849662(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchCellAttributeFader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchCellAttributeFader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
