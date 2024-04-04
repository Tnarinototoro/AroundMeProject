// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Customizations/NiagaraOutlinerCustomization.h"
#include "../Public/NiagaraDebuggerCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraOutlinerCustomization() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper;
class UScriptStruct* FNiagaraOutlinerWorldDataCustomizationWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraOutlinerWorldDataCustomizationWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraOutlinerWorldDataCustomizationWrapper>()
{
	return FNiagaraOutlinerWorldDataCustomizationWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Due to limitations of the structure details view, we need to wrap up structs we wish to customize. */" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
		{ "ToolTip", "Due to limitations of the structure details view, we need to wrap up structs we wish to customize." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerWorldDataCustomizationWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraOutlinerWorldDataCustomizationWrapper, Data), Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewProp_Data_MetaData) }; // 1819890371
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerWorldDataCustomizationWrapper",
		Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::PropPointers),
		sizeof(FNiagaraOutlinerWorldDataCustomizationWrapper),
		alignof(FNiagaraOutlinerWorldDataCustomizationWrapper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper;
class UScriptStruct* FNiagaraOutlinerSystemDataCustomizationWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraOutlinerSystemDataCustomizationWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraOutlinerSystemDataCustomizationWrapper>()
{
	return FNiagaraOutlinerSystemDataCustomizationWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerSystemDataCustomizationWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "System" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemDataCustomizationWrapper, Data), Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewProp_Data_MetaData) }; // 2206483170
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerSystemDataCustomizationWrapper",
		Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::PropPointers),
		sizeof(FNiagaraOutlinerSystemDataCustomizationWrapper),
		alignof(FNiagaraOutlinerSystemDataCustomizationWrapper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper;
class UScriptStruct* FNiagaraOutlinerSystemInstanceDataCustomizationWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraOutlinerSystemInstanceDataCustomizationWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraOutlinerSystemInstanceDataCustomizationWrapper>()
{
	return FNiagaraOutlinerSystemInstanceDataCustomizationWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerSystemInstanceDataCustomizationWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Instance" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceDataCustomizationWrapper, Data), Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData) }; // 2070421043
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerSystemInstanceDataCustomizationWrapper",
		Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::PropPointers),
		sizeof(FNiagaraOutlinerSystemInstanceDataCustomizationWrapper),
		alignof(FNiagaraOutlinerSystemInstanceDataCustomizationWrapper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper;
class UScriptStruct* FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraOutlinerEmitterInstanceDataCustomizationWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper>()
{
	return FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraOutlinerCustomization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper, Data), Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewProp_Data_MetaData) }; // 2561505671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerEmitterInstanceDataCustomizationWrapper",
		Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::PropPointers),
		sizeof(FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper),
		alignof(FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraOutlinerCustomization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraOutlinerCustomization_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraOutlinerWorldDataCustomizationWrapper::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerWorldDataCustomizationWrapper_Statics::NewStructOps, TEXT("NiagaraOutlinerWorldDataCustomizationWrapper"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldDataCustomizationWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerWorldDataCustomizationWrapper), 626960936U) },
		{ FNiagaraOutlinerSystemDataCustomizationWrapper::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemDataCustomizationWrapper_Statics::NewStructOps, TEXT("NiagaraOutlinerSystemDataCustomizationWrapper"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemDataCustomizationWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerSystemDataCustomizationWrapper), 2250694095U) },
		{ FNiagaraOutlinerSystemInstanceDataCustomizationWrapper::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceDataCustomizationWrapper_Statics::NewStructOps, TEXT("NiagaraOutlinerSystemInstanceDataCustomizationWrapper"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceDataCustomizationWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerSystemInstanceDataCustomizationWrapper), 566444113U) },
		{ FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper_Statics::NewStructOps, TEXT("NiagaraOutlinerEmitterInstanceDataCustomizationWrapper"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceDataCustomizationWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper), 2418758196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraOutlinerCustomization_h_2613246175(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraOutlinerCustomization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraOutlinerCustomization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
