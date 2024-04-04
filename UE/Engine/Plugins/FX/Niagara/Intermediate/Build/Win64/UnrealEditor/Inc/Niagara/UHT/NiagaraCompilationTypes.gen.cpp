// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraCompilationTypes.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCompilationTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData;
class UScriptStruct* FNiagaraScriptAsyncCompileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptAsyncCompileData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptAsyncCompileData>()
{
	return FNiagaraScriptAsyncCompileData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_RapidIterationParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RapidIterationParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RapidIterationParameters;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NamedDataInterfaces_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NamedDataInterfaces_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedDataInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NamedDataInterfaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptAsyncCompileData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_RapidIterationParameters_Inner = { "RapidIterationParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2677688088
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_RapidIterationParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_RapidIterationParameters = { "RapidIterationParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScriptAsyncCompileData, RapidIterationParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_RapidIterationParameters_MetaData), Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_RapidIterationParameters_MetaData) }; // 2677688088
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces_ValueProp = { "NamedDataInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces_Key_KeyProp = { "NamedDataInterfaces_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces = { "NamedDataInterfaces", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraScriptAsyncCompileData, NamedDataInterfaces), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces_MetaData), Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_RapidIterationParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_RapidIterationParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewProp_NamedDataInterfaces,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptAsyncCompileData",
		Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::PropPointers),
		sizeof(FNiagaraScriptAsyncCompileData),
		alignof(FNiagaraScriptAsyncCompileData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults;
class UScriptStruct* FNiagaraSystemAsyncCompileResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemAsyncCompileResults"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemAsyncCompileResults>()
{
	return FNiagaraSystemAsyncCompileResults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExposedVariables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemAsyncCompileResults>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_RootObjects_Inner = { "RootObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_RootObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_RootObjects = { "RootObjects", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemAsyncCompileResults, RootObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_RootObjects_MetaData), Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_RootObjects_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_ExposedVariables_Inner = { "ExposedVariables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2677688088
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_ExposedVariables_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompilationTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_ExposedVariables = { "ExposedVariables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemAsyncCompileResults, ExposedVariables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_ExposedVariables_MetaData), Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_ExposedVariables_MetaData) }; // 2677688088
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_RootObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_RootObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_ExposedVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewProp_ExposedVariables,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemAsyncCompileResults",
		Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::PropPointers),
		sizeof(FNiagaraSystemAsyncCompileResults),
		alignof(FNiagaraSystemAsyncCompileResults),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompilationTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompilationTypes_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraScriptAsyncCompileData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData_Statics::NewStructOps, TEXT("NiagaraScriptAsyncCompileData"), &Z_Registration_Info_UScriptStruct_NiagaraScriptAsyncCompileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptAsyncCompileData), 1439532963U) },
		{ FNiagaraSystemAsyncCompileResults::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemAsyncCompileResults_Statics::NewStructOps, TEXT("NiagaraSystemAsyncCompileResults"), &Z_Registration_Info_UScriptStruct_NiagaraSystemAsyncCompileResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemAsyncCompileResults), 3435936754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompilationTypes_h_1487949862(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompilationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCompilationTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
