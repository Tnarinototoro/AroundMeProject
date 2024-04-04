// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ConcertVirtualCamera.h"
#include "CineCameraSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertVirtualCamera() {}
// Cross Module References
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UEnum* Z_Construct_UEnum_VirtualCamera_ETrackerInputSource();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraFocusData;
class UScriptStruct* FConcertVirtualCameraCameraFocusData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraFocusData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraFocusData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("ConcertVirtualCameraCameraFocusData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraFocusData.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FConcertVirtualCameraCameraFocusData>()
{
	return FConcertVirtualCameraCameraFocusData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Can't use FCameraFocusSettings since it use a reference to an actor\n * The camera will always be in Manual, and will transfer the CurrentFocusDistance.\n */" },
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
		{ "ToolTip", "Can't use FCameraFocusSettings since it use a reference to an actor\nThe camera will always be in Manual, and will transfer the CurrentFocusDistance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertVirtualCameraCameraFocusData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_ManualFocusDistance_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_ManualFocusDistance = { "ManualFocusDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraFocusData, ManualFocusDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_ManualFocusDistance_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_ManualFocusDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_FocusSmoothingInterpSpeed = { "FocusSmoothingInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraFocusData, FocusSmoothingInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_bSmoothFocusChanges_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_bSmoothFocusChanges_SetBit(void* Obj)
	{
		((FConcertVirtualCameraCameraFocusData*)Obj)->bSmoothFocusChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_bSmoothFocusChanges = { "bSmoothFocusChanges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FConcertVirtualCameraCameraFocusData), &Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_bSmoothFocusChanges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_bSmoothFocusChanges_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_bSmoothFocusChanges_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_ManualFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_FocusSmoothingInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewProp_bSmoothFocusChanges,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"ConcertVirtualCameraCameraFocusData",
		Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::PropPointers),
		sizeof(FConcertVirtualCameraCameraFocusData),
		alignof(FConcertVirtualCameraCameraFocusData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraFocusData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraFocusData.InnerSingleton, Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraFocusData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraData;
class UScriptStruct* FConcertVirtualCameraCameraData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("ConcertVirtualCameraCameraData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraData.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FConcertVirtualCameraCameraData>()
{
	return FConcertVirtualCameraCameraData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertVirtualCameraCameraData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraActorLocation_MetaData[] = {
		{ "Comment", "/** Camera transform */" },
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
		{ "ToolTip", "Camera transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraActorLocation = { "CameraActorLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraData, CameraActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraActorLocation_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraActorLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraActorRotation_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraActorRotation = { "CameraActorRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraData, CameraActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraActorRotation_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraActorRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraComponentLocation_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraComponentLocation = { "CameraComponentLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraData, CameraComponentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraComponentLocation_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraComponentLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraComponentRotation_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraComponentRotation = { "CameraComponentRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraData, CameraComponentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraComponentRotation_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraComponentRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CurrentAperture_MetaData[] = {
		{ "Comment", "/** Camera settings */" },
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
		{ "ToolTip", "Camera settings" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CurrentAperture = { "CurrentAperture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraData, CurrentAperture), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CurrentAperture_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CurrentAperture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CurrentFocalLength_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CurrentFocalLength = { "CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraData, CurrentFocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CurrentFocalLength_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CurrentFocalLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_FocusSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_FocusSettings = { "FocusSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraData, FocusSettings), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_FocusSettings_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_FocusSettings_MetaData) }; // 4040772136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_LensSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraData, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_LensSettings_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_LensSettings_MetaData) }; // 4151735454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_FilmbackSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraData, FilmbackSettings), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_FilmbackSettings_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_FilmbackSettings_MetaData) }; // 1465417748
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraComponentLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CameraComponentRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CurrentAperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_CurrentFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_FocusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_LensSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewProp_FilmbackSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"ConcertVirtualCameraCameraData",
		Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::PropPointers),
		sizeof(FConcertVirtualCameraCameraData),
		alignof(FConcertVirtualCameraCameraData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraData.InnerSingleton, Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraComponentEvent;
class UScriptStruct* FConcertVirtualCameraCameraComponentEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraComponentEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraComponentEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("ConcertVirtualCameraCameraComponentEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraComponentEvent.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FConcertVirtualCameraCameraComponentEvent>()
{
	return FConcertVirtualCameraCameraComponentEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertVirtualCameraCameraComponentEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewProp_TrackingName_MetaData[] = {
		{ "Comment", "/** Name of the tracking camera */" },
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
		{ "ToolTip", "Name of the tracking camera" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewProp_TrackingName = { "TrackingName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraComponentEvent, TrackingName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewProp_TrackingName_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewProp_TrackingName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewProp_CameraData_MetaData[] = {
		{ "Comment", "/** Camera data */" },
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
		{ "ToolTip", "Camera data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewProp_CameraData = { "CameraData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraCameraComponentEvent, CameraData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewProp_CameraData_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewProp_CameraData_MetaData) }; // 2862283372
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewProp_TrackingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewProp_CameraData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"ConcertVirtualCameraCameraComponentEvent",
		Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::PropPointers),
		sizeof(FConcertVirtualCameraCameraComponentEvent),
		alignof(FConcertVirtualCameraCameraComponentEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraComponentEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraComponentEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraComponentEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertVirtualCameraControllerEvent;
class UScriptStruct* FConcertVirtualCameraControllerEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertVirtualCameraControllerEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertVirtualCameraControllerEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("ConcertVirtualCameraControllerEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertVirtualCameraControllerEvent.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FConcertVirtualCameraControllerEvent>()
{
	return FConcertVirtualCameraControllerEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertVirtualCameraControllerEvent>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_InputSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_InputSource_MetaData[] = {
		{ "Comment", "/** Controller settings */" },
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
		{ "ToolTip", "Controller settings" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_InputSource = { "InputSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraControllerEvent, InputSource), Z_Construct_UEnum_VirtualCamera_ETrackerInputSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_InputSource_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_InputSource_MetaData) }; // 487266181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_CameraData_MetaData[] = {
		{ "Comment", "/** Camera data */" },
		{ "ModuleRelativePath", "Private/ConcertVirtualCamera.h" },
		{ "ToolTip", "Camera data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_CameraData = { "CameraData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertVirtualCameraControllerEvent, CameraData), Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_CameraData_MetaData), Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_CameraData_MetaData) }; // 2862283372
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_InputSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_InputSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewProp_CameraData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"ConcertVirtualCameraControllerEvent",
		Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::PropPointers),
		sizeof(FConcertVirtualCameraControllerEvent),
		alignof(FConcertVirtualCameraControllerEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertVirtualCameraControllerEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertVirtualCameraControllerEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertVirtualCameraControllerEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Private_ConcertVirtualCamera_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Private_ConcertVirtualCamera_h_Statics::ScriptStructInfo[] = {
		{ FConcertVirtualCameraCameraFocusData::StaticStruct, Z_Construct_UScriptStruct_FConcertVirtualCameraCameraFocusData_Statics::NewStructOps, TEXT("ConcertVirtualCameraCameraFocusData"), &Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraFocusData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertVirtualCameraCameraFocusData), 4040772136U) },
		{ FConcertVirtualCameraCameraData::StaticStruct, Z_Construct_UScriptStruct_FConcertVirtualCameraCameraData_Statics::NewStructOps, TEXT("ConcertVirtualCameraCameraData"), &Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertVirtualCameraCameraData), 2862283372U) },
		{ FConcertVirtualCameraCameraComponentEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertVirtualCameraCameraComponentEvent_Statics::NewStructOps, TEXT("ConcertVirtualCameraCameraComponentEvent"), &Z_Registration_Info_UScriptStruct_ConcertVirtualCameraCameraComponentEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertVirtualCameraCameraComponentEvent), 2848194438U) },
		{ FConcertVirtualCameraControllerEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertVirtualCameraControllerEvent_Statics::NewStructOps, TEXT("ConcertVirtualCameraControllerEvent"), &Z_Registration_Info_UScriptStruct_ConcertVirtualCameraControllerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertVirtualCameraControllerEvent), 338028183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Private_ConcertVirtualCamera_h_59204165(TEXT("/Script/VirtualCamera"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Private_ConcertVirtualCamera_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Private_ConcertVirtualCamera_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
