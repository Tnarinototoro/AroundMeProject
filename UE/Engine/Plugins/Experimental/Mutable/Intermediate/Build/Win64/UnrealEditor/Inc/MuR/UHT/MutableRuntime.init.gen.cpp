// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMutableRuntime_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MutableRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MutableRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_MutableRuntime.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MutableRuntime",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF9A8DFB7,
				0x973EDCEB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MutableRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MutableRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MutableRuntime(Z_Construct_UPackage__Script_MutableRuntime, TEXT("/Script/MutableRuntime"), Z_Registration_Info_UPackage__Script_MutableRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF9A8DFB7, 0x973EDCEB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
