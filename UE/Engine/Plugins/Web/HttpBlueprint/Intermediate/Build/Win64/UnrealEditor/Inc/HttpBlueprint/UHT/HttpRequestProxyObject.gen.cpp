// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/HttpRequestProxyObject.h"
#include "HttpHeader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpRequestProxyObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HTTPBLUEPRINT_API UClass* Z_Construct_UClass_UHttpRequestProxyObject();
	HTTPBLUEPRINT_API UClass* Z_Construct_UClass_UHttpRequestProxyObject_NoRegister();
	HTTPBLUEPRINT_API UFunction* Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature();
	HTTPBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FHttpHeader();
	UPackage* Z_Construct_UPackage__Script_HttpBlueprint();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics
	{
		struct _Script_HttpBlueprint_eventOnRequestComplete_Parms
		{
			FString Response;
			bool bSuccessful;
			FHttpHeader OutHeader;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
		static void NewProp_bSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHeader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HttpBlueprint_eventOnRequestComplete_Parms, Response), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::NewProp_bSuccessful_SetBit(void* Obj)
	{
		((_Script_HttpBlueprint_eventOnRequestComplete_Parms*)Obj)->bSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_HttpBlueprint_eventOnRequestComplete_Parms), &Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::NewProp_OutHeader = { "OutHeader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HttpBlueprint_eventOnRequestComplete_Parms, OutHeader), Z_Construct_UScriptStruct_FHttpHeader, METADATA_PARAMS(0, nullptr) }; // 2327076576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::NewProp_bSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::NewProp_OutHeader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/HttpRequestProxyObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpBlueprint, nullptr, "OnRequestComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::_Script_HttpBlueprint_eventOnRequestComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::_Script_HttpBlueprint_eventOnRequestComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, const FString& Response, bool bSuccessful, FHttpHeader OutHeader)
{
	struct _Script_HttpBlueprint_eventOnRequestComplete_Parms
	{
		FString Response;
		bool bSuccessful;
		FHttpHeader OutHeader;
	};
	_Script_HttpBlueprint_eventOnRequestComplete_Parms Parms;
	Parms.Response=Response;
	Parms.bSuccessful=bSuccessful ? true : false;
	Parms.OutHeader=OutHeader;
	OnRequestComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UHttpRequestProxyObject::execCreateHttpRequestProxyObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InUrl);
		P_GET_PROPERTY(FStrProperty,Z_Param_InVerb);
		P_GET_STRUCT(FHttpHeader,Z_Param_InHeader);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBody);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpRequestProxyObject**)Z_Param__Result=UHttpRequestProxyObject::CreateHttpRequestProxyObject(Z_Param_InUrl,Z_Param_InVerb,Z_Param_InHeader,Z_Param_InBody);
		P_NATIVE_END;
	}
	void UHttpRequestProxyObject::StaticRegisterNativesUHttpRequestProxyObject()
	{
		UClass* Class = UHttpRequestProxyObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateHttpRequestProxyObject", &UHttpRequestProxyObject::execCreateHttpRequestProxyObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics
	{
		struct HttpRequestProxyObject_eventCreateHttpRequestProxyObject_Parms
		{
			FString InUrl;
			FString InVerb;
			FHttpHeader InHeader;
			FString InBody;
			UHttpRequestProxyObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVerb_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVerb;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InHeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBody_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBody;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InUrl = { "InUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpRequestProxyObject_eventCreateHttpRequestProxyObject_Parms, InUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InUrl_MetaData), Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InVerb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InVerb = { "InVerb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpRequestProxyObject_eventCreateHttpRequestProxyObject_Parms, InVerb), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InVerb_MetaData), Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InVerb_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InHeader = { "InHeader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpRequestProxyObject_eventCreateHttpRequestProxyObject_Parms, InHeader), Z_Construct_UScriptStruct_FHttpHeader, METADATA_PARAMS(0, nullptr) }; // 2327076576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InBody = { "InBody", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpRequestProxyObject_eventCreateHttpRequestProxyObject_Parms, InBody), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InBody_MetaData), Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InBody_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HttpRequestProxyObject_eventCreateHttpRequestProxyObject_Parms, ReturnValue), Z_Construct_UClass_UHttpRequestProxyObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InVerb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InHeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_InBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "" },
		{ "Category", "Http" },
		{ "DisplayName", "Http Request" },
		{ "ModuleRelativePath", "Internal/HttpRequestProxyObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpRequestProxyObject, nullptr, "CreateHttpRequestProxyObject", nullptr, nullptr, Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::HttpRequestProxyObject_eventCreateHttpRequestProxyObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::HttpRequestProxyObject_eventCreateHttpRequestProxyObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpRequestProxyObject);
	UClass* Z_Construct_UClass_UHttpRequestProxyObject_NoRegister()
	{
		return UHttpRequestProxyObject::StaticClass();
	}
	struct Z_Construct_UClass_UHttpRequestProxyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedHeader_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedHeader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpRequestProxyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpBlueprint,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpRequestProxyObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpRequestProxyObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpRequestProxyObject_CreateHttpRequestProxyObject, "CreateHttpRequestProxyObject" }, // 3397090751
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpRequestProxyObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpRequestProxyObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpRequestProxyObject.h" },
		{ "ModuleRelativePath", "Internal/HttpRequestProxyObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpRequestProxyObject_Statics::NewProp_OnRequestComplete_MetaData[] = {
		{ "ModuleRelativePath", "Internal/HttpRequestProxyObject.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpRequestProxyObject_Statics::NewProp_OnRequestComplete = { "OnRequestComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpRequestProxyObject, OnRequestComplete), Z_Construct_UDelegateFunction_HttpBlueprint_OnRequestComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpRequestProxyObject_Statics::NewProp_OnRequestComplete_MetaData), Z_Construct_UClass_UHttpRequestProxyObject_Statics::NewProp_OnRequestComplete_MetaData) }; // 3552091164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpRequestProxyObject_Statics::NewProp_CachedHeader_MetaData[] = {
		{ "ModuleRelativePath", "Internal/HttpRequestProxyObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHttpRequestProxyObject_Statics::NewProp_CachedHeader = { "CachedHeader", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpRequestProxyObject, CachedHeader), Z_Construct_UScriptStruct_FHttpHeader, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpRequestProxyObject_Statics::NewProp_CachedHeader_MetaData), Z_Construct_UClass_UHttpRequestProxyObject_Statics::NewProp_CachedHeader_MetaData) }; // 2327076576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpRequestProxyObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpRequestProxyObject_Statics::NewProp_OnRequestComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpRequestProxyObject_Statics::NewProp_CachedHeader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpRequestProxyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpRequestProxyObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpRequestProxyObject_Statics::ClassParams = {
		&UHttpRequestProxyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHttpRequestProxyObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHttpRequestProxyObject_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpRequestProxyObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpRequestProxyObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpRequestProxyObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHttpRequestProxyObject()
	{
		if (!Z_Registration_Info_UClass_UHttpRequestProxyObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpRequestProxyObject.OuterSingleton, Z_Construct_UClass_UHttpRequestProxyObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpRequestProxyObject.OuterSingleton;
	}
	template<> HTTPBLUEPRINT_API UClass* StaticClass<UHttpRequestProxyObject>()
	{
		return UHttpRequestProxyObject::StaticClass();
	}
	UHttpRequestProxyObject::UHttpRequestProxyObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpRequestProxyObject);
	UHttpRequestProxyObject::~UHttpRequestProxyObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpRequestProxyObject, UHttpRequestProxyObject::StaticClass, TEXT("UHttpRequestProxyObject"), &Z_Registration_Info_UClass_UHttpRequestProxyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpRequestProxyObject), 339814871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_1989610850(TEXT("/Script/HttpBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Internal_HttpRequestProxyObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
