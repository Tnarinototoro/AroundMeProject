// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassObserverManager.h"
#include "MassProcessingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassObserverManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassObserverManager();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassObserversMap();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassRuntimePipeline();
	UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassObserversMap;
class UScriptStruct* FMassObserversMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassObserversMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassObserversMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassObserversMap, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassObserversMap"));
	}
	return Z_Registration_Info_UScriptStruct_MassObserversMap.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassObserversMap>()
{
	return FMassObserversMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassObserversMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Container_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Container;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassObserversMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * A wrapper type for a TMap to support having array-of-maps UPROPERTY members in FMassObserverManager\n */" },
		{ "ModuleRelativePath", "Public/MassObserverManager.h" },
		{ "ToolTip", "A wrapper type for a TMap to support having array-of-maps UPROPERTY members in FMassObserverManager" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassObserversMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassObserversMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassObserversMap_Statics::NewProp_Container_ValueProp = { "Container", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMassRuntimePipeline, METADATA_PARAMS(0, nullptr) }; // 3871103442
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassObserversMap_Statics::NewProp_Container_Key_KeyProp = { "Container_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassObserversMap_Statics::NewProp_Container_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassObserverManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMassObserversMap_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassObserversMap, Container), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassObserversMap_Statics::NewProp_Container_MetaData), Z_Construct_UScriptStruct_FMassObserversMap_Statics::NewProp_Container_MetaData) }; // 3871103442
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassObserversMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassObserversMap_Statics::NewProp_Container_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassObserversMap_Statics::NewProp_Container_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassObserversMap_Statics::NewProp_Container,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassObserversMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassObserversMap",
		Z_Construct_UScriptStruct_FMassObserversMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassObserversMap_Statics::PropPointers),
		sizeof(FMassObserversMap),
		alignof(FMassObserversMap),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassObserversMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassObserversMap_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassObserversMap_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassObserversMap()
	{
		if (!Z_Registration_Info_UScriptStruct_MassObserversMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassObserversMap.InnerSingleton, Z_Construct_UScriptStruct_FMassObserversMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassObserversMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassObserverManager;
class UScriptStruct* FMassObserverManager::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassObserverManager.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassObserverManager.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassObserverManager, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassObserverManager"));
	}
	return Z_Registration_Info_UScriptStruct_MassObserverManager.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassObserverManager>()
{
	return FMassObserverManager::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassObserverManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FragmentObservers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FragmentObservers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagObservers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagObservers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassObserverManager_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * A type that encapsulates logic related to notifying interested parties of entity composition changes. Upon creation it\n * reads information from UMassObserverRegistry and instantiates processors interested in handling given fragment\n * type addition or removal.\n */" },
		{ "ModuleRelativePath", "Public/MassObserverManager.h" },
		{ "ToolTip", "A type that encapsulates logic related to notifying interested parties of entity composition changes. Upon creation it\nreads information from UMassObserverRegistry and instantiates processors interested in handling given fragment\ntype addition or removal." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassObserverManager>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewProp_FragmentObservers_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassEntity.EMassObservedOperation" },
		{ "ModuleRelativePath", "Public/MassObserverManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewProp_FragmentObservers = { "FragmentObservers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(FragmentObservers, FMassObserverManager), STRUCT_OFFSET(FMassObserverManager, FragmentObservers), Z_Construct_UScriptStruct_FMassObserversMap, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewProp_FragmentObservers_MetaData), Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewProp_FragmentObservers_MetaData) }; // 1198655074
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewProp_TagObservers_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassEntity.EMassObservedOperation" },
		{ "ModuleRelativePath", "Public/MassObserverManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewProp_TagObservers = { "TagObservers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(TagObservers, FMassObserverManager), STRUCT_OFFSET(FMassObserverManager, TagObservers), Z_Construct_UScriptStruct_FMassObserversMap, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewProp_TagObservers_MetaData), Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewProp_TagObservers_MetaData) }; // 1198655074
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassObserverManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewProp_FragmentObservers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewProp_TagObservers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassObserverManager_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassObserverManager",
		Z_Construct_UScriptStruct_FMassObserverManager_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassObserverManager_Statics::PropPointers),
		sizeof(FMassObserverManager),
		alignof(FMassObserverManager),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassObserverManager_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassObserverManager_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassObserverManager_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassObserverManager()
	{
		if (!Z_Registration_Info_UScriptStruct_MassObserverManager.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassObserverManager.InnerSingleton, Z_Construct_UScriptStruct_FMassObserverManager_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassObserverManager.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverManager_h_Statics::ScriptStructInfo[] = {
		{ FMassObserversMap::StaticStruct, Z_Construct_UScriptStruct_FMassObserversMap_Statics::NewStructOps, TEXT("MassObserversMap"), &Z_Registration_Info_UScriptStruct_MassObserversMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassObserversMap), 1198655074U) },
		{ FMassObserverManager::StaticStruct, Z_Construct_UScriptStruct_FMassObserverManager_Statics::NewStructOps, TEXT("MassObserverManager"), &Z_Registration_Info_UScriptStruct_MassObserverManager, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassObserverManager), 3406363583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverManager_h_4177144422(TEXT("/Script/MassEntity"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
