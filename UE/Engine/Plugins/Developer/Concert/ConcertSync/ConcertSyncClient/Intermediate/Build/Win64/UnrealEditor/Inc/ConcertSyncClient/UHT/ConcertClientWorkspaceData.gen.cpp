// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ConcertClientWorkspaceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertClientWorkspaceData() {}
// Cross Module References
	CONCERTSYNCCLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertClientWorkspaceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncClient();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertClientWorkspaceData;
class UScriptStruct* FConcertClientWorkspaceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertClientWorkspaceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertClientWorkspaceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertClientWorkspaceData, (UObject*)Z_Construct_UPackage__Script_ConcertSyncClient(), TEXT("ConcertClientWorkspaceData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertClientWorkspaceData.OuterSingleton;
}
template<> CONCERTSYNCCLIENT_API UScriptStruct* StaticStruct<FConcertClientWorkspaceData>()
{
	return FConcertClientWorkspaceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionIdentifier;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_PersistedFiles_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PersistedFiles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistedFiles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PersistedFiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Client workspace data associated with a specific\n * session that persist between connections.\n */" },
		{ "ModuleRelativePath", "Private/ConcertClientWorkspaceData.h" },
		{ "ToolTip", "Client workspace data associated with a specific\nsession that persist between connections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertClientWorkspaceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_SessionIdentifier_MetaData[] = {
		{ "Comment", "/** The session identifier that this client data is associated with. */" },
		{ "ModuleRelativePath", "Private/ConcertClientWorkspaceData.h" },
		{ "ToolTip", "The session identifier that this client data is associated with." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_SessionIdentifier = { "SessionIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientWorkspaceData, SessionIdentifier), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_SessionIdentifier_MetaData), Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_SessionIdentifier_MetaData) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_PersistedFiles_ValueProp = { "PersistedFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_PersistedFiles_Key_KeyProp = { "PersistedFiles_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_PersistedFiles_MetaData[] = {
		{ "Comment", "/** Map of packages persisted locally from the session associated with their package revision.*/" },
		{ "ModuleRelativePath", "Private/ConcertClientWorkspaceData.h" },
		{ "ToolTip", "Map of packages persisted locally from the session associated with their package revision." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_PersistedFiles = { "PersistedFiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConcertClientWorkspaceData, PersistedFiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_PersistedFiles_MetaData), Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_PersistedFiles_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_SessionIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_PersistedFiles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_PersistedFiles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewProp_PersistedFiles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncClient,
		nullptr,
		&NewStructOps,
		"ConcertClientWorkspaceData",
		Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::PropPointers),
		sizeof(FConcertClientWorkspaceData),
		alignof(FConcertClientWorkspaceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConcertClientWorkspaceData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertClientWorkspaceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertClientWorkspaceData.InnerSingleton, Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertClientWorkspaceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertClientWorkspaceData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertClientWorkspaceData_h_Statics::ScriptStructInfo[] = {
		{ FConcertClientWorkspaceData::StaticStruct, Z_Construct_UScriptStruct_FConcertClientWorkspaceData_Statics::NewStructOps, TEXT("ConcertClientWorkspaceData"), &Z_Registration_Info_UScriptStruct_ConcertClientWorkspaceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertClientWorkspaceData), 1936543544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertClientWorkspaceData_h_228940426(TEXT("/Script/ConcertSyncClient"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertClientWorkspaceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Private_ConcertClientWorkspaceData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
