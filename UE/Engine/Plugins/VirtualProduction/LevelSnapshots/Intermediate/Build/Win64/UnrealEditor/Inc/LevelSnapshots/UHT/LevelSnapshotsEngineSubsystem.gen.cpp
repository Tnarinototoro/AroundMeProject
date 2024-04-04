// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../LevelSnapshotsEngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotsEngineSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshot_NoRegister();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsEngineSubsystem();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_NoRegister();
	LEVELSNAPSHOTS_API UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature();
	LEVELSNAPSHOTS_API UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature();
	LEVELSNAPSHOTS_API UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature();
	LEVELSNAPSHOTS_API UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSnapshotEvent_Blueprint;
class UScriptStruct* FLevelSnapshotEvent_Blueprint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSnapshotEvent_Blueprint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSnapshotEvent_Blueprint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("LevelSnapshotEvent_Blueprint"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSnapshotEvent_Blueprint.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FLevelSnapshotEvent_Blueprint>()
{
	return FLevelSnapshotEvent_Blueprint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Snapshot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Event data is extracted to structs so event delegate signature does not need to be modified in the future.\n// Please follow this pattern when you add new events.\n" },
		{ "DisplayName", "LevelSnapshotEvent" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
		{ "ToolTip", "Event data is extracted to structs so event delegate signature does not need to be modified in the future.\nPlease follow this pattern when you add new events." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSnapshotEvent_Blueprint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::NewProp_Snapshot_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** The affected snapshot */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
		{ "ToolTip", "The affected snapshot" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLevelSnapshotEvent_Blueprint, Snapshot), Z_Construct_UClass_ULevelSnapshot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::NewProp_Snapshot_MetaData), Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::NewProp_Snapshot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::NewProp_Snapshot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"LevelSnapshotEvent_Blueprint",
		Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::PropPointers),
		sizeof(FLevelSnapshotEvent_Blueprint),
		alignof(FLevelSnapshotEvent_Blueprint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSnapshotEvent_Blueprint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSnapshotEvent_Blueprint.InnerSingleton, Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSnapshotEvent_Blueprint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPreTakeSnapshotEventData_Blueprint>() == std::is_polymorphic<FLevelSnapshotEvent_Blueprint>(), "USTRUCT FPreTakeSnapshotEventData_Blueprint cannot be polymorphic unless super FLevelSnapshotEvent_Blueprint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PreTakeSnapshotEventData_Blueprint;
class UScriptStruct* FPreTakeSnapshotEventData_Blueprint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PreTakeSnapshotEventData_Blueprint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PreTakeSnapshotEventData_Blueprint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("PreTakeSnapshotEventData_Blueprint"));
	}
	return Z_Registration_Info_UScriptStruct_PreTakeSnapshotEventData_Blueprint.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FPreTakeSnapshotEventData_Blueprint>()
{
	return FPreTakeSnapshotEventData_Blueprint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "PreTakeSnapshotEventData" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreTakeSnapshotEventData_Blueprint>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint,
		&NewStructOps,
		"PreTakeSnapshotEventData_Blueprint",
		nullptr,
		0,
		sizeof(FPreTakeSnapshotEventData_Blueprint),
		alignof(FPreTakeSnapshotEventData_Blueprint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint()
	{
		if (!Z_Registration_Info_UScriptStruct_PreTakeSnapshotEventData_Blueprint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PreTakeSnapshotEventData_Blueprint.InnerSingleton, Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PreTakeSnapshotEventData_Blueprint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPostTakeSnapshotEventData_Blueprint>() == std::is_polymorphic<FLevelSnapshotEvent_Blueprint>(), "USTRUCT FPostTakeSnapshotEventData_Blueprint cannot be polymorphic unless super FLevelSnapshotEvent_Blueprint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PostTakeSnapshotEventData_Blueprint;
class UScriptStruct* FPostTakeSnapshotEventData_Blueprint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PostTakeSnapshotEventData_Blueprint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PostTakeSnapshotEventData_Blueprint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("PostTakeSnapshotEventData_Blueprint"));
	}
	return Z_Registration_Info_UScriptStruct_PostTakeSnapshotEventData_Blueprint.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FPostTakeSnapshotEventData_Blueprint>()
{
	return FPostTakeSnapshotEventData_Blueprint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "PostTakeSnapshotEventData" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostTakeSnapshotEventData_Blueprint>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint,
		&NewStructOps,
		"PostTakeSnapshotEventData_Blueprint",
		nullptr,
		0,
		sizeof(FPostTakeSnapshotEventData_Blueprint),
		alignof(FPostTakeSnapshotEventData_Blueprint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint()
	{
		if (!Z_Registration_Info_UScriptStruct_PostTakeSnapshotEventData_Blueprint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PostTakeSnapshotEventData_Blueprint.InnerSingleton, Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PostTakeSnapshotEventData_Blueprint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPreApplySnapshotEventData_Blueprint>() == std::is_polymorphic<FLevelSnapshotEvent_Blueprint>(), "USTRUCT FPreApplySnapshotEventData_Blueprint cannot be polymorphic unless super FLevelSnapshotEvent_Blueprint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PreApplySnapshotEventData_Blueprint;
class UScriptStruct* FPreApplySnapshotEventData_Blueprint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PreApplySnapshotEventData_Blueprint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PreApplySnapshotEventData_Blueprint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("PreApplySnapshotEventData_Blueprint"));
	}
	return Z_Registration_Info_UScriptStruct_PreApplySnapshotEventData_Blueprint.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FPreApplySnapshotEventData_Blueprint>()
{
	return FPreApplySnapshotEventData_Blueprint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "PreApplySnapshotEventData" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreApplySnapshotEventData_Blueprint>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint,
		&NewStructOps,
		"PreApplySnapshotEventData_Blueprint",
		nullptr,
		0,
		sizeof(FPreApplySnapshotEventData_Blueprint),
		alignof(FPreApplySnapshotEventData_Blueprint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint()
	{
		if (!Z_Registration_Info_UScriptStruct_PreApplySnapshotEventData_Blueprint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PreApplySnapshotEventData_Blueprint.InnerSingleton, Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PreApplySnapshotEventData_Blueprint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPostApplySnapshotEventData_Blueprint>() == std::is_polymorphic<FLevelSnapshotEvent_Blueprint>(), "USTRUCT FPostApplySnapshotEventData_Blueprint cannot be polymorphic unless super FLevelSnapshotEvent_Blueprint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PostApplySnapshotEventData_Blueprint;
class UScriptStruct* FPostApplySnapshotEventData_Blueprint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PostApplySnapshotEventData_Blueprint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PostApplySnapshotEventData_Blueprint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("PostApplySnapshotEventData_Blueprint"));
	}
	return Z_Registration_Info_UScriptStruct_PostApplySnapshotEventData_Blueprint.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FPostApplySnapshotEventData_Blueprint>()
{
	return FPostApplySnapshotEventData_Blueprint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "PostApplySnapshotEventData" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostApplySnapshotEventData_Blueprint>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint,
		&NewStructOps,
		"PostApplySnapshotEventData_Blueprint",
		nullptr,
		0,
		sizeof(FPostApplySnapshotEventData_Blueprint),
		alignof(FPostApplySnapshotEventData_Blueprint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint()
	{
		if (!Z_Registration_Info_UScriptStruct_PostApplySnapshotEventData_Blueprint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PostApplySnapshotEventData_Blueprint.InnerSingleton, Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PostApplySnapshotEventData_Blueprint.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics
	{
		struct LevelSnapshotsEngineSubsystem_eventPreTakeSnapshotEvent_Parms
		{
			FPreTakeSnapshotEventData_Blueprint EventData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSnapshotsEngineSubsystem_eventPreTakeSnapshotEvent_Parms, EventData), Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData) }; // 1233225247
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotsEngineSubsystem, nullptr, "PreTakeSnapshotEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::LevelSnapshotsEngineSubsystem_eventPreTakeSnapshotEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::LevelSnapshotsEngineSubsystem_eventPreTakeSnapshotEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void ULevelSnapshotsEngineSubsystem::FPreTakeSnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PreTakeSnapshotEvent, FPreTakeSnapshotEventData_Blueprint const& EventData)
{
	struct LevelSnapshotsEngineSubsystem_eventPreTakeSnapshotEvent_Parms
	{
		FPreTakeSnapshotEventData_Blueprint EventData;
	};
	LevelSnapshotsEngineSubsystem_eventPreTakeSnapshotEvent_Parms Parms;
	Parms.EventData=EventData;
	PreTakeSnapshotEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics
	{
		struct LevelSnapshotsEngineSubsystem_eventPostTakeSnapshotEvent_Parms
		{
			FPostTakeSnapshotEventData_Blueprint EventData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSnapshotsEngineSubsystem_eventPostTakeSnapshotEvent_Parms, EventData), Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData) }; // 3005954803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotsEngineSubsystem, nullptr, "PostTakeSnapshotEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::LevelSnapshotsEngineSubsystem_eventPostTakeSnapshotEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::LevelSnapshotsEngineSubsystem_eventPostTakeSnapshotEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void ULevelSnapshotsEngineSubsystem::FPostTakeSnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PostTakeSnapshotEvent, FPostTakeSnapshotEventData_Blueprint const& EventData)
{
	struct LevelSnapshotsEngineSubsystem_eventPostTakeSnapshotEvent_Parms
	{
		FPostTakeSnapshotEventData_Blueprint EventData;
	};
	LevelSnapshotsEngineSubsystem_eventPostTakeSnapshotEvent_Parms Parms;
	Parms.EventData=EventData;
	PostTakeSnapshotEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics
	{
		struct LevelSnapshotsEngineSubsystem_eventPreApplySnapshotEvent_Parms
		{
			FPreApplySnapshotEventData_Blueprint EventData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSnapshotsEngineSubsystem_eventPreApplySnapshotEvent_Parms, EventData), Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData) }; // 3291697027
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotsEngineSubsystem, nullptr, "PreApplySnapshotEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::LevelSnapshotsEngineSubsystem_eventPreApplySnapshotEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::LevelSnapshotsEngineSubsystem_eventPreApplySnapshotEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void ULevelSnapshotsEngineSubsystem::FPreApplySnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PreApplySnapshotEvent, FPreApplySnapshotEventData_Blueprint const& EventData)
{
	struct LevelSnapshotsEngineSubsystem_eventPreApplySnapshotEvent_Parms
	{
		FPreApplySnapshotEventData_Blueprint EventData;
	};
	LevelSnapshotsEngineSubsystem_eventPreApplySnapshotEvent_Parms Parms;
	Parms.EventData=EventData;
	PreApplySnapshotEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics
	{
		struct LevelSnapshotsEngineSubsystem_eventPostApplySnapshotEvent_Parms
		{
			FPostApplySnapshotEventData_Blueprint EventData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSnapshotsEngineSubsystem_eventPostApplySnapshotEvent_Parms, EventData), Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::NewProp_EventData_MetaData) }; // 2470341870
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotsEngineSubsystem, nullptr, "PostApplySnapshotEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::LevelSnapshotsEngineSubsystem_eventPostApplySnapshotEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::LevelSnapshotsEngineSubsystem_eventPostApplySnapshotEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void ULevelSnapshotsEngineSubsystem::FPostApplySnapshotEvent_DelegateWrapper(const FMulticastScriptDelegate& PostApplySnapshotEvent, FPostApplySnapshotEventData_Blueprint const& EventData)
{
	struct LevelSnapshotsEngineSubsystem_eventPostApplySnapshotEvent_Parms
	{
		FPostApplySnapshotEventData_Blueprint EventData;
	};
	LevelSnapshotsEngineSubsystem_eventPostApplySnapshotEvent_Parms Parms;
	Parms.EventData=EventData;
	PostApplySnapshotEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	void ULevelSnapshotsEngineSubsystem::StaticRegisterNativesULevelSnapshotsEngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotsEngineSubsystem);
	UClass* Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_NoRegister()
	{
		return ULevelSnapshotsEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreTakeSnapshot_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreTakeSnapshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostTakeSnapshot_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostTakeSnapshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreApplySnapshot_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreApplySnapshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostApplySnapshot_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostApplySnapshot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature, "PostApplySnapshotEvent__DelegateSignature" }, // 3900842536
		{ &Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature, "PostTakeSnapshotEvent__DelegateSignature" }, // 2620520852
		{ &Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature, "PreApplySnapshotEvent__DelegateSignature" }, // 946313897
		{ &Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature, "PreTakeSnapshotEvent__DelegateSignature" }, // 3229561454
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Exposes some native Level Snapshots events to Blueprint scripting.  */" },
		{ "IncludePath", "LevelSnapshotsEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
		{ "ToolTip", "Exposes some native Level Snapshots events to Blueprint scripting." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPreTakeSnapshot_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** Called before a level snapshot captures the world's data. */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
		{ "ToolTip", "Called before a level snapshot captures the world's data." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPreTakeSnapshot = { "OnPreTakeSnapshot", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSnapshotsEngineSubsystem, OnPreTakeSnapshot), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreTakeSnapshotEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPreTakeSnapshot_MetaData), Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPreTakeSnapshot_MetaData) }; // 3229561454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPostTakeSnapshot_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** Called after a level snapshot captures the world's data. */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
		{ "ToolTip", "Called after a level snapshot captures the world's data." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPostTakeSnapshot = { "OnPostTakeSnapshot", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSnapshotsEngineSubsystem, OnPostTakeSnapshot), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostTakeSnapshotEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPostTakeSnapshot_MetaData), Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPostTakeSnapshot_MetaData) }; // 2620520852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPreApplySnapshot_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** Called before a level snapshot is applied to a world. */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
		{ "ToolTip", "Called before a level snapshot is applied to a world." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPreApplySnapshot = { "OnPreApplySnapshot", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSnapshotsEngineSubsystem, OnPreApplySnapshot), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PreApplySnapshotEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPreApplySnapshot_MetaData), Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPreApplySnapshot_MetaData) }; // 946313897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPostApplySnapshot_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** Called after a level snapshot was applied to a world. */" },
		{ "ModuleRelativePath", "Public/LevelSnapshotsEngineSubsystem.h" },
		{ "ToolTip", "Called after a level snapshot was applied to a world." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPostApplySnapshot = { "OnPostApplySnapshot", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSnapshotsEngineSubsystem, OnPostApplySnapshot), Z_Construct_UDelegateFunction_ULevelSnapshotsEngineSubsystem_PostApplySnapshotEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPostApplySnapshot_MetaData), Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPostApplySnapshot_MetaData) }; // 3900842536
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPreTakeSnapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPostTakeSnapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPreApplySnapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::NewProp_OnPostApplySnapshot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotsEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::ClassParams = {
		&ULevelSnapshotsEngineSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelSnapshotsEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotsEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotsEngineSubsystem.OuterSingleton, Z_Construct_UClass_ULevelSnapshotsEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotsEngineSubsystem.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<ULevelSnapshotsEngineSubsystem>()
	{
		return ULevelSnapshotsEngineSubsystem::StaticClass();
	}
	ULevelSnapshotsEngineSubsystem::ULevelSnapshotsEngineSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotsEngineSubsystem);
	ULevelSnapshotsEngineSubsystem::~ULevelSnapshotsEngineSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FLevelSnapshotEvent_Blueprint::StaticStruct, Z_Construct_UScriptStruct_FLevelSnapshotEvent_Blueprint_Statics::NewStructOps, TEXT("LevelSnapshotEvent_Blueprint"), &Z_Registration_Info_UScriptStruct_LevelSnapshotEvent_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSnapshotEvent_Blueprint), 2285794225U) },
		{ FPreTakeSnapshotEventData_Blueprint::StaticStruct, Z_Construct_UScriptStruct_FPreTakeSnapshotEventData_Blueprint_Statics::NewStructOps, TEXT("PreTakeSnapshotEventData_Blueprint"), &Z_Registration_Info_UScriptStruct_PreTakeSnapshotEventData_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPreTakeSnapshotEventData_Blueprint), 1233225247U) },
		{ FPostTakeSnapshotEventData_Blueprint::StaticStruct, Z_Construct_UScriptStruct_FPostTakeSnapshotEventData_Blueprint_Statics::NewStructOps, TEXT("PostTakeSnapshotEventData_Blueprint"), &Z_Registration_Info_UScriptStruct_PostTakeSnapshotEventData_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPostTakeSnapshotEventData_Blueprint), 3005954803U) },
		{ FPreApplySnapshotEventData_Blueprint::StaticStruct, Z_Construct_UScriptStruct_FPreApplySnapshotEventData_Blueprint_Statics::NewStructOps, TEXT("PreApplySnapshotEventData_Blueprint"), &Z_Registration_Info_UScriptStruct_PreApplySnapshotEventData_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPreApplySnapshotEventData_Blueprint), 3291697027U) },
		{ FPostApplySnapshotEventData_Blueprint::StaticStruct, Z_Construct_UScriptStruct_FPostApplySnapshotEventData_Blueprint_Statics::NewStructOps, TEXT("PostApplySnapshotEventData_Blueprint"), &Z_Registration_Info_UScriptStruct_PostApplySnapshotEventData_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPostApplySnapshotEventData_Blueprint), 2470341870U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshotsEngineSubsystem, ULevelSnapshotsEngineSubsystem::StaticClass, TEXT("ULevelSnapshotsEngineSubsystem"), &Z_Registration_Info_UClass_ULevelSnapshotsEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotsEngineSubsystem), 1541869175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_2598702916(TEXT("/Script/LevelSnapshots"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsEngineSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
