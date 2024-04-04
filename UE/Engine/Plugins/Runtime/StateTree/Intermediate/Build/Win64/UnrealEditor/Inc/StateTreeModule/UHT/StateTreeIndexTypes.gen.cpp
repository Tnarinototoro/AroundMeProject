// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeIndexTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeIndexTypes() {}
// Cross Module References
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex8();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeIndex16;
class UScriptStruct* FStateTreeIndex16::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeIndex16.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeIndex16.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex16, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeIndex16"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeIndex16.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeIndex16>()
{
	return FStateTreeIndex16::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeIndex16_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** uint16 index that can be invalid. */" },
		{ "ModuleRelativePath", "Public/StateTreeIndexTypes.h" },
		{ "ToolTip", "uint16 index that can be invalid." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeIndex16>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeIndexTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeIndex16, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeIndex16",
		Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::PropPointers),
		sizeof(FStateTreeIndex16),
		alignof(FStateTreeIndex16),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex16()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeIndex16.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeIndex16.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeIndex16.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeIndex8;
class UScriptStruct* FStateTreeIndex8::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeIndex8.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeIndex8.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex8, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeIndex8"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeIndex8.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeIndex8>()
{
	return FStateTreeIndex8::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeIndex8_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** uint8 index that can be invalid. */" },
		{ "ModuleRelativePath", "Public/StateTreeIndexTypes.h" },
		{ "ToolTip", "uint8 index that can be invalid." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeIndex8>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeIndexTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeIndex8, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeIndex8",
		Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::PropPointers),
		sizeof(FStateTreeIndex8),
		alignof(FStateTreeIndex8),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeIndex8()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeIndex8.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeIndex8.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeIndex8.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeIndexTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeIndexTypes_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeIndex16::StaticStruct, Z_Construct_UScriptStruct_FStateTreeIndex16_Statics::NewStructOps, TEXT("StateTreeIndex16"), &Z_Registration_Info_UScriptStruct_StateTreeIndex16, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeIndex16), 1063223217U) },
		{ FStateTreeIndex8::StaticStruct, Z_Construct_UScriptStruct_FStateTreeIndex8_Statics::NewStructOps, TEXT("StateTreeIndex8"), &Z_Registration_Info_UScriptStruct_StateTreeIndex8, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeIndex8), 1884641731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeIndexTypes_h_352543023(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeIndexTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeIndexTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
