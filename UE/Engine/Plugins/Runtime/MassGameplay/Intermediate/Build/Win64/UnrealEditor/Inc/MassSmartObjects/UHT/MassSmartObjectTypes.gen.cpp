// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassSmartObjectTypes.h"
#include "MassEntityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSmartObjectTypes() {}
// Cross Module References
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle();
	MASSSMARTOBJECTS_API UEnum* Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus();
	MASSSMARTOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData();
	UPackage* Z_Construct_UPackage__Script_MassSmartObjects();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus;
	static UEnum* EMassSmartObjectInteractionStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("EMassSmartObjectInteractionStatus"));
		}
		return Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.OuterSingleton;
	}
	template<> MASSSMARTOBJECTS_API UEnum* StaticEnum<EMassSmartObjectInteractionStatus>()
	{
		return EMassSmartObjectInteractionStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enumerators[] = {
		{ "EMassSmartObjectInteractionStatus::Unset", (int64)EMassSmartObjectInteractionStatus::Unset },
		{ "EMassSmartObjectInteractionStatus::InProgress", (int64)EMassSmartObjectInteractionStatus::InProgress },
		{ "EMassSmartObjectInteractionStatus::BehaviorCompleted", (int64)EMassSmartObjectInteractionStatus::BehaviorCompleted },
		{ "EMassSmartObjectInteractionStatus::TaskCompleted", (int64)EMassSmartObjectInteractionStatus::TaskCompleted },
		{ "EMassSmartObjectInteractionStatus::Aborted", (int64)EMassSmartObjectInteractionStatus::Aborted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enum_MetaDataParams[] = {
		{ "Aborted.Comment", "// Task has been notified that behavior is completed and completes\n" },
		{ "Aborted.Name", "EMassSmartObjectInteractionStatus::Aborted" },
		{ "Aborted.ToolTip", "Task has been notified that behavior is completed and completes" },
		{ "BehaviorCompleted.Comment", "// Claimed and Behavior activated\n" },
		{ "BehaviorCompleted.Name", "EMassSmartObjectInteractionStatus::BehaviorCompleted" },
		{ "BehaviorCompleted.ToolTip", "Claimed and Behavior activated" },
		{ "InProgress.Name", "EMassSmartObjectInteractionStatus::InProgress" },
		{ "ModuleRelativePath", "Public/MassSmartObjectTypes.h" },
		{ "TaskCompleted.Comment", "// Behavior is completed but task still running (not updated yet)\n" },
		{ "TaskCompleted.Name", "EMassSmartObjectInteractionStatus::TaskCompleted" },
		{ "TaskCompleted.ToolTip", "Behavior is completed but task still running (not updated yet)" },
		{ "Unset.Name", "EMassSmartObjectInteractionStatus::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassSmartObjects,
		nullptr,
		"EMassSmartObjectInteractionStatus",
		"EMassSmartObjectInteractionStatus",
		Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus()
	{
		if (!Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.InnerSingleton, Z_Construct_UEnum_MassSmartObjects_EMassSmartObjectInteractionStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectMassEntityUserData;
class UScriptStruct* FSmartObjectMassEntityUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectMassEntityUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectMassEntityUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData, (UObject*)Z_Construct_UPackage__Script_MassSmartObjects(), TEXT("SmartObjectMassEntityUserData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectMassEntityUserData.OuterSingleton;
}
template<> MASSSMARTOBJECTS_API UScriptStruct* StaticStruct<FSmartObjectMassEntityUserData>()
{
	return FSmartObjectMassEntityUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserEntity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserEntity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct that can be used to pass data to the find or filtering methods.\n * Properties will be used as external data to fill values expected by the world condition schema\n * specified by the smart object definition.\n *\x09\x09""e.g. FilterSlotsBySelectionConditions(SlotHandles, FConstStructView::Make(FSmartObjectMassEntityUserData(Entity)));\n *\n * It can be inherited from to provide additional data to another world condition schema inheriting\n * from USmartObjectWorldConditionSchema.\n *\x09""e.g.\n *\x09\x09UCLASS()\n *\x09\x09""class USmartObjectWorldConditionExtendedSchema : public USmartObjectWorldConditionSchema\n *\x09\x09{\n *\x09\x09\x09...\n *\x09\x09\x09USmartObjectWorldConditionExtendedSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)\n *\x09\x09\x09{\n *\x09\x09\x09\x09OtherEntityRef = AddContextDataDesc(TEXT(\"OtherEntity\"), FMassEntityHandle::StaticStruct(), EWorldConditionContextDataType::Dynamic);\n *\x09\x09\x09}\n *\x09\x09\x09\n *\x09\x09\x09""FWorldConditionContextDataRef OtherEntityRef;\n *\x09\x09};\n *\n *\x09\x09USTRUCT()\n *\x09\x09struct FSmartObjectMassEntityExtendedUserData : public FSmartObjectMassEntityUserData\n *\x09\x09{\n *\x09\x09\x09UPROPERTY()\n *\x09\x09\x09""FMassEntityHandle OtherEntity;\n *\x09\x09}\n *\n * The struct can also be used to be added to a Smart Object slot when it gets claimed.\n *\x09\x09""e.g. Claim(SlotHandle, FConstStructView::Make(FSmartObjectMassEntityUserData(Entity)));\n */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectTypes.h" },
		{ "ToolTip", "Struct that can be used to pass data to the find or filtering methods.\nProperties will be used as external data to fill values expected by the world condition schema\nspecified by the smart object definition.\n            e.g. FilterSlotsBySelectionConditions(SlotHandles, FConstStructView::Make(FSmartObjectMassEntityUserData(Entity)));\n\nIt can be inherited from to provide additional data to another world condition schema inheriting\nfrom USmartObjectWorldConditionSchema.\n    e.g.\n            UCLASS()\n            class USmartObjectWorldConditionExtendedSchema : public USmartObjectWorldConditionSchema\n            {\n                    ...\n                    USmartObjectWorldConditionExtendedSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)\n                    {\n                            OtherEntityRef = AddContextDataDesc(TEXT(\"OtherEntity\"), FMassEntityHandle::StaticStruct(), EWorldConditionContextDataType::Dynamic);\n                    }\n\n                    FWorldConditionContextDataRef OtherEntityRef;\n            };\n\n            USTRUCT()\n            struct FSmartObjectMassEntityExtendedUserData : public FSmartObjectMassEntityUserData\n            {\n                    UPROPERTY()\n                    FMassEntityHandle OtherEntity;\n            }\n\nThe struct can also be used to be added to a Smart Object slot when it gets claimed.\n            e.g. Claim(SlotHandle, FConstStructView::Make(FSmartObjectMassEntityUserData(Entity)));" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectMassEntityUserData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::NewProp_UserEntity_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSmartObjectTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::NewProp_UserEntity = { "UserEntity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectMassEntityUserData, UserEntity), Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::NewProp_UserEntity_MetaData), Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::NewProp_UserEntity_MetaData) }; // 966791987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::NewProp_UserEntity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
		nullptr,
		&NewStructOps,
		"SmartObjectMassEntityUserData",
		Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::PropPointers),
		sizeof(FSmartObjectMassEntityUserData),
		alignof(FSmartObjectMassEntityUserData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectMassEntityUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectMassEntityUserData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectMassEntityUserData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_Statics::EnumInfo[] = {
		{ EMassSmartObjectInteractionStatus_StaticEnum, TEXT("EMassSmartObjectInteractionStatus"), &Z_Registration_Info_UEnum_EMassSmartObjectInteractionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2106710149U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectMassEntityUserData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectMassEntityUserData_Statics::NewStructOps, TEXT("SmartObjectMassEntityUserData"), &Z_Registration_Info_UScriptStruct_SmartObjectMassEntityUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectMassEntityUserData), 2286472399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_995373012(TEXT("/Script/MassSmartObjects"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
