// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamMultiUser.h"
#include "CineCameraSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamMultiUser() {}
// Cross Module References
	CINEMATICCAMERA_API UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiUserVCamCameraData();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiUserVCamCameraFocusData;
class UScriptStruct* FMultiUserVCamCameraFocusData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiUserVCamCameraFocusData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiUserVCamCameraFocusData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("MultiUserVCamCameraFocusData"));
	}
	return Z_Registration_Info_UScriptStruct_MultiUserVCamCameraFocusData.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FMultiUserVCamCameraFocusData>()
{
	return FMultiUserVCamCameraFocusData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualFocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualFocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusSmoothingInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusSmoothingInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothFocusChanges_MetaData[];
#endif
		static void NewProp_bSmoothFocusChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothFocusChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorToTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FocusMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FocusMethod;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugFocusPlane_MetaData[];
#endif
		static void NewProp_bDrawDebugFocusPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugFocusPlane;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiUserVCamCameraFocusData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_ManualFocusDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_ManualFocusDistance = { "ManualFocusDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraFocusData, ManualFocusDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_ManualFocusDistance_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_ManualFocusDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusSmoothingInterpSpeed = { "FocusSmoothingInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraFocusData, FocusSmoothingInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bSmoothFocusChanges_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bSmoothFocusChanges_SetBit(void* Obj)
	{
		((FMultiUserVCamCameraFocusData*)Obj)->bSmoothFocusChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bSmoothFocusChanges = { "bSmoothFocusChanges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMultiUserVCamCameraFocusData), &Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bSmoothFocusChanges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bSmoothFocusChanges_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bSmoothFocusChanges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_ActorToTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_ActorToTrack = { "ActorToTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraFocusData, ActorToTrack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_ActorToTrack_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_ActorToTrack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_RelativeOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraFocusData, RelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_RelativeOffset_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_RelativeOffset_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusMethod = { "FocusMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraFocusData, FocusMethod), Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusMethod_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusMethod_MetaData) }; // 4148500762
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bDrawDebugFocusPlane_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bDrawDebugFocusPlane_SetBit(void* Obj)
	{
		((FMultiUserVCamCameraFocusData*)Obj)->bDrawDebugFocusPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bDrawDebugFocusPlane = { "bDrawDebugFocusPlane", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMultiUserVCamCameraFocusData), &Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bDrawDebugFocusPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bDrawDebugFocusPlane_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bDrawDebugFocusPlane_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_ManualFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusSmoothingInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bSmoothFocusChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_ActorToTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_RelativeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_FocusMethod,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewProp_bDrawDebugFocusPlane,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"MultiUserVCamCameraFocusData",
		Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::PropPointers),
		sizeof(FMultiUserVCamCameraFocusData),
		alignof(FMultiUserVCamCameraFocusData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiUserVCamCameraFocusData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiUserVCamCameraFocusData.InnerSingleton, Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiUserVCamCameraFocusData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiUserVCamCameraData;
class UScriptStruct* FMultiUserVCamCameraData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiUserVCamCameraData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiUserVCamCameraData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiUserVCamCameraData, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("MultiUserVCamCameraData"));
	}
	return Z_Registration_Info_UScriptStruct_MultiUserVCamCameraData.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FMultiUserVCamCameraData>()
{
	return FMultiUserVCamCameraData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraActorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraActorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraActorRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponentLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraComponentLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponentRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraComponentRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAperture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAperture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_NearClipPlane_MetaData[];
#endif
		static void NewProp_bOverride_NearClipPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_NearClipPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraISO_MetaData[];
#endif
		static void NewProp_bOverride_CameraISO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraISO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomNearClipPlane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomNearClipPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraISO_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraISO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoExposureBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoExposureBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiUserVCamCameraData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraActorLocation_MetaData[] = {
		{ "Comment", "/** Camera transform */" },
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
		{ "ToolTip", "Camera transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraActorLocation = { "CameraActorLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, CameraActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraActorLocation_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraActorLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraActorRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraActorRotation = { "CameraActorRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, CameraActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraActorRotation_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraActorRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraComponentLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraComponentLocation = { "CameraComponentLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, CameraComponentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraComponentLocation_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraComponentLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraComponentRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraComponentRotation = { "CameraComponentRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, CameraComponentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraComponentRotation_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraComponentRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CurrentAperture_MetaData[] = {
		{ "Comment", "/** Camera settings */" },
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
		{ "ToolTip", "Camera settings" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CurrentAperture = { "CurrentAperture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, CurrentAperture), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CurrentAperture_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CurrentAperture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CurrentFocalLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CurrentFocalLength = { "CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, CurrentFocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CurrentFocalLength_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CurrentFocalLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_FocusSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_FocusSettings = { "FocusSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, FocusSettings), Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_FocusSettings_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_FocusSettings_MetaData) }; // 2164533060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_LensSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_LensSettings_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_LensSettings_MetaData) }; // 4151735454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_FilmbackSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, FilmbackSettings), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_FilmbackSettings_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_FilmbackSettings_MetaData) }; // 1465417748
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_NearClipPlane_MetaData[] = {
		{ "Comment", "/** Post process settings */" },
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
		{ "ToolTip", "Post process settings" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_NearClipPlane_SetBit(void* Obj)
	{
		((FMultiUserVCamCameraData*)Obj)->bOverride_NearClipPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_NearClipPlane = { "bOverride_NearClipPlane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMultiUserVCamCameraData), &Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_NearClipPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_NearClipPlane_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_NearClipPlane_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_CameraISO_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_CameraISO_SetBit(void* Obj)
	{
		((FMultiUserVCamCameraData*)Obj)->bOverride_CameraISO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_CameraISO = { "bOverride_CameraISO", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMultiUserVCamCameraData), &Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_CameraISO_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_CameraISO_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_CameraISO_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CustomNearClipPlane_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CustomNearClipPlane = { "CustomNearClipPlane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, CustomNearClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CustomNearClipPlane_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CustomNearClipPlane_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraISO_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraISO = { "CameraISO", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, CameraISO), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraISO_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraISO_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_AutoExposureBias_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_AutoExposureBias = { "AutoExposureBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraData, AutoExposureBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_AutoExposureBias_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_AutoExposureBias_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraComponentLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraComponentRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CurrentAperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CurrentFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_FocusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_LensSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_FilmbackSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_NearClipPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_bOverride_CameraISO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CustomNearClipPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_CameraISO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewProp_AutoExposureBias,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"MultiUserVCamCameraData",
		Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::PropPointers),
		sizeof(FMultiUserVCamCameraData),
		alignof(FMultiUserVCamCameraData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMultiUserVCamCameraData()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiUserVCamCameraData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiUserVCamCameraData.InnerSingleton, Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiUserVCamCameraData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiUserVCamCameraComponentEvent;
class UScriptStruct* FMultiUserVCamCameraComponentEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiUserVCamCameraComponentEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiUserVCamCameraComponentEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("MultiUserVCamCameraComponentEvent"));
	}
	return Z_Registration_Info_UScriptStruct_MultiUserVCamCameraComponentEvent.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FMultiUserVCamCameraComponentEvent>()
{
	return FMultiUserVCamCameraComponentEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrackingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiUserVCamCameraComponentEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewProp_TrackingName_MetaData[] = {
		{ "Comment", "/** Name of the tracking camera */" },
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
		{ "ToolTip", "Name of the tracking camera" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewProp_TrackingName = { "TrackingName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraComponentEvent, TrackingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewProp_TrackingName_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewProp_TrackingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewProp_CameraData_MetaData[] = {
		{ "Comment", "/** Camera data */" },
		{ "ModuleRelativePath", "Public/VCamMultiUser.h" },
		{ "ToolTip", "Camera data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewProp_CameraData = { "CameraData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiUserVCamCameraComponentEvent, CameraData), Z_Construct_UScriptStruct_FMultiUserVCamCameraData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewProp_CameraData_MetaData), Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewProp_CameraData_MetaData) }; // 3795899508
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewProp_TrackingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewProp_CameraData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"MultiUserVCamCameraComponentEvent",
		Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::PropPointers),
		sizeof(FMultiUserVCamCameraComponentEvent),
		alignof(FMultiUserVCamCameraComponentEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiUserVCamCameraComponentEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiUserVCamCameraComponentEvent.InnerSingleton, Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiUserVCamCameraComponentEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamMultiUser_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamMultiUser_h_Statics::ScriptStructInfo[] = {
		{ FMultiUserVCamCameraFocusData::StaticStruct, Z_Construct_UScriptStruct_FMultiUserVCamCameraFocusData_Statics::NewStructOps, TEXT("MultiUserVCamCameraFocusData"), &Z_Registration_Info_UScriptStruct_MultiUserVCamCameraFocusData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiUserVCamCameraFocusData), 2164533060U) },
		{ FMultiUserVCamCameraData::StaticStruct, Z_Construct_UScriptStruct_FMultiUserVCamCameraData_Statics::NewStructOps, TEXT("MultiUserVCamCameraData"), &Z_Registration_Info_UScriptStruct_MultiUserVCamCameraData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiUserVCamCameraData), 3795899508U) },
		{ FMultiUserVCamCameraComponentEvent::StaticStruct, Z_Construct_UScriptStruct_FMultiUserVCamCameraComponentEvent_Statics::NewStructOps, TEXT("MultiUserVCamCameraComponentEvent"), &Z_Registration_Info_UScriptStruct_MultiUserVCamCameraComponentEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiUserVCamCameraComponentEvent), 2557085286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamMultiUser_h_516010357(TEXT("/Script/VCamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamMultiUser_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamMultiUser_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
