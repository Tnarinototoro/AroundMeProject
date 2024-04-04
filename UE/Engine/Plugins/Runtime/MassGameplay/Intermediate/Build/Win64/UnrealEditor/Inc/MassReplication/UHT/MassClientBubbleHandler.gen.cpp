// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassClientBubbleHandler.h"
#include "MassReplicationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassClientBubbleHandler() {}
// Cross Module References
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassFastArrayItemBase();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassReplicatedAgentHandle();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_MassReplication();
// End Cross Module References

static_assert(std::is_polymorphic<FMassFastArrayItemBase>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FMassFastArrayItemBase cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassFastArrayItemBase;
class UScriptStruct* FMassFastArrayItemBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassFastArrayItemBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassFastArrayItemBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassFastArrayItemBase, (UObject*)Z_Construct_UPackage__Script_MassReplication(), TEXT("MassFastArrayItemBase"));
	}
	return Z_Registration_Info_UScriptStruct_MassFastArrayItemBase.OuterSingleton;
}
template<> MASSREPLICATION_API UScriptStruct* StaticStruct<FMassFastArrayItemBase>()
{
	return FMassFastArrayItemBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Base for fast array items. For replication of new entity types this type should be inherited from. FReplicatedAgentBase should also be inherited from\n *  and made a member variable of the FMassFastArrayItemBase derived struct, with the member variable called Agent.\n */" },
		{ "ModuleRelativePath", "Public/MassClientBubbleHandler.h" },
		{ "ToolTip", "Base for fast array items. For replication of new entity types this type should be inherited from. FReplicatedAgentBase should also be inherited from\nand made a member variable of the FMassFastArrayItemBase derived struct, with the member variable called Agent." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassFastArrayItemBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::NewProp_Handle_MetaData[] = {
		{ "Comment", "/** Only to be used on a server */" },
		{ "ModuleRelativePath", "Public/MassClientBubbleHandler.h" },
		{ "ToolTip", "Only to be used on a server" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0020080080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassFastArrayItemBase, Handle), Z_Construct_UScriptStruct_FMassReplicatedAgentHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::NewProp_Handle_MetaData), Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::NewProp_Handle_MetaData) }; // 2922540044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::NewProp_Handle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"MassFastArrayItemBase",
		Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::PropPointers),
		sizeof(FMassFastArrayItemBase),
		alignof(FMassFastArrayItemBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassFastArrayItemBase()
	{
		if (!Z_Registration_Info_UScriptStruct_MassFastArrayItemBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassFastArrayItemBase.InnerSingleton, Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassFastArrayItemBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleHandler_h_Statics::ScriptStructInfo[] = {
		{ FMassFastArrayItemBase::StaticStruct, Z_Construct_UScriptStruct_FMassFastArrayItemBase_Statics::NewStructOps, TEXT("MassFastArrayItemBase"), &Z_Registration_Info_UScriptStruct_MassFastArrayItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassFastArrayItemBase), 2720499430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleHandler_h_1564936827(TEXT("/Script/MassReplication"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
