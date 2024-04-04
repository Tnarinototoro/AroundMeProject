// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FractureEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FractureEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_FractureEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FractureEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xC1360475,
				0x8C439448,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FractureEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FractureEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FractureEditor(Z_Construct_UPackage__Script_FractureEditor, TEXT("/Script/FractureEditor"), Z_Registration_Info_UPackage__Script_FractureEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC1360475, 0x8C439448));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
