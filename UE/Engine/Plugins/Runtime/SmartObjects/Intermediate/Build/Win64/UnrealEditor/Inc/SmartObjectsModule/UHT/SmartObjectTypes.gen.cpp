// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSlotValidationFilter();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSlotValidationFilter_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSpacePartition();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSpacePartition_NoRegister();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectActorUserData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectEventData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHandle();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotIndex();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotReference();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotStateData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectTraceParams();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectUserHandle();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy;
	static UEnum* ESmartObjectTagMergingPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectTagMergingPolicy"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectTagMergingPolicy>()
	{
		return ESmartObjectTagMergingPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enumerators[] = {
		{ "ESmartObjectTagMergingPolicy::Combine", (int64)ESmartObjectTagMergingPolicy::Combine },
		{ "ESmartObjectTagMergingPolicy::Override", (int64)ESmartObjectTagMergingPolicy::Override },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Combine.Comment", "/** Tags are combined (parent object and slot) and TagQuery from the request will be run against the combined list. */" },
		{ "Combine.Name", "ESmartObjectTagMergingPolicy::Combine" },
		{ "Combine.ToolTip", "Tags are combined (parent object and slot) and TagQuery from the request will be run against the combined list." },
		{ "Comment", "/** Indicates how Tags from slots and parent object are combined to be evaluated by a TagQuery from a find request. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "Override.Comment", "/** Tags in slot (if any) will be used instead of the parent object Tags when running the TagQuery from a request. Empty Tags on a slot indicates no override. */" },
		{ "Override.Name", "ESmartObjectTagMergingPolicy::Override" },
		{ "Override.ToolTip", "Tags in slot (if any) will be used instead of the parent object Tags when running the TagQuery from a request. Empty Tags on a slot indicates no override." },
		{ "ToolTip", "Indicates how Tags from slots and parent object are combined to be evaluated by a TagQuery from a find request." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectTagMergingPolicy",
		"ESmartObjectTagMergingPolicy",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy;
	static UEnum* ESmartObjectTagFilteringPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectTagFilteringPolicy"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectTagFilteringPolicy>()
	{
		return ESmartObjectTagFilteringPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enumerators[] = {
		{ "ESmartObjectTagFilteringPolicy::NoFilter", (int64)ESmartObjectTagFilteringPolicy::NoFilter },
		{ "ESmartObjectTagFilteringPolicy::Combine", (int64)ESmartObjectTagFilteringPolicy::Combine },
		{ "ESmartObjectTagFilteringPolicy::Override", (int64)ESmartObjectTagFilteringPolicy::Override },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Combine.Comment", "/** Both TagQueries (parent object and slot) will be applied to the Tags provided by a request. */" },
		{ "Combine.Name", "ESmartObjectTagFilteringPolicy::Combine" },
		{ "Combine.ToolTip", "Both TagQueries (parent object and slot) will be applied to the Tags provided by a request." },
		{ "Comment", "/** Indicates how TagQueries from slots and parent object will be processed against Tags from a find request. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "NoFilter.Comment", "/** TagQueries in the object and slot definitions are not used by the framework to filter results. Users can access them and perform its own filtering. */" },
		{ "NoFilter.Name", "ESmartObjectTagFilteringPolicy::NoFilter" },
		{ "NoFilter.ToolTip", "TagQueries in the object and slot definitions are not used by the framework to filter results. Users can access them and perform its own filtering." },
		{ "Override.Comment", "/** TagQuery in slot (if any) will be used instead of the parent object TagQuery to run against the Tags provided by a request. EmptyTagQuery on a slot indicates no override. */" },
		{ "Override.Name", "ESmartObjectTagFilteringPolicy::Override" },
		{ "Override.ToolTip", "TagQuery in slot (if any) will be used instead of the parent object TagQuery to run against the Tags provided by a request. EmptyTagQuery on a slot indicates no override." },
		{ "ToolTip", "Indicates how TagQueries from slots and parent object will be processed against Tags from a find request." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectTagFilteringPolicy",
		"ESmartObjectTagFilteringPolicy",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectSlotNavigationLocationType;
	static UEnum* ESmartObjectSlotNavigationLocationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectSlotNavigationLocationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectSlotNavigationLocationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectSlotNavigationLocationType"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectSlotNavigationLocationType.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectSlotNavigationLocationType>()
	{
		return ESmartObjectSlotNavigationLocationType_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType_Statics::Enumerators[] = {
		{ "ESmartObjectSlotNavigationLocationType::Entry", (int64)ESmartObjectSlotNavigationLocationType::Entry },
		{ "ESmartObjectSlotNavigationLocationType::Exit", (int64)ESmartObjectSlotNavigationLocationType::Exit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enum indicating if we're looking for a location to enter or exit the Smart Object slot.\n */" },
		{ "Entry.Comment", "/** Find a location to enter the slot. */" },
		{ "Entry.Name", "ESmartObjectSlotNavigationLocationType::Entry" },
		{ "Entry.ToolTip", "Find a location to enter the slot." },
		{ "Exit.Comment", "/** Find a location to exit the slot. */" },
		{ "Exit.Name", "ESmartObjectSlotNavigationLocationType::Exit" },
		{ "Exit.ToolTip", "Find a location to exit the slot." },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Enum indicating if we're looking for a location to enter or exit the Smart Object slot." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectSlotNavigationLocationType",
		"ESmartObjectSlotNavigationLocationType",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectSlotNavigationLocationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectSlotNavigationLocationType.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectSlotNavigationLocationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectUserHandle;
class UScriptStruct* FSmartObjectUserHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectUserHandle, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectUserHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectUserHandle>()
{
	return FSmartObjectUserHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Handle to a smartobject user.\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Handle to a smartobject user." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectUserHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectUserHandle, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewProp_ID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectUserHandle",
		Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::PropPointers),
		sizeof(FSmartObjectUserHandle),
		alignof(FSmartObjectUserHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectUserHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectUserHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectHandle;
class UScriptStruct* FSmartObjectHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectHandle, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectHandle.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectHandle>()
{
	return FSmartObjectHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Handle to a registered smartobject.\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Handle to a registered smartobject." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectHandle, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewProp_ID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectHandle",
		Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::PropPointers),
		sizeof(FSmartObjectHandle),
		alignof(FSmartObjectHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectHandle.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle;
class UScriptStruct* FSmartObjectSlotHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotHandle, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotHandle>()
{
	return FSmartObjectSlotHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct used to identify a runtime slot instance\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Struct used to identify a runtime slot instance" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotHandle",
		nullptr,
		0,
		sizeof(FSmartObjectSlotHandle),
		alignof(FSmartObjectSlotHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData;
class UScriptStruct* FSmartObjectSlotDefinitionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotDefinitionData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotDefinitionData>()
{
	return FSmartObjectSlotDefinitionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the base struct to inherit from to store custom definition data within the main slot definition\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "This is the base struct to inherit from to store custom definition data within the main slot definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotDefinitionData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotDefinitionData",
		nullptr,
		0,
		sizeof(FSmartObjectSlotDefinitionData),
		alignof(FSmartObjectSlotDefinitionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData;
class UScriptStruct* FSmartObjectSlotStateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotStateData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotStateData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotStateData>()
{
	return FSmartObjectSlotStateData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the base struct to inherit from to store custom state data associated to a slot\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "This is the base struct to inherit from to store custom state data associated to a slot" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotStateData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotStateData",
		nullptr,
		0,
		sizeof(FSmartObjectSlotStateData),
		alignof(FSmartObjectSlotStateData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotStateData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData;
class UScriptStruct* FSmartObjectSpatialEntryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSpatialEntryData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSpatialEntryData>()
{
	return FSmartObjectSpatialEntryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the base struct to inherit from to store some data associated to a specific entry in the spatial representation structure\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "This is the base struct to inherit from to store some data associated to a specific entry in the spatial representation structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSpatialEntryData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSpatialEntryData",
		nullptr,
		0,
		sizeof(FSmartObjectSpatialEntryData),
		alignof(FSmartObjectSpatialEntryData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData.InnerSingleton;
	}
	void USmartObjectSpacePartition::StaticRegisterNativesUSmartObjectSpacePartition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectSpacePartition);
	UClass* Z_Construct_UClass_USmartObjectSpacePartition_NoRegister()
	{
		return USmartObjectSpacePartition::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectSpacePartition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectSpacePartition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSpacePartition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSpacePartition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for space partitioning structure that can be used to store smart object locations\n */" },
		{ "IncludePath", "SmartObjectTypes.h" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Base class for space partitioning structure that can be used to store smart object locations" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectSpacePartition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectSpacePartition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectSpacePartition_Statics::ClassParams = {
		&USmartObjectSpacePartition::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSpacePartition_Statics::Class_MetaDataParams), Z_Construct_UClass_USmartObjectSpacePartition_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USmartObjectSpacePartition()
	{
		if (!Z_Registration_Info_UClass_USmartObjectSpacePartition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectSpacePartition.OuterSingleton, Z_Construct_UClass_USmartObjectSpacePartition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectSpacePartition.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectSpacePartition>()
	{
		return USmartObjectSpacePartition::StaticClass();
	}
	USmartObjectSpacePartition::USmartObjectSpacePartition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectSpacePartition);
	USmartObjectSpacePartition::~USmartObjectSpacePartition() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex;
class UScriptStruct* FSmartObjectSlotIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotIndex, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotIndex"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotIndex>()
{
	return FSmartObjectSlotIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Helper struct to wrap basic functionalities to store the index of a slot in a SmartObject definition\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Helper struct to wrap basic functionalities to store the index of a slot in a SmartObject definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotIndex, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewProp_Index_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewProp_Index_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotIndex",
		Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::PropPointers),
		sizeof(FSmartObjectSlotIndex),
		alignof(FSmartObjectSlotIndex),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotReference;
class UScriptStruct* FSmartObjectSlotReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotReference, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotReference"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotReference>()
{
	return FSmartObjectSlotReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Reference to a specific Smart Object slot in a Smart Object Definition.\n * When placed on a slot definition data, the Index is resolved automatically when changed, on load and save. \n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Reference to a specific Smart Object slot in a Smart Object Definition.\nWhen placed on a slot definition data, the Index is resolved automatically when changed, on load and save." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotReference, Index), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_Index_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_Index_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_SlotID_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_SlotID = { "SlotID", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotReference, SlotID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_SlotID_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_SlotID_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_Index,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewProp_SlotID,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotReference",
		Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::PropPointers),
		sizeof(FSmartObjectSlotReference),
		alignof(FSmartObjectSlotReference),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotReference()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotReference.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectTraceType;
	static UEnum* ESmartObjectTraceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectTraceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectTraceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectTraceType"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectTraceType.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectTraceType>()
	{
		return ESmartObjectTraceType_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType_Statics::Enumerators[] = {
		{ "ESmartObjectTraceType::ByChannel", (int64)ESmartObjectTraceType::ByChannel },
		{ "ESmartObjectTraceType::ByProfile", (int64)ESmartObjectTraceType::ByProfile },
		{ "ESmartObjectTraceType::ByObjectTypes", (int64)ESmartObjectTraceType::ByObjectTypes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType_Statics::Enum_MetaDataParams[] = {
		{ "ByChannel.Name", "ESmartObjectTraceType::ByChannel" },
		{ "ByObjectTypes.Name", "ESmartObjectTraceType::ByObjectTypes" },
		{ "ByProfile.Name", "ESmartObjectTraceType::ByProfile" },
		{ "Comment", "/** Indicates how TagQueries from slots and parent object will be processed against Tags from a find request. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Indicates how TagQueries from slots and parent object will be processed against Tags from a find request." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectTraceType",
		"ESmartObjectTraceType",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectTraceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectTraceType.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectTraceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectTraceParams;
class UScriptStruct* FSmartObjectTraceParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectTraceParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectTraceParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectTraceParams, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectTraceParams"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectTraceParams.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectTraceParams>()
{
	return FSmartObjectTraceParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[];
#endif
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct used to define how traces should be handled. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Struct used to define how traces should be handled." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectTraceParams>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Type of trace to use. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Type of trace to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectTraceParams, Type), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTraceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_Type_MetaData) }; // 3531132970
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Trace channel to use to determine collisions. */" },
		{ "EditCondition", "Type == ESmartObjectTraceType::ByChannel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Trace channel to use to determine collisions." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectTraceParams, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_TraceChannel_MetaData), Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_TraceChannel_MetaData) }; // 2725057287
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Object types to use to determine collisions. */" },
		{ "EditCondition", "Type == ESmartObjectTraceType::ByObjectTypes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Object types to use to determine collisions." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectTraceParams, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_ObjectTypes_MetaData), Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_ObjectTypes_MetaData) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Collision profile to use to determine collisions. */" },
		{ "EditCondition", "Type == ESmartObjectTraceType::ByProfile" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Collision profile to use to determine collisions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectTraceParams, CollisionProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_CollisionProfile_MetaData), Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_CollisionProfile_MetaData) }; // 3144723258
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Whether we should trace against complex collision */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Whether we should trace against complex collision" },
	};
#endif
	void Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((FSmartObjectTraceParams*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSmartObjectTraceParams), &Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_bTraceComplex_MetaData), Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_bTraceComplex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_ObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_ObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_CollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewProp_bTraceComplex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectTraceParams",
		Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::PropPointers),
		sizeof(FSmartObjectTraceParams),
		alignof(FSmartObjectTraceParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectTraceParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectTraceParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectTraceParams.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectTraceParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectUserCapsuleParams;
class UScriptStruct* FSmartObjectUserCapsuleParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectUserCapsuleParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectUserCapsuleParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectUserCapsuleParams"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectUserCapsuleParams.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectUserCapsuleParams>()
{
	return FSmartObjectUserCapsuleParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct defining Smart Object user capsule size. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Struct defining Smart Object user capsule size." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectUserCapsuleParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Radius of the capsule */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Radius of the capsule" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectUserCapsuleParams, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_Radius_MetaData), Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_Radius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Full height of the capsule */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Full height of the capsule" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectUserCapsuleParams, Height), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_Height_MetaData), Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_Height_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_StepHeight_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Step up height. This space is ignored when testing collisions. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Step up height. This space is ignored when testing collisions." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectUserCapsuleParams, StepHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_StepHeight_MetaData), Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_StepHeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewProp_StepHeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectUserCapsuleParams",
		Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::PropPointers),
		sizeof(FSmartObjectUserCapsuleParams),
		alignof(FSmartObjectUserCapsuleParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectUserCapsuleParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectUserCapsuleParams.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectUserCapsuleParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotValidationParams;
class UScriptStruct* FSmartObjectSlotValidationParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotValidationParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotValidationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotValidationParams"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotValidationParams.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotValidationParams>()
{
	return FSmartObjectSlotValidationParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationFilter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NavigationFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundTraceParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundTraceParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionTraceParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionTraceParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseNavigationCapsuleSize_MetaData[];
#endif
		static void NewProp_bUseNavigationCapsuleSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNavigationCapsuleSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserCapsule_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserCapsule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Parameters for Smart Object navigation and collision validation. \n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Parameters for Smart Object navigation and collision validation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotValidationParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_NavigationFilter_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Navigation filter used to validate entrance locations. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Navigation filter used to validate entrance locations." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_NavigationFilter = { "NavigationFilter", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotValidationParams, NavigationFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_NavigationFilter_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_NavigationFilter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_SearchExtents_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** How far we allow the validated location to be from the specified navigation location. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "How far we allow the validated location to be from the specified navigation location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_SearchExtents = { "SearchExtents", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotValidationParams, SearchExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_SearchExtents_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_SearchExtents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_GroundTraceParameters_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Trace parameters used for finding navigation location on ground. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Trace parameters used for finding navigation location on ground." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_GroundTraceParameters = { "GroundTraceParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotValidationParams, GroundTraceParameters), Z_Construct_UScriptStruct_FSmartObjectTraceParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_GroundTraceParameters_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_GroundTraceParameters_MetaData) }; // 1036655095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_TransitionTraceParameters_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Trace parameters user for checking if the transition between navigation location and slot is unblocked. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Trace parameters user for checking if the transition between navigation location and slot is unblocked." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_TransitionTraceParameters = { "TransitionTraceParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotValidationParams, TransitionTraceParameters), Z_Construct_UScriptStruct_FSmartObjectTraceParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_TransitionTraceParameters_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_TransitionTraceParameters_MetaData) }; // 1036655095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_bUseNavigationCapsuleSize_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If true, the capsule size is queried from the user actor via INavAgentInterface. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "If true, the capsule size is queried from the user actor via INavAgentInterface." },
	};
#endif
	void Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_bUseNavigationCapsuleSize_SetBit(void* Obj)
	{
		((FSmartObjectSlotValidationParams*)Obj)->bUseNavigationCapsuleSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_bUseNavigationCapsuleSize = { "bUseNavigationCapsuleSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSmartObjectSlotValidationParams), &Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_bUseNavigationCapsuleSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_bUseNavigationCapsuleSize_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_bUseNavigationCapsuleSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_UserCapsule_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Dimensions of the capsule used for testing if user can fit into a specific location. */" },
		{ "EditCondition", "bTestUserOverlapOnEntrance == true && bUseNavigationCapsuleSize == false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Dimensions of the capsule used for testing if user can fit into a specific location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_UserCapsule = { "UserCapsule", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotValidationParams, UserCapsule), Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_UserCapsule_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_UserCapsule_MetaData) }; // 359789534
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_NavigationFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_SearchExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_GroundTraceParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_TransitionTraceParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_bUseNavigationCapsuleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewProp_UserCapsule,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectSlotValidationParams",
		Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::PropPointers),
		sizeof(FSmartObjectSlotValidationParams),
		alignof(FSmartObjectSlotValidationParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotValidationParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotValidationParams.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotValidationParams.InnerSingleton;
	}
	void USmartObjectSlotValidationFilter::StaticRegisterNativesUSmartObjectSlotValidationFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectSlotValidationFilter);
	UClass* Z_Construct_UClass_USmartObjectSlotValidationFilter_NoRegister()
	{
		return USmartObjectSlotValidationFilter::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntryParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEntryParametersForExit_MetaData[];
#endif
		static void NewProp_bUseEntryParametersForExit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEntryParametersForExit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExitParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class used to define settings for Smart Object navigation and collision validation.\n * It is possible to specify two set of validation parameters. The one labeled \"entry\" is used for validating\n * entry locations and other general collision validation.\n * A separate set can be defined for checking exit locations. This allows the exit location checking to be relaxed.\n * E.g. we might not allow to enter the SO on water area, but it is fine to exit on water.\n * The values of the CDO are used, the users are expected to derive from this class to create custom settings. \n */" },
		{ "IncludePath", "SmartObjectTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Class used to define settings for Smart Object navigation and collision validation.\nIt is possible to specify two set of validation parameters. The one labeled \"entry\" is used for validating\nentry locations and other general collision validation.\nA separate set can be defined for checking exit locations. This allows the exit location checking to be relaxed.\nE.g. we might not allow to enter the SO on water area, but it is fine to exit on water.\nThe values of the CDO are used, the users are expected to derive from this class to create custom settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_EntryParameters_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Parameters to use for validating entry locations or general collision validation. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Parameters to use for validating entry locations or general collision validation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_EntryParameters = { "EntryParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectSlotValidationFilter, EntryParameters), Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_EntryParameters_MetaData), Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_EntryParameters_MetaData) }; // 1006181012
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_bUseEntryParametersForExit_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If true, use separate settings for validating exit locations. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "If true, use separate settings for validating exit locations." },
	};
#endif
	void Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_bUseEntryParametersForExit_SetBit(void* Obj)
	{
		((USmartObjectSlotValidationFilter*)Obj)->bUseEntryParametersForExit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_bUseEntryParametersForExit = { "bUseEntryParametersForExit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USmartObjectSlotValidationFilter), &Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_bUseEntryParametersForExit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_bUseEntryParametersForExit_MetaData), Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_bUseEntryParametersForExit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_ExitParameters_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Parameters to use for validating exit locations. The separate set allows to specify looser settings on exits. */" },
		{ "EditCondition", "bUseEntryParametersForExit == false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Parameters to use for validating exit locations. The separate set allows to specify looser settings on exits." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_ExitParameters = { "ExitParameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartObjectSlotValidationFilter, ExitParameters), Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_ExitParameters_MetaData), Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_ExitParameters_MetaData) }; // 1006181012
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_EntryParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_bUseEntryParametersForExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::NewProp_ExitParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectSlotValidationFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::ClassParams = {
		&USmartObjectSlotValidationFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USmartObjectSlotValidationFilter()
	{
		if (!Z_Registration_Info_UClass_USmartObjectSlotValidationFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectSlotValidationFilter.OuterSingleton, Z_Construct_UClass_USmartObjectSlotValidationFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectSlotValidationFilter.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectSlotValidationFilter>()
	{
		return USmartObjectSlotValidationFilter::StaticClass();
	}
	USmartObjectSlotValidationFilter::USmartObjectSlotValidationFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectSlotValidationFilter);
	USmartObjectSlotValidationFilter::~USmartObjectSlotValidationFilter() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectChangeReason;
	static UEnum* ESmartObjectChangeReason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectChangeReason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectChangeReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectChangeReason"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectChangeReason.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectChangeReason>()
	{
		return ESmartObjectChangeReason_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enumerators[] = {
		{ "ESmartObjectChangeReason::None", (int64)ESmartObjectChangeReason::None },
		{ "ESmartObjectChangeReason::OnEvent", (int64)ESmartObjectChangeReason::OnEvent },
		{ "ESmartObjectChangeReason::OnTagAdded", (int64)ESmartObjectChangeReason::OnTagAdded },
		{ "ESmartObjectChangeReason::OnTagRemoved", (int64)ESmartObjectChangeReason::OnTagRemoved },
		{ "ESmartObjectChangeReason::OnClaimed", (int64)ESmartObjectChangeReason::OnClaimed },
		{ "ESmartObjectChangeReason::OnOccupied", (int64)ESmartObjectChangeReason::OnOccupied },
		{ "ESmartObjectChangeReason::OnReleased", (int64)ESmartObjectChangeReason::OnReleased },
		{ "ESmartObjectChangeReason::OnSlotEnabled", (int64)ESmartObjectChangeReason::OnSlotEnabled },
		{ "ESmartObjectChangeReason::OnSlotDisabled", (int64)ESmartObjectChangeReason::OnSlotDisabled },
		{ "ESmartObjectChangeReason::OnObjectEnabled", (int64)ESmartObjectChangeReason::OnObjectEnabled },
		{ "ESmartObjectChangeReason::OnObjectDisabled", (int64)ESmartObjectChangeReason::OnObjectDisabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes how Smart Object or slot was changed.\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "None.Comment", "/** No Change. */" },
		{ "None.Name", "ESmartObjectChangeReason::None" },
		{ "None.ToolTip", "No Change." },
		{ "OnClaimed.Comment", "/** Slot was claimed. */" },
		{ "OnClaimed.Name", "ESmartObjectChangeReason::OnClaimed" },
		{ "OnClaimed.ToolTip", "Slot was claimed." },
		{ "OnEvent.Comment", "/** External event sent. */" },
		{ "OnEvent.Name", "ESmartObjectChangeReason::OnEvent" },
		{ "OnEvent.ToolTip", "External event sent." },
		{ "OnObjectDisabled.Comment", "/** Object was disabled. */" },
		{ "OnObjectDisabled.Name", "ESmartObjectChangeReason::OnObjectDisabled" },
		{ "OnObjectDisabled.ToolTip", "Object was disabled." },
		{ "OnObjectEnabled.Comment", "/** Object was enabled. */" },
		{ "OnObjectEnabled.Name", "ESmartObjectChangeReason::OnObjectEnabled" },
		{ "OnObjectEnabled.ToolTip", "Object was enabled." },
		{ "OnOccupied.Comment", "/** Slot is now occupied*/" },
		{ "OnOccupied.Name", "ESmartObjectChangeReason::OnOccupied" },
		{ "OnOccupied.ToolTip", "Slot is now occupied" },
		{ "OnReleased.Comment", "/** Slot claim was released. */" },
		{ "OnReleased.Name", "ESmartObjectChangeReason::OnReleased" },
		{ "OnReleased.ToolTip", "Slot claim was released." },
		{ "OnSlotDisabled.Comment", "/** Slot was disabled. */" },
		{ "OnSlotDisabled.Name", "ESmartObjectChangeReason::OnSlotDisabled" },
		{ "OnSlotDisabled.ToolTip", "Slot was disabled." },
		{ "OnSlotEnabled.Comment", "/** Slot was enabled. */" },
		{ "OnSlotEnabled.Name", "ESmartObjectChangeReason::OnSlotEnabled" },
		{ "OnSlotEnabled.ToolTip", "Slot was enabled." },
		{ "OnTagAdded.Comment", "/** A tag was added. */" },
		{ "OnTagAdded.Name", "ESmartObjectChangeReason::OnTagAdded" },
		{ "OnTagAdded.ToolTip", "A tag was added." },
		{ "OnTagRemoved.Comment", "/** A tag was removed. */" },
		{ "OnTagRemoved.Name", "ESmartObjectChangeReason::OnTagRemoved" },
		{ "OnTagRemoved.ToolTip", "A tag was removed." },
		{ "ToolTip", "Describes how Smart Object or slot was changed." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectChangeReason",
		"ESmartObjectChangeReason",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectChangeReason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectChangeReason.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectChangeReason.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectEventData;
class UScriptStruct* FSmartObjectEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectEventData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectEventData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectEventData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectEventData>()
{
	return FSmartObjectEventData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectEventData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmartObjectHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Reason;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Strict describing a change in Smart Object or Slot. \n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Strict describing a change in Smart Object or Slot." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectEventData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SmartObjectHandle_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Handle to the changed Smart Object. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Handle to the changed Smart Object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SmartObjectHandle = { "SmartObjectHandle", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectEventData, SmartObjectHandle), Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SmartObjectHandle_MetaData), Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SmartObjectHandle_MetaData) }; // 1193682404
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SlotHandle_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Handle to the changed slot, if invalid, the event is for the object. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Handle to the changed slot, if invalid, the event is for the object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SlotHandle = { "SlotHandle", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectEventData, SlotHandle), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SlotHandle_MetaData), Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SlotHandle_MetaData) }; // 3459972307
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Change reason. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Change reason." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectEventData, Reason), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectChangeReason, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason_MetaData), Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason_MetaData) }; // 1035593282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Added/Removed tag, or event tag, depending on Reason. */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Added/Removed tag, or event tag, depending on Reason." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectEventData, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Tag_MetaData), Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Tag_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SmartObjectHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_SlotHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Reason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectEventData",
		Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::PropPointers),
		sizeof(FSmartObjectEventData),
		alignof(FSmartObjectEventData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectEventData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectEventData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectEventData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectEventData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectActorUserData;
class UScriptStruct* FSmartObjectActorUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectActorUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectActorUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectActorUserData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectActorUserData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectActorUserData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectActorUserData>()
{
	return FSmartObjectActorUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UserActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct that can be used to pass data to the find or filtering methods.\n * Properties will be used as user data to fill values expected by the world condition schema\n * specified by the smart object definition.\n *\x09\x09""e.g. FilterSlotsBySelectionConditions(SlotHandles, FConstStructView::Make(FSmartObjectActorUserData(Pawn)));\n *\n * It can be inherited from to provide additional data to another world condition schema inheriting\n * from USmartObjectWorldConditionSchema.\n *\x09""e.g.\n *\x09\x09UCLASS()\n *\x09\x09""class USmartObjectWorldConditionExtendedSchema : public USmartObjectWorldConditionSchema\n *\x09\x09{\n *\x09\x09\x09...\n *\x09\x09\x09USmartObjectWorldConditionExtendedSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)\n *\x09\x09\x09{\n *\x09\x09\x09\x09OtherActorRef = AddContextDataDesc(TEXT(\"OtherActor\"), AActor::StaticClass(), EWorldConditionContextDataType::Dynamic);\n *\x09\x09\x09}\n *\x09\x09\x09\n *\x09\x09\x09""FWorldConditionContextDataRef OtherActorRef;\n *\x09\x09};\n *\n *\x09\x09USTRUCT()\n *\x09\x09struct FSmartObjectActorExtendedUserData : public FSmartObjectActorUserData\n *\x09\x09{\n *\x09\x09\x09UPROPERTY()\n *\x09\x09\x09TWeakObjectPtr<const AActor> OtherActor = nullptr;\n *\x09\x09}\n *\n * The struct can also be used to be added to a Smart Object slot when it gets claimed.\n *\x09\x09""e.g. Claim(SlotHandle, FConstStructView::Make(FSmartObjectActorUserData(Pawn)));\n */" },
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "ToolTip", "Struct that can be used to pass data to the find or filtering methods.\nProperties will be used as user data to fill values expected by the world condition schema\nspecified by the smart object definition.\n            e.g. FilterSlotsBySelectionConditions(SlotHandles, FConstStructView::Make(FSmartObjectActorUserData(Pawn)));\n\nIt can be inherited from to provide additional data to another world condition schema inheriting\nfrom USmartObjectWorldConditionSchema.\n    e.g.\n            UCLASS()\n            class USmartObjectWorldConditionExtendedSchema : public USmartObjectWorldConditionSchema\n            {\n                    ...\n                    USmartObjectWorldConditionExtendedSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)\n                    {\n                            OtherActorRef = AddContextDataDesc(TEXT(\"OtherActor\"), AActor::StaticClass(), EWorldConditionContextDataType::Dynamic);\n                    }\n\n                    FWorldConditionContextDataRef OtherActorRef;\n            };\n\n            USTRUCT()\n            struct FSmartObjectActorExtendedUserData : public FSmartObjectActorUserData\n            {\n                    UPROPERTY()\n                    TWeakObjectPtr<const AActor> OtherActor = nullptr;\n            }\n\nThe struct can also be used to be added to a Smart Object slot when it gets claimed.\n            e.g. Claim(SlotHandle, FConstStructView::Make(FSmartObjectActorUserData(Pawn)));" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectActorUserData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::NewProp_UserActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::NewProp_UserActor = { "UserActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectActorUserData, UserActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::NewProp_UserActor_MetaData), Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::NewProp_UserActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::NewProp_UserActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectActorUserData",
		Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::PropPointers),
		sizeof(FSmartObjectActorUserData),
		alignof(FSmartObjectActorUserData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectActorUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectActorUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectActorUserData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectActorUserData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::EnumInfo[] = {
		{ ESmartObjectTagMergingPolicy_StaticEnum, TEXT("ESmartObjectTagMergingPolicy"), &Z_Registration_Info_UEnum_ESmartObjectTagMergingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1213756766U) },
		{ ESmartObjectTagFilteringPolicy_StaticEnum, TEXT("ESmartObjectTagFilteringPolicy"), &Z_Registration_Info_UEnum_ESmartObjectTagFilteringPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3411937515U) },
		{ ESmartObjectSlotNavigationLocationType_StaticEnum, TEXT("ESmartObjectSlotNavigationLocationType"), &Z_Registration_Info_UEnum_ESmartObjectSlotNavigationLocationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3095220697U) },
		{ ESmartObjectTraceType_StaticEnum, TEXT("ESmartObjectTraceType"), &Z_Registration_Info_UEnum_ESmartObjectTraceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3531132970U) },
		{ ESmartObjectChangeReason_StaticEnum, TEXT("ESmartObjectChangeReason"), &Z_Registration_Info_UEnum_ESmartObjectChangeReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1035593282U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectUserHandle::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectUserHandle_Statics::NewStructOps, TEXT("SmartObjectUserHandle"), &Z_Registration_Info_UScriptStruct_SmartObjectUserHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectUserHandle), 2365710853U) },
		{ FSmartObjectHandle::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectHandle_Statics::NewStructOps, TEXT("SmartObjectHandle"), &Z_Registration_Info_UScriptStruct_SmartObjectHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectHandle), 1193682404U) },
		{ FSmartObjectSlotHandle::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotHandle_Statics::NewStructOps, TEXT("SmartObjectSlotHandle"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotHandle), 3459972307U) },
		{ FSmartObjectSlotDefinitionData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData_Statics::NewStructOps, TEXT("SmartObjectSlotDefinitionData"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotDefinitionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotDefinitionData), 1752532302U) },
		{ FSmartObjectSlotStateData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotStateData_Statics::NewStructOps, TEXT("SmartObjectSlotStateData"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotStateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotStateData), 1158219905U) },
		{ FSmartObjectSpatialEntryData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData_Statics::NewStructOps, TEXT("SmartObjectSpatialEntryData"), &Z_Registration_Info_UScriptStruct_SmartObjectSpatialEntryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSpatialEntryData), 3526668873U) },
		{ FSmartObjectSlotIndex::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotIndex_Statics::NewStructOps, TEXT("SmartObjectSlotIndex"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotIndex), 1147794839U) },
		{ FSmartObjectSlotReference::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotReference_Statics::NewStructOps, TEXT("SmartObjectSlotReference"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotReference), 770017638U) },
		{ FSmartObjectTraceParams::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectTraceParams_Statics::NewStructOps, TEXT("SmartObjectTraceParams"), &Z_Registration_Info_UScriptStruct_SmartObjectTraceParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectTraceParams), 1036655095U) },
		{ FSmartObjectUserCapsuleParams::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams_Statics::NewStructOps, TEXT("SmartObjectUserCapsuleParams"), &Z_Registration_Info_UScriptStruct_SmartObjectUserCapsuleParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectUserCapsuleParams), 359789534U) },
		{ FSmartObjectSlotValidationParams::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotValidationParams_Statics::NewStructOps, TEXT("SmartObjectSlotValidationParams"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotValidationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotValidationParams), 1006181012U) },
		{ FSmartObjectEventData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectEventData_Statics::NewStructOps, TEXT("SmartObjectEventData"), &Z_Registration_Info_UScriptStruct_SmartObjectEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectEventData), 1279009157U) },
		{ FSmartObjectActorUserData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectActorUserData_Statics::NewStructOps, TEXT("SmartObjectActorUserData"), &Z_Registration_Info_UScriptStruct_SmartObjectActorUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectActorUserData), 4159351680U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectSpacePartition, USmartObjectSpacePartition::StaticClass, TEXT("USmartObjectSpacePartition"), &Z_Registration_Info_UClass_USmartObjectSpacePartition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectSpacePartition), 713124650U) },
		{ Z_Construct_UClass_USmartObjectSlotValidationFilter, USmartObjectSlotValidationFilter::StaticClass, TEXT("USmartObjectSlotValidationFilter"), &Z_Registration_Info_UClass_USmartObjectSlotValidationFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectSlotValidationFilter), 2699569391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_3016951195(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
