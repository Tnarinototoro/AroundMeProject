// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusBindingTypes.h"
#include "OptimusDataDomain.h"
#include "OptimusDataType.h"
#include "OptimusValidatedName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusBindingTypes() {}
// Cross Module References
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimus_ShaderBinding();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataDomain();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBinding();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBindingArray();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValidatedName();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Optimus_ShaderBinding;
class UScriptStruct* FOptimus_ShaderBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Optimus_ShaderBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Optimus_ShaderBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimus_ShaderBinding, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("Optimus_ShaderBinding"));
	}
	return Z_Registration_Info_UScriptStruct_Optimus_ShaderBinding.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimus_ShaderBinding>()
{
	return FOptimus_ShaderBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusBindingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimus_ShaderBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/OptimusBindingTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimus_ShaderBinding, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/OptimusBindingTypes.h" },
		{ "UseInResource", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimus_ShaderBinding, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewProp_DataType_MetaData), Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewProp_DataType_MetaData) }; // 4267076562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewProp_DataType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"Optimus_ShaderBinding",
		Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::PropPointers),
		sizeof(FOptimus_ShaderBinding),
		alignof(FOptimus_ShaderBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOptimus_ShaderBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_Optimus_ShaderBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Optimus_ShaderBinding.InnerSingleton, Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Optimus_ShaderBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusParameterBinding;
class UScriptStruct* FOptimusParameterBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusParameterBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusParameterBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusParameterBinding, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusParameterBinding"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusParameterBinding.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusParameterBinding>()
{
	return FOptimusParameterBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataDomain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusBindingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusParameterBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/OptimusBindingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusParameterBinding, Name), Z_Construct_UScriptStruct_FOptimusValidatedName, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_Name_MetaData) }; // 1421962874
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/OptimusBindingTypes.h" },
		{ "UseInResource", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusParameterBinding, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_DataType_MetaData), Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_DataType_MetaData) }; // 4267076562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_DataDomain_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/OptimusBindingTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_DataDomain = { "DataDomain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusParameterBinding, DataDomain), Z_Construct_UScriptStruct_FOptimusDataDomain, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_DataDomain_MetaData), Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_DataDomain_MetaData) }; // 791570309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewProp_DataDomain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusParameterBinding",
		Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::PropPointers),
		sizeof(FOptimusParameterBinding),
		alignof(FOptimusParameterBinding),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusParameterBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusParameterBinding.InnerSingleton, Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusParameterBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusParameterBindingArray;
class UScriptStruct* FOptimusParameterBindingArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusParameterBindingArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusParameterBindingArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusParameterBindingArray, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusParameterBindingArray"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusParameterBindingArray.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusParameterBindingArray>()
{
	return FOptimusParameterBindingArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InnerArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusBindingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusParameterBindingArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::NewProp_InnerArray_Inner = { "InnerArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOptimusParameterBinding, METADATA_PARAMS(0, nullptr) }; // 1377031935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::NewProp_InnerArray_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/OptimusBindingTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::NewProp_InnerArray = { "InnerArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOptimusParameterBindingArray, InnerArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::NewProp_InnerArray_MetaData), Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::NewProp_InnerArray_MetaData) }; // 1377031935
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::NewProp_InnerArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::NewProp_InnerArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusParameterBindingArray",
		Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::PropPointers),
		sizeof(FOptimusParameterBindingArray),
		alignof(FOptimusParameterBindingArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBindingArray()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusParameterBindingArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusParameterBindingArray.InnerSingleton, Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusParameterBindingArray.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusBindingTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusBindingTypes_h_Statics::ScriptStructInfo[] = {
		{ FOptimus_ShaderBinding::StaticStruct, Z_Construct_UScriptStruct_FOptimus_ShaderBinding_Statics::NewStructOps, TEXT("Optimus_ShaderBinding"), &Z_Registration_Info_UScriptStruct_Optimus_ShaderBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimus_ShaderBinding), 713792476U) },
		{ FOptimusParameterBinding::StaticStruct, Z_Construct_UScriptStruct_FOptimusParameterBinding_Statics::NewStructOps, TEXT("OptimusParameterBinding"), &Z_Registration_Info_UScriptStruct_OptimusParameterBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusParameterBinding), 1377031935U) },
		{ FOptimusParameterBindingArray::StaticStruct, Z_Construct_UScriptStruct_FOptimusParameterBindingArray_Statics::NewStructOps, TEXT("OptimusParameterBindingArray"), &Z_Registration_Info_UScriptStruct_OptimusParameterBindingArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusParameterBindingArray), 1316964665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusBindingTypes_h_3002596089(TEXT("/Script/OptimusCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusBindingTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusBindingTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
