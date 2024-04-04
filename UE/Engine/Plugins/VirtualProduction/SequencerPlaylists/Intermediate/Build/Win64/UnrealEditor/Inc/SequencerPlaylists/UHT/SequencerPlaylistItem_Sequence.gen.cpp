// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SequencerPlaylistItem_Sequence.h"
#include "SequencerPlaylist.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerPlaylistItem_Sequence() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistItem();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistItem_Sequence();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistItem_Sequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerPlaylists();
// End Cross Module References
	DEFINE_FUNCTION(USequencerPlaylistItem_Sequence::execSetSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_NewSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequence(Z_Param_NewSequence);
		P_NATIVE_END;
	}
	void USequencerPlaylistItem_Sequence::SetSequence_WrapperImpl(void* Object, const void* InValue)
	{
		USequencerPlaylistItem_Sequence* Obj = (USequencerPlaylistItem_Sequence*)Object;
		ULevelSequence*& Value = *(ULevelSequence**)InValue;
		Obj->SetSequence(Value);
	}
	void USequencerPlaylistItem_Sequence::StaticRegisterNativesUSequencerPlaylistItem_Sequence()
	{
		UClass* Class = USequencerPlaylistItem_Sequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSequence", &USequencerPlaylistItem_Sequence::execSetSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics
	{
		struct SequencerPlaylistItem_Sequence_eventSetSequence_Parms
		{
			ULevelSequence* NewSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::NewProp_NewSequence = { "NewSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerPlaylistItem_Sequence_eventSetSequence_Parms, NewSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::NewProp_NewSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "Comment", "//~ End UObject interface\n" },
		{ "ModuleRelativePath", "Private/SequencerPlaylistItem_Sequence.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistItem_Sequence, nullptr, "SetSequence", nullptr, nullptr, Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::SequencerPlaylistItem_Sequence_eventSetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::SequencerPlaylistItem_Sequence_eventSetSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerPlaylistItem_Sequence);
	UClass* Z_Construct_UClass_USequencerPlaylistItem_Sequence_NoRegister()
	{
		return USequencerPlaylistItem_Sequence::StaticClass();
	}
	struct Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USequencerPlaylistItem,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerPlaylists,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USequencerPlaylistItem_Sequence_SetSequence, "SetSequence" }, // 3252913574
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SequencerPlaylistItem_Sequence.h" },
		{ "ModuleRelativePath", "Private/SequencerPlaylistItem_Sequence.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Private/SequencerPlaylistItem_Sequence.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &USequencerPlaylistItem_Sequence::SetSequence_WrapperImpl, nullptr, 1, STRUCT_OFFSET(USequencerPlaylistItem_Sequence, Sequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::NewProp_Sequence_MetaData), Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::NewProp_Sequence_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::NewProp_Sequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerPlaylistItem_Sequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::ClassParams = {
		&USequencerPlaylistItem_Sequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::Class_MetaDataParams), Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USequencerPlaylistItem_Sequence()
	{
		if (!Z_Registration_Info_UClass_USequencerPlaylistItem_Sequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerPlaylistItem_Sequence.OuterSingleton, Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerPlaylistItem_Sequence.OuterSingleton;
	}
	template<> SEQUENCERPLAYLISTS_API UClass* StaticClass<USequencerPlaylistItem_Sequence>()
	{
		return USequencerPlaylistItem_Sequence::StaticClass();
	}
	USequencerPlaylistItem_Sequence::USequencerPlaylistItem_Sequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerPlaylistItem_Sequence);
	USequencerPlaylistItem_Sequence::~USequencerPlaylistItem_Sequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerPlaylistItem_Sequence, USequencerPlaylistItem_Sequence::StaticClass, TEXT("USequencerPlaylistItem_Sequence"), &Z_Registration_Info_UClass_USequencerPlaylistItem_Sequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerPlaylistItem_Sequence), 3757055363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_4209534888(TEXT("/Script/SequencerPlaylists"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
