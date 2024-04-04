// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationData_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AnimationData;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AnimationData()
	{
		if (!Z_Registration_Info_UPackage__Script_AnimationData.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AnimationData",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0x2CCE96FE,
				0x1233A183,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AnimationData.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AnimationData.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AnimationData(Z_Construct_UPackage__Script_AnimationData, TEXT("/Script/AnimationData"), Z_Registration_Info_UPackage__Script_AnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2CCE96FE, 0x1233A183));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
