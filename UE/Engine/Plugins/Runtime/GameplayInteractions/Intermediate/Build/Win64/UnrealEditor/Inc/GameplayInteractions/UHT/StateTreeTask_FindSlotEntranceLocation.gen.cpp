// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h"
#include "GameplayTagContainer.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTask_FindSlotEntranceLocation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSlotValidationFilter_NoRegister();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_FSmartObjectSlotEntrySelectionMethod();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation_InstanceData;
class UScriptStruct* FStateTreeTask_FindSlotEntranceLocation_InstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation_InstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation_InstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("StateTreeTask_FindSlotEntranceLocation_InstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation_InstanceData.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FStateTreeTask_FindSlotEntranceLocation_InstanceData>()
{
	return FStateTreeTask_FindSlotEntranceLocation_InstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceSlot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntryTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntranceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntranceTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTask_FindSlotEntranceLocation_InstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_UserActor_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_UserActor = { "UserActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTask_FindSlotEntranceLocation_InstanceData, UserActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_UserActor_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_UserActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_ReferenceSlot_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Slot to use as reference to find the result slot. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "Slot to use as reference to find the result slot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_ReferenceSlot = { "ReferenceSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTask_FindSlotEntranceLocation_InstanceData, ReferenceSlot), Z_Construct_UScriptStruct_FSmartObjectSlotHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_ReferenceSlot_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_ReferenceSlot_MetaData) }; // 3459972307
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_EntryTransform_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_EntryTransform = { "EntryTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTask_FindSlotEntranceLocation_InstanceData, EntryTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_EntryTransform_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_EntryTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_EntranceTags_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// @todo: rename EntranceTransform\n" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "@todo: rename EntranceTransform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_EntranceTags = { "EntranceTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTask_FindSlotEntranceLocation_InstanceData, EntranceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_EntranceTags_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_EntranceTags_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_UserActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_ReferenceSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_EntryTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewProp_EntranceTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"StateTreeTask_FindSlotEntranceLocation_InstanceData",
		Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::PropPointers),
		sizeof(FStateTreeTask_FindSlotEntranceLocation_InstanceData),
		alignof(FStateTreeTask_FindSlotEntranceLocation_InstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation_InstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation_InstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation_InstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStateTreeTask_FindSlotEntranceLocation>() == std::is_polymorphic<FGameplayInteractionStateTreeTask>(), "USTRUCT FStateTreeTask_FindSlotEntranceLocation cannot be polymorphic unless super FGameplayInteractionStateTreeTask is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation;
class UScriptStruct* FStateTreeTask_FindSlotEntranceLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("StateTreeTask_FindSlotEntranceLocation"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FStateTreeTask_FindSlotEntranceLocation>()
{
	return FStateTreeTask_FindSlotEntranceLocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectNavigationLocation_MetaData[];
#endif
		static void NewProp_bProjectNavigationLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectNavigationLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceGroundLocation_MetaData[];
#endif
		static void NewProp_bTraceGroundLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceGroundLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckTransitionTrajectory_MetaData[];
#endif
		static void NewProp_bCheckTransitionTrajectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckTransitionTrajectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckEntranceLocationOverlap_MetaData[];
#endif
		static void NewProp_bCheckEntranceLocationOverlap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckEntranceLocationOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckSlotLocationOverlap_MetaData[];
#endif
		static void NewProp_bCheckSlotLocationOverlap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckSlotLocationOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSlotLocationAsFallbackCandidate_MetaData[];
#endif
		static void NewProp_bUseSlotLocationAsFallbackCandidate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSlotLocationAsFallbackCandidate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationFilter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ValidationFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Gameplay Interactions|Smart Object" },
		{ "Comment", "/**\n * Finds entrance location for a Smart Object slot. The query will use slot entrance annotations as candidates.\n * Each candidate is ranked (e.g. based on distance), and optionally validated to be close to a navigable space and without collisions.\n */" },
		{ "DisplayName", "Find Slot Entrance Location" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "Finds entrance location for a Smart Object slot. The query will use slot entrance annotations as candidates.\nEach candidate is ranked (e.g. based on distance), and optionally validated to be close to a navigable space and without collisions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTask_FindSlotEntranceLocation>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_SelectMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_SelectMethod_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Method to select an entry when multiple entries are present. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "Method to select an entry when multiple entries are present." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_SelectMethod = { "SelectMethod", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTask_FindSlotEntranceLocation, SelectMethod), Z_Construct_UEnum_SmartObjectsModule_FSmartObjectSlotEntrySelectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_SelectMethod_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_SelectMethod_MetaData) }; // 584258964
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bProjectNavigationLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If true, the result is required to be in or close to a navigable space. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "If true, the result is required to be in or close to a navigable space." },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bProjectNavigationLocation_SetBit(void* Obj)
	{
		((FStateTreeTask_FindSlotEntranceLocation*)Obj)->bProjectNavigationLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bProjectNavigationLocation = { "bProjectNavigationLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeTask_FindSlotEntranceLocation), &Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bProjectNavigationLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bProjectNavigationLocation_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bProjectNavigationLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bTraceGroundLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If true, try to trace the location on ground. If trace fails, an entry is discarded. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "If true, try to trace the location on ground. If trace fails, an entry is discarded." },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bTraceGroundLocation_SetBit(void* Obj)
	{
		((FStateTreeTask_FindSlotEntranceLocation*)Obj)->bTraceGroundLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bTraceGroundLocation = { "bTraceGroundLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeTask_FindSlotEntranceLocation), &Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bTraceGroundLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bTraceGroundLocation_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bTraceGroundLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckTransitionTrajectory_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If true, check collisions between navigation location and slot location. If collisions are found, an entry is discarded. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "If true, check collisions between navigation location and slot location. If collisions are found, an entry is discarded." },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckTransitionTrajectory_SetBit(void* Obj)
	{
		((FStateTreeTask_FindSlotEntranceLocation*)Obj)->bCheckTransitionTrajectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckTransitionTrajectory = { "bCheckTransitionTrajectory", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeTask_FindSlotEntranceLocation), &Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckTransitionTrajectory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckTransitionTrajectory_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckTransitionTrajectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckEntranceLocationOverlap_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If true, check user capsule collisions at the entrance location. Uses capsule dimensions set in the validation filter. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "If true, check user capsule collisions at the entrance location. Uses capsule dimensions set in the validation filter." },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckEntranceLocationOverlap_SetBit(void* Obj)
	{
		((FStateTreeTask_FindSlotEntranceLocation*)Obj)->bCheckEntranceLocationOverlap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckEntranceLocationOverlap = { "bCheckEntranceLocationOverlap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeTask_FindSlotEntranceLocation), &Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckEntranceLocationOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckEntranceLocationOverlap_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckEntranceLocationOverlap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckSlotLocationOverlap_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If true, check user capsule collisions at the slot location. Uses capsule dimensions set in an annotation on the slot. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "If true, check user capsule collisions at the slot location. Uses capsule dimensions set in an annotation on the slot." },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckSlotLocationOverlap_SetBit(void* Obj)
	{
		((FStateTreeTask_FindSlotEntranceLocation*)Obj)->bCheckSlotLocationOverlap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckSlotLocationOverlap = { "bCheckSlotLocationOverlap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeTask_FindSlotEntranceLocation), &Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckSlotLocationOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckSlotLocationOverlap_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckSlotLocationOverlap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bUseSlotLocationAsFallbackCandidate_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If true, include slot location as candidate if no entry annotation is present. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "If true, include slot location as candidate if no entry annotation is present." },
	};
#endif
	void Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bUseSlotLocationAsFallbackCandidate_SetBit(void* Obj)
	{
		((FStateTreeTask_FindSlotEntranceLocation*)Obj)->bUseSlotLocationAsFallbackCandidate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bUseSlotLocationAsFallbackCandidate = { "bUseSlotLocationAsFallbackCandidate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeTask_FindSlotEntranceLocation), &Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bUseSlotLocationAsFallbackCandidate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bUseSlotLocationAsFallbackCandidate_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bUseSlotLocationAsFallbackCandidate_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_LocationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_LocationType_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Whether we're looking for an entry or exit location. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "Whether we're looking for an entry or exit location." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTask_FindSlotEntranceLocation, LocationType), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectSlotNavigationLocationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_LocationType_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_LocationType_MetaData) }; // 3095220697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_ValidationFilter_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Validation filter to apply to query. */" },
		{ "ModuleRelativePath", "Private/StateTree/StateTreeTask_FindSlotEntranceLocation.h" },
		{ "ToolTip", "Validation filter to apply to query." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_ValidationFilter = { "ValidationFilter", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeTask_FindSlotEntranceLocation, ValidationFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_USmartObjectSlotValidationFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_ValidationFilter_MetaData), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_ValidationFilter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_SelectMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_SelectMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bProjectNavigationLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bTraceGroundLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckTransitionTrajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckEntranceLocationOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bCheckSlotLocationOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_bUseSlotLocationAsFallbackCandidate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_LocationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_LocationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewProp_ValidationFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask,
		&NewStructOps,
		"StateTreeTask_FindSlotEntranceLocation",
		Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::PropPointers),
		sizeof(FStateTreeTask_FindSlotEntranceLocation),
		alignof(FStateTreeTask_FindSlotEntranceLocation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_FindSlotEntranceLocation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_FindSlotEntranceLocation_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeTask_FindSlotEntranceLocation_InstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_InstanceData_Statics::NewStructOps, TEXT("StateTreeTask_FindSlotEntranceLocation_InstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation_InstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTask_FindSlotEntranceLocation_InstanceData), 4233866934U) },
		{ FStateTreeTask_FindSlotEntranceLocation::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTask_FindSlotEntranceLocation_Statics::NewStructOps, TEXT("StateTreeTask_FindSlotEntranceLocation"), &Z_Registration_Info_UScriptStruct_StateTreeTask_FindSlotEntranceLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTask_FindSlotEntranceLocation), 3433381816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_FindSlotEntranceLocation_h_3927965925(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_FindSlotEntranceLocation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_StateTreeTask_FindSlotEntranceLocation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
