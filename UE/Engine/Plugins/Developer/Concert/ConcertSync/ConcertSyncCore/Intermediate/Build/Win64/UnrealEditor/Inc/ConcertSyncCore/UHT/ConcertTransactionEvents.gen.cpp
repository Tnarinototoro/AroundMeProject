// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertTransactionEvents.h"
#include "IdentifierTable/ConcertIdentifierTableData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertTransactionEvents() {}
// Cross Module References
	CONCERTSYNCCORE_API UEnum* Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertExportedObject();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertObjectId();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSerializedObjectData();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSerializedPropertyData();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertTransactionEventBase();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent();
	CONCERTSYNCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertLocalIdentifierState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransactionFilterResult;
	static UEnum* ETransactionFilterResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransactionFilterResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransactionFilterResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ETransactionFilterResult"));
		}
		return Z_Registration_Info_UEnum_ETransactionFilterResult.OuterSingleton;
	}
	template<> CONCERTSYNCCORE_API UEnum* StaticEnum<ETransactionFilterResult>()
	{
		return ETransactionFilterResult_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult_Statics::Enumerators[] = {
		{ "ETransactionFilterResult::IncludeObject", (int64)ETransactionFilterResult::IncludeObject },
		{ "ETransactionFilterResult::ExcludeObject", (int64)ETransactionFilterResult::ExcludeObject },
		{ "ETransactionFilterResult::ExcludeTransaction", (int64)ETransactionFilterResult::ExcludeTransaction },
		{ "ETransactionFilterResult::UseDefault", (int64)ETransactionFilterResult::UseDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult_Statics::Enum_MetaDataParams[] = {
		{ "ExcludeObject.Comment", "/** Filter the object from the Concert Transaction */" },
		{ "ExcludeObject.Name", "ETransactionFilterResult::ExcludeObject" },
		{ "ExcludeObject.ToolTip", "Filter the object from the Concert Transaction" },
		{ "ExcludeTransaction.Comment", "/** Filter the entire transaction and prevent propagation */" },
		{ "ExcludeTransaction.Name", "ETransactionFilterResult::ExcludeTransaction" },
		{ "ExcludeTransaction.ToolTip", "Filter the entire transaction and prevent propagation" },
		{ "IncludeObject.Comment", "/** Include the object in the Concert Transaction */" },
		{ "IncludeObject.Name", "ETransactionFilterResult::IncludeObject" },
		{ "IncludeObject.ToolTip", "Include the object in the Concert Transaction" },
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
		{ "UseDefault.Comment", "/** Delegate the filtering decision to the default handlers. */" },
		{ "UseDefault.Name", "ETransactionFilterResult::UseDefault" },
		{ "UseDefault.ToolTip", "Delegate the filtering decision to the default handlers." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		"ETransactionFilterResult",
		"ETransactionFilterResult",
		Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult()
	{
		if (!Z_Registration_Info_UEnum_ETransactionFilterResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransactionFilterResult.InnerSingleton, Z_Construct_UEnum_ConcertSyncCore_ETransactionFilterResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransactionFilterResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertObjectId;
class UScriptStruct* FConcertObjectId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertObjectId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertObjectId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertObjectId, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertObjectId"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertObjectId.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertObjectId>()
{
	return FConcertObjectId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertObjectId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClassPathName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectClassPathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectPackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectOuterPathName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectOuterPathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectExternalPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectExternalPackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPersistentFlags_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ObjectPersistentFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertObjectId_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertObjectId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectClassPathName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectClassPathName = { "ObjectClassPathName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertObjectId, ObjectClassPathName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectClassPathName_MetaData), Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectClassPathName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectPackageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectPackageName = { "ObjectPackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertObjectId, ObjectPackageName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectPackageName_MetaData), Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectPackageName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertObjectId, ObjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectName_MetaData), Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectOuterPathName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectOuterPathName = { "ObjectOuterPathName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertObjectId, ObjectOuterPathName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectOuterPathName_MetaData), Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectOuterPathName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectExternalPackageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectExternalPackageName = { "ObjectExternalPackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertObjectId, ObjectExternalPackageName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectExternalPackageName_MetaData), Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectExternalPackageName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectPersistentFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectPersistentFlags = { "ObjectPersistentFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertObjectId, ObjectPersistentFlags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectPersistentFlags_MetaData), Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectPersistentFlags_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertObjectId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectClassPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectOuterPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectExternalPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewProp_ObjectPersistentFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertObjectId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertObjectId",
		Z_Construct_UScriptStruct_FConcertObjectId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertObjectId_Statics::PropPointers),
		sizeof(FConcertObjectId),
		alignof(FConcertObjectId),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertObjectId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertObjectId_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertObjectId_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertObjectId()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertObjectId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertObjectId.InnerSingleton, Z_Construct_UScriptStruct_FConcertObjectId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertObjectId.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSerializedObjectData;
class UScriptStruct* FConcertSerializedObjectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSerializedObjectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSerializedObjectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSerializedObjectData, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSerializedObjectData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSerializedObjectData.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSerializedObjectData>()
{
	return FConcertSerializedObjectData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[];
#endif
		static void NewProp_bAllowCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetExisting_MetaData[];
#endif
		static void NewProp_bResetExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetExisting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPendingKill_MetaData[];
#endif
		static void NewProp_bIsPendingKill_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPendingKill;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewPackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewOuterPathName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewOuterPathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewExternalPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewExternalPackageName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SerializedData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSerializedObjectData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bAllowCreate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
	{
		((FConcertSerializedObjectData*)Obj)->bAllowCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConcertSerializedObjectData), &Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bAllowCreate_MetaData), Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bAllowCreate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bResetExisting_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bResetExisting_SetBit(void* Obj)
	{
		((FConcertSerializedObjectData*)Obj)->bResetExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bResetExisting = { "bResetExisting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConcertSerializedObjectData), &Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bResetExisting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bResetExisting_MetaData), Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bResetExisting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bIsPendingKill_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bIsPendingKill_SetBit(void* Obj)
	{
		((FConcertSerializedObjectData*)Obj)->bIsPendingKill = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bIsPendingKill = { "bIsPendingKill", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FConcertSerializedObjectData), &Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bIsPendingKill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bIsPendingKill_MetaData), Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bIsPendingKill_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewPackageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewPackageName = { "NewPackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSerializedObjectData, NewPackageName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewPackageName_MetaData), Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewPackageName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSerializedObjectData, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewName_MetaData), Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewOuterPathName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewOuterPathName = { "NewOuterPathName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSerializedObjectData, NewOuterPathName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewOuterPathName_MetaData), Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewOuterPathName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewExternalPackageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewExternalPackageName = { "NewExternalPackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSerializedObjectData, NewExternalPackageName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewExternalPackageName_MetaData), Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewExternalPackageName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_SerializedData_Inner = { "SerializedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_SerializedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_SerializedData = { "SerializedData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSerializedObjectData, SerializedData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_SerializedData_MetaData), Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_SerializedData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bAllowCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bResetExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_bIsPendingKill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewOuterPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_NewExternalPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_SerializedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewProp_SerializedData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSerializedObjectData",
		Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::PropPointers),
		sizeof(FConcertSerializedObjectData),
		alignof(FConcertSerializedObjectData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSerializedObjectData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSerializedObjectData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSerializedObjectData.InnerSingleton, Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSerializedObjectData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSerializedPropertyData;
class UScriptStruct* FConcertSerializedPropertyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSerializedPropertyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSerializedPropertyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSerializedPropertyData, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertSerializedPropertyData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSerializedPropertyData.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertSerializedPropertyData>()
{
	return FConcertSerializedPropertyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SerializedData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSerializedPropertyData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSerializedPropertyData, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_PropertyName_MetaData), Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_PropertyName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_SerializedData_Inner = { "SerializedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_SerializedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_SerializedData = { "SerializedData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertSerializedPropertyData, SerializedData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_SerializedData_MetaData), Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_SerializedData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_SerializedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewProp_SerializedData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertSerializedPropertyData",
		Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::PropPointers),
		sizeof(FConcertSerializedPropertyData),
		alignof(FConcertSerializedPropertyData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSerializedPropertyData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSerializedPropertyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSerializedPropertyData.InnerSingleton, Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSerializedPropertyData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertExportedObject;
class UScriptStruct* FConcertExportedObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertExportedObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertExportedObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertExportedObject, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertExportedObject"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertExportedObject.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertExportedObject>()
{
	return FConcertExportedObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertExportedObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPathDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectPathDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyDatas;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SerializedAnnotationData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedAnnotationData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedAnnotationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertExportedObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertExportedObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertExportedObject, ObjectId), Z_Construct_UScriptStruct_FConcertObjectId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectId_MetaData), Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectId_MetaData) }; // 498264068
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectPathDepth_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectPathDepth = { "ObjectPathDepth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertExportedObject, ObjectPathDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectPathDepth_MetaData), Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectPathDepth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectData = { "ObjectData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertExportedObject, ObjectData), Z_Construct_UScriptStruct_FConcertSerializedObjectData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectData_MetaData), Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectData_MetaData) }; // 780156534
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_PropertyDatas_Inner = { "PropertyDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConcertSerializedPropertyData, METADATA_PARAMS(0, nullptr) }; // 3293643418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_PropertyDatas_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_PropertyDatas = { "PropertyDatas", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertExportedObject, PropertyDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_PropertyDatas_MetaData), Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_PropertyDatas_MetaData) }; // 3293643418
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_SerializedAnnotationData_Inner = { "SerializedAnnotationData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_SerializedAnnotationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_SerializedAnnotationData = { "SerializedAnnotationData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertExportedObject, SerializedAnnotationData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_SerializedAnnotationData_MetaData), Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_SerializedAnnotationData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertExportedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectPathDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_ObjectData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_PropertyDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_PropertyDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_SerializedAnnotationData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewProp_SerializedAnnotationData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertExportedObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertExportedObject",
		Z_Construct_UScriptStruct_FConcertExportedObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertExportedObject_Statics::PropPointers),
		sizeof(FConcertExportedObject),
		alignof(FConcertExportedObject),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertExportedObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertExportedObject_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertExportedObject_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertExportedObject()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertExportedObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertExportedObject.InnerSingleton, Z_Construct_UScriptStruct_FConcertExportedObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertExportedObject.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertTransactionEventBase;
class UScriptStruct* FConcertTransactionEventBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertTransactionEventBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertTransactionEventBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertTransactionEventBase, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertTransactionEventBase"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertTransactionEventBase.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertTransactionEventBase>()
{
	return FConcertTransactionEventBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransactionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OperationId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransactionEndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionUpdateIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransactionUpdateIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VersionIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModifiedPackages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedPackages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedPackages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryObjectId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryObjectId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExportedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExportedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertTransactionEventBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertTransactionEventBase, TransactionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionId_MetaData), Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_OperationId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertTransactionEventBase, OperationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_OperationId_MetaData), Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_OperationId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionEndpointId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionEndpointId = { "TransactionEndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertTransactionEventBase, TransactionEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionEndpointId_MetaData), Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionEndpointId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionUpdateIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionUpdateIndex = { "TransactionUpdateIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertTransactionEventBase, TransactionUpdateIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionUpdateIndex_MetaData), Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionUpdateIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_VersionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_VersionIndex = { "VersionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertTransactionEventBase, VersionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_VersionIndex_MetaData), Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_VersionIndex_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ModifiedPackages_Inner = { "ModifiedPackages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ModifiedPackages_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ModifiedPackages = { "ModifiedPackages", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertTransactionEventBase, ModifiedPackages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ModifiedPackages_MetaData), Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ModifiedPackages_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_PrimaryObjectId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_PrimaryObjectId = { "PrimaryObjectId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertTransactionEventBase, PrimaryObjectId), Z_Construct_UScriptStruct_FConcertObjectId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_PrimaryObjectId_MetaData), Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_PrimaryObjectId_MetaData) }; // 498264068
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ExportedObjects_Inner = { "ExportedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConcertExportedObject, METADATA_PARAMS(0, nullptr) }; // 1451945585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ExportedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ExportedObjects = { "ExportedObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertTransactionEventBase, ExportedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ExportedObjects_MetaData), Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ExportedObjects_MetaData) }; // 1451945585
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_OperationId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_TransactionUpdateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_VersionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ModifiedPackages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ModifiedPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_PrimaryObjectId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ExportedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewProp_ExportedObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertTransactionEventBase",
		Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::PropPointers),
		sizeof(FConcertTransactionEventBase),
		alignof(FConcertTransactionEventBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertTransactionEventBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertTransactionEventBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertTransactionEventBase.InnerSingleton, Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertTransactionEventBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertTransactionFinalizedEvent>() == std::is_polymorphic<FConcertTransactionEventBase>(), "USTRUCT FConcertTransactionFinalizedEvent cannot be polymorphic unless super FConcertTransactionEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertTransactionFinalizedEvent;
class UScriptStruct* FConcertTransactionFinalizedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertTransactionFinalizedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertTransactionFinalizedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertTransactionFinalizedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertTransactionFinalizedEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertTransactionFinalizedEvent>()
{
	return FConcertTransactionFinalizedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalIdentifierState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalIdentifierState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertTransactionFinalizedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewProp_LocalIdentifierState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewProp_LocalIdentifierState = { "LocalIdentifierState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertTransactionFinalizedEvent, LocalIdentifierState), Z_Construct_UScriptStruct_FConcertLocalIdentifierState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewProp_LocalIdentifierState_MetaData), Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewProp_LocalIdentifierState_MetaData) }; // 1106330508
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewProp_Title_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertTransactionFinalizedEvent, Title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewProp_Title_MetaData), Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewProp_Title_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewProp_LocalIdentifierState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewProp_Title,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertTransactionEventBase,
		&NewStructOps,
		"ConcertTransactionFinalizedEvent",
		Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::PropPointers),
		sizeof(FConcertTransactionFinalizedEvent),
		alignof(FConcertTransactionFinalizedEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertTransactionFinalizedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertTransactionFinalizedEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertTransactionFinalizedEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertTransactionSnapshotEvent>() == std::is_polymorphic<FConcertTransactionEventBase>(), "USTRUCT FConcertTransactionSnapshotEvent cannot be polymorphic unless super FConcertTransactionEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertTransactionSnapshotEvent;
class UScriptStruct* FConcertTransactionSnapshotEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertTransactionSnapshotEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertTransactionSnapshotEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertTransactionSnapshotEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertTransactionSnapshotEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertTransactionSnapshotEvent>()
{
	return FConcertTransactionSnapshotEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertTransactionSnapshotEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		Z_Construct_UScriptStruct_FConcertTransactionEventBase,
		&NewStructOps,
		"ConcertTransactionSnapshotEvent",
		nullptr,
		0,
		sizeof(FConcertTransactionSnapshotEvent),
		alignof(FConcertTransactionSnapshotEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertTransactionSnapshotEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertTransactionSnapshotEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertTransactionSnapshotEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertTransactionRejectedEvent;
class UScriptStruct* FConcertTransactionRejectedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertTransactionRejectedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertTransactionRejectedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent, (UObject*)Z_Construct_UPackage__Script_ConcertSyncCore(), TEXT("ConcertTransactionRejectedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertTransactionRejectedEvent.OuterSingleton;
}
template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<FConcertTransactionRejectedEvent>()
{
	return FConcertTransactionRejectedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransactionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertTransactionRejectedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::NewProp_TransactionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransactionEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertTransactionRejectedEvent, TransactionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::NewProp_TransactionId_MetaData), Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::NewProp_TransactionId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::NewProp_TransactionId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncCore,
		nullptr,
		&NewStructOps,
		"ConcertTransactionRejectedEvent",
		Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::PropPointers),
		sizeof(FConcertTransactionRejectedEvent),
		alignof(FConcertTransactionRejectedEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertTransactionRejectedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertTransactionRejectedEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertTransactionRejectedEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_Statics::EnumInfo[] = {
		{ ETransactionFilterResult_StaticEnum, TEXT("ETransactionFilterResult"), &Z_Registration_Info_UEnum_ETransactionFilterResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4257901492U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_Statics::ScriptStructInfo[] = {
		{ FConcertObjectId::StaticStruct, Z_Construct_UScriptStruct_FConcertObjectId_Statics::NewStructOps, TEXT("ConcertObjectId"), &Z_Registration_Info_UScriptStruct_ConcertObjectId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertObjectId), 498264068U) },
		{ FConcertSerializedObjectData::StaticStruct, Z_Construct_UScriptStruct_FConcertSerializedObjectData_Statics::NewStructOps, TEXT("ConcertSerializedObjectData"), &Z_Registration_Info_UScriptStruct_ConcertSerializedObjectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSerializedObjectData), 780156534U) },
		{ FConcertSerializedPropertyData::StaticStruct, Z_Construct_UScriptStruct_FConcertSerializedPropertyData_Statics::NewStructOps, TEXT("ConcertSerializedPropertyData"), &Z_Registration_Info_UScriptStruct_ConcertSerializedPropertyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSerializedPropertyData), 3293643418U) },
		{ FConcertExportedObject::StaticStruct, Z_Construct_UScriptStruct_FConcertExportedObject_Statics::NewStructOps, TEXT("ConcertExportedObject"), &Z_Registration_Info_UScriptStruct_ConcertExportedObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertExportedObject), 1451945585U) },
		{ FConcertTransactionEventBase::StaticStruct, Z_Construct_UScriptStruct_FConcertTransactionEventBase_Statics::NewStructOps, TEXT("ConcertTransactionEventBase"), &Z_Registration_Info_UScriptStruct_ConcertTransactionEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertTransactionEventBase), 3065280164U) },
		{ FConcertTransactionFinalizedEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertTransactionFinalizedEvent_Statics::NewStructOps, TEXT("ConcertTransactionFinalizedEvent"), &Z_Registration_Info_UScriptStruct_ConcertTransactionFinalizedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertTransactionFinalizedEvent), 4173499300U) },
		{ FConcertTransactionSnapshotEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertTransactionSnapshotEvent_Statics::NewStructOps, TEXT("ConcertTransactionSnapshotEvent"), &Z_Registration_Info_UScriptStruct_ConcertTransactionSnapshotEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertTransactionSnapshotEvent), 118362532U) },
		{ FConcertTransactionRejectedEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertTransactionRejectedEvent_Statics::NewStructOps, TEXT("ConcertTransactionRejectedEvent"), &Z_Registration_Info_UScriptStruct_ConcertTransactionRejectedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertTransactionRejectedEvent), 3503583515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_404734100(TEXT("/Script/ConcertSyncCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertTransactionEvents_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
