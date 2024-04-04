// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h"
#include "../Internal/DataInterface/NiagaraDataInterfaceDataChannelCommon.h"
#include "../Public/NiagaraDataInterfaceEmitterBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelRead() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRWBase();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode;
	static UEnum* ENDIDataChannelSpawnMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDIDataChannelSpawnMode"));
		}
		return Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDIDataChannelSpawnMode>()
	{
		return ENDIDataChannelSpawnMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::Enumerators[] = {
		{ "ENDIDataChannelSpawnMode::Override", (int64)ENDIDataChannelSpawnMode::Override },
		{ "ENDIDataChannelSpawnMode::Accumulate", (int64)ENDIDataChannelSpawnMode::Accumulate },
		{ "ENDIDataChannelSpawnMode::None", (int64)ENDIDataChannelSpawnMode::None },
		{ "ENDIDataChannelSpawnMode::Max", (int64)ENDIDataChannelSpawnMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::Enum_MetaDataParams[] = {
		{ "Accumulate.Comment", "/** This mode will accumulate spawn counts with other spawns. */" },
		{ "Accumulate.Name", "ENDIDataChannelSpawnMode::Accumulate" },
		{ "Accumulate.ToolTip", "This mode will accumulate spawn counts with other spawns." },
		{ "Comment", "/** Mode controlling the behavior of the Spawn function for Niagara's Data Channel Read Data Interface.*/" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ENDIDataChannelSpawnMode::Max" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "None.Comment", "/** Does nothing. This mode is useful for dynamically skipping spawning based on script logic. */" },
		{ "None.Name", "ENDIDataChannelSpawnMode::None" },
		{ "None.ToolTip", "Does nothing. This mode is useful for dynamically skipping spawning based on script logic." },
		{ "Override.Comment", "/** This mode will override any previous spawn counts set or accumulated this tick. */" },
		{ "Override.Name", "ENDIDataChannelSpawnMode::Override" },
		{ "Override.ToolTip", "This mode will override any previous spawn counts set or accumulated this tick." },
		{ "ToolTip", "Mode controlling the behavior of the Spawn function for Niagara's Data Channel Read Data Interface." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDIDataChannelSpawnMode",
		"ENDIDataChannelSpawnMode",
		Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode()
	{
		if (!Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDIDataChannelSpawnMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode.InnerSingleton;
	}
	void UNiagaraDataInterfaceDataChannelRead::StaticRegisterNativesUNiagaraDataInterfaceDataChannelRead()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceDataChannelRead);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister()
	{
		return UNiagaraDataInterfaceDataChannelRead::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReadCurrentFrame_MetaData[];
#endif
		static void NewProp_bReadCurrentFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadCurrentFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateSourceDataEveryTick_MetaData[];
#endif
		static void NewProp_bUpdateSourceDataEveryTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSourceDataEveryTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawnGroupToDataChannelIndex_MetaData[];
#endif
		static void NewProp_bOverrideSpawnGroupToDataChannelIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawnGroupToDataChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInfoName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnInfoName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceRWBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::Class_MetaDataParams[] = {
		{ "Category", "Data Channels" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Data Channel Reader" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** When reading from external, the channel to consume. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "When reading from external, the channel to consume." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelRead, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_EmitterBinding_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** A bounds emitter instance when using functions like Spawn. Defaults to Self. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "A bounds emitter instance when using functions like Spawn. Defaults to Self." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_EmitterBinding = { "EmitterBinding", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelRead, EmitterBinding), Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_EmitterBinding_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_EmitterBinding_MetaData) }; // 928635775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** True if this reader will read the current frame's data. If false, we read the previous frame.\n\x09* Reading the current frame introduces a tick order dependency but allows for zero latency reads. Any data channel elements that are generated after this reader is used are missed.\n\x09* Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.\n\x09*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "True if this reader will read the current frame's data. If false, we read the previous frame.\nReading the current frame introduces a tick order dependency but allows for zero latency reads. Any data channel elements that are generated after this reader is used are missed.\nReading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceDataChannelRead*)Obj)->bReadCurrentFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame = { "bReadCurrentFrame", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelRead), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bUpdateSourceDataEveryTick_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/**\n\x09Whether this DI should request updated source data from the Data Channel each tick.\n\x09Some Data Channels have multiple separate source data elements for things such as spatial subdivision. \n\x09""Each DI will request the correct one for it's owning system instance from the data channel. \n\x09""Depending on the data channel this could be an expensive search so we should avoid doing this every tick if possible.\n\x09*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "Whether this DI should request updated source data from the Data Channel each tick.\nSome Data Channels have multiple separate source data elements for things such as spatial subdivision.\nEach DI will request the correct one for it's owning system instance from the data channel.\nDepending on the data channel this could be an expensive search so we should avoid doing this every tick if possible." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bUpdateSourceDataEveryTick_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceDataChannelRead*)Obj)->bUpdateSourceDataEveryTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bUpdateSourceDataEveryTick = { "bUpdateSourceDataEveryTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelRead), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bUpdateSourceDataEveryTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bUpdateSourceDataEveryTick_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bUpdateSourceDataEveryTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** When true, Emitter.Spawn group for any spawned particles will be overridden to the index of the data channel element that generated that spawn. This allows particles to read further data from the data channel element that generated them. */" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "When true, Emitter.Spawn group for any spawned particles will be overridden to the index of the data channel element that generated that spawn. This allows particles to read further data from the data channel element that generated them." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceDataChannelRead*)Obj)->bOverrideSpawnGroupToDataChannelIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex = { "bOverrideSpawnGroupToDataChannelIndex", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelRead), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_SpawnInfoName_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** The spawn info variable we'll read from the data channel to control spawning using the SpawnFromSpawnInfo DI function.*/" },
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "The spawn info variable we'll read from the data channel to control spawning using the SpawnFromSpawnInfo DI function." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_SpawnInfoName = { "SpawnInfoName", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelRead, SpawnInfoName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_SpawnInfoName_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_SpawnInfoName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Internal/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData = { "CompiledData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelRead, CompiledData), Z_Construct_UScriptStruct_FNDIDataChannelCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData_MetaData) }; // 3403831702
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_EmitterBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bUpdateSourceDataEveryTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_SpawnInfoName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceDataChannelRead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::ClassParams = {
		&UNiagaraDataInterfaceDataChannelRead::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::PropPointers),
		0,
		0x000830A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceDataChannelRead>()
	{
		return UNiagaraDataInterfaceDataChannelRead::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceDataChannelRead);
	UNiagaraDataInterfaceDataChannelRead::~UNiagaraDataInterfaceDataChannelRead() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::EnumInfo[] = {
		{ ENDIDataChannelSpawnMode_StaticEnum, TEXT("ENDIDataChannelSpawnMode"), &Z_Registration_Info_UEnum_ENDIDataChannelSpawnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2956599332U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead, UNiagaraDataInterfaceDataChannelRead::StaticClass, TEXT("UNiagaraDataInterfaceDataChannelRead"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceDataChannelRead), 1229660721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_1460933008(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
