// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeRecorderSourceProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderSourceProperty() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UActorRecorderPropertyMap();
	TAKESCORE_API UClass* Z_Construct_UClass_UActorRecorderPropertyMap_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderAudioInputSettings();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderAudioInputSettings_NoRegister();
	TAKESCORE_API UScriptStruct* Z_Construct_UScriptStruct_FActorRecordedProperty();
	TAKESCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty();
	TAKESCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty();
	TAKESCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceProperty();
	UPackage* Z_Construct_UPackage__Script_TakesCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorRecordedProperty;
class UScriptStruct* FActorRecordedProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorRecordedProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorRecordedProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorRecordedProperty, (UObject*)Z_Construct_UPackage__Script_TakesCore(), TEXT("ActorRecordedProperty"));
	}
	return Z_Registration_Info_UScriptStruct_ActorRecordedProperty.OuterSingleton;
}
template<> TAKESCORE_API UScriptStruct* StaticStruct<FActorRecordedProperty>()
{
	return FActorRecordedProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorRecordedProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecorderName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RecorderName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorRecordedProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorRecordedProperty, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_PropertyName_MetaData), Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_PropertyName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FActorRecordedProperty*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActorRecordedProperty), &Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_RecorderName_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_RecorderName = { "RecorderName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorRecordedProperty, RecorderName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_RecorderName_MetaData), Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_RecorderName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_RecorderName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
		nullptr,
		&NewStructOps,
		"ActorRecordedProperty",
		Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::PropPointers),
		sizeof(FActorRecordedProperty),
		alignof(FActorRecordedProperty),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActorRecordedProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorRecordedProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorRecordedProperty.InnerSingleton, Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorRecordedProperty.InnerSingleton;
	}
	void UActorRecorderPropertyMap::StaticRegisterNativesUActorRecorderPropertyMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorRecorderPropertyMap);
	UClass* Z_Construct_UClass_UActorRecorderPropertyMap_NoRegister()
	{
		return UActorRecorderPropertyMap::StaticClass();
	}
	struct Z_Construct_UClass_UActorRecorderPropertyMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordedObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RecordedObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorRecorderPropertyMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecorderPropertyMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This represents a list of all possible properties and components on an actor\n* which can be recorded by the Actor Recorder and whether or not the user wishes\n* to record them. If you wish to expose a property to be recorded it needs to be marked\n* as \"Interp\" (C++) or \"Expose to Cinematics\" in Blueprints.\n*/" },
		{ "IncludePath", "TakeRecorderSourceProperty.h" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "This represents a list of all possible properties and components on an actor\nwhich can be recorded by the Actor Recorder and whether or not the user wishes\nto record them. If you wish to expose a property to be recorded it needs to be marked\nas \"Interp\" (C++) or \"Expose to Cinematics\" in Blueprints." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_RecordedObject_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_RecordedObject = { "RecordedObject", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorRecorderPropertyMap, RecordedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_RecordedObject_MetaData), Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_RecordedObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorRecordedProperty, METADATA_PARAMS(0, nullptr) }; // 3759307220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/* Represents properties exposed to Cinematics that can possibly be recorded. */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "Represents properties exposed to Cinematics that can possibly be recorded." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorRecorderPropertyMap, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties_MetaData) }; // 3759307220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_Inner_MetaData[] = {
		{ "Category", "Property" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorRecorderPropertyMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_Inner_MetaData), Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Property" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x001400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorRecorderPropertyMap, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_MetaData), Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorRecorderPropertyMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_RecordedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorRecorderPropertyMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorRecorderPropertyMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::ClassParams = {
		&UActorRecorderPropertyMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorRecorderPropertyMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorRecorderPropertyMap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UActorRecorderPropertyMap()
	{
		if (!Z_Registration_Info_UClass_UActorRecorderPropertyMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorRecorderPropertyMap.OuterSingleton, Z_Construct_UClass_UActorRecorderPropertyMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorRecorderPropertyMap.OuterSingleton;
	}
	template<> TAKESCORE_API UClass* StaticClass<UActorRecorderPropertyMap>()
	{
		return UActorRecorderPropertyMap::StaticClass();
	}
	UActorRecorderPropertyMap::UActorRecorderPropertyMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorRecorderPropertyMap);
	UActorRecorderPropertyMap::~UActorRecorderPropertyMap() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioInputDeviceInfoProperty;
