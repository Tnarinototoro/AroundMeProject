// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProxyTableFunctionLibrary.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyTableFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyAsset_NoRegister();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyTable_NoRegister();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyTableFunctionLibrary();
	PROXYTABLE_API UClass* Z_Construct_UClass_UProxyTableFunctionLibrary_NoRegister();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_ProxyTable();
// End Cross Module References
	DEFINE_FUNCTION(UProxyTableFunctionLibrary::execMakeLookupProxyWithOverrideTable)
	{
		P_GET_OBJECT(UProxyAsset,Z_Param_Proxy);
		P_GET_OBJECT(UProxyTable,Z_Param_ProxyTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInstancedStruct*)Z_Param__Result=UProxyTableFunctionLibrary::MakeLookupProxyWithOverrideTable(Z_Param_Proxy,Z_Param_ProxyTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProxyTableFunctionLibrary::execMakeLookupProxy)
	{
		P_GET_OBJECT(UProxyAsset,Z_Param_Proxy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInstancedStruct*)Z_Param__Result=UProxyTableFunctionLibrary::MakeLookupProxy(Z_Param_Proxy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProxyTableFunctionLibrary::execEvaluateProxyAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UProxyAsset,Z_Param_Proxy);
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UProxyTableFunctionLibrary::EvaluateProxyAsset(Z_Param_ContextObject,Z_Param_Proxy,Z_Param_ObjectClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProxyTableFunctionLibrary::execEvaluateProxyTable)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UProxyTable,Z_Param_ProxyTable);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UProxyTableFunctionLibrary::EvaluateProxyTable(Z_Param_ContextObject,Z_Param_ProxyTable,Z_Param_Key);
		P_NATIVE_END;
	}
	void UProxyTableFunctionLibrary::StaticRegisterNativesUProxyTableFunctionLibrary()
	{
		UClass* Class = UProxyTableFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateProxyAsset", &UProxyTableFunctionLibrary::execEvaluateProxyAsset },
			{ "EvaluateProxyTable", &UProxyTableFunctionLibrary::execEvaluateProxyTable },
			{ "MakeLookupProxy", &UProxyTableFunctionLibrary::execMakeLookupProxy },
			{ "MakeLookupProxyWithOverrideTable", &UProxyTableFunctionLibrary::execMakeLookupProxyWithOverrideTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics
	{
		struct ProxyTableFunctionLibrary_eventEvaluateProxyAsset_Parms
		{
			const UObject* ContextObject;
			const UProxyAsset* Proxy;
			TSubclassOf<UObject>  ObjectClass;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Proxy;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventEvaluateProxyAsset_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_ContextObject_MetaData), Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_ContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_Proxy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventEvaluateProxyAsset_Parms, Proxy), Z_Construct_UClass_UProxyAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_Proxy_MetaData), Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_Proxy_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventEvaluateProxyAsset_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventEvaluateProxyAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09* Resolve a proxy asset and return the selected UObject, or null\n\x09*\n\x09* @param ContextObject\x09\x09\x09(in) An Object from which the Proxy Table will be read, and parameters to any nested Chooser Tables that need to evaluate\n\x09* @param ProxyAsset\x09\x09\x09\x09(in) The ProxyAsset asset\n\x09* @param ObjectClass\x09\x09\x09(in) Expected type of result objects\n\x09*/" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "ModuleRelativePath", "Public/ProxyTableFunctionLibrary.h" },
		{ "ToolTip", "Resolve a proxy asset and return the selected UObject, or null\n\n@param ContextObject                  (in) An Object from which the Proxy Table will be read, and parameters to any nested Chooser Tables that need to evaluate\n@param ProxyAsset                             (in) The ProxyAsset asset\n@param ObjectClass                    (in) Expected type of result objects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProxyTableFunctionLibrary, nullptr, "EvaluateProxyAsset", nullptr, nullptr, Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::ProxyTableFunctionLibrary_eventEvaluateProxyAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::ProxyTableFunctionLibrary_eventEvaluateProxyAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics
	{
		struct ProxyTableFunctionLibrary_eventEvaluateProxyTable_Parms
		{
			const UObject* ContextObject;
			const UProxyTable* ProxyTable;
			FName Key;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProxyTable;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventEvaluateProxyTable_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ContextObject_MetaData), Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ProxyTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ProxyTable = { "ProxyTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventEvaluateProxyTable_Parms, ProxyTable), Z_Construct_UClass_UProxyTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ProxyTable_MetaData), Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ProxyTable_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventEvaluateProxyTable_Parms, Key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventEvaluateProxyTable_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ProxyTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09\x09* Temporary backwards compatibility function!  please switch to EvaluateProxyAsset\n\x09\x09*\n\x09\x09* @param ContextObject\x09\x09\x09(in) An Object from which the parameters to the Chooser Table will be read\n\x09\x09* @param ProxyTable\x09\x09\x09\x09(in) The ProxyTable asset\n\x09\x09* @param Key\x09\x09\x09\x09\x09(in) The Key from the ProxyTable asset\n\x09*/" },
		{ "ModuleRelativePath", "Public/ProxyTableFunctionLibrary.h" },
		{ "ToolTip", "Temporary backwards compatibility function!  please switch to EvaluateProxyAsset\n\n@param ContextObject                  (in) An Object from which the parameters to the Chooser Table will be read\n@param ProxyTable                             (in) The ProxyTable asset\n@param Key                                    (in) The Key from the ProxyTable asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProxyTableFunctionLibrary, nullptr, "EvaluateProxyTable", nullptr, nullptr, Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::ProxyTableFunctionLibrary_eventEvaluateProxyTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::ProxyTableFunctionLibrary_eventEvaluateProxyTable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics
	{
		struct ProxyTableFunctionLibrary_eventMakeLookupProxy_Parms
		{
			UProxyAsset* Proxy;
			FInstancedStruct ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Proxy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventMakeLookupProxy_Parms, Proxy), Z_Construct_UClass_UProxyAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventMakeLookupProxy_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 2114042832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09* Create a LookupProxy struct\n\x09*\n\x09* @param Chooser\x09\x09\x09\x09(in) the ChooserTable asset to evaluate\n\x09*/" },
		{ "ModuleRelativePath", "Public/ProxyTableFunctionLibrary.h" },
		{ "ToolTip", "Create a LookupProxy struct\n\n@param Chooser                                (in) the ChooserTable asset to evaluate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProxyTableFunctionLibrary, nullptr, "MakeLookupProxy", nullptr, nullptr, Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::ProxyTableFunctionLibrary_eventMakeLookupProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::ProxyTableFunctionLibrary_eventMakeLookupProxy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics
	{
		struct ProxyTableFunctionLibrary_eventMakeLookupProxyWithOverrideTable_Parms
		{
			UProxyAsset* Proxy;
			UProxyTable* ProxyTable;
			FInstancedStruct ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Proxy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProxyTable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventMakeLookupProxyWithOverrideTable_Parms, Proxy), Z_Construct_UClass_UProxyAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::NewProp_ProxyTable = { "ProxyTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventMakeLookupProxyWithOverrideTable_Parms, ProxyTable), Z_Construct_UClass_UProxyTable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProxyTableFunctionLibrary_eventMakeLookupProxyWithOverrideTable_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 2114042832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::NewProp_ProxyTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ProxyTableFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProxyTableFunctionLibrary, nullptr, "MakeLookupProxyWithOverrideTable", nullptr, nullptr, Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::ProxyTableFunctionLibrary_eventMakeLookupProxyWithOverrideTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::ProxyTableFunctionLibrary_eventMakeLookupProxyWithOverrideTable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProxyTableFunctionLibrary);
	UClass* Z_Construct_UClass_UProxyTableFunctionLibrary_NoRegister()
	{
		return UProxyTableFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UProxyTableFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProxyTable,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset, "EvaluateProxyAsset" }, // 878929561
		{ &Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable, "EvaluateProxyTable" }, // 464868611
		{ &Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy, "MakeLookupProxy" }, // 3153707945
		{ &Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable, "MakeLookupProxyWithOverrideTable" }, // 132600167
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Proxy Table Function Library\n */" },
		{ "IncludePath", "ProxyTableFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ProxyTableFunctionLibrary.h" },
		{ "ToolTip", "Proxy Table Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProxyTableFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::ClassParams = {
		&UProxyTableFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UProxyTableFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UProxyTableFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProxyTableFunctionLibrary.OuterSingleton, Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProxyTableFunctionLibrary.OuterSingleton;
	}
	template<> PROXYTABLE_API UClass* StaticClass<UProxyTableFunctionLibrary>()
	{
		return UProxyTableFunctionLibrary::StaticClass();
	}
	UProxyTableFunctionLibrary::UProxyTableFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyTableFunctionLibrary);
	UProxyTableFunctionLibrary::~UProxyTableFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProxyTableFunctionLibrary, UProxyTableFunctionLibrary::StaticClass, TEXT("UProxyTableFunctionLibrary"), &Z_Registration_Info_UClass_UProxyTableFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProxyTableFunctionLibrary), 4281045976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_1874378106(TEXT("/Script/ProxyTable"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
