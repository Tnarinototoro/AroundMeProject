// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGParamData.h"
#include "Metadata/PCGAttributePropertySelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGParamData() {}
// Cross Module References
	PCG_API UClass* Z_Construct_UClass_UPCGData();
	PCG_API UClass* Z_Construct_UClass_UPCGMetadata_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGParamData();
	PCG_API UClass* Z_Construct_UClass_UPCGParamData_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	DEFINE_FUNCTION(UPCGParamData::execFilterParamsByKey)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGParamData**)Z_Param__Result=P_THIS->FilterParamsByKey(Z_Param_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGParamData::execFilterParamsByName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGParamData**)Z_Param__Result=P_THIS->FilterParamsByName(Z_Param_Out_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGParamData::execFindOrAddMetadataKey)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->FindOrAddMetadataKey(Z_Param_Out_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGParamData::execFindMetadataKey)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->FindMetadataKey(Z_Param_Out_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGParamData::execMutableMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPCGMetadata**)Z_Param__Result=P_THIS->MutableMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPCGParamData::execConstMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UPCGMetadata**)Z_Param__Result=P_THIS->ConstMetadata();
		P_NATIVE_END;
	}
	void UPCGParamData::StaticRegisterNativesUPCGParamData()
	{
		UClass* Class = UPCGParamData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstMetadata", &UPCGParamData::execConstMetadata },
			{ "FilterParamsByKey", &UPCGParamData::execFilterParamsByKey },
			{ "FilterParamsByName", &UPCGParamData::execFilterParamsByName },
			{ "FindMetadataKey", &UPCGParamData::execFindMetadataKey },
			{ "FindOrAddMetadataKey", &UPCGParamData::execFindOrAddMetadataKey },
			{ "MutableMetadata", &UPCGParamData::execMutableMetadata },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics
	{
		struct PCGParamData_eventConstMetadata_Parms
		{
			const UPCGMetadata* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGParamData_eventConstMetadata_Parms, ReturnValue), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Metadata" },
		{ "Comment", "// ~End UPCGData interface\n" },
		{ "ModuleRelativePath", "Public/PCGParamData.h" },
		{ "ToolTip", "~End UPCGData interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGParamData, nullptr, "ConstMetadata", nullptr, nullptr, Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::PCGParamData_eventConstMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::PCGParamData_eventConstMetadata_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGParamData_ConstMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGParamData_ConstMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics
	{
		struct PCGParamData_eventFilterParamsByKey_Parms
		{
			int64 InKey;
			UPCGParamData* ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_InKey;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGParamData_eventFilterParamsByKey_Parms, InKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGParamData_eventFilterParamsByKey_Parms, ReturnValue), Z_Construct_UClass_UPCGParamData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Params" },
		{ "ModuleRelativePath", "Public/PCGParamData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGParamData, nullptr, "FilterParamsByKey", nullptr, nullptr, Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::PCGParamData_eventFilterParamsByKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::PCGParamData_eventFilterParamsByKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGParamData_FilterParamsByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGParamData_FilterParamsByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics
	{
		struct PCGParamData_eventFilterParamsByName_Parms
		{
			FName InName;
			UPCGParamData* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGParamData_eventFilterParamsByName_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::NewProp_InName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGParamData_eventFilterParamsByName_Parms, ReturnValue), Z_Construct_UClass_UPCGParamData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Params" },
		{ "Comment", "/** Creates a new params that keeps only a given key/name */" },
		{ "ModuleRelativePath", "Public/PCGParamData.h" },
		{ "ToolTip", "Creates a new params that keeps only a given key/name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGParamData, nullptr, "FilterParamsByName", nullptr, nullptr, Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::PCGParamData_eventFilterParamsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::PCGParamData_eventFilterParamsByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGParamData_FilterParamsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGParamData_FilterParamsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics
	{
		struct PCGParamData_eventFindMetadataKey_Parms
		{
			FName InName;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGParamData_eventFindMetadataKey_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::NewProp_InName_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGParamData_eventFindMetadataKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Params" },
		{ "Comment", "/** Returns the entry for the given name */" },
		{ "ModuleRelativePath", "Public/PCGParamData.h" },
		{ "ToolTip", "Returns the entry for the given name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGParamData, nullptr, "FindMetadataKey", nullptr, nullptr, Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::PCGParamData_eventFindMetadataKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::PCGParamData_eventFindMetadataKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGParamData_FindMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGParamData_FindMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics
	{
		struct PCGParamData_eventFindOrAddMetadataKey_Parms
		{
			FName InName;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGParamData_eventFindOrAddMetadataKey_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::NewProp_InName_MetaData), Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::NewProp_InName_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGParamData_eventFindOrAddMetadataKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Params" },
		{ "Comment", "/** Creates an entry for the given name, if not already added */" },
		{ "ModuleRelativePath", "Public/PCGParamData.h" },
		{ "ToolTip", "Creates an entry for the given name, if not already added" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGParamData, nullptr, "FindOrAddMetadataKey", nullptr, nullptr, Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::PCGParamData_eventFindOrAddMetadataKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::PCGParamData_eventFindOrAddMetadataKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics
	{
		struct PCGParamData_eventMutableMetadata_Parms
		{
			UPCGMetadata* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGParamData_eventMutableMetadata_Parms, ReturnValue), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Metadata" },
		{ "ModuleRelativePath", "Public/PCGParamData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPCGParamData, nullptr, "MutableMetadata", nullptr, nullptr, Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::PCGParamData_eventMutableMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::PCGParamData_eventMutableMetadata_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPCGParamData_MutableMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGParamData_MutableMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGParamData);
	UClass* Z_Construct_UClass_UPCGParamData_NoRegister()
	{
		return UPCGParamData::StaticClass();
	}
	struct Z_Construct_UClass_UPCGParamData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_NameMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCachedLastSelector_MetaData[];
#endif
		static void NewProp_bHasCachedLastSelector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCachedLastSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLastSelector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedLastSelector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGParamData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGData,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGParamData_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPCGParamData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGParamData_ConstMetadata, "ConstMetadata" }, // 3378488904
		{ &Z_Construct_UFunction_UPCGParamData_FilterParamsByKey, "FilterParamsByKey" }, // 2382242671
		{ &Z_Construct_UFunction_UPCGParamData_FilterParamsByName, "FilterParamsByName" }, // 887136207
		{ &Z_Construct_UFunction_UPCGParamData_FindMetadataKey, "FindMetadataKey" }, // 3399631323
		{ &Z_Construct_UFunction_UPCGParamData_FindOrAddMetadataKey, "FindOrAddMetadataKey" }, // 1981590754
		{ &Z_Construct_UFunction_UPCGParamData_MutableMetadata, "MutableMetadata" }, // 2583055549
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGParamData_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGParamData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n* Class to hold execution parameters that will be consumed in nodes of the graph\n*/" },
		{ "DisplayName", "Attribute Set" },
		{ "IncludePath", "PCGParamData.h" },
		{ "ModuleRelativePath", "Public/PCGParamData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class to hold execution parameters that will be consumed in nodes of the graph" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGParamData_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "// Not accessible through blueprint to make sure the constness is preserved\n" },
		{ "ModuleRelativePath", "Public/PCGParamData.h" },
		{ "ToolTip", "Not accessible through blueprint to make sure the constness is preserved" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGParamData_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGParamData, Metadata), Z_Construct_UClass_UPCGMetadata_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGParamData_Statics::NewProp_Metadata_MetaData), Z_Construct_UClass_UPCGParamData_Statics::NewProp_Metadata_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPCGParamData_Statics::NewProp_NameMap_ValueProp = { "NameMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGParamData_Statics::NewProp_NameMap_Key_KeyProp = { "NameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGParamData_Statics::NewProp_NameMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGParamData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPCGParamData_Statics::NewProp_NameMap = { "NameMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGParamData, NameMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGParamData_Statics::NewProp_NameMap_MetaData), Z_Construct_UClass_UPCGParamData_Statics::NewProp_NameMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGParamData_Statics::NewProp_bHasCachedLastSelector_MetaData[] = {
		{ "Comment", "/** Cache to keep track of the latest attribute manipulated on this data. */" },
		{ "ModuleRelativePath", "Public/PCGParamData.h" },
		{ "ToolTip", "Cache to keep track of the latest attribute manipulated on this data." },
	};
#endif
	void Z_Construct_UClass_UPCGParamData_Statics::NewProp_bHasCachedLastSelector_SetBit(void* Obj)
	{
		((UPCGParamData*)Obj)->bHasCachedLastSelector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGParamData_Statics::NewProp_bHasCachedLastSelector = { "bHasCachedLastSelector", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGParamData), &Z_Construct_UClass_UPCGParamData_Statics::NewProp_bHasCachedLastSelector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGParamData_Statics::NewProp_bHasCachedLastSelector_MetaData), Z_Construct_UClass_UPCGParamData_Statics::NewProp_bHasCachedLastSelector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGParamData_Statics::NewProp_CachedLastSelector_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGParamData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGParamData_Statics::NewProp_CachedLastSelector = { "CachedLastSelector", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGParamData, CachedLastSelector), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGParamData_Statics::NewProp_CachedLastSelector_MetaData), Z_Construct_UClass_UPCGParamData_Statics::NewProp_CachedLastSelector_MetaData) }; // 1471452776
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGParamData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGParamData_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGParamData_Statics::NewProp_NameMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGParamData_Statics::NewProp_NameMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGParamData_Statics::NewProp_NameMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGParamData_Statics::NewProp_bHasCachedLastSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGParamData_Statics::NewProp_CachedLastSelector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGParamData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGParamData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGParamData_Statics::ClassParams = {
		&UPCGParamData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPCGParamData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGParamData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGParamData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGParamData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGParamData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPCGParamData()
	{
		if (!Z_Registration_Info_UClass_UPCGParamData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGParamData.OuterSingleton, Z_Construct_UClass_UPCGParamData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGParamData.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGParamData>()
	{
		return UPCGParamData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGParamData);
	UPCGParamData::~UPCGParamData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGParamData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGParamData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGParamData, UPCGParamData::StaticClass, TEXT("UPCGParamData"), &Z_Registration_Info_UClass_UPCGParamData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGParamData), 3916903953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGParamData_h_1336413865(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGParamData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_PCGParamData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