class UScriptStruct* FAudioInputDeviceInfoProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioInputDeviceInfoProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioInputDeviceInfoProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty, (UObject*)Z_Construct_UPackage__Script_TakesCore(), TEXT("AudioInputDeviceInfoProperty"));
	}
	return Z_Registration_Info_UScriptStruct_AudioInputDeviceInfoProperty.OuterSingleton;
}
template<> TAKESCORE_API UScriptStruct* StaticStruct<FAudioInputDeviceInfoProperty>()
{
	return FAudioInputDeviceInfoProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreferredSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultDevice_MetaData[];
#endif
		static void NewProp_bIsDefaultDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Encapsulates audio device properties which are utilized by UI facing classes such as FAudioInputDeviceProperty.\n */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "Encapsulates audio device properties which are utilized by UI facing classes such as FAudioInputDeviceProperty." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioInputDeviceInfoProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** User friendly name of the audio device */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "User friendly name of the audio device" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceInfoProperty, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_DeviceName_MetaData), Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_DeviceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** The unique id used to identify the device */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "The unique id used to identify the device" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceInfoProperty, DeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_DeviceId_MetaData), Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_DeviceId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_InputChannels_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** The number input channels this device supports */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "The number input channels this device supports" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_InputChannels = { "InputChannels", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceInfoProperty, InputChannels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_InputChannels_MetaData), Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_InputChannels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_PreferredSampleRate_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** The preferred sample rate for this audio device */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "The preferred sample rate for this audio device" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_PreferredSampleRate = { "PreferredSampleRate", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceInfoProperty, PreferredSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_PreferredSampleRate_MetaData), Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_PreferredSampleRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_bIsDefaultDevice_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Boolean indicating if this device is the currently the system selected input device */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "Boolean indicating if this device is the currently the system selected input device" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_bIsDefaultDevice_SetBit(void* Obj)
	{
		((FAudioInputDeviceInfoProperty*)Obj)->bIsDefaultDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_bIsDefaultDevice = { "bIsDefaultDevice", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAudioInputDeviceInfoProperty), &Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_bIsDefaultDevice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_bIsDefaultDevice_MetaData), Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_bIsDefaultDevice_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_InputChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_PreferredSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewProp_bIsDefaultDevice,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
		nullptr,
		&NewStructOps,
		"AudioInputDeviceInfoProperty",
		Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::PropPointers),
		sizeof(FAudioInputDeviceInfoProperty),
		alignof(FAudioInputDeviceInfoProperty),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioInputDeviceInfoProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioInputDeviceInfoProperty.InnerSingleton, Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioInputDeviceInfoProperty.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioInputDeviceProperty;
