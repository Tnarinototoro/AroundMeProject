// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InAppPurchaseCheckoutCallbackProxy.h"
#include "InAppPurchaseDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseCheckoutCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventOnlineProxyInAppCheckoutResult_Parms
		{
			EInAppPurchaseStatus PurchaseStatus;
			FInAppPurchaseReceiptInfo2 InAppPurchaseReceipt;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PurchaseStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PurchaseStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAppPurchaseReceipt_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAppPurchaseReceipt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::NewProp_PurchaseStatus = { "PurchaseStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnlineProxyInAppCheckoutResult_Parms, PurchaseStatus), Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus, METADATA_PARAMS(0, nullptr) }; // 1585849664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipt = { "InAppPurchaseReceipt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnlineProxyInAppCheckoutResult_Parms, InAppPurchaseReceipt), Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipt_MetaData), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipt_MetaData) }; // 1112539755
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::NewProp_PurchaseStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseCheckoutCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "OnlineProxyInAppCheckoutResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineProxyInAppCheckoutResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineProxyInAppCheckoutResult_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnlineProxyInAppCheckoutResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineProxyInAppCheckoutResult, EInAppPurchaseStatus PurchaseStatus, FInAppPurchaseReceiptInfo2 const& InAppPurchaseReceipt)
{
	struct _Script_OnlineSubsystemUtils_eventOnlineProxyInAppCheckoutResult_Parms
	{
		EInAppPurchaseStatus PurchaseStatus;
		FInAppPurchaseReceiptInfo2 InAppPurchaseReceipt;
	};
	_Script_OnlineSubsystemUtils_eventOnlineProxyInAppCheckoutResult_Parms Parms;
	Parms.PurchaseStatus=PurchaseStatus;
	Parms.InAppPurchaseReceipt=InAppPurchaseReceipt;
	OnlineProxyInAppCheckoutResult.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UInAppPurchaseCheckoutCallbackProxy::execCreateProxyObjectForInAppPurchaseCheckout)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FInAppPurchaseProductRequest2,Z_Param_Out_ProductRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseCheckoutCallbackProxy**)Z_Param__Result=UInAppPurchaseCheckoutCallbackProxy::CreateProxyObjectForInAppPurchaseCheckout(Z_Param_PlayerController,Z_Param_Out_ProductRequest);
		P_NATIVE_END;
	}
	void UInAppPurchaseCheckoutCallbackProxy::StaticRegisterNativesUInAppPurchaseCheckoutCallbackProxy()
	{
		UClass* Class = UInAppPurchaseCheckoutCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForInAppPurchaseCheckout", &UInAppPurchaseCheckoutCallbackProxy::execCreateProxyObjectForInAppPurchaseCheckout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics
	{
		struct InAppPurchaseCheckoutCallbackProxy_eventCreateProxyObjectForInAppPurchaseCheckout_Parms
		{
			APlayerController* PlayerController;
			FInAppPurchaseProductRequest2 ProductRequest;
			UInAppPurchaseCheckoutCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProductRequest;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseCheckoutCallbackProxy_eventCreateProxyObjectForInAppPurchaseCheckout_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::NewProp_ProductRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::NewProp_ProductRequest = { "ProductRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseCheckoutCallbackProxy_eventCreateProxyObjectForInAppPurchaseCheckout_Parms, ProductRequest), Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::NewProp_ProductRequest_MetaData), Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::NewProp_ProductRequest_MetaData) }; // 3187082382
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseCheckoutCallbackProxy_eventCreateProxyObjectForInAppPurchaseCheckout_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::NewProp_ProductRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Kicks off a transaction for the provided product identifier\n" },
		{ "DisplayName", "Start an In-App Purchase" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCheckoutCallbackProxy.h" },
		{ "ToolTip", "Kicks off a transaction for the provided product identifier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy, nullptr, "CreateProxyObjectForInAppPurchaseCheckout", nullptr, nullptr, Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::InAppPurchaseCheckoutCallbackProxy_eventCreateProxyObjectForInAppPurchaseCheckout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::InAppPurchaseCheckoutCallbackProxy_eventCreateProxyObjectForInAppPurchaseCheckout_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppPurchaseCheckoutCallbackProxy);
	UClass* Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_NoRegister()
	{
		return UInAppPurchaseCheckoutCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseCheckoutCallbackProxy_CreateProxyObjectForInAppPurchaseCheckout, "CreateProxyObjectForInAppPurchaseCheckout" }, // 2073578711
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseCheckoutCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCheckoutCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCheckoutCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful In-App Purchase transaction" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppPurchaseCheckoutCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::NewProp_OnSuccess_MetaData), Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::NewProp_OnSuccess_MetaData) }; // 3652489119
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCheckoutCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful In-App Purchase transaction" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppPurchaseCheckoutCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineProxyInAppCheckoutResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::NewProp_OnFailure_MetaData), Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::NewProp_OnFailure_MetaData) }; // 3652489119
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseCheckoutCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::ClassParams = {
		&UInAppPurchaseCheckoutCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.OuterSingleton, Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseCheckoutCallbackProxy>()
	{
		return UInAppPurchaseCheckoutCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseCheckoutCallbackProxy);
	UInAppPurchaseCheckoutCallbackProxy::~UInAppPurchaseCheckoutCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInAppPurchaseCheckoutCallbackProxy, UInAppPurchaseCheckoutCallbackProxy::StaticClass, TEXT("UInAppPurchaseCheckoutCallbackProxy"), &Z_Registration_Info_UClass_UInAppPurchaseCheckoutCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppPurchaseCheckoutCallbackProxy), 2350570799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_2569734095(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCheckoutCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
