// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AsyncActionGetStreamers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncActionGetStreamers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	PIXELSTREAMINGPLAYER_API UClass* Z_Construct_UClass_UAsyncAction_GetStreamers();
	PIXELSTREAMINGPLAYER_API UClass* Z_Construct_UClass_UAsyncAction_GetStreamers_NoRegister();
	PIXELSTREAMINGPLAYER_API UClass* Z_Construct_UClass_UPixelStreamingSignallingComponent_NoRegister();
	PIXELSTREAMINGPLAYER_API UFunction* Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingPlayer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics
	{
		struct _Script_PixelStreamingPlayer_eventOnStreamerListCompleted_Parms
		{
			TArray<FString> StreamerList;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamerList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamerList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::NewProp_StreamerList_Inner = { "StreamerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::NewProp_StreamerList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::NewProp_StreamerList = { "StreamerList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PixelStreamingPlayer_eventOnStreamerListCompleted_Parms, StreamerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::NewProp_StreamerList_MetaData), Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::NewProp_StreamerList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::NewProp_StreamerList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::NewProp_StreamerList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AsyncActionGetStreamers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PixelStreamingPlayer, nullptr, "OnStreamerListCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::_Script_PixelStreamingPlayer_eventOnStreamerListCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::_Script_PixelStreamingPlayer_eventOnStreamerListCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStreamerListCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnStreamerListCompleted, TArray<FString> const& StreamerList)
{
	struct _Script_PixelStreamingPlayer_eventOnStreamerListCompleted_Parms
	{
		TArray<FString> StreamerList;
	};
	_Script_PixelStreamingPlayer_eventOnStreamerListCompleted_Parms Parms;
	Parms.StreamerList=StreamerList;
	OnStreamerListCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncAction_GetStreamers::execGetStreamerIdList)
	{
		P_GET_OBJECT(UPixelStreamingSignallingComponent,Z_Param_SignallingComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_GetStreamers**)Z_Param__Result=UAsyncAction_GetStreamers::GetStreamerIdList(Z_Param_SignallingComponent);
		P_NATIVE_END;
	}
	void UAsyncAction_GetStreamers::StaticRegisterNativesUAsyncAction_GetStreamers()
	{
		UClass* Class = UAsyncAction_GetStreamers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStreamerIdList", &UAsyncAction_GetStreamers::execGetStreamerIdList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics
	{
		struct AsyncAction_GetStreamers_eventGetStreamerIdList_Parms
		{
			UPixelStreamingSignallingComponent* SignallingComponent;
			UAsyncAction_GetStreamers* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignallingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SignallingComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::NewProp_SignallingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::NewProp_SignallingComponent = { "SignallingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_GetStreamers_eventGetStreamerIdList_Parms, SignallingComponent), Z_Construct_UClass_UPixelStreamingSignallingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::NewProp_SignallingComponent_MetaData), Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::NewProp_SignallingComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_GetStreamers_eventGetStreamerIdList_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_GetStreamers_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::NewProp_SignallingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "PixelStreaming" },
		{ "ModuleRelativePath", "Private/AsyncActionGetStreamers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_GetStreamers, nullptr, "GetStreamerIdList", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::AsyncAction_GetStreamers_eventGetStreamerIdList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::AsyncAction_GetStreamers_eventGetStreamerIdList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_GetStreamers);
	UClass* Z_Construct_UClass_UAsyncAction_GetStreamers_NoRegister()
	{
		return UAsyncAction_GetStreamers::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncAction_GetStreamers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingPlayer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_GetStreamers_GetStreamerIdList, "GetStreamerIdList" }, // 1735041661
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionGetStreamers.h" },
		{ "ModuleRelativePath", "Private/AsyncActionGetStreamers.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AsyncActionGetStreamers.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_GetStreamers, Completed), Z_Construct_UDelegateFunction_PixelStreamingPlayer_OnStreamerListCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::NewProp_Completed_MetaData), Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::NewProp_Completed_MetaData) }; // 210908330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_GetStreamers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::ClassParams = {
		&UAsyncAction_GetStreamers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAsyncAction_GetStreamers()
	{
		if (!Z_Registration_Info_UClass_UAsyncAction_GetStreamers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_GetStreamers.OuterSingleton, Z_Construct_UClass_UAsyncAction_GetStreamers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncAction_GetStreamers.OuterSingleton;
	}
	template<> PIXELSTREAMINGPLAYER_API UClass* StaticClass<UAsyncAction_GetStreamers>()
	{
		return UAsyncAction_GetStreamers::StaticClass();
	}
	UAsyncAction_GetStreamers::UAsyncAction_GetStreamers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_GetStreamers);
	UAsyncAction_GetStreamers::~UAsyncAction_GetStreamers() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_GetStreamers, UAsyncAction_GetStreamers::StaticClass, TEXT("UAsyncAction_GetStreamers"), &Z_Registration_Info_UClass_UAsyncAction_GetStreamers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_GetStreamers), 1671867819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_998408914(TEXT("/Script/PixelStreamingPlayer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Private_AsyncActionGetStreamers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
