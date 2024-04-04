// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetcodeUnitTest_init() {}
	NETCODEUNITTEST_API UFunction* Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NetcodeUnitTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest()
	{
		if (!Z_Registration_Info_UPackage__Script_NetcodeUnitTest.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NetcodeUnitTest",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000100,
				0x91A89738,
				0x7346AF6E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NetcodeUnitTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NetcodeUnitTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NetcodeUnitTest(Z_Construct_UPackage__Script_NetcodeUnitTest, TEXT("/Script/NetcodeUnitTest"), Z_Registration_Info_UPackage__Script_NetcodeUnitTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x91A89738, 0x7346AF6E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
