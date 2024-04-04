// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InputEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InputEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_InputEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InputEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x621FD825,
				0x9577F3B5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InputEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InputEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InputEditor(Z_Construct_UPackage__Script_InputEditor, TEXT("/Script/InputEditor"), Z_Registration_Info_UPackage__Script_InputEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x621FD825, 0x9577F3B5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
