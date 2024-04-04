// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkXR_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LiveLinkXR;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LiveLinkXR()
	{
		if (!Z_Registration_Info_UPackage__Script_LiveLinkXR.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LiveLinkXR",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5214DCF5,
				0x06BD0311,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LiveLinkXR.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LiveLinkXR.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LiveLinkXR(Z_Construct_UPackage__Script_LiveLinkXR, TEXT("/Script/LiveLinkXR"), Z_Registration_Info_UPackage__Script_LiveLinkXR, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5214DCF5, 0x06BD0311));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
