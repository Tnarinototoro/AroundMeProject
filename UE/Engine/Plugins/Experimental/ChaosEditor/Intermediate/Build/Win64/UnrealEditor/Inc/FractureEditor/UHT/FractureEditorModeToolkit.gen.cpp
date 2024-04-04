// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FractureEditorModeToolkit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureEditorModeToolkit() {}
// Cross Module References
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutlinerColumnMode;
	static UEnum* EOutlinerColumnMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOutlinerColumnMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOutlinerColumnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EOutlinerColumnMode"));
		}
		return Z_Registration_Info_UEnum_EOutlinerColumnMode.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EOutlinerColumnMode>()
	{
		return EOutlinerColumnMode_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enumerators[] = {
		{ "EOutlinerColumnMode::State", (int64)EOutlinerColumnMode::State },
		{ "EOutlinerColumnMode::Damage", (int64)EOutlinerColumnMode::Damage },
		{ "EOutlinerColumnMode::Removal", (int64)EOutlinerColumnMode::Removal },
		{ "EOutlinerColumnMode::Collision", (int64)EOutlinerColumnMode::Collision },
		{ "EOutlinerColumnMode::Size", (int64)EOutlinerColumnMode::Size },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Collision.DisplayName", "Collision" },
		{ "Collision.Name", "EOutlinerColumnMode::Collision" },
		{ "Damage.DisplayName", "Damage" },
		{ "Damage.Name", "EOutlinerColumnMode::Damage" },
		{ "ModuleRelativePath", "Public/FractureEditorModeToolkit.h" },
		{ "Removal.DisplayName", "Removal" },
		{ "Removal.Name", "EOutlinerColumnMode::Removal" },
		{ "Size.DisplayName", "Size" },
		{ "Size.Name", "EOutlinerColumnMode::Size" },
		{ "State.DisplayName", "State" },
		{ "State.Name", "EOutlinerColumnMode::State" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EOutlinerColumnMode",
		"EOutlinerColumnMode",
		Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode()
	{
		if (!Z_Registration_Info_UEnum_EOutlinerColumnMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutlinerColumnMode.InnerSingleton, Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOutlinerColumnMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorModeToolkit_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorModeToolkit_h_Statics::EnumInfo[] = {
		{ EOutlinerColumnMode_StaticEnum, TEXT("EOutlinerColumnMode"), &Z_Registration_Info_UEnum_EOutlinerColumnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2991787148U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorModeToolkit_h_809245551(TEXT("/Script/FractureEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorModeToolkit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorModeToolkit_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
