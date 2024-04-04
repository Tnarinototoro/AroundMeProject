// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMDebugView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMDebugView() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewDebugEntry();
	MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelDebugger();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewSourceDebugEntry;
class UScriptStruct* FMVVMViewSourceDebugEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewSourceDebugEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewSourceDebugEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelDebugger(), TEXT("MVVMViewSourceDebugEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewSourceDebugEntry.OuterSingleton;
}
template<> MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* StaticStruct<FMVVMViewSourceDebugEntry>()
{
	return FMVVMViewSourceDebugEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceInstanceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceInstanceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelDebugId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewModelDebugId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewSourceDebugEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_SourceInstanceName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_SourceInstanceName = { "SourceInstanceName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewSourceDebugEntry, SourceInstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_SourceInstanceName_MetaData), Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_SourceInstanceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_SourceAsset_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewSourceDebugEntry, SourceAsset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_SourceAsset_MetaData), Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_SourceAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_ViewModelDebugId_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_ViewModelDebugId = { "ViewModelDebugId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewSourceDebugEntry, ViewModelDebugId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_ViewModelDebugId_MetaData), Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_ViewModelDebugId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_SourceInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_SourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewProp_ViewModelDebugId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelDebugger,
		nullptr,
		&NewStructOps,
		"MVVMViewSourceDebugEntry",
		Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::PropPointers),
		sizeof(FMVVMViewSourceDebugEntry),
		alignof(FMVVMViewSourceDebugEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewSourceDebugEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewSourceDebugEntry.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewSourceDebugEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewDebugEntry;
class UScriptStruct* FMVVMViewDebugEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewDebugEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewDebugEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewDebugEntry, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelDebugger(), TEXT("MVVMViewDebugEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewDebugEntry.OuterSingleton;
}
template<> MODELVIEWVIEWMODELDEBUGGER_API UScriptStruct* StaticStruct<FMVVMViewDebugEntry>()
{
	return FMVVMViewDebugEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserWidgetInstanceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserWidgetInstanceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LocalPlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WorldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserWidgetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserWidgetAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewClassDebugId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewClassDebugId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewInstanceDebugId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewInstanceDebugId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewDebugEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_UserWidgetInstanceName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_UserWidgetInstanceName = { "UserWidgetInstanceName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewDebugEntry, UserWidgetInstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_UserWidgetInstanceName_MetaData), Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_UserWidgetInstanceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_LocalPlayerName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_LocalPlayerName = { "LocalPlayerName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewDebugEntry, LocalPlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_LocalPlayerName_MetaData), Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_LocalPlayerName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_WorldName_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_WorldName = { "WorldName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewDebugEntry, WorldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_WorldName_MetaData), Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_WorldName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_UserWidgetAsset_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_UserWidgetAsset = { "UserWidgetAsset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewDebugEntry, UserWidgetAsset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_UserWidgetAsset_MetaData), Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_UserWidgetAsset_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry, METADATA_PARAMS(0, nullptr) }; // 4016843863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_Sources_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewDebugEntry, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_Sources_MetaData), Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_Sources_MetaData) }; // 4016843863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_ViewClassDebugId_MetaData[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_ViewClassDebugId = { "ViewClassDebugId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewDebugEntry, ViewClassDebugId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_ViewClassDebugId_MetaData), Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_ViewClassDebugId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_ViewInstanceDebugId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVVMDebugView.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_ViewInstanceDebugId = { "ViewInstanceDebugId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMVVMViewDebugEntry, ViewInstanceDebugId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_ViewInstanceDebugId_MetaData), Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_ViewInstanceDebugId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_UserWidgetInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_LocalPlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_WorldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_UserWidgetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_Sources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_Sources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_ViewClassDebugId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewProp_ViewInstanceDebugId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelDebugger,
		nullptr,
		&NewStructOps,
		"MVVMViewDebugEntry",
		Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::PropPointers),
		sizeof(FMVVMViewDebugEntry),
		alignof(FMVVMViewDebugEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewDebugEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewDebugEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewDebugEntry.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewDebugEntry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugView_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugView_h_Statics::ScriptStructInfo[] = {
		{ FMVVMViewSourceDebugEntry::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewSourceDebugEntry_Statics::NewStructOps, TEXT("MVVMViewSourceDebugEntry"), &Z_Registration_Info_UScriptStruct_MVVMViewSourceDebugEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewSourceDebugEntry), 4016843863U) },
		{ FMVVMViewDebugEntry::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewDebugEntry_Statics::NewStructOps, TEXT("MVVMViewDebugEntry"), &Z_Registration_Info_UScriptStruct_MVVMViewDebugEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewDebugEntry), 1660703982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugView_h_4005480588(TEXT("/Script/ModelViewViewModelDebugger"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugView_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelDebugger_Public_MVVMDebugView_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
