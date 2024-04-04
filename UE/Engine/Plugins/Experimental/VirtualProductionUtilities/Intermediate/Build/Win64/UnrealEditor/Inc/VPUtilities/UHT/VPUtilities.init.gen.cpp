// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPUtilities_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VPUtilities;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VPUtilities()
	{
		if (!Z_Registration_Info_UPackage__Script_VPUtilities.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VPUtilities",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x212C54E3,
				0x7EDA895D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VPUtilities.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VPUtilities.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VPUtilities(Z_Construct_UPackage__Script_VPUtilities, TEXT("/Script/VPUtilities"), Z_Registration_Info_UPackage__Script_VPUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x212C54E3, 0x7EDA895D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
