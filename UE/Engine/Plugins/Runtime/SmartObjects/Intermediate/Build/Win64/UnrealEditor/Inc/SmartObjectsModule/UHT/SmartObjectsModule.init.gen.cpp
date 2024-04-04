// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectsModule_init() {}
	SMARTOBJECTSMODULE_API UFunction* Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SmartObjectsModule;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SmartObjectsModule()
	{
		if (!Z_Registration_Info_UPackage__Script_SmartObjectsModule.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SmartObjectsModule_SmartObjectComponentEventSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SmartObjectsModule",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7ADC1CF0,
				0xDFA3E3E9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SmartObjectsModule.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SmartObjectsModule.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SmartObjectsModule(Z_Construct_UPackage__Script_SmartObjectsModule, TEXT("/Script/SmartObjectsModule"), Z_Registration_Info_UPackage__Script_SmartObjectsModule, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7ADC1CF0, 0xDFA3E3E9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
