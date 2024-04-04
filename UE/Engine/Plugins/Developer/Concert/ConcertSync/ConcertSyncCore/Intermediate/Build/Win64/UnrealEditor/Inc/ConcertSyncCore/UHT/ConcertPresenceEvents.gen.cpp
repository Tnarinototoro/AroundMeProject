// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertPresenceEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertPresenceEvents() {}
// Cross Module References
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertClientPresenceEventBase();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertLaserData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertClientPresenceEventBase;
class UScriptStruct* FConcertClientPresenceEventBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertClientPresenceEventBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertClientPresenceEventBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertClientPresenceEventBase, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertClientPresenceEventBase"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertClientPresenceEventBase.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertClientPresenceEventBase>()
{
	return FConcertClientPresenceEventBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionUpdateIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TransactionUpdateIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertClientPresenceEventBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::NewProp_TransactionUpdateIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::NewProp_TransactionUpdateIndex = { "TransactionUpdateIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientPresenceEventBase, TransactionUpdateIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::NewProp_TransactionUpdateIndex_MetaData), Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::NewProp_TransactionUpdateIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::NewProp_TransactionUpdateIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertClientPresenceEventBase",
		Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::PropPointers),
		sizeof(FConcertClientPresenceEventBase),
		alignof(FConcertClientPresenceEventBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertClientPresenceEventBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertClientPresenceEventBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertClientPresenceEventBase.InnerSingleton, Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertClientPresenceEventBase.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertClientPresenceVisibilityUpdateEvent;
class UScriptStruct* FConcertClientPresenceVisibilityUpdateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertClientPresenceVisibilityUpdateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertClientPresenceVisibilityUpdateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertClientPresenceVisibilityUpdateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertClientPresenceVisibilityUpdateEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertClientPresenceVisibilityUpdateEvent>()
{
	return FConcertClientPresenceVisibilityUpdateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedEndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisibility_MetaData[];
#endif
		static void NewProp_bVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertClientPresenceVisibilityUpdateEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_ModifiedEndpointId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_ModifiedEndpointId = { "ModifiedEndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientPresenceVisibilityUpdateEvent, ModifiedEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_ModifiedEndpointId_MetaData), Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_ModifiedEndpointId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_bVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_bVisibility_SetBit(void* Obj)
	{
		((FConcertClientPresenceVisibilityUpdateEvent*)Obj)->bVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_bVisibility = { "bVisibility", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConcertClientPresenceVisibilityUpdateEvent), &Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_bVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_bVisibility_MetaData), Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_bVisibility_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_ModifiedEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewProp_bVisibility,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertClientPresenceVisibilityUpdateEvent",
		Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::PropPointers),
		sizeof(FConcertClientPresenceVisibilityUpdateEvent),
		alignof(FConcertClientPresenceVisibilityUpdateEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertClientPresenceVisibilityUpdateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertClientPresenceVisibilityUpdateEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertClientPresenceVisibilityUpdateEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertClientPresenceInVREvent;
class UScriptStruct* FConcertClientPresenceInVREvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertClientPresenceInVREvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertClientPresenceInVREvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertClientPresenceInVREvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertClientPresenceInVREvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertClientPresenceInVREvent>()
{
	return FConcertClientPresenceInVREvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRDevice_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VRDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertClientPresenceInVREvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::NewProp_VRDevice_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::NewProp_VRDevice = { "VRDevice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientPresenceInVREvent, VRDevice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::NewProp_VRDevice_MetaData), Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::NewProp_VRDevice_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::NewProp_VRDevice,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertClientPresenceInVREvent",
		Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::PropPointers),
		sizeof(FConcertClientPresenceInVREvent),
		alignof(FConcertClientPresenceInVREvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertClientPresenceInVREvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertClientPresenceInVREvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertClientPresenceInVREvent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPresenceModeType;
	static UEnum* EPresenceModeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPresenceModeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPresenceModeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("EPresenceModeType"));
		}
		return Z_Registration_Info_UEnum_EPresenceModeType.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EPresenceModeType>()
	{
		return EPresenceModeType_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType_Statics::Enumerators[] = {
		{ "EPresenceModeType::Desktop", (int64)EPresenceModeType::Desktop },
		{ "EPresenceModeType::VRMode", (int64)EPresenceModeType::VRMode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType_Statics::Enum_MetaDataParams[] = {
		{ "Desktop.Name", "EPresenceModeType::Desktop" },
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
		{ "VRMode.Name", "EPresenceModeType::VRMode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"EPresenceModeType",
		"EPresenceModeType",
		Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType()
	{
		if (!Z_Registration_Info_UEnum_EPresenceModeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPresenceModeType.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPresenceModeType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertClientPresenceDataUpdateEvent>() == std::is_polymorphic<FConcertClientPresenceEventBase>(), "USTRUCT FConcertClientPresenceDataUpdateEvent cannot be polymorphic unless super FConcertClientPresenceEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertClientPresenceDataUpdateEvent;
class UScriptStruct* FConcertClientPresenceDataUpdateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertClientPresenceDataUpdateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertClientPresenceDataUpdateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertClientPresenceDataUpdateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertClientPresenceDataUpdateEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertClientPresenceDataUpdateEvent>()
{
	return FConcertClientPresenceDataUpdateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WorldPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PresenceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresenceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PresenceType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertClientPresenceDataUpdateEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_WorldPath_MetaData[] = {
		{ "Comment", "/** The non-PIE/SIE world path. In PIE/SIE, the world context and its path is different than the non-PIE/SIE context.\n\x09    For presence management, we are interested in the Non-PIE/SIE world path and this is what is emitted even if the user is in PIE/SIE. */" },
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
		{ "ToolTip", "The non-PIE/SIE world path. In PIE/SIE, the world context and its path is different than the non-PIE/SIE context.\n          For presence management, we are interested in the Non-PIE/SIE world path and this is what is emitted even if the user is in PIE/SIE." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_WorldPath = { "WorldPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientPresenceDataUpdateEvent, WorldPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_WorldPath_MetaData), Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_WorldPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientPresenceDataUpdateEvent, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_Orientation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientPresenceDataUpdateEvent, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_Orientation_MetaData), Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_Orientation_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_PresenceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_PresenceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_PresenceType = { "PresenceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientPresenceDataUpdateEvent, PresenceType), Z_Construct_UEnum_ConcertSyncCore_EPresenceModeType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_PresenceType_MetaData), Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_PresenceType_MetaData) }; // 1905913768
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_WorldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_PresenceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewProp_PresenceType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertClientPresenceEventBase,
		&NewStructOps,
		"ConcertClientPresenceDataUpdateEvent",
		Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::PropPointers),
		sizeof(FConcertClientPresenceDataUpdateEvent),
		alignof(FConcertClientPresenceDataUpdateEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertClientPresenceDataUpdateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertClientPresenceDataUpdateEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertClientPresenceDataUpdateEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertClientDesktopPresenceUpdateEvent>() == std::is_polymorphic<FConcertClientPresenceEventBase>(), "USTRUCT FConcertClientDesktopPresenceUpdateEvent cannot be polymorphic unless super FConcertClientPresenceEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertClientDesktopPresenceUpdateEvent;
class UScriptStruct* FConcertClientDesktopPresenceUpdateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertClientDesktopPresenceUpdateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertClientDesktopPresenceUpdateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertClientDesktopPresenceUpdateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertClientDesktopPresenceUpdateEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertClientDesktopPresenceUpdateEvent>()
{
	return FConcertClientDesktopPresenceUpdateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMovingCamera_MetaData[];
#endif
		static void NewProp_bMovingCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovingCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertClientDesktopPresenceUpdateEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_TraceStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientDesktopPresenceUpdateEvent, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_TraceStart_MetaData), Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_TraceStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_TraceEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientDesktopPresenceUpdateEvent, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_TraceEnd_MetaData), Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_TraceEnd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_bMovingCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_bMovingCamera_SetBit(void* Obj)
	{
		((FConcertClientDesktopPresenceUpdateEvent*)Obj)->bMovingCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_bMovingCamera = { "bMovingCamera", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConcertClientDesktopPresenceUpdateEvent), &Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_bMovingCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_bMovingCamera_MetaData), Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_bMovingCamera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_TraceEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewProp_bMovingCamera,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertClientPresenceEventBase,
		&NewStructOps,
		"ConcertClientDesktopPresenceUpdateEvent",
		Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::PropPointers),
		sizeof(FConcertClientDesktopPresenceUpdateEvent),
		alignof(FConcertClientDesktopPresenceUpdateEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertClientDesktopPresenceUpdateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertClientDesktopPresenceUpdateEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertClientDesktopPresenceUpdateEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertLaserData;
class UScriptStruct* FConcertLaserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertLaserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertLaserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertLaserData, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertLaserData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertLaserData.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertLaserData>()
{
	return FConcertLaserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertLaserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaserStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaserEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLaserData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertLaserData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewProp_LaserStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewProp_LaserStart = { "LaserStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertLaserData, LaserStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewProp_LaserStart_MetaData), Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewProp_LaserStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewProp_LaserEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewProp_LaserEnd = { "LaserEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertLaserData, LaserEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewProp_LaserEnd_MetaData), Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewProp_LaserEnd_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertLaserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewProp_LaserStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewProp_LaserEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertLaserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertLaserData",
		Z_Construct_UScriptStruct_FConcertLaserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLaserData_Statics::PropPointers),
		sizeof(FConcertLaserData),
		alignof(FConcertLaserData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLaserData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertLaserData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLaserData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertLaserData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertLaserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertLaserData.InnerSingleton, Z_Construct_UScriptStruct_FConcertLaserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertLaserData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertClientVRPresenceUpdateEvent>() == std::is_polymorphic<FConcertClientPresenceEventBase>(), "USTRUCT FConcertClientVRPresenceUpdateEvent cannot be polymorphic unless super FConcertClientPresenceEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertClientVRPresenceUpdateEvent;
class UScriptStruct* FConcertClientVRPresenceUpdateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertClientVRPresenceUpdateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertClientVRPresenceUpdateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertClientVRPresenceUpdateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertClientVRPresenceUpdateEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertClientVRPresenceUpdateEvent>()
{
	return FConcertClientVRPresenceUpdateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftMotionControllerPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftMotionControllerPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftMotionControllerOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftMotionControllerOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightMotionControllerPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightMotionControllerPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightMotionControllerOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightMotionControllerOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lasers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lasers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertClientVRPresenceUpdateEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_LeftMotionControllerPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_LeftMotionControllerPosition = { "LeftMotionControllerPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientVRPresenceUpdateEvent, LeftMotionControllerPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_LeftMotionControllerPosition_MetaData), Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_LeftMotionControllerPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_LeftMotionControllerOrientation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_LeftMotionControllerOrientation = { "LeftMotionControllerOrientation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientVRPresenceUpdateEvent, LeftMotionControllerOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_LeftMotionControllerOrientation_MetaData), Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_LeftMotionControllerOrientation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_RightMotionControllerPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_RightMotionControllerPosition = { "RightMotionControllerPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientVRPresenceUpdateEvent, RightMotionControllerPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_RightMotionControllerPosition_MetaData), Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_RightMotionControllerPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_RightMotionControllerOrientation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_RightMotionControllerOrientation = { "RightMotionControllerOrientation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientVRPresenceUpdateEvent, RightMotionControllerOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_RightMotionControllerOrientation_MetaData), Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_RightMotionControllerOrientation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_Lasers_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertPresenceEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_Lasers = { "Lasers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Lasers, FConcertClientVRPresenceUpdateEvent), STRUCT_OFFSET(FConcertClientVRPresenceUpdateEvent, Lasers), Z_Construct_UScriptStruct_FConcertLaserData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_Lasers_MetaData), Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_Lasers_MetaData) }; // 3860850461
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_LeftMotionControllerPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_LeftMotionControllerOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_RightMotionControllerPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_RightMotionControllerOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewProp_Lasers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertClientPresenceEventBase,
		&NewStructOps,
		"ConcertClientVRPresenceUpdateEvent",
		Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::PropPointers),
		sizeof(FConcertClientVRPresenceUpdateEvent),
		alignof(FConcertClientVRPresenceUpdateEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertClientVRPresenceUpdateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertClientVRPresenceUpdateEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertClientVRPresenceUpdateEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_Statics::EnumInfo[] = {
		{ EPresenceModeType_StaticEnum, TEXT("EPresenceModeType"), &Z_Registration_Info_UEnum_EPresenceModeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1905913768U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_Statics::ScriptStructInfo[] = {
		{ FConcertClientPresenceEventBase::StaticStruct, Z_Construct_UScriptStruct_FConcertClientPresenceEventBase_Statics::NewStructOps, TEXT("ConcertClientPresenceEventBase"), &Z_Registration_Info_UScriptStruct_ConcertClientPresenceEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertClientPresenceEventBase), 1254305517U) },
		{ FConcertClientPresenceVisibilityUpdateEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertClientPresenceVisibilityUpdateEvent_Statics::NewStructOps, TEXT("ConcertClientPresenceVisibilityUpdateEvent"), &Z_Registration_Info_UScriptStruct_ConcertClientPresenceVisibilityUpdateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertClientPresenceVisibilityUpdateEvent), 903625115U) },
		{ FConcertClientPresenceInVREvent::StaticStruct, Z_Construct_UScriptStruct_FConcertClientPresenceInVREvent_Statics::NewStructOps, TEXT("ConcertClientPresenceInVREvent"), &Z_Registration_Info_UScriptStruct_ConcertClientPresenceInVREvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertClientPresenceInVREvent), 522492056U) },
		{ FConcertClientPresenceDataUpdateEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertClientPresenceDataUpdateEvent_Statics::NewStructOps, TEXT("ConcertClientPresenceDataUpdateEvent"), &Z_Registration_Info_UScriptStruct_ConcertClientPresenceDataUpdateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertClientPresenceDataUpdateEvent), 681091022U) },
		{ FConcertClientDesktopPresenceUpdateEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertClientDesktopPresenceUpdateEvent_Statics::NewStructOps, TEXT("ConcertClientDesktopPresenceUpdateEvent"), &Z_Registration_Info_UScriptStruct_ConcertClientDesktopPresenceUpdateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertClientDesktopPresenceUpdateEvent), 3439214795U) },
		{ FConcertLaserData::StaticStruct, Z_Construct_UScriptStruct_FConcertLaserData_Statics::NewStructOps, TEXT("ConcertLaserData"), &Z_Registration_Info_UScriptStruct_ConcertLaserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertLaserData), 3860850461U) },
		{ FConcertClientVRPresenceUpdateEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertClientVRPresenceUpdateEvent_Statics::NewStructOps, TEXT("ConcertClientVRPresenceUpdateEvent"), &Z_Registration_Info_UScriptStruct_ConcertClientVRPresenceUpdateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertClientVRPresenceUpdateEvent), 1258694987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_3338130532(TEXT("/Script/ConcertSyncCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertPresenceEvents_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
