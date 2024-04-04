// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Annotations/SmartObjectSlotEntranceAnnotation.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectSlotEntranceAnnotation() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartObjectEntrancePriority;
	static UEnum* ESmartObjectEntrancePriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectEntrancePriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartObjectEntrancePriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("ESmartObjectEntrancePriority"));
		}
		return Z_Registration_Info_UEnum_ESmartObjectEntrancePriority.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectEntrancePriority>()
	{
		return ESmartObjectEntrancePriority_StaticEnum();
	}
	struct Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority_Statics::Enumerators[] = {
		{ "ESmartObjectEntrancePriority::Lowest", (int64)ESmartObjectEntrancePriority::Lowest },
		{ "ESmartObjectEntrancePriority::Lower", (int64)ESmartObjectEntrancePriority::Lower },
		{ "ESmartObjectEntrancePriority::Low", (int64)ESmartObjectEntrancePriority::Low },
		{ "ESmartObjectEntrancePriority::BelowNormal", (int64)ESmartObjectEntrancePriority::BelowNormal },
		{ "ESmartObjectEntrancePriority::Normal", (int64)ESmartObjectEntrancePriority::Normal },
		{ "ESmartObjectEntrancePriority::AboveNormal", (int64)ESmartObjectEntrancePriority::AboveNormal },
		{ "ESmartObjectEntrancePriority::High", (int64)ESmartObjectEntrancePriority::High },
		{ "ESmartObjectEntrancePriority::Higher", (int64)ESmartObjectEntrancePriority::Higher },
		{ "ESmartObjectEntrancePriority::Highest", (int64)ESmartObjectEntrancePriority::Highest },
		{ "ESmartObjectEntrancePriority::MIN", (int64)ESmartObjectEntrancePriority::MIN },
		{ "ESmartObjectEntrancePriority::MAX", (int64)ESmartObjectEntrancePriority::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority_Statics::Enum_MetaDataParams[] = {
		{ "AboveNormal.Name", "ESmartObjectEntrancePriority::AboveNormal" },
		{ "BelowNormal.Name", "ESmartObjectEntrancePriority::BelowNormal" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum used to define a entrance selection priority. Highest priority is preferred, but when the priority is the same\n * the selection method (distance) is used to decide which entrance is chosen.\n */" },
		{ "High.Name", "ESmartObjectEntrancePriority::High" },
		{ "Higher.Name", "ESmartObjectEntrancePriority::Higher" },
		{ "Highest.Name", "ESmartObjectEntrancePriority::Highest" },
		{ "Low.Name", "ESmartObjectEntrancePriority::Low" },
		{ "Lower.Name", "ESmartObjectEntrancePriority::Lower" },
		{ "Lowest.Name", "ESmartObjectEntrancePriority::Lowest" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ESmartObjectEntrancePriority::MAX" },
		{ "MIN.Hidden", "" },
		{ "MIN.Name", "ESmartObjectEntrancePriority::MIN" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "Normal.Name", "ESmartObjectEntrancePriority::Normal" },
		{ "ToolTip", "Enum used to define a entrance selection priority. Highest priority is preferred, but when the priority is the same\nthe selection method (distance) is used to decide which entrance is chosen." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		"ESmartObjectEntrancePriority",
		"ESmartObjectEntrancePriority",
		Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority()
	{
		if (!Z_Registration_Info_UEnum_ESmartObjectEntrancePriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartObjectEntrancePriority.InnerSingleton, Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartObjectEntrancePriority.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSmartObjectSlotEntranceAnnotation>() == std::is_polymorphic<FSmartObjectSlotAnnotation>(), "USTRUCT FSmartObjectSlotEntranceAnnotation cannot be polymorphic unless super FSmartObjectSlotAnnotation is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotEntranceAnnotation;
class UScriptStruct* FSmartObjectSlotEntranceAnnotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotEntranceAnnotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotEntranceAnnotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectSlotEntranceAnnotation"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotEntranceAnnotation.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectSlotEntranceAnnotation>()
{
	return FSmartObjectSlotEntranceAnnotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEntry_MetaData[];
#endif
		static void NewProp_bIsEntry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEntry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExit_MetaData[];
#endif
		static void NewProp_bIsExit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExit;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionPriority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionPriority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryStartHeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrajectoryStartHeightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrajectorySlotHeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrajectorySlotHeightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionCheckRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionCheckRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Annotation to define a entrance locations for a Smart Object Slot.\n * This can be used to add multiple entry points to a slot, or to validate the entries against navigation data. \n */" },
		{ "DisplayName", "Entrance" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "Annotation to define a entrance locations for a Smart Object Slot.\nThis can be used to add multiple entry points to a slot, or to validate the entries against navigation data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotEntranceAnnotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Local space offset of the entry. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "Local space offset of the entry." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotEntranceAnnotation, Offset), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Offset_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Local space rotation of the entry. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "Local space rotation of the entry." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotEntranceAnnotation, Rotation), Z_Construct_UScriptStruct_FRotator3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Rotation_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotEntranceAnnotation, Tag_DEPRECATED), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Tag_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Tag_MetaData) }; // 2083603574
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Tags that can be used to identify the entry. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "Tags that can be used to identify the entry." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotEntranceAnnotation, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Tags_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Tags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsEntry_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Set to true if the entry can be used to enter the slot. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "Set to true if the entry can be used to enter the slot." },
	};
#endif
	void Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsEntry_SetBit(void* Obj)
	{
		((FSmartObjectSlotEntranceAnnotation*)Obj)->bIsEntry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsEntry = { "bIsEntry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSmartObjectSlotEntranceAnnotation), &Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsEntry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsEntry_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsEntry_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsExit_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Set to true if the entry can be used to exit the slot. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "Set to true if the entry can be used to exit the slot." },
	};
#endif
	void Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsExit_SetBit(void* Obj)
	{
		((FSmartObjectSlotEntranceAnnotation*)Obj)->bIsExit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsExit = { "bIsExit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSmartObjectSlotEntranceAnnotation), &Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsExit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsExit_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsExit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bTraceGroundLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If set to true, ground location will be adjusted using a line trace. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "If set to true, ground location will be adjusted using a line trace." },
	};
#endif
	void Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bTraceGroundLocation_SetBit(void* Obj)
	{
		((FSmartObjectSlotEntranceAnnotation*)Obj)->bTraceGroundLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bTraceGroundLocation = { "bTraceGroundLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSmartObjectSlotEntranceAnnotation), &Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bTraceGroundLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bTraceGroundLocation_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bTraceGroundLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bCheckTransitionTrajectory_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If set to true, collisions will be checked between the transition from navigation location and slot location. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "If set to true, collisions will be checked between the transition from navigation location and slot location." },
	};
#endif
	void Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bCheckTransitionTrajectory_SetBit(void* Obj)
	{
		((FSmartObjectSlotEntranceAnnotation*)Obj)->bCheckTransitionTrajectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bCheckTransitionTrajectory = { "bCheckTransitionTrajectory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FSmartObjectSlotEntranceAnnotation), &Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bCheckTransitionTrajectory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bCheckTransitionTrajectory_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bCheckTransitionTrajectory_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_SelectionPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_SelectionPriority_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** During entrance selection, the highest priority entrance is selected. If multiple entrances share same priority, then the selection method is used (e.g. based on distance). */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "During entrance selection, the highest priority entrance is selected. If multiple entrances share same priority, then the selection method is used (e.g. based on distance)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_SelectionPriority = { "SelectionPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotEntranceAnnotation, SelectionPriority), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectEntrancePriority, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_SelectionPriority_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_SelectionPriority_MetaData) }; // 1354950497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TrajectoryStartHeightOffset_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Height offset at start of the transition collision check. */" },
		{ "EditCondition", "bCheckTransitionTrajectory" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "Height offset at start of the transition collision check." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TrajectoryStartHeightOffset = { "TrajectoryStartHeightOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotEntranceAnnotation, TrajectoryStartHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TrajectoryStartHeightOffset_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TrajectoryStartHeightOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TrajectorySlotHeightOffset_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Height offset at slot location of the transition collision check. */" },
		{ "EditCondition", "bCheckTransitionTrajectory" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "Height offset at slot location of the transition collision check." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TrajectorySlotHeightOffset = { "TrajectorySlotHeightOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotEntranceAnnotation, TrajectorySlotHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TrajectorySlotHeightOffset_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TrajectorySlotHeightOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TransitionCheckRadius_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Radius of the transition trajectory check. */" },
		{ "EditCondition", "bCheckTransitionTrajectory" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectSlotEntranceAnnotation.h" },
		{ "ToolTip", "Radius of the transition trajectory check." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TransitionCheckRadius = { "TransitionCheckRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectSlotEntranceAnnotation, TransitionCheckRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TransitionCheckRadius_MetaData), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TransitionCheckRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Rotation,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Tag,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bIsExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bTraceGroundLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_bCheckTransitionTrajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_SelectionPriority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_SelectionPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TrajectoryStartHeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TrajectorySlotHeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewProp_TransitionCheckRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation,
		&NewStructOps,
		"SmartObjectSlotEntranceAnnotation",
		Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::PropPointers),
		sizeof(FSmartObjectSlotEntranceAnnotation),
		alignof(FSmartObjectSlotEntranceAnnotation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotEntranceAnnotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotEntranceAnnotation.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotEntranceAnnotation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntranceAnnotation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntranceAnnotation_h_Statics::EnumInfo[] = {
		{ ESmartObjectEntrancePriority_StaticEnum, TEXT("ESmartObjectEntrancePriority"), &Z_Registration_Info_UEnum_ESmartObjectEntrancePriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1354950497U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntranceAnnotation_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectSlotEntranceAnnotation::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotEntranceAnnotation_Statics::NewStructOps, TEXT("SmartObjectSlotEntranceAnnotation"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotEntranceAnnotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotEntranceAnnotation), 1093487478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntranceAnnotation_h_3358599339(TEXT("/Script/SmartObjectsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntranceAnnotation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntranceAnnotation_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntranceAnnotation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectSlotEntranceAnnotation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
