// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDataChannel.h"
#include "../Public/NiagaraDataChannelPublic.h"
#include "../Public/NiagaraTypes.h"
#include "NiagaraDataSetCompiledData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataChannel::StaticRegisterNativesUNiagaraDataChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannel);
	UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister()
	{
		return UNiagaraDataChannel::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepPreviousFrameData_MetaData[];
#endif
		static void NewProp_bKeepPreviousFrameData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepPreviousFrameData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledDataGPU_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledDataGPU;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(0, nullptr) }; // 2677688088
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** The variables that define the data contained in this Data Channel. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "The variables that define the data contained in this Data Channel." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_MetaData) }; // 2677688088
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** If true, we keep our previous frame's data. This comes at a memory and performance cost but allows users to avoid tick order dependency by reading last frame's data. Some users will prefer a frame of latency to tick order dependency. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "If true, we keep our previous frame's data. This comes at a memory and performance cost but allows users to avoid tick order dependency by reading last frame's data. Some users will prefer a frame of latency to tick order dependency." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_SetBit(void* Obj)
	{
		((UNiagaraDataChannel*)Obj)->bKeepPreviousFrameData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData = { "bKeepPreviousFrameData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataChannel), &Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData_MetaData[] = {
		{ "Comment", "/**\n\x09""Data layout for payloads in Niagara datasets.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Data layout for payloads in Niagara datasets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData = { "CompiledData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel, CompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData_MetaData) }; // 3845081334
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU = { "CompiledDataGPU", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataChannel, CompiledDataGPU), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU_MetaData), Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU_MetaData) }; // 3845081334
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannel_Statics::ClassParams = {
		&UNiagaraDataChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataChannel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::PropPointers),
		0,
		0x000810A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraDataChannel()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannel.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannel.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannel>()
	{
		return UNiagaraDataChannel::StaticClass();
	}
	UNiagaraDataChannel::UNiagaraDataChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannel);
	UNiagaraDataChannel::~UNiagaraDataChannel() {}
	DEFINE_FUNCTION(UNiagaraDataChannelLibrary::execReadFromNiagaraDataChannel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UNiagaraDataChannelAsset,Z_Param_Channel);
		P_GET_STRUCT(FNiagaraDataChannelSearchParameters,Z_Param_SearchParams);
		P_GET_UBOOL(Z_Param_bReadPreviousFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraDataChannelReader**)Z_Param__Result=UNiagaraDataChannelLibrary::ReadFromNiagaraDataChannel(Z_Param_WorldContextObject,Z_Param_Channel,Z_Param_SearchParams,Z_Param_bReadPreviousFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelLibrary::execWriteToNiagaraDataChannel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UNiagaraDataChannelAsset,Z_Param_Channel);
		P_GET_STRUCT(FNiagaraDataChannelSearchParameters,Z_Param_SearchParams);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bVisibleToGame);
		P_GET_UBOOL(Z_Param_bVisibleToCPU);
		P_GET_UBOOL(Z_Param_bVisibleToGPU);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraDataChannelWriter**)Z_Param__Result=UNiagaraDataChannelLibrary::WriteToNiagaraDataChannel(Z_Param_WorldContextObject,Z_Param_Channel,Z_Param_SearchParams,Z_Param_Count,Z_Param_bVisibleToGame,Z_Param_bVisibleToCPU,Z_Param_bVisibleToGPU);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelLibrary::execGetNiagaraDataChannel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UNiagaraDataChannelAsset,Z_Param_Channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraDataChannelHandler**)Z_Param__Result=UNiagaraDataChannelLibrary::GetNiagaraDataChannel(Z_Param_WorldContextObject,Z_Param_Channel);
		P_NATIVE_END;
	}
	void UNiagaraDataChannelLibrary::StaticRegisterNativesUNiagaraDataChannelLibrary()
	{
		UClass* Class = UNiagaraDataChannelLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNiagaraDataChannel", &UNiagaraDataChannelLibrary::execGetNiagaraDataChannel },
			{ "ReadFromNiagaraDataChannel", &UNiagaraDataChannelLibrary::execReadFromNiagaraDataChannel },
			{ "WriteToNiagaraDataChannel", &UNiagaraDataChannelLibrary::execWriteToNiagaraDataChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics
	{
		struct NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms
		{
			const UObject* WorldContextObject;
			UNiagaraDataChannelAsset* Channel;
			UNiagaraDataChannelHandler* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelLibrary, nullptr, "GetNiagaraDataChannel", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics
	{
		struct NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms
		{
			const UObject* WorldContextObject;
			UNiagaraDataChannelAsset* Channel;
			FNiagaraDataChannelSearchParameters SearchParams;
			bool bReadPreviousFrame;
			UNiagaraDataChannelReader* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchParams;
		static void NewProp_bReadPreviousFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadPreviousFrame;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_SearchParams = { "SearchParams", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms, SearchParams), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters, METADATA_PARAMS(0, nullptr) }; // 1608528227
	void Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_bReadPreviousFrame_SetBit(void* Obj)
	{
		((NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms*)Obj)->bReadPreviousFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_bReadPreviousFrame = { "bReadPreviousFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_bReadPreviousFrame_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_SearchParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_bReadPreviousFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Comment", "/** Initializes and returns the Niagara Data Channel reader for the given data channel. */" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Initializes and returns the Niagara Data Channel reader for the given data channel." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelLibrary, nullptr, "ReadFromNiagaraDataChannel", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventReadFromNiagaraDataChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics
	{
		struct NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms
		{
			const UObject* WorldContextObject;
			UNiagaraDataChannelAsset* Channel;
			FNiagaraDataChannelSearchParameters SearchParams;
			int32 Count;
			bool bVisibleToGame;
			bool bVisibleToCPU;
			bool bVisibleToGPU;
			UNiagaraDataChannelWriter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchParams;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static void NewProp_bVisibleToGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToGame;
		static void NewProp_bVisibleToCPU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToCPU;
		static void NewProp_bVisibleToGPU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToGPU;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms, Channel), Z_Construct_UClass_UNiagaraDataChannelAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_SearchParams = { "SearchParams", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms, SearchParams), Z_Construct_UScriptStruct_FNiagaraDataChannelSearchParameters, METADATA_PARAMS(0, nullptr) }; // 1608528227
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms, Count), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGame_SetBit(void* Obj)
	{
		((NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms*)Obj)->bVisibleToGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGame = { "bVisibleToGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGame_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToCPU_SetBit(void* Obj)
	{
		((NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms*)Obj)->bVisibleToCPU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToCPU = { "bVisibleToCPU", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToCPU_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGPU_SetBit(void* Obj)
	{
		((NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms*)Obj)->bVisibleToGPU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGPU = { "bVisibleToGPU", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms), &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGPU_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_SearchParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToCPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_bVisibleToGPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Comment", "/** Initializes and returns the Niagara Data Channel writer to write N elements to the given data channel. */" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Initializes and returns the Niagara Data Channel writer to write N elements to the given data channel." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelLibrary, nullptr, "WriteToNiagaraDataChannel", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventWriteToNiagaraDataChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelLibrary);
	UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary_NoRegister()
	{
		return UNiagaraDataChannelLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel, "GetNiagaraDataChannel" }, // 1903043168
		{ &Z_Construct_UFunction_UNiagaraDataChannelLibrary_ReadFromNiagaraDataChannel, "ReadFromNiagaraDataChannel" }, // 1628721051
		{ &Z_Construct_UFunction_UNiagaraDataChannelLibrary_WriteToNiagaraDataChannel, "WriteToNiagaraDataChannel" }, // 3008318461
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A C++ and Blueprint accessible library of utility functions for accessing Niagara DataChannel\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "A C++ and Blueprint accessible library of utility functions for accessing Niagara DataChannel" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::ClassParams = {
		&UNiagaraDataChannelLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelLibrary>()
	{
		return UNiagaraDataChannelLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelLibrary);
	UNiagaraDataChannelLibrary::~UNiagaraDataChannelLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannel, UNiagaraDataChannel::StaticClass, TEXT("UNiagaraDataChannel"), &Z_Registration_Info_UClass_UNiagaraDataChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannel), 1010554374U) },
		{ Z_Construct_UClass_UNiagaraDataChannelLibrary, UNiagaraDataChannelLibrary::StaticClass, TEXT("UNiagaraDataChannelLibrary"), &Z_Registration_Info_UClass_UNiagaraDataChannelLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelLibrary), 1029445868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_4137871200(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
