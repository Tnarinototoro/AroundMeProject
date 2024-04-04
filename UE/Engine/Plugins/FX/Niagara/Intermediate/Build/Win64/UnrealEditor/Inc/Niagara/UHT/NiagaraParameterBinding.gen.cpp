// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraParameterBinding.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterBinding() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterBinding;
class UScriptStruct* FNiagaraParameterBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterBinding>()
{
	return FNiagaraParameterBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedParameter;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AliasedParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AliasedParameter;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AllowedDataInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedDataInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedDataInterfaces;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AllowedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedObjects;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AllowedInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedInterfaces;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_ResolvedParameter_MetaData[] = {
		{ "Category", "Parameter Binding" },
		{ "Comment", "/** Parameter binding used by the runtime fully resolved, i.e. NamedEmitter.Parameter */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
		{ "ToolTip", "Parameter binding used by the runtime fully resolved, i.e. NamedEmitter.Parameter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_ResolvedParameter = { "ResolvedParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraParameterBinding, ResolvedParameter), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_ResolvedParameter_MetaData), Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_ResolvedParameter_MetaData) }; // 1312662782
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AliasedParameter_MetaData[] = {
		{ "Comment", "/** Parameter binding used in the UI, i.e. Emitter.Parameter */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
		{ "ToolTip", "Parameter binding used in the UI, i.e. Emitter.Parameter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AliasedParameter = { "AliasedParameter", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraParameterBinding, AliasedParameter), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AliasedParameter_MetaData), Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AliasedParameter_MetaData) }; // 1312662782
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces_Inner = { "AllowedDataInterfaces", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces_MetaData[] = {
		{ "Comment", "/** List of data interfaces we can bind to, matches with a valid Cast<>. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
		{ "ToolTip", "List of data interfaces we can bind to, matches with a valid Cast<>." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces = { "AllowedDataInterfaces", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraParameterBinding, AllowedDataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces_MetaData), Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces_MetaData) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects_Inner = { "AllowedObjects", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects_MetaData[] = {
		{ "Comment", "/** List of UObject types we can bind to, matches with a valid Cast<>. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
		{ "ToolTip", "List of UObject types we can bind to, matches with a valid Cast<>." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects = { "AllowedObjects", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraParameterBinding, AllowedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects_MetaData), Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects_MetaData) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces_Inner = { "AllowedInterfaces", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces_MetaData[] = {
		{ "Comment", "/** List of Interfaces to look for on Object & DataInterfaces */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
		{ "ToolTip", "List of Interfaces to look for on Object & DataInterfaces" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces = { "AllowedInterfaces", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraParameterBinding, AllowedInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces_MetaData), Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_ResolvedParameter,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AliasedParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedDataInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewProp_AllowedInterfaces,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterBinding",
		Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::PropPointers),
		sizeof(FNiagaraParameterBinding),
		alignof(FNiagaraParameterBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraParameterBinding.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNiagaraParameterBindingWithValue>() == std::is_polymorphic<FNiagaraParameterBinding>(), "USTRUCT FNiagaraParameterBindingWithValue cannot be polymorphic unless super FNiagaraParameterBinding is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterBindingWithValue;
class UScriptStruct* FNiagaraParameterBindingWithValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterBindingWithValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterBindingWithValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterBindingWithValue"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterBindingWithValue.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterBindingWithValue>()
{
	return FNiagaraParameterBindingWithValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterBindingWithValue>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::NewProp_DefaultValue_Inner = { "DefaultValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "/** Default value will only have contents if one is provided. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterBinding.h" },
		{ "ToolTip", "Default value will only have contents if one is provided." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraParameterBindingWithValue, DefaultValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::NewProp_DefaultValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::NewProp_DefaultValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraParameterBinding,
		&NewStructOps,
		"NiagaraParameterBindingWithValue",
		Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::PropPointers),
		sizeof(FNiagaraParameterBindingWithValue),
		alignof(FNiagaraParameterBindingWithValue),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraParameterBindingWithValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterBindingWithValue.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraParameterBindingWithValue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraParameterBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterBinding_Statics::NewStructOps, TEXT("NiagaraParameterBinding"), &Z_Registration_Info_UScriptStruct_NiagaraParameterBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterBinding), 3491511441U) },
		{ FNiagaraParameterBindingWithValue::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue_Statics::NewStructOps, TEXT("NiagaraParameterBindingWithValue"), &Z_Registration_Info_UScriptStruct_NiagaraParameterBindingWithValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterBindingWithValue), 1275853375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h_2421141938(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
