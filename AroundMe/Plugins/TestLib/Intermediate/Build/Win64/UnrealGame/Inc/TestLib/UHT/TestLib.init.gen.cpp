// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestLib_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestLib;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestLib()
	{
		if (!Z_Registration_Info_UPackage__Script_TestLib.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestLib",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x44DBC858,
				0xEBEA3CAE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestLib.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestLib.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestLib(Z_Construct_UPackage__Script_TestLib, TEXT("/Script/TestLib"), Z_Registration_Info_UPackage__Script_TestLib, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x44DBC858, 0xEBEA3CAE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
