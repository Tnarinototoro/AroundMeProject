// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LevelSequenceEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LevelSequenceEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_LevelSequenceEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LevelSequenceEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xF04A4C18,
				0xE6A7CE91,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LevelSequenceEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LevelSequenceEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LevelSequenceEditor(Z_Construct_UPackage__Script_LevelSequenceEditor, TEXT("/Script/LevelSequenceEditor"), Z_Registration_Info_UPackage__Script_LevelSequenceEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF04A4C18, 0xE6A7CE91));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
