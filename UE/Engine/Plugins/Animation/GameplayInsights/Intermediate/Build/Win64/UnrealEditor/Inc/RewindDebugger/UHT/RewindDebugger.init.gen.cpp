// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewindDebugger_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RewindDebugger;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RewindDebugger()
	{
		if (!Z_Registration_Info_UPackage__Script_RewindDebugger.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RewindDebugger",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xF69A370D,
				0x7466051D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RewindDebugger.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RewindDebugger.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RewindDebugger(Z_Construct_UPackage__Script_RewindDebugger, TEXT("/Script/RewindDebugger"), Z_Registration_Info_UPackage__Script_RewindDebugger, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF69A370D, 0x7466051D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
