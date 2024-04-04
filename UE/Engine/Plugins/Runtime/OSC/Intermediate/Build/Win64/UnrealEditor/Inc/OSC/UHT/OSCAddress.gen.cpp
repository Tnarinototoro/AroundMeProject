// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSCAddress.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSCAddress() {}
// Cross Module References
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCAddress();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OSCAddress;
class UScriptStruct* FOSCAddress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OSCAddress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OSCAddress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOSCAddress, (UObject*)Z_Construct_UPackage__Script_OSC(), TEXT("OSCAddress"));
	}
	return Z_Registration_Info_UScriptStruct_OSCAddress.OuterSingleton;
}
template<> OSC_API UScriptStruct* StaticStruct<FOSCAddress>()
{
	return FOSCAddress::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOSCAddress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Containers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Containers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Containers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Method;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOSCAddress_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace OSC\n" },
		{ "ModuleRelativePath", "Public/OSCAddress.h" },
		{ "ToolTip", "namespace OSC" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOSCAddress_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOSCAddress>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Containers_Inner = { "Containers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Containers_MetaData[] = {
		{ "Comment", "// Ordered array of container names\n" },
		{ "ModuleRelativePath", "Public/OSCAddress.h" },
		{ "ToolTip", "Ordered array of container names" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Containers = { "Containers", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOSCAddress, Containers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Containers_MetaData), Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Containers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Method_MetaData[] = {
		{ "Comment", "// Method name of string\n" },
		{ "ModuleRelativePath", "Public/OSCAddress.h" },
		{ "ToolTip", "Method name of string" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOSCAddress, Method), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Method_MetaData), Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Method_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOSCAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Containers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Containers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOSCAddress_Statics::NewProp_Method,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOSCAddress_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
		nullptr,
		&NewStructOps,
		"OSCAddress",
		Z_Construct_UScriptStruct_FOSCAddress_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSCAddress_Statics::PropPointers),
		sizeof(FOSCAddress),
		alignof(FOSCAddress),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSCAddress_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOSCAddress_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSCAddress_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOSCAddress()
	{
		if (!Z_Registration_Info_UScriptStruct_OSCAddress.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OSCAddress.InnerSingleton, Z_Construct_UScriptStruct_FOSCAddress_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OSCAddress.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCAddress_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCAddress_h_Statics::ScriptStructInfo[] = {
		{ FOSCAddress::StaticStruct, Z_Construct_UScriptStruct_FOSCAddress_Statics::NewStructOps, TEXT("OSCAddress"), &Z_Registration_Info_UScriptStruct_OSCAddress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOSCAddress), 2970951841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCAddress_h_2755727915(TEXT("/Script/OSC"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCAddress_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCAddress_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