class UScriptStruct* FAudioInputDeviceProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioInputDeviceProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioInputDeviceProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioInputDeviceProperty, (UObject*)Z_Construct_UPackage__Script_TakesCore(), TEXT("AudioInputDeviceProperty"));
	}
	return Z_Registration_Info_UScriptStruct_AudioInputDeviceProperty.OuterSingleton;
}
template<> TAKESCORE_API UScriptStruct* StaticStruct<FAudioInputDeviceProperty>()
{
	return FAudioInputDeviceProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSystemDefaultAudioDevice_MetaData[];
#endif
		static void NewProp_bUseSystemDefaultAudioDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSystemDefaultAudioDevice;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceInfoArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceInfoArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceInfoArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioInputBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioInputBufferSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Encapsulates the array of audio input devices which is populated by UTakeRecorderMicrophoneAudioManager and\n * utilized by the audio input device list in FAudioInputDevicePropertyCustomization.\n */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "Encapsulates the array of audio input devices which is populated by UTakeRecorderMicrophoneAudioManager and\nutilized by the audio input device list in FAudioInputDevicePropertyCustomization." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioInputDeviceProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_bUseSystemDefaultAudioDevice_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** Boolean indicating if the system selects audio device should be used or to use the selected device from the details panel */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "Boolean indicating if the system selects audio device should be used or to use the selected device from the details panel" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_bUseSystemDefaultAudioDevice_SetBit(void* Obj)
	{
		((FAudioInputDeviceProperty*)Obj)->bUseSystemDefaultAudioDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_bUseSystemDefaultAudioDevice = { "bUseSystemDefaultAudioDevice", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAudioInputDeviceProperty), &Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_bUseSystemDefaultAudioDevice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_bUseSystemDefaultAudioDevice_MetaData), Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_bUseSystemDefaultAudioDevice_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceInfoArray_Inner = { "DeviceInfoArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty, METADATA_PARAMS(0, nullptr) }; // 1968502921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceInfoArray_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/* Holds device information for each of the audio devices available on this system. */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "Holds device information for each of the audio devices available on this system." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceInfoArray = { "DeviceInfoArray", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceProperty, DeviceInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceInfoArray_MetaData), Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceInfoArray_MetaData) }; // 1968502921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** The unique id of the currently selected audio device */" },
		{ "DisplayName", "Audio Input Device" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "The unique id of the currently selected audio device" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceProperty, DeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceId_MetaData), Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_AudioInputBufferSize_MetaData[] = {
		{ "Category", "Property" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "256" },
		{ "Comment", "/** The desired buffer size used for audio callbacks during record */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "The desired buffer size used for audio callbacks during record" },
		{ "UIMax", "8192" },
		{ "UIMin", "256" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_AudioInputBufferSize = { "AudioInputBufferSize", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceProperty, AudioInputBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_AudioInputBufferSize_MetaData), Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_AudioInputBufferSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_bUseSystemDefaultAudioDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceInfoArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceInfoArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_DeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewProp_AudioInputBufferSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
		nullptr,
		&NewStructOps,
		"AudioInputDeviceProperty",
		Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::PropPointers),
		sizeof(FAudioInputDeviceProperty),
		alignof(FAudioInputDeviceProperty),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioInputDeviceProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioInputDeviceProperty.InnerSingleton, Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioInputDeviceProperty.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioInputDeviceChannelProperty;
class UScriptStruct* FAudioInputDeviceChannelProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioInputDeviceChannelProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioInputDeviceChannelProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty, (UObject*)Z_Construct_UPackage__Script_TakesCore(), TEXT("AudioInputDeviceChannelProperty"));
	}
	return Z_Registration_Info_UScriptStruct_AudioInputDeviceChannelProperty.OuterSingleton;
}
template<> TAKESCORE_API UScriptStruct* StaticStruct<FAudioInputDeviceChannelProperty>()
{
	return FAudioInputDeviceChannelProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioInputDeviceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioInputDeviceChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This class is used by Microphone sources to track the currently selected channel. It aslo\n * contains a local cache of the max channel count for the currently selected audio device.\n */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "This class is used by Microphone sources to track the currently selected channel. It aslo\ncontains a local cache of the max channel count for the currently selected audio device." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioInputDeviceChannelProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::NewProp_AudioInputDeviceChannel_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/** The currently selected channel from the details panel for this source */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "The currently selected channel from the details panel for this source" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::NewProp_AudioInputDeviceChannel = { "AudioInputDeviceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceChannelProperty, AudioInputDeviceChannel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::NewProp_AudioInputDeviceChannel_MetaData), Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::NewProp_AudioInputDeviceChannel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::NewProp_AudioInputDeviceChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
		nullptr,
		&NewStructOps,
		"AudioInputDeviceChannelProperty",
		Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::PropPointers),
		sizeof(FAudioInputDeviceChannelProperty),
		alignof(FAudioInputDeviceChannelProperty),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioInputDeviceChannelProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioInputDeviceChannelProperty.InnerSingleton, Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioInputDeviceChannelProperty.InnerSingleton;
	}
	void UTakeRecorderAudioInputSettings::StaticRegisterNativesUTakeRecorderAudioInputSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderAudioInputSettings);
	UClass* Z_Construct_UClass_UTakeRecorderAudioInputSettings_NoRegister()
	{
		return UTakeRecorderAudioInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderAudioInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderAudioInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderAudioInputSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderAudioInputSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides access to the UI code for registering OnAudioInputDeviceChanged delegates.\n */" },
		{ "IncludePath", "TakeRecorderSourceProperty.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "Provides access to the UI code for registering OnAudioInputDeviceChanged delegates." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderAudioInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderAudioInputSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderAudioInputSettings_Statics::ClassParams = {
		&UTakeRecorderAudioInputSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderAudioInputSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UTakeRecorderAudioInputSettings_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTakeRecorderAudioInputSettings()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderAudioInputSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderAudioInputSettings.OuterSingleton, Z_Construct_UClass_UTakeRecorderAudioInputSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderAudioInputSettings.OuterSingleton;
	}
	template<> TAKESCORE_API UClass* StaticClass<UTakeRecorderAudioInputSettings>()
	{
		return UTakeRecorderAudioInputSettings::StaticClass();
	}
	UTakeRecorderAudioInputSettings::UTakeRecorderAudioInputSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderAudioInputSettings);
	UTakeRecorderAudioInputSettings::~UTakeRecorderAudioInputSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ScriptStructInfo[] = {
		{ FActorRecordedProperty::StaticStruct, Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewStructOps, TEXT("ActorRecordedProperty"), &Z_Registration_Info_UScriptStruct_ActorRecordedProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorRecordedProperty), 3759307220U) },
		{ FAudioInputDeviceInfoProperty::StaticStruct, Z_Construct_UScriptStruct_FAudioInputDeviceInfoProperty_Statics::NewStructOps, TEXT("AudioInputDeviceInfoProperty"), &Z_Registration_Info_UScriptStruct_AudioInputDeviceInfoProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioInputDeviceInfoProperty), 1968502921U) },
		{ FAudioInputDeviceProperty::StaticStruct, Z_Construct_UScriptStruct_FAudioInputDeviceProperty_Statics::NewStructOps, TEXT("AudioInputDeviceProperty"), &Z_Registration_Info_UScriptStruct_AudioInputDeviceProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioInputDeviceProperty), 952255520U) },
		{ FAudioInputDeviceChannelProperty::StaticStruct, Z_Construct_UScriptStruct_FAudioInputDeviceChannelProperty_Statics::NewStructOps, TEXT("AudioInputDeviceChannelProperty"), &Z_Registration_Info_UScriptStruct_AudioInputDeviceChannelProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioInputDeviceChannelProperty), 1811717343U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorRecorderPropertyMap, UActorRecorderPropertyMap::StaticClass, TEXT("UActorRecorderPropertyMap"), &Z_Registration_Info_UClass_UActorRecorderPropertyMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorRecorderPropertyMap), 2040714525U) },
		{ Z_Construct_UClass_UTakeRecorderAudioInputSettings, UTakeRecorderAudioInputSettings::StaticClass, TEXT("UTakeRecorderAudioInputSettings"), &Z_Registration_Info_UClass_UTakeRecorderAudioInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderAudioInputSettings), 4212684771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_3613649624(TEXT("/Script/TakesCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
