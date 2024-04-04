// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/ControlRigSnapSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSnapSettings() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigSnapSettings();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigSnapSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENETOOLS_API UEnum* Z_Construct_UEnum_MovieSceneTools_EBakingKeySettings();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigSnapSettings::StaticRegisterNativesUControlRigSnapSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigSnapSettings);
	UClass* Z_Construct_UClass_UControlRigSnapSettings_NoRegister()
	{
		return UControlRigSnapSettings::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigSnapSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepOffset_MetaData[];
#endif
		static void NewProp_bKeepOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPosition_MetaData[];
#endif
		static void NewProp_bSnapPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapRotation_MetaData[];
#endif
		static void NewProp_bSnapRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapScale_MetaData[];
#endif
		static void NewProp_bSnapScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BakingKeySettings_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingKeySettings_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BakingKeySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameIncrement_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIncrement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReduceKeys_MetaData[];
#endif
		static void NewProp_bReduceKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReduceKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigSnapSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/ControlRigSnapSettings.h" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset_MetaData[] = {
		{ "Category", "Snap Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
		{ "ToolTip", "When snapping keep offset, if false snap completely" },
	};
#endif
	void Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset_SetBit(void* Obj)
	{
		((UControlRigSnapSettings*)Obj)->bKeepOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset = { "bKeepOffset", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigSnapSettings), &Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset_MetaData), Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition_MetaData[] = {
		{ "Category", "Snap Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
		{ "ToolTip", "When snapping, also snap position" },
	};
#endif
	void Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition_SetBit(void* Obj)
	{
		((UControlRigSnapSettings*)Obj)->bSnapPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition = { "bSnapPosition", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigSnapSettings), &Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition_MetaData), Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation_MetaData[] = {
		{ "Category", "Snap Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
		{ "ToolTip", "When snapping, also snap rotation" },
	};
#endif
	void Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation_SetBit(void* Obj)
	{
		((UControlRigSnapSettings*)Obj)->bSnapRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation = { "bSnapRotation", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigSnapSettings), &Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation_MetaData), Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale_MetaData[] = {
		{ "Category", "Snap Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
		{ "ToolTip", "When snapping, also snap scale" },
	};
#endif
	void Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale_SetBit(void* Obj)
	{
		((UControlRigSnapSettings*)Obj)->bSnapScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale = { "bSnapScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigSnapSettings), &Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale_MetaData), Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_BakingKeySettings_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_BakingKeySettings_MetaData[] = {
		{ "Category", "Bake" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_BakingKeySettings = { "BakingKeySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigSnapSettings, BakingKeySettings), Z_Construct_UEnum_MovieSceneTools_EBakingKeySettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_BakingKeySettings_MetaData), Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_BakingKeySettings_MetaData) }; // 3685760832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_FrameIncrement_MetaData[] = {
		{ "Category", "Bake" },
		{ "ClampMin", "1" },
		{ "EditCondition", "BakingKeySettings == EBakingKeySettings::AllFrames" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_FrameIncrement = { "FrameIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigSnapSettings, FrameIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_FrameIncrement_MetaData), Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_FrameIncrement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bReduceKeys_MetaData[] = {
		{ "Category", "Bake" },
		{ "EditCondition", "BakingKeySettings == EBakingKeySettings::AllFrames" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
	};
#endif
	void Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bReduceKeys_SetBit(void* Obj)
	{
		((UControlRigSnapSettings*)Obj)->bReduceKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bReduceKeys = { "bReduceKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UControlRigSnapSettings), &Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bReduceKeys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bReduceKeys_MetaData), Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bReduceKeys_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Bake" },
		{ "EditCondition", "BakingKeySettings == EBakingKeySettings::AllFrames || bReduceKeys" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControlRigSnapSettings, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_Tolerance_MetaData), Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_Tolerance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigSnapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_BakingKeySettings_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_BakingKeySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_FrameIncrement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bReduceKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_Tolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigSnapSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigSnapSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigSnapSettings_Statics::ClassParams = {
		&UControlRigSnapSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigSnapSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UControlRigSnapSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UControlRigSnapSettings()
	{
		if (!Z_Registration_Info_UClass_UControlRigSnapSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigSnapSettings.OuterSingleton, Z_Construct_UClass_UControlRigSnapSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigSnapSettings.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigSnapSettings>()
	{
		return UControlRigSnapSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigSnapSettings);
	UControlRigSnapSettings::~UControlRigSnapSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigSnapSettings, UControlRigSnapSettings::StaticClass, TEXT("UControlRigSnapSettings"), &Z_Registration_Info_UClass_UControlRigSnapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigSnapSettings), 271816150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h_4168954367(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_ControlRigSnapSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
