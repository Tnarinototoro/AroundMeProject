// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshPaintModeHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshPaintModeHelpers() {}
// Cross Module References
	MESHPAINTEDITORMODE_API UEnum* Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode();
	UPackage* Z_Construct_UPackage__Script_MeshPaintEditorMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshPaintActiveMode;
	static UEnum* EMeshPaintActiveMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintActiveMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshPaintActiveMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode, (UObject*)Z_Construct_UPackage__Script_MeshPaintEditorMode(), TEXT("EMeshPaintActiveMode"));
		}
		return Z_Registration_Info_UEnum_EMeshPaintActiveMode.OuterSingleton;
	}
	template<> MESHPAINTEDITORMODE_API UEnum* StaticEnum<EMeshPaintActiveMode>()
	{
		return EMeshPaintActiveMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode_Statics::Enumerators[] = {
		{ "EMeshPaintActiveMode::Color", (int64)EMeshPaintActiveMode::Color },
		{ "EMeshPaintActiveMode::Weights", (int64)EMeshPaintActiveMode::Weights },
		{ "EMeshPaintActiveMode::Texture", (int64)EMeshPaintActiveMode::Texture },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode_Statics::Enum_MetaDataParams[] = {
		{ "Color.DisplayName", "Color" },
		{ "Color.Name", "EMeshPaintActiveMode::Color" },
		{ "ModuleRelativePath", "Public/MeshPaintModeHelpers.h" },
		{ "Texture.DisplayName", "Texture" },
		{ "Texture.Name", "EMeshPaintActiveMode::Texture" },
		{ "Weights.DisplayName", "Weights" },
		{ "Weights.Name", "EMeshPaintActiveMode::Weights" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshPaintEditorMode,
		nullptr,
		"EMeshPaintActiveMode",
		"EMeshPaintActiveMode",
		Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode()
	{
		if (!Z_Registration_Info_UEnum_EMeshPaintActiveMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshPaintActiveMode.InnerSingleton, Z_Construct_UEnum_MeshPaintEditorMode_EMeshPaintActiveMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshPaintActiveMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Public_MeshPaintModeHelpers_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Public_MeshPaintModeHelpers_h_Statics::EnumInfo[] = {
		{ EMeshPaintActiveMode_StaticEnum, TEXT("EMeshPaintActiveMode"), &Z_Registration_Info_UEnum_EMeshPaintActiveMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1918666398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Public_MeshPaintModeHelpers_h_1305624350(TEXT("/Script/MeshPaintEditorMode"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Public_MeshPaintModeHelpers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintEditorMode_Public_MeshPaintModeHelpers_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
