// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDataChannelPublic.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannelPublic() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelAsset();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraLwcStructConverter();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataChannelAsset::StaticRegisterNativesUNiagaraDataChannelAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelAsset);
	UClass* Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister()
	{
		return UNiagaraDataChannelAsset::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannelAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataChannel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataChannel;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPreChangeDataChannel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedPreChangeDataChannel;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Wrapper asset class for UNiagaraDataChannel which is instanced. */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Niagara Data Channel" },
		{ "IncludePath", "NiagaraDataChannelPublic.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "Wrapper asset class for UNiagaraDataChannel which is instanced." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_DataChannel_MetaData[] = {
		{ "Category", "DataChannel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_DataChannel = { "DataChannel", nullptr, (EPropertyFlags)0x0046000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelAsset, DataChannel), Z_Construct_UClass_UNiagaraDataChannel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_DataChannel_MetaData), Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_DataChannel_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_CachedPreChangeDataChannel_MetaData[] = {
		{ "Comment", "/** When changing data channel types we cache the old channel and attempt to copy over any common properties from one to the other. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "When changing data channel types we cache the old channel and attempt to copy over any common properties from one to the other." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_CachedPreChangeDataChannel = { "CachedPreChangeDataChannel", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannelAsset, CachedPreChangeDataChannel), Z_Construct_UClass_UNiagaraDataChannel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_CachedPreChangeDataChannel_MetaData), Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_CachedPreChangeDataChannel_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_DataChannel,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::NewProp_CachedPreChangeDataChannel,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::ClassParams = {
		&UNiagaraDataChannelAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraDataChannelAsset()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannelAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelAsset.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannelAsset.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelAsset>()
	{
		return UNiagaraDataChannelAsset::StaticClass();
	}
	UNiagaraDataChannelAsset::UNiagaraDataChannelAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelAsset);
	UNiagaraDataChannelAsset::~UNiagaraDataChannelAsset() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters;
class UScriptStruct* FNiagaraDataChannelSearchParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataChannelSearchParameters"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataChannelSearchParameters>()
{
	return FNiagaraDataChannelSearchParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nParameters allowing users to search for the correct data channel data to read/write.\nSome data channels will sub divide their data internally in various ways, e.g., spacial partition.\nThese parameters allow users to search for the correct internal data when reading and writing.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "Parameters allowing users to search for the correct data channel data to read/write.\nSome data channels will sub divide their data internally in various ways, e.g., spacial partition.\nThese parameters allow users to search for the correct internal data when reading and writing." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataChannelSearchParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_OwningComponent_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** In cases where there is an owning component such as an object spawning from itself etc, then we pass that component in. Some handlers may only use it's location but others may make use of more data. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "In cases where there is an owning component such as an object spawning from itself etc, then we pass that component in. Some handlers may only use it's location but others may make use of more data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataChannelSearchParameters, OwningComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_OwningComponent_MetaData), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_OwningComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** In cases where there is no owning component for data being read or written to a data channel, we simply pass in a location. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "In cases where there is no owning component for data being read or written to a data channel, we simply pass in a location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataChannelSearchParameters, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_OwningComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewProp_Location,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataChannelSearchParameters",
		Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::PropPointers),
		sizeof(FNiagaraDataChannelSearchParameters),
		alignof(FNiagaraDataChannelSearchParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout;
class UScriptStruct* FNiagaraDataChannelGameDataLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataChannelGameDataLayout"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataChannelGameDataLayout>()
{
	return FNiagaraDataChannelGameDataLayout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_VariableIndices_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableIndices_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableIndices_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VariableIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LwcConverters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LwcConverters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LwcConverters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataChannelGameDataLayout>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_ValueProp = { "VariableIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_Key_KeyProp = { "VariableIndices_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(0, nullptr) }; // 1312662782
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_MetaData[] = {
		{ "Comment", "/** Map of all variables contained in this DataChannel data and the indices into data arrays for game data. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "Map of all variables contained in this DataChannel data and the indices into data arrays for game data." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices = { "VariableIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataChannelGameDataLayout, VariableIndices), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_MetaData), Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_MetaData) }; // 1312662782
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_Inner = { "LwcConverters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraLwcStructConverter, METADATA_PARAMS(0, nullptr) }; // 131902450
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_MetaData[] = {
		{ "Comment", "/** Helpers for converting LWC types into Niagara simulation SWC types. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelPublic.h" },
		{ "ToolTip", "Helpers for converting LWC types into Niagara simulation SWC types." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters = { "LwcConverters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDataChannelGameDataLayout, LwcConverters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_MetaData), Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_MetaData) }; // 131902450
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataChannelGameDataLayout",
		Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::PropPointers),
		sizeof(FNiagaraDataChannelGameDataLayout),
		alignof(FNiagaraDataChannelGameDataLayout),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraDataChannelSearchParameters::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters_Statics::NewStructOps, TEXT("NiagaraDataChannelSearchParameters"), &Z_Registration_Info_UScriptStruct_NiagaraDataChannelSearchParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataChannelSearchParameters), 1608528227U) },
		{ FNiagaraDataChannelGameDataLayout::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewStructOps, TEXT("NiagaraDataChannelGameDataLayout"), &Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataChannelGameDataLayout), 1686574892U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannelAsset, UNiagaraDataChannelAsset::StaticClass, TEXT("UNiagaraDataChannelAsset"), &Z_Registration_Info_UClass_UNiagaraDataChannelAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelAsset), 417281070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_577452891(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelPublic_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
