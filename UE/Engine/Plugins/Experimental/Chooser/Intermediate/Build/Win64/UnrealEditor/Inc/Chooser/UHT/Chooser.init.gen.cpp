// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChooser_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Chooser;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Chooser()
	{
		if (!Z_Registration_Info_UPackage__Script_Chooser.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Chooser",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3A4EB2E8,
				0xC6299A70,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Chooser.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Chooser.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Chooser(Z_Construct_UPackage__Script_Chooser, TEXT("/Script/Chooser"), Z_Registration_Info_UPackage__Script_Chooser, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3A4EB2E8, 0xC6299A70));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
