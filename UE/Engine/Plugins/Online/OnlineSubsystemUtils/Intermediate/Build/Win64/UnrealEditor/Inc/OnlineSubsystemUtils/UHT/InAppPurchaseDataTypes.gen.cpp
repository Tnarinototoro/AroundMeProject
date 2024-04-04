// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InAppPurchaseDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseDataTypes() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest2;
class UScriptStruct* FInAppPurchaseProductRequest2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("InAppPurchaseProductRequest2"));
	}
	return Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest2.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FInAppPurchaseProductRequest2>()
{
	return FInAppPurchaseProductRequest2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConsumable_MetaData[];
#endif
		static void NewProp_bIsConsumable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConsumable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction request information\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseDataTypes.h" },
		{ "ToolTip", "Micro-transaction request information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseProductRequest2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_ProductIdentifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier that matches the one from your targeted store.\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseDataTypes.h" },
		{ "ToolTip", "The unique product identifier that matches the one from your targeted store." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_ProductIdentifier = { "ProductIdentifier", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseProductRequest2, ProductIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_ProductIdentifier_MetaData), Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_ProductIdentifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Flag to determine whether this is a consumable purchase, or not.\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseDataTypes.h" },
		{ "ToolTip", "Flag to determine whether this is a consumable purchase, or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable_SetBit(void* Obj)
	{
		((FInAppPurchaseProductRequest2*)Obj)->bIsConsumable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable = { "bIsConsumable", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInAppPurchaseProductRequest2), &Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable_MetaData), Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_ProductIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"InAppPurchaseProductRequest2",
		Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::PropPointers),
		sizeof(FInAppPurchaseProductRequest2),
		alignof(FInAppPurchaseProductRequest2),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2()
	{
		if (!Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest2.InnerSingleton, Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest2.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInAppPurchaseStatus;
	static UEnum* EInAppPurchaseStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInAppPurchaseStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInAppPurchaseStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EInAppPurchaseStatus"));
		}
		return Z_Registration_Info_UEnum_EInAppPurchaseStatus.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EInAppPurchaseStatus>()
	{
		return EInAppPurchaseStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Statics::Enumerators[] = {
		{ "EInAppPurchaseStatus::Invalid", (int64)EInAppPurchaseStatus::Invalid },
		{ "EInAppPurchaseStatus::Failed", (int64)EInAppPurchaseStatus::Failed },
		{ "EInAppPurchaseStatus::Deferred", (int64)EInAppPurchaseStatus::Deferred },
		{ "EInAppPurchaseStatus::Canceled", (int64)EInAppPurchaseStatus::Canceled },
		{ "EInAppPurchaseStatus::Purchased", (int64)EInAppPurchaseStatus::Purchased },
		{ "EInAppPurchaseStatus::Restored", (int64)EInAppPurchaseStatus::Restored },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Canceled.Comment", "/** purchase canceled by user */" },
		{ "Canceled.DisplayName", "Canceled" },
		{ "Canceled.Name", "EInAppPurchaseStatus::Canceled" },
		{ "Canceled.ToolTip", "purchase canceled by user" },
		{ "Comment", "/**\n * State of a purchase transaction\n */" },
		{ "Deferred.Comment", "/** purchase has been deferred (neither failed nor completed) */" },
		{ "Deferred.DisplayName", "Deferred" },
		{ "Deferred.Name", "EInAppPurchaseStatus::Deferred" },
		{ "Deferred.ToolTip", "purchase has been deferred (neither failed nor completed)" },
		{ "Failed.Comment", "/** purchase completed but failed */" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "EInAppPurchaseStatus::Failed" },
		{ "Failed.ToolTip", "purchase completed but failed" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EInAppPurchaseStatus::Invalid" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseDataTypes.h" },
		{ "Purchased.Comment", "/** purchase succeeded */" },
		{ "Purchased.DisplayName", "Purchased" },
		{ "Purchased.Name", "EInAppPurchaseStatus::Purchased" },
		{ "Purchased.ToolTip", "purchase succeeded" },
		{ "Restored.Comment", "/** restore succeeded */" },
		{ "Restored.DisplayName", "Restored" },
		{ "Restored.Name", "EInAppPurchaseStatus::Restored" },
		{ "Restored.ToolTip", "restore succeeded" },
		{ "ToolTip", "State of a purchase transaction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		"EInAppPurchaseStatus",
		"EInAppPurchaseStatus",
		Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus()
	{
		if (!Z_Registration_Info_UEnum_EInAppPurchaseStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInAppPurchaseStatus.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInAppPurchaseStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InAppPurchaseReceiptInfo2;
class UScriptStruct* FInAppPurchaseReceiptInfo2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InAppPurchaseReceiptInfo2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InAppPurchaseReceiptInfo2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("InAppPurchaseReceiptInfo2"));
	}
	return Z_Registration_Info_UScriptStruct_InAppPurchaseReceiptInfo2.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FInAppPurchaseReceiptInfo2>()
{
	return FInAppPurchaseReceiptInfo2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValidationInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TransactionIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction purchase information\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseDataTypes.h" },
		{ "ToolTip", "Micro-transaction purchase information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseReceiptInfo2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The item name\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseDataTypes.h" },
		{ "ToolTip", "The item name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseReceiptInfo2, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemName_MetaData), Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseDataTypes.h" },
		{ "ToolTip", "The unique product identifier" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseReceiptInfo2, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemId_MetaData), Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ValidationInfo_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the purchase validation information\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseDataTypes.h" },
		{ "ToolTip", "the purchase validation information" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ValidationInfo = { "ValidationInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseReceiptInfo2, ValidationInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ValidationInfo_MetaData), Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ValidationInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_TransactionIdentifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the unique transaction identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseDataTypes.h" },
		{ "ToolTip", "the unique transaction identifier" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_TransactionIdentifier = { "TransactionIdentifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInAppPurchaseReceiptInfo2, TransactionIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_TransactionIdentifier_MetaData), Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_TransactionIdentifier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ValidationInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_TransactionIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"InAppPurchaseReceiptInfo2",
		Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::PropPointers),
		sizeof(FInAppPurchaseReceiptInfo2),
		alignof(FInAppPurchaseReceiptInfo2),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2()
	{
		if (!Z_Registration_Info_UScriptStruct_InAppPurchaseReceiptInfo2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InAppPurchaseReceiptInfo2.InnerSingleton, Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InAppPurchaseReceiptInfo2.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h_Statics::EnumInfo[] = {
		{ EInAppPurchaseStatus_StaticEnum, TEXT("EInAppPurchaseStatus"), &Z_Registration_Info_UEnum_EInAppPurchaseStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1585849664U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h_Statics::ScriptStructInfo[] = {
		{ FInAppPurchaseProductRequest2::StaticStruct, Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewStructOps, TEXT("InAppPurchaseProductRequest2"), &Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInAppPurchaseProductRequest2), 3187082382U) },
		{ FInAppPurchaseReceiptInfo2::StaticStruct, Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewStructOps, TEXT("InAppPurchaseReceiptInfo2"), &Z_Registration_Info_UScriptStruct_InAppPurchaseReceiptInfo2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInAppPurchaseReceiptInfo2), 1112539755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h_3416174354(TEXT("/Script/OnlineSubsystemUtils"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseDataTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
