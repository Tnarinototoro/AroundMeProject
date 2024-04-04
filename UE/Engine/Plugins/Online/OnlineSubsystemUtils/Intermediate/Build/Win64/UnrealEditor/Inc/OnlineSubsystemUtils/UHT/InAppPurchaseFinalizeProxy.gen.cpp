// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InAppPurchaseFinalizeProxy.h"
#include "InAppPurchaseDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseFinalizeProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseFinalizeProxy();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseFinalizeProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	DEFINE_FUNCTION(UInAppPurchaseFinalizeProxy::execCreateProxyObjectForInAppPurchaseFinalize)
	{
		P_GET_STRUCT_REF(FInAppPurchaseReceiptInfo2,Z_Param_Out_InAppPurchaseReceipt);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseFinalizeProxy**)Z_Param__Result=UInAppPurchaseFinalizeProxy::CreateProxyObjectForInAppPurchaseFinalize(Z_Param_Out_InAppPurchaseReceipt,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UInAppPurchaseFinalizeProxy::StaticRegisterNativesUInAppPurchaseFinalizeProxy()
	{
		UClass* Class = UInAppPurchaseFinalizeProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForInAppPurchaseFinalize", &UInAppPurchaseFinalizeProxy::execCreateProxyObjectForInAppPurchaseFinalize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics
	{
		struct InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms
		{
			FInAppPurchaseReceiptInfo2 InAppPurchaseReceipt;
			APlayerController* PlayerController;
			UInAppPurchaseFinalizeProxy* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAppPurchaseReceipt_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAppPurchaseReceipt;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_InAppPurchaseReceipt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_InAppPurchaseReceipt = { "InAppPurchaseReceipt", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms, InAppPurchaseReceipt), Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_InAppPurchaseReceipt_MetaData), Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_InAppPurchaseReceipt_MetaData) }; // 1112539755
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseFinalizeProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_InAppPurchaseReceipt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Finalizes a transaction for the provided transaction identifier\n" },
		{ "DisplayName", "Finalize In-App Purchase Transaction" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseFinalizeProxy.h" },
		{ "ToolTip", "Finalizes a transaction for the provided transaction identifier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseFinalizeProxy, nullptr, "CreateProxyObjectForInAppPurchaseFinalize", nullptr, nullptr, Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::InAppPurchaseFinalizeProxy_eventCreateProxyObjectForInAppPurchaseFinalize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppPurchaseFinalizeProxy);
	UClass* Z_Construct_UClass_UInAppPurchaseFinalizeProxy_NoRegister()
	{
		return UInAppPurchaseFinalizeProxy::StaticClass();
	}
	struct Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseFinalizeProxy_CreateProxyObjectForInAppPurchaseFinalize, "CreateProxyObjectForInAppPurchaseFinalize" }, // 1394192246
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseFinalizeProxy.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseFinalizeProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseFinalizeProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::ClassParams = {
		&UInAppPurchaseFinalizeProxy::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInAppPurchaseFinalizeProxy()
	{
		if (!Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.OuterSingleton, Z_Construct_UClass_UInAppPurchaseFinalizeProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseFinalizeProxy>()
	{
		return UInAppPurchaseFinalizeProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseFinalizeProxy);
	UInAppPurchaseFinalizeProxy::~UInAppPurchaseFinalizeProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInAppPurchaseFinalizeProxy, UInAppPurchaseFinalizeProxy::StaticClass, TEXT("UInAppPurchaseFinalizeProxy"), &Z_Registration_Info_UClass_UInAppPurchaseFinalizeProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppPurchaseFinalizeProxy), 2839433845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_4037397759(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseFinalizeProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
