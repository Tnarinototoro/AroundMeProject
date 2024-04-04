// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LensComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "CameraCalibrationTypes.h"
#include "CineCameraSettings.h"
#include "LensDistortionModelHandlerBase.h"
#include "LensFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensComponent() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensComponent();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensComponent_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensFile_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensModel_NoRegister();
	CAMERACALIBRATIONCORE_API UEnum* Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource();
	CAMERACALIBRATIONCORE_API UEnum* Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource();
	CAMERACALIBRATIONCORE_API UEnum* Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionHandlerPicker();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionState();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileEvaluationInputs();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensFilePicker();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFIZEvaluationMode;
	static UEnum* EFIZEvaluationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFIZEvaluationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFIZEvaluationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("EFIZEvaluationMode"));
		}
		return Z_Registration_Info_UEnum_EFIZEvaluationMode.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<EFIZEvaluationMode>()
	{
		return EFIZEvaluationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode_Statics::Enumerators[] = {
		{ "EFIZEvaluationMode::UseLiveLink", (int64)EFIZEvaluationMode::UseLiveLink },
		{ "EFIZEvaluationMode::UseCameraSettings", (int64)EFIZEvaluationMode::UseCameraSettings },
		{ "EFIZEvaluationMode::UseRecordedValues", (int64)EFIZEvaluationMode::UseRecordedValues },
		{ "EFIZEvaluationMode::DoNotEvaluate", (int64)EFIZEvaluationMode::DoNotEvaluate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Mode that controls where FIZ inputs are sourced from and how they are used to evaluate the LensFile */" },
		{ "DoNotEvaluate.Comment", "/** Do not evaluate the Lens File */" },
		{ "DoNotEvaluate.Name", "EFIZEvaluationMode::DoNotEvaluate" },
		{ "DoNotEvaluate.ToolTip", "Do not evaluate the Lens File" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Mode that controls where FIZ inputs are sourced from and how they are used to evaluate the LensFile" },
		{ "UseCameraSettings.Comment", "/** Evaluate the Lens File using the current FIZ settings of the target camera */" },
		{ "UseCameraSettings.Name", "EFIZEvaluationMode::UseCameraSettings" },
		{ "UseCameraSettings.ToolTip", "Evaluate the Lens File using the current FIZ settings of the target camera" },
		{ "UseLiveLink.Comment", "/** Evaluate the Lens File with the latest FIZ data received from LiveLink */" },
		{ "UseLiveLink.Name", "EFIZEvaluationMode::UseLiveLink" },
		{ "UseLiveLink.ToolTip", "Evaluate the Lens File with the latest FIZ data received from LiveLink" },
		{ "UseRecordedValues.Comment", "/** Evaluate the Lens File using values recorded in a level sequence (set automatically when the sequence is opened) */" },
		{ "UseRecordedValues.Name", "EFIZEvaluationMode::UseRecordedValues" },
		{ "UseRecordedValues.ToolTip", "Evaluate the Lens File using values recorded in a level sequence (set automatically when the sequence is opened)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		"EFIZEvaluationMode",
		"EFIZEvaluationMode",
		Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode()
	{
		if (!Z_Registration_Info_UEnum_EFIZEvaluationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFIZEvaluationMode.InnerSingleton, Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFIZEvaluationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFilmbackOverrideSource;
	static UEnum* EFilmbackOverrideSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFilmbackOverrideSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFilmbackOverrideSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("EFilmbackOverrideSource"));
		}
		return Z_Registration_Info_UEnum_EFilmbackOverrideSource.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<EFilmbackOverrideSource>()
	{
		return EFilmbackOverrideSource_StaticEnum();
	}
	struct Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource_Statics::Enumerators[] = {
		{ "EFilmbackOverrideSource::LensFile", (int64)EFilmbackOverrideSource::LensFile },
		{ "EFilmbackOverrideSource::CroppedFilmbackSetting", (int64)EFilmbackOverrideSource::CroppedFilmbackSetting },
		{ "EFilmbackOverrideSource::DoNotOverride", (int64)EFilmbackOverrideSource::DoNotOverride },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Controls whether this component can override the camera's filmback, and if so, which override to use */" },
		{ "CroppedFilmbackSetting.Comment", "/** Override the camera's filmback using the CroppedFilmback setting below */" },
		{ "CroppedFilmbackSetting.Name", "EFilmbackOverrideSource::CroppedFilmbackSetting" },
		{ "CroppedFilmbackSetting.ToolTip", "Override the camera's filmback using the CroppedFilmback setting below" },
		{ "DoNotOverride.Comment", "/** Do not override the camera's filmback */" },
		{ "DoNotOverride.Name", "EFilmbackOverrideSource::DoNotOverride" },
		{ "DoNotOverride.ToolTip", "Do not override the camera's filmback" },
		{ "LensFile.Comment", "/** Override the camera's filmback using the sensor dimensions recorded in the LensInfo of the LensFile */" },
		{ "LensFile.Name", "EFilmbackOverrideSource::LensFile" },
		{ "LensFile.ToolTip", "Override the camera's filmback using the sensor dimensions recorded in the LensInfo of the LensFile" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Controls whether this component can override the camera's filmback, and if so, which override to use" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		"EFilmbackOverrideSource",
		"EFilmbackOverrideSource",
		Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource()
	{
		if (!Z_Registration_Info_UEnum_EFilmbackOverrideSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFilmbackOverrideSource.InnerSingleton, Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFilmbackOverrideSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDistortionSource;
	static UEnum* EDistortionSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDistortionSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDistortionSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("EDistortionSource"));
		}
		return Z_Registration_Info_UEnum_EDistortionSource.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<EDistortionSource>()
	{
		return EDistortionSource_StaticEnum();
	}
	struct Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource_Statics::Enumerators[] = {
		{ "EDistortionSource::LensFile", (int64)EDistortionSource::LensFile },
		{ "EDistortionSource::LiveLinkLensSubject", (int64)EDistortionSource::LiveLinkLensSubject },
		{ "EDistortionSource::Manual", (int64)EDistortionSource::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Specifies from where the distortion state information comes */" },
		{ "LensFile.Comment", "/** Distortion state is evaluated using the LensFile */" },
		{ "LensFile.Name", "EDistortionSource::LensFile" },
		{ "LensFile.ToolTip", "Distortion state is evaluated using the LensFile" },
		{ "LiveLinkLensSubject.Comment", "/** Distortion state is inputted directly from a LiveLink subject */" },
		{ "LiveLinkLensSubject.Name", "EDistortionSource::LiveLinkLensSubject" },
		{ "LiveLinkLensSubject.ToolTip", "Distortion state is inputted directly from a LiveLink subject" },
		{ "Manual.Comment", "/** Distortion state is set manually by the user using the Distortion State setting below */" },
		{ "Manual.Name", "EDistortionSource::Manual" },
		{ "Manual.ToolTip", "Distortion state is set manually by the user using the Distortion State setting below" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Specifies from where the distortion state information comes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		"EDistortionSource",
		"EDistortionSource",
		Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource()
	{
		if (!Z_Registration_Info_UEnum_EDistortionSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDistortionSource.InnerSingleton, Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDistortionSource.InnerSingleton;
	}
	DEFINE_FUNCTION(ULensComponent::execApplyNodalOffset)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToOffset);
		P_GET_UBOOL(Z_Param_bUseManualInputs);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ManualFocusInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ManualZoomInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyNodalOffset(Z_Param_ComponentToOffset,Z_Param_bUseManualInputs,Z_Param_ManualFocusInput,Z_Param_ManualZoomInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execWasDistortionEvaluated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasDistortionEvaluated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execWasNodalOffsetAppliedThisTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasNodalOffsetAppliedThisTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execGetLensFileEvaluationInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLensFileEvaluationInputs*)Z_Param__Result=P_THIS->GetLensFileEvaluationInputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execGetOriginalFocalLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOriginalFocalLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execClearDistortionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearDistortionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execSetDistortionState)
	{
		P_GET_STRUCT(FLensDistortionState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDistortionState(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execGetDistortionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLensDistortionState*)Z_Param__Result=P_THIS->GetDistortionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execSetLensModel)
	{
		P_GET_OBJECT(UClass,Z_Param_Model);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLensModel(Z_Param_Model);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execGetLensModel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ULensModel> *)Z_Param__Result=P_THIS->GetLensModel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execSetApplyDistortion)
	{
		P_GET_UBOOL(Z_Param_bApply);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetApplyDistortion(Z_Param_bApply);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execShouldApplyDistortion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldApplyDistortion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execSetDistortionSource)
	{
		P_GET_ENUM(EDistortionSource,Z_Param_Source);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDistortionSource(EDistortionSource(Z_Param_Source));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execGetDistortionSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDistortionSource*)Z_Param__Result=P_THIS->GetDistortionSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execSetApplyNodalOffsetOnTick)
	{
		P_GET_UBOOL(Z_Param_bApplyNodalOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetApplyNodalOffsetOnTick(Z_Param_bApplyNodalOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execShouldApplyNodalOffsetOnTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldApplyNodalOffsetOnTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execSetCroppedFilmback)
	{
		P_GET_STRUCT(FCameraFilmbackSettings,Z_Param_Filmback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCroppedFilmback(Z_Param_Filmback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execGetCroppedFilmback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCameraFilmbackSettings*)Z_Param__Result=P_THIS->GetCroppedFilmback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execSetFilmbackOverrideSetting)
	{
		P_GET_ENUM(EFilmbackOverrideSource,Z_Param_Setting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilmbackOverrideSetting(EFilmbackOverrideSource(Z_Param_Setting));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execGetFilmbackOverrideSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFilmbackOverrideSource*)Z_Param__Result=P_THIS->GetFilmbackOverrideSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execSetOverscanMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverscanMultiplier(Z_Param_Multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execGetOverscanMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOverscanMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execSetFIZEvaluationMode)
	{
		P_GET_ENUM(EFIZEvaluationMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFIZEvaluationMode(EFIZEvaluationMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execGetFIZEvaluationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFIZEvaluationMode*)Z_Param__Result=P_THIS->GetFIZEvaluationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execSetLensFile)
	{
		P_GET_OBJECT(ULensFile,Z_Param_LensFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLensFile(Z_Param_LensFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execSetLensFilePicker)
	{
		P_GET_STRUCT(FLensFilePicker,Z_Param_LensFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLensFilePicker(Z_Param_LensFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execGetLensFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULensFile**)Z_Param__Result=P_THIS->GetLensFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensComponent::execGetLensFilePicker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLensFilePicker*)Z_Param__Result=P_THIS->GetLensFilePicker();
		P_NATIVE_END;
	}
	void ULensComponent::GetbApplyDistortion_WrapperImpl(const void* Object, void* OutValue)
	{
		const ULensComponent* Obj = (const ULensComponent*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->ShouldApplyDistortion();
	}
	void ULensComponent::SetbApplyDistortion_WrapperImpl(void* Object, const void* InValue)
	{
		ULensComponent* Obj = (ULensComponent*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetApplyDistortion(Value);
	}
	void ULensComponent::StaticRegisterNativesULensComponent()
	{
		UClass* Class = ULensComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyNodalOffset", &ULensComponent::execApplyNodalOffset },
			{ "ClearDistortionState", &ULensComponent::execClearDistortionState },
			{ "GetCroppedFilmback", &ULensComponent::execGetCroppedFilmback },
			{ "GetDistortionSource", &ULensComponent::execGetDistortionSource },
			{ "GetDistortionState", &ULensComponent::execGetDistortionState },
			{ "GetFilmbackOverrideSetting", &ULensComponent::execGetFilmbackOverrideSetting },
			{ "GetFIZEvaluationMode", &ULensComponent::execGetFIZEvaluationMode },
			{ "GetLensFile", &ULensComponent::execGetLensFile },
			{ "GetLensFileEvaluationInputs", &ULensComponent::execGetLensFileEvaluationInputs },
			{ "GetLensFilePicker", &ULensComponent::execGetLensFilePicker },
			{ "GetLensModel", &ULensComponent::execGetLensModel },
			{ "GetOriginalFocalLength", &ULensComponent::execGetOriginalFocalLength },
			{ "GetOverscanMultiplier", &ULensComponent::execGetOverscanMultiplier },
			{ "SetApplyDistortion", &ULensComponent::execSetApplyDistortion },
			{ "SetApplyNodalOffsetOnTick", &ULensComponent::execSetApplyNodalOffsetOnTick },
			{ "SetCroppedFilmback", &ULensComponent::execSetCroppedFilmback },
			{ "SetDistortionSource", &ULensComponent::execSetDistortionSource },
			{ "SetDistortionState", &ULensComponent::execSetDistortionState },
			{ "SetFilmbackOverrideSetting", &ULensComponent::execSetFilmbackOverrideSetting },
			{ "SetFIZEvaluationMode", &ULensComponent::execSetFIZEvaluationMode },
			{ "SetLensFile", &ULensComponent::execSetLensFile },
			{ "SetLensFilePicker", &ULensComponent::execSetLensFilePicker },
			{ "SetLensModel", &ULensComponent::execSetLensModel },
			{ "SetOverscanMultiplier", &ULensComponent::execSetOverscanMultiplier },
			{ "ShouldApplyDistortion", &ULensComponent::execShouldApplyDistortion },
			{ "ShouldApplyNodalOffsetOnTick", &ULensComponent::execShouldApplyNodalOffsetOnTick },
			{ "WasDistortionEvaluated", &ULensComponent::execWasDistortionEvaluated },
			{ "WasNodalOffsetAppliedThisTick", &ULensComponent::execWasNodalOffsetAppliedThisTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics
	{
		struct LensComponent_eventApplyNodalOffset_Parms
		{
			USceneComponent* ComponentToOffset;
			bool bUseManualInputs;
			float ManualFocusInput;
			float ManualZoomInput;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentToOffset;
		static void NewProp_bUseManualInputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseManualInputs;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualFocusInput;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualZoomInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_ComponentToOffset_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_ComponentToOffset = { "ComponentToOffset", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventApplyNodalOffset_Parms, ComponentToOffset), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_ComponentToOffset_MetaData), Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_ComponentToOffset_MetaData) };
	void Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_bUseManualInputs_SetBit(void* Obj)
	{
		((LensComponent_eventApplyNodalOffset_Parms*)Obj)->bUseManualInputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_bUseManualInputs = { "bUseManualInputs", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LensComponent_eventApplyNodalOffset_Parms), &Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_bUseManualInputs_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_ManualFocusInput = { "ManualFocusInput", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventApplyNodalOffset_Parms, ManualFocusInput), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_ManualZoomInput = { "ManualZoomInput", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventApplyNodalOffset_Parms, ManualZoomInput), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_ComponentToOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_bUseManualInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_ManualFocusInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::NewProp_ManualZoomInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Lens Component" },
		{ "Comment", "/** \n\x09 * Manually apply nodal offset to the specified component. \n\x09 * If bUseManualInputs is true, the input Focus and Zoom values will be used to evaluate the LensFile .\n\x09 * If bUseManualInputs is false, the LensFile be will evaluated based on the Lens Component's evaluation mode.\n\x09 */" },
		{ "CPP_Default_bUseManualInputs", "false" },
		{ "CPP_Default_ManualFocusInput", "0.000000" },
		{ "CPP_Default_ManualZoomInput", "0.000000" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Manually apply nodal offset to the specified component.\nIf bUseManualInputs is true, the input Focus and Zoom values will be used to evaluate the LensFile .\nIf bUseManualInputs is false, the LensFile be will evaluated based on the Lens Component's evaluation mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "ApplyNodalOffset", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::LensComponent_eventApplyNodalOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::LensComponent_eventApplyNodalOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_ApplyNodalOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_ApplyNodalOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_ClearDistortionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_ClearDistortionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Reset the distortion state to defaults to represent \"no distortion\" */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Reset the distortion state to defaults to represent \"no distortion\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_ClearDistortionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "ClearDistortionState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_ClearDistortionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_ClearDistortionState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULensComponent_ClearDistortionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_ClearDistortionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics
	{
		struct LensComponent_eventGetCroppedFilmback_Parms
		{
			FCameraFilmbackSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventGetCroppedFilmback_Parms, ReturnValue), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(0, nullptr) }; // 1465417748
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Get the cropped filmback (only relevant if the filmback override setting is set to use the CroppedFilmback */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Get the cropped filmback (only relevant if the filmback override setting is set to use the CroppedFilmback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "GetCroppedFilmback", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::LensComponent_eventGetCroppedFilmback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::LensComponent_eventGetCroppedFilmback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_GetCroppedFilmback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_GetCroppedFilmback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics
	{
		struct LensComponent_eventGetDistortionSource_Parms
		{
			EDistortionSource ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventGetDistortionSource_Parms, ReturnValue), Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource, METADATA_PARAMS(0, nullptr) }; // 1940332692
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Get the distortion source setting */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Get the distortion source setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "GetDistortionSource", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::LensComponent_eventGetDistortionSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::LensComponent_eventGetDistortionSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_GetDistortionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_GetDistortionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics
	{
		struct LensComponent_eventGetDistortionState_Parms
		{
			FLensDistortionState ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventGetDistortionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FLensDistortionState, METADATA_PARAMS(0, nullptr) }; // 4023755847
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Get the current distortion state */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Get the current distortion state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "GetDistortionState", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::LensComponent_eventGetDistortionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::LensComponent_eventGetDistortionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_GetDistortionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_GetDistortionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics
	{
		struct LensComponent_eventGetFilmbackOverrideSetting_Parms
		{
			EFilmbackOverrideSource ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventGetFilmbackOverrideSetting_Parms, ReturnValue), Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource, METADATA_PARAMS(0, nullptr) }; // 3504317237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Get the filmback override setting */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Get the filmback override setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "GetFilmbackOverrideSetting", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::LensComponent_eventGetFilmbackOverrideSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::LensComponent_eventGetFilmbackOverrideSetting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics
	{
		struct LensComponent_eventGetFIZEvaluationMode_Parms
		{
			EFIZEvaluationMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventGetFIZEvaluationMode_Parms, ReturnValue), Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode, METADATA_PARAMS(0, nullptr) }; // 2148220705
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Get the evaluation mode used to evaluate the LensFile */" },
		{ "DisplayName", "Get FIZ Evaluation Mode" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Get the evaluation mode used to evaluate the LensFile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "GetFIZEvaluationMode", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::LensComponent_eventGetFIZEvaluationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::LensComponent_eventGetFIZEvaluationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_GetLensFile_Statics
	{
		struct LensComponent_eventGetLensFile_Parms
		{
			ULensFile* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventGetLensFile_Parms, ReturnValue), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Get the LensFile used by this component */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Get the LensFile used by this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "GetLensFile", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::LensComponent_eventGetLensFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::LensComponent_eventGetLensFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_GetLensFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_GetLensFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics
	{
		struct LensComponent_eventGetLensFileEvaluationInputs_Parms
		{
			FLensFileEvaluationInputs ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventGetLensFileEvaluationInputs_Parms, ReturnValue), Z_Construct_UScriptStruct_FLensFileEvaluationInputs, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::NewProp_ReturnValue_MetaData) }; // 1183582558
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Get the data used by this component to evaluate the LensFile */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Get the data used by this component to evaluate the LensFile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "GetLensFileEvaluationInputs", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::LensComponent_eventGetLensFileEvaluationInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::LensComponent_eventGetLensFileEvaluationInputs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics
	{
		struct LensComponent_eventGetLensFilePicker_Parms
		{
			FLensFilePicker ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventGetLensFilePicker_Parms, ReturnValue), Z_Construct_UScriptStruct_FLensFilePicker, METADATA_PARAMS(0, nullptr) }; // 1373251661
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Get the LensFile picker used by this component */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Get the LensFile picker used by this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "GetLensFilePicker", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::LensComponent_eventGetLensFilePicker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::LensComponent_eventGetLensFilePicker_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_GetLensFilePicker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_GetLensFilePicker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_GetLensModel_Statics
	{
		struct LensComponent_eventGetLensModel_Parms
		{
			TSubclassOf<ULensModel>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventGetLensModel_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ULensModel_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Get the current lens model */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Get the current lens model" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "GetLensModel", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::LensComponent_eventGetLensModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::LensComponent_eventGetLensModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_GetLensModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_GetLensModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics
	{
		struct LensComponent_eventGetOriginalFocalLength_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventGetOriginalFocalLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Get the original (not adjusted for overscan) focal length of the camera */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Get the original (not adjusted for overscan) focal length of the camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "GetOriginalFocalLength", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::LensComponent_eventGetOriginalFocalLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::LensComponent_eventGetOriginalFocalLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics
	{
		struct LensComponent_eventGetOverscanMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventGetOverscanMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Get the evaluation mode used to evaluate the LensFile */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Get the evaluation mode used to evaluate the LensFile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "GetOverscanMultiplier", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::LensComponent_eventGetOverscanMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::LensComponent_eventGetOverscanMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics
	{
		struct LensComponent_eventSetApplyDistortion_Parms
		{
			bool bApply;
		};
		static void NewProp_bApply_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApply;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::NewProp_bApply_SetBit(void* Obj)
	{
		((LensComponent_eventSetApplyDistortion_Parms*)Obj)->bApply = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::NewProp_bApply = { "bApply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LensComponent_eventSetApplyDistortion_Parms), &Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::NewProp_bApply_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::NewProp_bApply,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Set whether distortion should be applied to the target camera */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Set whether distortion should be applied to the target camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "SetApplyDistortion", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::LensComponent_eventSetApplyDistortion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::LensComponent_eventSetApplyDistortion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_SetApplyDistortion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_SetApplyDistortion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics
	{
		struct LensComponent_eventSetApplyNodalOffsetOnTick_Parms
		{
			bool bApplyNodalOffset;
		};
		static void NewProp_bApplyNodalOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyNodalOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::NewProp_bApplyNodalOffset_SetBit(void* Obj)
	{
		((LensComponent_eventSetApplyNodalOffsetOnTick_Parms*)Obj)->bApplyNodalOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::NewProp_bApplyNodalOffset = { "bApplyNodalOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LensComponent_eventSetApplyNodalOffsetOnTick_Parms), &Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::NewProp_bApplyNodalOffset_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::NewProp_bApplyNodalOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Set whether nodal offset should be automatically applied during this component's tick */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Set whether nodal offset should be automatically applied during this component's tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "SetApplyNodalOffsetOnTick", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::LensComponent_eventSetApplyNodalOffsetOnTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::LensComponent_eventSetApplyNodalOffsetOnTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics
	{
		struct LensComponent_eventSetCroppedFilmback_Parms
		{
			FCameraFilmbackSettings Filmback;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filmback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::NewProp_Filmback = { "Filmback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventSetCroppedFilmback_Parms, Filmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(0, nullptr) }; // 1465417748
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::NewProp_Filmback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Set the cropped filmback (only relevant if the filmback override setting is set to use the CroppedFilmback */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Set the cropped filmback (only relevant if the filmback override setting is set to use the CroppedFilmback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "SetCroppedFilmback", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::LensComponent_eventSetCroppedFilmback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::LensComponent_eventSetCroppedFilmback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_SetCroppedFilmback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_SetCroppedFilmback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics
	{
		struct LensComponent_eventSetDistortionSource_Parms
		{
			EDistortionSource Source;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventSetDistortionSource_Parms, Source), Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource, METADATA_PARAMS(0, nullptr) }; // 1940332692
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::NewProp_Source_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Set the distortion source setting */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Set the distortion source setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "SetDistortionSource", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::LensComponent_eventSetDistortionSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::LensComponent_eventSetDistortionSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_SetDistortionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_SetDistortionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics
	{
		struct LensComponent_eventSetDistortionState_Parms
		{
			FLensDistortionState State;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventSetDistortionState_Parms, State), Z_Construct_UScriptStruct_FLensDistortionState, METADATA_PARAMS(0, nullptr) }; // 4023755847
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Set the current distortion state */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Set the current distortion state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "SetDistortionState", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::LensComponent_eventSetDistortionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::LensComponent_eventSetDistortionState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_SetDistortionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_SetDistortionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics
	{
		struct LensComponent_eventSetFilmbackOverrideSetting_Parms
		{
			EFilmbackOverrideSource Setting;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Setting_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Setting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::NewProp_Setting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventSetFilmbackOverrideSetting_Parms, Setting), Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource, METADATA_PARAMS(0, nullptr) }; // 3504317237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::NewProp_Setting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::NewProp_Setting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Set the filmback override setting */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Set the filmback override setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "SetFilmbackOverrideSetting", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::LensComponent_eventSetFilmbackOverrideSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::LensComponent_eventSetFilmbackOverrideSetting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics
	{
		struct LensComponent_eventSetFIZEvaluationMode_Parms
		{
			EFIZEvaluationMode Mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventSetFIZEvaluationMode_Parms, Mode), Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode, METADATA_PARAMS(0, nullptr) }; // 2148220705
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Set the evaluation mode used to evaluate the LensFile */" },
		{ "DisplayName", "Set FIZ Evaluation Mode" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Set the evaluation mode used to evaluate the LensFile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "SetFIZEvaluationMode", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::LensComponent_eventSetFIZEvaluationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::LensComponent_eventSetFIZEvaluationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_SetLensFile_Statics
	{
		struct LensComponent_eventSetLensFile_Parms
		{
			ULensFile* LensFile;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LensFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::NewProp_LensFile = { "LensFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventSetLensFile_Parms, LensFile), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::NewProp_LensFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Set the LensFile used by this component */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Set the LensFile used by this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "SetLensFile", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::LensComponent_eventSetLensFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::LensComponent_eventSetLensFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_SetLensFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_SetLensFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics
	{
		struct LensComponent_eventSetLensFilePicker_Parms
		{
			FLensFilePicker LensFile;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::NewProp_LensFile = { "LensFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventSetLensFilePicker_Parms, LensFile), Z_Construct_UScriptStruct_FLensFilePicker, METADATA_PARAMS(0, nullptr) }; // 1373251661
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::NewProp_LensFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Set the LensFile picker used by this component */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Set the LensFile picker used by this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "SetLensFilePicker", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::LensComponent_eventSetLensFilePicker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::LensComponent_eventSetLensFilePicker_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_SetLensFilePicker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_SetLensFilePicker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_SetLensModel_Statics
	{
		struct LensComponent_eventSetLensModel_Parms
		{
			TSubclassOf<ULensModel>  Model;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Model;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventSetLensModel_Parms, Model), Z_Construct_UClass_UClass, Z_Construct_UClass_ULensModel_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::NewProp_Model,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Set the current lens model */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Set the current lens model" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "SetLensModel", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::LensComponent_eventSetLensModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::LensComponent_eventSetLensModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_SetLensModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_SetLensModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics
	{
		struct LensComponent_eventSetOverscanMultiplier_Parms
		{
			float Multiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensComponent_eventSetOverscanMultiplier_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::NewProp_Multiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Set the LensFile used by this component */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Set the LensFile used by this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "SetOverscanMultiplier", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::LensComponent_eventSetOverscanMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::LensComponent_eventSetOverscanMultiplier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics
	{
		struct LensComponent_eventShouldApplyDistortion_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensComponent_eventShouldApplyDistortion_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LensComponent_eventShouldApplyDistortion_Parms), &Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Whether distortion should be applied to the target camera */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Whether distortion should be applied to the target camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "ShouldApplyDistortion", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::LensComponent_eventShouldApplyDistortion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::LensComponent_eventShouldApplyDistortion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics
	{
		struct LensComponent_eventShouldApplyNodalOffsetOnTick_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensComponent_eventShouldApplyNodalOffsetOnTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LensComponent_eventShouldApplyNodalOffsetOnTick_Parms), &Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Returns true if nodal offset will be automatically applied during this component's tick, false otherwise */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Returns true if nodal offset will be automatically applied during this component's tick, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "ShouldApplyNodalOffsetOnTick", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::LensComponent_eventShouldApplyNodalOffsetOnTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::LensComponent_eventShouldApplyNodalOffsetOnTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics
	{
		struct LensComponent_eventWasDistortionEvaluated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensComponent_eventWasDistortionEvaluated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LensComponent_eventWasDistortionEvaluated_Parms), &Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Returns true if distortion was evaluated this tick */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Returns true if distortion was evaluated this tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "WasDistortionEvaluated", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::LensComponent_eventWasDistortionEvaluated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::LensComponent_eventWasDistortionEvaluated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics
	{
		struct LensComponent_eventWasNodalOffsetAppliedThisTick_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensComponent_eventWasNodalOffsetAppliedThisTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LensComponent_eventWasNodalOffsetAppliedThisTick_Parms), &Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Component" },
		{ "Comment", "/** Returns true if nodal offset was applied during the current tick, false otherwise */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Returns true if nodal offset was applied during the current tick, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensComponent, nullptr, "WasNodalOffsetAppliedThisTick", nullptr, nullptr, Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::LensComponent_eventWasNodalOffsetAppliedThisTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::LensComponent_eventWasNodalOffsetAppliedThisTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULensComponent);
	UClass* Z_Construct_UClass_ULensComponent_NoRegister()
	{
		return ULensComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULensComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensFilePicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensFilePicker;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EvaluationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvalInputs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvalInputs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistortionStateSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionStateSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistortionStateSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDistortion_MetaData[];
#endif
		static void NewProp_bApplyDistortion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDistortion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensModel_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LensModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleOverscan_MetaData[];
#endif
		static void NewProp_bScaleOverscan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleOverscan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverscanMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanMultiplier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilmbackOverride_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackOverride_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilmbackOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CroppedFilmback_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CroppedFilmback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyNodalOffsetOnTick_MetaData[];
#endif
		static void NewProp_bApplyNodalOffsetOnTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyNodalOffsetOnTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalTrackedComponentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalTrackedComponentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDistortionSetup_MetaData[];
#endif
		static void NewProp_bIsDistortionSetup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDistortionSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastDistortionMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastDistortionMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastCameraComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LensDistortionHandlerMap_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_LensDistortionHandlerMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensDistortionHandlerMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LensDistortionHandlerMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TrackedComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrackedComponentName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalCameraRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalCameraRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalCameraLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalCameraLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionSource;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULensComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULensComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULensComponent_ApplyNodalOffset, "ApplyNodalOffset" }, // 3049004773
		{ &Z_Construct_UFunction_ULensComponent_ClearDistortionState, "ClearDistortionState" }, // 3615474997
		{ &Z_Construct_UFunction_ULensComponent_GetCroppedFilmback, "GetCroppedFilmback" }, // 2262847838
		{ &Z_Construct_UFunction_ULensComponent_GetDistortionSource, "GetDistortionSource" }, // 2249477135
		{ &Z_Construct_UFunction_ULensComponent_GetDistortionState, "GetDistortionState" }, // 1343690566
		{ &Z_Construct_UFunction_ULensComponent_GetFilmbackOverrideSetting, "GetFilmbackOverrideSetting" }, // 333846887
		{ &Z_Construct_UFunction_ULensComponent_GetFIZEvaluationMode, "GetFIZEvaluationMode" }, // 1234258730
		{ &Z_Construct_UFunction_ULensComponent_GetLensFile, "GetLensFile" }, // 2604941098
		{ &Z_Construct_UFunction_ULensComponent_GetLensFileEvaluationInputs, "GetLensFileEvaluationInputs" }, // 1936154345
		{ &Z_Construct_UFunction_ULensComponent_GetLensFilePicker, "GetLensFilePicker" }, // 3824066655
		{ &Z_Construct_UFunction_ULensComponent_GetLensModel, "GetLensModel" }, // 4206647622
		{ &Z_Construct_UFunction_ULensComponent_GetOriginalFocalLength, "GetOriginalFocalLength" }, // 1777616002
		{ &Z_Construct_UFunction_ULensComponent_GetOverscanMultiplier, "GetOverscanMultiplier" }, // 313758556
		{ &Z_Construct_UFunction_ULensComponent_SetApplyDistortion, "SetApplyDistortion" }, // 2257437307
		{ &Z_Construct_UFunction_ULensComponent_SetApplyNodalOffsetOnTick, "SetApplyNodalOffsetOnTick" }, // 723053537
		{ &Z_Construct_UFunction_ULensComponent_SetCroppedFilmback, "SetCroppedFilmback" }, // 1795949123
		{ &Z_Construct_UFunction_ULensComponent_SetDistortionSource, "SetDistortionSource" }, // 4007885578
		{ &Z_Construct_UFunction_ULensComponent_SetDistortionState, "SetDistortionState" }, // 172324896
		{ &Z_Construct_UFunction_ULensComponent_SetFilmbackOverrideSetting, "SetFilmbackOverrideSetting" }, // 922097449
		{ &Z_Construct_UFunction_ULensComponent_SetFIZEvaluationMode, "SetFIZEvaluationMode" }, // 2664049584
		{ &Z_Construct_UFunction_ULensComponent_SetLensFile, "SetLensFile" }, // 3181661007
		{ &Z_Construct_UFunction_ULensComponent_SetLensFilePicker, "SetLensFilePicker" }, // 1916080148
		{ &Z_Construct_UFunction_ULensComponent_SetLensModel, "SetLensModel" }, // 656364415
		{ &Z_Construct_UFunction_ULensComponent_SetOverscanMultiplier, "SetOverscanMultiplier" }, // 1868141513
		{ &Z_Construct_UFunction_ULensComponent_ShouldApplyDistortion, "ShouldApplyDistortion" }, // 1245037695
		{ &Z_Construct_UFunction_ULensComponent_ShouldApplyNodalOffsetOnTick, "ShouldApplyNodalOffsetOnTick" }, // 3801386318
		{ &Z_Construct_UFunction_ULensComponent_WasDistortionEvaluated, "WasDistortionEvaluated" }, // 711793123
		{ &Z_Construct_UFunction_ULensComponent_WasNodalOffsetAppliedThisTick, "WasNodalOffsetAppliedThisTick" }, // 2323523973
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/** Component for applying a post-process lens distortion effect to a CineCameraComponent on the same actor */" },
		{ "HideCategories", "Tags Activation Cooking AssetUserData Collision" },
		{ "IncludePath", "LensComponent.h" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Component for applying a post-process lens distortion effect to a CineCameraComponent on the same actor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_LensFilePicker_MetaData[] = {
		{ "Category", "Lens File" },
		{ "Comment", "/** Lens File used to drive distortion with current camera settings */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Lens File used to drive distortion with current camera settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_LensFilePicker = { "LensFilePicker", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, LensFilePicker), Z_Construct_UScriptStruct_FLensFilePicker, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_LensFilePicker_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_LensFilePicker_MetaData) }; // 1373251661
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_EvaluationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_EvaluationMode_MetaData[] = {
		{ "Category", "Lens File" },
		{ "Comment", "/** Specify how the Lens File should be evaluated */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Specify how the Lens File should be evaluated" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_EvaluationMode = { "EvaluationMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, EvaluationMode), Z_Construct_UEnum_CameraCalibrationCore_EFIZEvaluationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_EvaluationMode_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_EvaluationMode_MetaData) }; // 2148220705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_TargetCameraComponent_MetaData[] = {
		{ "AllowedClasses", "/Script/CinematicCamera.CineCameraComponent" },
		{ "Category", "Lens File" },
		{ "Comment", "/** The CineCameraComponent on which to apply the post-process distortion effect */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "The CineCameraComponent on which to apply the post-process distortion effect" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_TargetCameraComponent = { "TargetCameraComponent", nullptr, (EPropertyFlags)0x00200c0000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, TargetCameraComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_TargetCameraComponent_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_TargetCameraComponent_MetaData) }; // 834145860
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_EvalInputs_MetaData[] = {
		{ "Category", "Lens File" },
		{ "Comment", "/** Inputs to LensFile evaluation */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Inputs to LensFile evaluation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_EvalInputs = { "EvalInputs", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, EvalInputs), Z_Construct_UScriptStruct_FLensFileEvaluationInputs, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_EvalInputs_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_EvalInputs_MetaData) }; // 1183582558
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionStateSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionStateSource_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Specifies from where the distortion state information comes */" },
		{ "DisplayName", "Distortion Source" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Specifies from where the distortion state information comes" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionStateSource = { "DistortionStateSource", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, DistortionStateSource), Z_Construct_UEnum_CameraCalibrationCore_EDistortionSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionStateSource_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionStateSource_MetaData) }; // 1940332692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyDistortion_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Whether or not to apply distortion to the target camera component */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Whether or not to apply distortion to the target camera component" },
	};
#endif
	void Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyDistortion_SetBit(void* Obj)
	{
		((ULensComponent*)Obj)->bApplyDistortion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyDistortion = { "bApplyDistortion", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &ULensComponent::SetbApplyDistortion_WrapperImpl, &ULensComponent::GetbApplyDistortion_WrapperImpl, 1, sizeof(bool), sizeof(ULensComponent), &Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyDistortion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyDistortion_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyDistortion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_LensModel_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** The current lens model used for distortion */" },
		{ "EditCondition", "DistortionStateSource == EDistortionSource::Manual" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "The current lens model used for distortion" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_LensModel = { "LensModel", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, LensModel), Z_Construct_UClass_UClass, Z_Construct_UClass_ULensModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_LensModel_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_LensModel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionState_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** The current distortion state */" },
		{ "EditCondition", "DistortionStateSource == EDistortionSource::Manual" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "The current distortion state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionState = { "DistortionState", nullptr, (EPropertyFlags)0x0020080200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, DistortionState), Z_Construct_UScriptStruct_FLensDistortionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionState_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionState_MetaData) }; // 4023755847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_bScaleOverscan_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Whether to scale the computed overscan by the overscan percentage */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Whether to scale the computed overscan by the overscan percentage" },
	};
#endif
	void Z_Construct_UClass_ULensComponent_Statics::NewProp_bScaleOverscan_SetBit(void* Obj)
	{
		((ULensComponent*)Obj)->bScaleOverscan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_bScaleOverscan = { "bScaleOverscan", nullptr, (EPropertyFlags)0x00200c0000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULensComponent), &Z_Construct_UClass_ULensComponent_Statics::NewProp_bScaleOverscan_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_bScaleOverscan_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_bScaleOverscan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_OverscanMultiplier_MetaData[] = {
		{ "Category", "Distortion" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The percentage of the computed overscan that should be applied to the target camera */" },
		{ "EditCondition", "bScaleOverscan" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "The percentage of the computed overscan that should be applied to the target camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_OverscanMultiplier = { "OverscanMultiplier", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, OverscanMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_OverscanMultiplier_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_OverscanMultiplier_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_FilmbackOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_FilmbackOverride_MetaData[] = {
		{ "Category", "Filmback" },
		{ "Comment", "/** Controls whether this component can override the camera's filmback, and if so, which override to use */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Controls whether this component can override the camera's filmback, and if so, which override to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_FilmbackOverride = { "FilmbackOverride", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, FilmbackOverride), Z_Construct_UEnum_CameraCalibrationCore_EFilmbackOverrideSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_FilmbackOverride_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_FilmbackOverride_MetaData) }; // 3504317237
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_CroppedFilmback_MetaData[] = {
		{ "Category", "Filmback" },
		{ "Comment", "/** Cropped filmback to use if the filmback override settings are set to use it */" },
		{ "EditCondition", "FilmbackOverride == EFilmbackOverrideSource::CroppedFilmbackSetting" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Cropped filmback to use if the filmback override settings are set to use it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_CroppedFilmback = { "CroppedFilmback", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, CroppedFilmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_CroppedFilmback_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_CroppedFilmback_MetaData) }; // 1465417748
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyNodalOffsetOnTick_MetaData[] = {
		{ "Category", "Nodal Offset" },
		{ "Comment", "/** \n\x09 * If checked, nodal offset will be applied automatically when this component ticks. \n\x09 * Set to false if nodal offset needs to be manually applied at some other time (via Blueprints).\n\x09 */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "If checked, nodal offset will be applied automatically when this component ticks.\nSet to false if nodal offset needs to be manually applied at some other time (via Blueprints)." },
	};
#endif
	void Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyNodalOffsetOnTick_SetBit(void* Obj)
	{
		((ULensComponent*)Obj)->bApplyNodalOffsetOnTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyNodalOffsetOnTick = { "bApplyNodalOffsetOnTick", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULensComponent), &Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyNodalOffsetOnTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyNodalOffsetOnTick_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyNodalOffsetOnTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalTrackedComponentTransform_MetaData[] = {
		{ "Category", "Nodal Offset" },
		{ "Comment", "/** Serialized transform of the TrackedComponent prior to nodal offset being applied */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Serialized transform of the TrackedComponent prior to nodal offset being applied" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalTrackedComponentTransform = { "OriginalTrackedComponentTransform", nullptr, (EPropertyFlags)0x00200c0200020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, OriginalTrackedComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalTrackedComponentTransform_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalTrackedComponentTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_bIsDistortionSetup_MetaData[] = {
		{ "Comment", "/** Whether a distortion effect is currently being applied to the target camera component */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Whether a distortion effect is currently being applied to the target camera component" },
	};
#endif
	void Z_Construct_UClass_ULensComponent_Statics::NewProp_bIsDistortionSetup_SetBit(void* Obj)
	{
		((ULensComponent*)Obj)->bIsDistortionSetup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_bIsDistortionSetup = { "bIsDistortionSetup", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULensComponent), &Z_Construct_UClass_ULensComponent_Statics::NewProp_bIsDistortionSetup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_bIsDistortionSetup_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_bIsDistortionSetup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalFocalLength_MetaData[] = {
		{ "Comment", "/** Focal length of the target camera before any overscan has been applied */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Focal length of the target camera before any overscan has been applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalFocalLength = { "OriginalFocalLength", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, OriginalFocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalFocalLength_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalFocalLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_LastDistortionMID_MetaData[] = {
		{ "Comment", "/** Cached MID last applied to the target camera */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Cached MID last applied to the target camera" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_LastDistortionMID = { "LastDistortionMID", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, LastDistortionMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_LastDistortionMID_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_LastDistortionMID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_LastCameraComponent_MetaData[] = {
		{ "Comment", "/** Cached most recent target camera, used to clean up the old camera when the user changes the target */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Cached most recent target camera, used to clean up the old camera when the user changes the target" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_LastCameraComponent = { "LastCameraComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, LastCameraComponent), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_LastCameraComponent_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_LastCameraComponent_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_LensDistortionHandlerMap_ValueProp = { "LensDistortionHandlerMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_LensDistortionHandlerMap_Key_KeyProp = { "LensDistortionHandlerMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULensModel_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_LensDistortionHandlerMap_MetaData[] = {
		{ "Comment", "/** Map of lens models to handlers */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Map of lens models to handlers" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_LensDistortionHandlerMap = { "LensDistortionHandlerMap", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, LensDistortionHandlerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_LensDistortionHandlerMap_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_LensDistortionHandlerMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_TrackedComponent_MetaData[] = {
		{ "Comment", "/** Scene component that should have nodal offset applied */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Scene component that should have nodal offset applied" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_TrackedComponent = { "TrackedComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, TrackedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_TrackedComponent_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_TrackedComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_TrackedComponentName_MetaData[] = {
		{ "Comment", "/** Serialized name of the TrackedComponent, used to determine which component to re-apply nodal offset to in spawnables */" },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
		{ "ToolTip", "Serialized name of the TrackedComponent, used to determine which component to re-apply nodal offset to in spawnables" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_TrackedComponentName = { "TrackedComponentName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, TrackedComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_TrackedComponentName_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_TrackedComponentName_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalCameraRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/LensComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalCameraRotation = { "OriginalCameraRotation", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, OriginalCameraRotation_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalCameraRotation_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalCameraRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalCameraLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/LensComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalCameraLocation = { "OriginalCameraLocation", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, OriginalCameraLocation_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalCameraLocation_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalCameraLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionSource_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "This property has been deprecated. Use GetDistortionSource() and SetDistortionSource() instead." },
		{ "ModuleRelativePath", "Public/LensComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionSource = { "DistortionSource", nullptr, (EPropertyFlags)0x0020088820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULensComponent, DistortionSource_DEPRECATED), Z_Construct_UScriptStruct_FDistortionHandlerPicker, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionSource_MetaData), Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionSource_MetaData) }; // 4255137559
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULensComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_LensFilePicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_EvaluationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_EvaluationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_TargetCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_EvalInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionStateSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionStateSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyDistortion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_LensModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_bScaleOverscan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_OverscanMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_FilmbackOverride_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_FilmbackOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_CroppedFilmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_bApplyNodalOffsetOnTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalTrackedComponentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_bIsDistortionSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_LastDistortionMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_LastCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_LensDistortionHandlerMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_LensDistortionHandlerMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_LensDistortionHandlerMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_TrackedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_TrackedComponentName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalCameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_OriginalCameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensComponent_Statics::NewProp_DistortionSource,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULensComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensComponent_Statics::ClassParams = {
		&ULensComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULensComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULensComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULensComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULensComponent()
	{
		if (!Z_Registration_Info_UClass_ULensComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensComponent.OuterSingleton, Z_Construct_UClass_ULensComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULensComponent.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<ULensComponent>()
	{
		return ULensComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULensComponent);
	ULensComponent::~ULensComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_Statics::EnumInfo[] = {
		{ EFIZEvaluationMode_StaticEnum, TEXT("EFIZEvaluationMode"), &Z_Registration_Info_UEnum_EFIZEvaluationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2148220705U) },
		{ EFilmbackOverrideSource_StaticEnum, TEXT("EFilmbackOverrideSource"), &Z_Registration_Info_UEnum_EFilmbackOverrideSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3504317237U) },
		{ EDistortionSource_StaticEnum, TEXT("EDistortionSource"), &Z_Registration_Info_UEnum_EDistortionSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1940332692U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULensComponent, ULensComponent::StaticClass, TEXT("ULensComponent"), &Z_Registration_Info_UClass_ULensComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensComponent), 1826373352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_342414098(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
