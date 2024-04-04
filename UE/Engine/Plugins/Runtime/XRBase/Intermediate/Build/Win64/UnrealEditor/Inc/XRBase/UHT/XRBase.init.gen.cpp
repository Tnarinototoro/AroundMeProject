// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRBase_init() {}
	XRBASE_API UFunction* Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature();
	XRBASE_API UFunction* Z_Construct_UDelegateFunction_XRBase_DeviceModelLoadedDelegate__DelegateSignature();
	XRBASE_API UFunction* Z_Construct_UDelegateFunction_XRBase_XRDeviceOnDisconnectDelegate__DelegateSignature();
	XRBASE_API UFunction* Z_Construct_UDelegateFunction_XRBase_XRTimedInputActionDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_XRBase;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_XRBase()
	{
		if (!Z_Registration_Info_UPackage__Script_XRBase.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UVRNotificationsComponent_VRNotificationsDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_XRBase_DeviceModelLoadedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_XRBase_XRDeviceOnDisconnectDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_XRBase_XRTimedInputActionDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/XRBase",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x22996265,
				0x62794512,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_XRBase.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_XRBase.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_XRBase(Z_Construct_UPackage__Script_XRBase, TEXT("/Script/XRBase"), Z_Registration_Info_UPackage__Script_XRBase, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x22996265, 0x62794512));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
