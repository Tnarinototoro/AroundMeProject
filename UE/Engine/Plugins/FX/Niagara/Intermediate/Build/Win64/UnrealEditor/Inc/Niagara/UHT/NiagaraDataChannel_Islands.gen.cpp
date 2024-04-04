// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDataChannel_Islands.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannel_Islands() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_Islands();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_Islands_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Islands();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDCIsland();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode;
	static UEnum* ENiagraDataChannel_IslandMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagraDataChannel_IslandMode"));
		}
		return Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagraDataChannel_IslandMode>()
	{
		return ENiagraDataChannel_IslandMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::Enumerators[] = {
		{ "ENiagraDataChannel_IslandMode::AlignedStatic", (int64)ENiagraDataChannel_IslandMode::AlignedStatic },
		{ "ENiagraDataChannel_IslandMode::Dynamic", (int64)ENiagraDataChannel_IslandMode::Dynamic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::Enum_MetaDataParams[] = {
		{ "AlignedStatic.Comment", "/** Islands are aligned to a grid and fixed to their MaxExtents. Avoids overlapping islands but can lead to larger than necessary islands. */" },
		{ "AlignedStatic.Name", "ENiagraDataChannel_IslandMode::AlignedStatic" },
		{ "AlignedStatic.ToolTip", "Islands are aligned to a grid and fixed to their MaxExtents. Avoids overlapping islands but can lead to larger than necessary islands." },
		{ "Dynamic.Comment", "/** Islands can exist a any location and will grow from their InitialExtents to their MaxExtents to fit data entering the channel data. Islands are as small as possible but can often overlap depending on the distribution of data entering the channel. */" },
		{ "Dynamic.Name", "ENiagraDataChannel_IslandMode::Dynamic" },
		{ "Dynamic.ToolTip", "Islands can exist a any location and will grow from their InitialExtents to their MaxExtents to fit data entering the channel data. Islands are as small as possible but can often overlap depending on the distribution of data entering the channel." },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagraDataChannel_IslandMode",
		"ENiagraDataChannel_IslandMode",
		Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDCIsland;
class UScriptStruct* FNDCIsland::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDCIsland.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDCIsland.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDCIsland, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDCIsland"));
	}
	return Z_Registration_Info_UScriptStruct_NDCIsland.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDCIsland>()
{
	return FNDCIsland::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNDCIsland_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NiagaraSystems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NiagaraSystems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDCIsland_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a single data channel island. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Data for a single data channel island." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDCIsland_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDCIsland>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/** The owning handler for this island. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "The owning handler for this island." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDCIsland, Owner), Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Owner_MetaData), Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Owner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Bounds_MetaData[] = {
		{ "Comment", "/** Current bounds of this island. The bounds of any handler systems are modified to match these bounds. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Current bounds of this island. The bounds of any handler systems are modified to match these bounds." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDCIsland, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Bounds_MetaData), Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Bounds_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_NiagaraSystems_Inner = { "NiagaraSystems", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_NiagaraSystems_MetaData[] = {
		{ "Comment", "/** Niagara components spawned for this island. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Niagara components spawned for this island." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_NiagaraSystems = { "NiagaraSystems", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNDCIsland, NiagaraSystems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_NiagaraSystems_MetaData), Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_NiagaraSystems_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDCIsland_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_NiagaraSystems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIsland_Statics::NewProp_NiagaraSystems,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDCIsland_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NDCIsland",
		Z_Construct_UScriptStruct_FNDCIsland_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIsland_Statics::PropPointers),
		sizeof(FNDCIsland),
		alignof(FNDCIsland),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIsland_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDCIsland_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIsland_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNDCIsland()
	{
		if (!Z_Registration_Info_UScriptStruct_NDCIsland.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDCIsland.InnerSingleton, Z_Construct_UScriptStruct_FNDCIsland_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NDCIsland.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings;
class UScriptStruct* FNDCIslandDebugDrawSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDCIslandDebugDrawSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDCIslandDebugDrawSettings>()
{
	return FNDCIslandDebugDrawSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowIslandBounds_MetaData[];
#endif
		static void NewProp_bShowIslandBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowIslandBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDCIslandDebugDrawSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Debug Drawing" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FNDCIslandDebugDrawSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNDCIslandDebugDrawSettings), &Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bShowIslandBounds_MetaData[] = {
		{ "Category", "Debug Drawing" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bShowIslandBounds_SetBit(void* Obj)
	{
		((FNDCIslandDebugDrawSettings*)Obj)->bShowIslandBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bShowIslandBounds = { "bShowIslandBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNDCIslandDebugDrawSettings), &Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bShowIslandBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bShowIslandBounds_MetaData), Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bShowIslandBounds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewProp_bShowIslandBounds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NDCIslandDebugDrawSettings",
		Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::PropPointers),
		sizeof(FNDCIslandDebugDrawSettings),
		alignof(FNDCIslandDebugDrawSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.InnerSingleton, Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings.InnerSingleton;
	}
	void UNiagaraDataChannel_Islands::StaticRegisterNativesUNiagaraDataChannel_Islands()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannel_Islands);
	UClass* Z_Construct_UClass_UNiagaraDataChannel_Islands_NoRegister()
	{
		return UNiagaraDataChannel_Islands::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerElementExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerElementExtents;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Systems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Systems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Systems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IslandPoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IslandPoolSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawSettings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemsInternal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemsInternal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SystemsInternal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel_Islands.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/** Controls how islands are placed and sized. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Controls how islands are placed and sized." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, Mode), Z_Construct_UEnum_Niagara_ENiagraDataChannel_IslandMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Mode_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Mode_MetaData) }; // 577978990
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_InitialExtents_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/** Starting extents of the island's bounds. */" },
		{ "EditCondition", "Mode == ENiagraDataChannel_IslandMode::Dynamic" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Starting extents of the island's bounds." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_InitialExtents = { "InitialExtents", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, InitialExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_InitialExtents_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_InitialExtents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_MaxExtents_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/** The maximum total extents of each island. If a new element would grow the bounds beyond this size then a new island is created. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "The maximum total extents of each island. If a new element would grow the bounds beyond this size then a new island is created." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_MaxExtents = { "MaxExtents", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, MaxExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_MaxExtents_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_MaxExtents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_PerElementExtents_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/**\n\x09The extents for every element entered into this data channel.\n\x09We use this to pad the ends of islands to ensure that all data in an island will be covered.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "The extents for every element entered into this data channel.\nWe use this to pad the ends of islands to ensure that all data in an island will be covered." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_PerElementExtents = { "PerElementExtents", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, PerElementExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_PerElementExtents_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_PerElementExtents_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Systems_Inner = { "Systems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Systems_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/** \n\x09One or more Niagara Systems to spawn that will consume the data in this island.\n\x09""Each island will have an instance of these systems created.\n\x09These systems are intended to consume data for this whole island and generate effects that cover the whole island.\n\x09The actual bounds of each of these system instances will be set to the current total bounds of the island.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "One or more Niagara Systems to spawn that will consume the data in this island.\nEach island will have an instance of these systems created.\nThese systems are intended to consume data for this whole island and generate effects that cover the whole island.\nThe actual bounds of each of these system instances will be set to the current total bounds of the island." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Systems = { "Systems", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, Systems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Systems_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Systems_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_IslandPoolSize_MetaData[] = {
		{ "Category", "Islands" },
		{ "Comment", "/** How many pre-allocated islands to keep in the pool. Higher values will incur a larger standing memory cost but will reduce activation times for new islands. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "How many pre-allocated islands to keep in the pool. Higher values will incur a larger standing memory cost but will reduce activation times for new islands." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_IslandPoolSize = { "IslandPoolSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, IslandPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_IslandPoolSize_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_IslandPoolSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_DebugDrawSettings_MetaData[] = {
		{ "Category", "Debug Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_DebugDrawSettings = { "DebugDrawSettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, DebugDrawSettings), Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_DebugDrawSettings_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_DebugDrawSettings_MetaData) }; // 1628301432
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_SystemsInternal_Inner = { "SystemsInternal", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_SystemsInternal_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_SystemsInternal = { "SystemsInternal", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel_Islands, SystemsInternal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_SystemsInternal_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_SystemsInternal_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_InitialExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_MaxExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_PerElementExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Systems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_Systems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_IslandPoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_DebugDrawSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_SystemsInternal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::NewProp_SystemsInternal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannel_Islands>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::ClassParams = {
		&UNiagaraDataChannel_Islands::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraDataChannel_Islands()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannel_Islands_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannel_Islands.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannel_Islands>()
	{
		return UNiagaraDataChannel_Islands::StaticClass();
	}
	UNiagaraDataChannel_Islands::UNiagaraDataChannel_Islands(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannel_Islands);
	UNiagaraDataChannel_Islands::~UNiagaraDataChannel_Islands() {}
	void UNiagaraDataChannelHandler_Islands::StaticRegisterNativesUNiagaraDataChannelHandler_Islands()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelHandler_Islands);
	UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_NoRegister()
	{
		return UNiagaraDataChannelHandler_Islands::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveIslands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveIslands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveIslands;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FreeIslands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreeIslands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FreeIslands;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IslandPool_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IslandPool_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IslandPool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataChannelHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel_Islands.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_ActiveIslands_Inner = { "ActiveIslands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_ActiveIslands_MetaData[] = {
		{ "Comment", "/** All currently active Islands for this channel. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "All currently active Islands for this channel." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_ActiveIslands = { "ActiveIslands", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelHandler_Islands, ActiveIslands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_ActiveIslands_MetaData), Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_ActiveIslands_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_FreeIslands_Inner = { "FreeIslands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_FreeIslands_MetaData[] = {
		{ "Comment", "/** All currently free Islands for this channel. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "All currently free Islands for this channel." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_FreeIslands = { "FreeIslands", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelHandler_Islands, FreeIslands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_FreeIslands_MetaData), Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_FreeIslands_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_IslandPool_Inner = { "IslandPool", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDCIsland, METADATA_PARAMS(0, nullptr) }; // 235284389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_IslandPool_MetaData[] = {
		{ "Comment", "/** Pool of all islands. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel_Islands.h" },
		{ "ToolTip", "Pool of all islands." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_IslandPool = { "IslandPool", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelHandler_Islands, IslandPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_IslandPool_MetaData), Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_IslandPool_MetaData) }; // 235284389
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_ActiveIslands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_ActiveIslands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_FreeIslands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_FreeIslands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_IslandPool_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::NewProp_IslandPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelHandler_Islands>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::ClassParams = {
		&UNiagaraDataChannelHandler_Islands::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_Islands()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelHandler_Islands_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelHandler_Islands>()
	{
		return UNiagaraDataChannelHandler_Islands::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelHandler_Islands);
	UNiagaraDataChannelHandler_Islands::~UNiagaraDataChannelHandler_Islands() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::EnumInfo[] = {
		{ ENiagraDataChannel_IslandMode_StaticEnum, TEXT("ENiagraDataChannel_IslandMode"), &Z_Registration_Info_UEnum_ENiagraDataChannel_IslandMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 577978990U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::ScriptStructInfo[] = {
		{ FNDCIsland::StaticStruct, Z_Construct_UScriptStruct_FNDCIsland_Statics::NewStructOps, TEXT("NDCIsland"), &Z_Registration_Info_UScriptStruct_NDCIsland, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDCIsland), 235284389U) },
		{ FNDCIslandDebugDrawSettings::StaticStruct, Z_Construct_UScriptStruct_FNDCIslandDebugDrawSettings_Statics::NewStructOps, TEXT("NDCIslandDebugDrawSettings"), &Z_Registration_Info_UScriptStruct_NDCIslandDebugDrawSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDCIslandDebugDrawSettings), 1628301432U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannel_Islands, UNiagaraDataChannel_Islands::StaticClass, TEXT("UNiagaraDataChannel_Islands"), &Z_Registration_Info_UClass_UNiagaraDataChannel_Islands, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannel_Islands), 4052014277U) },
		{ Z_Construct_UClass_UNiagaraDataChannelHandler_Islands, UNiagaraDataChannelHandler_Islands::StaticClass, TEXT("UNiagaraDataChannelHandler_Islands"), &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelHandler_Islands), 2931099477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_3036943133(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_Islands_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
