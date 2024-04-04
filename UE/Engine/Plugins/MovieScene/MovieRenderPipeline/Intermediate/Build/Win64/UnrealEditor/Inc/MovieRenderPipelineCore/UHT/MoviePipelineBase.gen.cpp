// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineBase.h"
#include "MovieRenderPipelineDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState();
	MOVIERENDERPIPELINECORE_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineOutputData();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics
	{
		struct _Script_MovieRenderPipelineCore_eventMoviePipelineWorkFinished_Parms
		{
			FMoviePipelineOutputData Results;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Results;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventMoviePipelineWorkFinished_Parms, Results), Z_Construct_UScriptStruct_FMoviePipelineOutputData, METADATA_PARAMS(0, nullptr) }; // 3662533739
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore, nullptr, "MoviePipelineWorkFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::_Script_MovieRenderPipelineCore_eventMoviePipelineWorkFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::_Script_MovieRenderPipelineCore_eventMoviePipelineWorkFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMoviePipelineWorkFinished_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineWorkFinished, FMoviePipelineOutputData Results)
{
	struct _Script_MovieRenderPipelineCore_eventMoviePipelineWorkFinished_Parms
	{
		FMoviePipelineOutputData Results;
	};
	_Script_MovieRenderPipelineCore_eventMoviePipelineWorkFinished_Parms Parms;
	Parms.Results=Results;
	MoviePipelineWorkFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMoviePipelineBase::execGetPipelineState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovieRenderPipelineState*)Z_Param__Result=P_THIS->GetPipelineState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBase::execIsShutdownRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShutdownRequested();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBase::execShutdown)
	{
		P_GET_UBOOL(Z_Param_bIsError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shutdown(Z_Param_bIsError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBase::execRequestShutdown)
	{
		P_GET_UBOOL(Z_Param_bIsError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestShutdown(Z_Param_bIsError);
		P_NATIVE_END;
	}
	void UMoviePipelineBase::StaticRegisterNativesUMoviePipelineBase()
	{
		UClass* Class = UMoviePipelineBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPipelineState", &UMoviePipelineBase::execGetPipelineState },
			{ "IsShutdownRequested", &UMoviePipelineBase::execIsShutdownRequested },
			{ "RequestShutdown", &UMoviePipelineBase::execRequestShutdown },
			{ "Shutdown", &UMoviePipelineBase::execShutdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics
	{
		struct MoviePipelineBase_eventGetPipelineState_Parms
		{
			EMovieRenderPipelineState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoviePipelineBase_eventGetPipelineState_Parms, ReturnValue), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState, METADATA_PARAMS(0, nullptr) }; // 4127215999
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBase, nullptr, "GetPipelineState", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::MoviePipelineBase_eventGetPipelineState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::MoviePipelineBase_eventGetPipelineState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics
	{
		struct MoviePipelineBase_eventIsShutdownRequested_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineBase_eventIsShutdownRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoviePipelineBase_eventIsShutdownRequested_Parms), &Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Has RequestShutdown() been called?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineBase.h" },
		{ "ToolTip", "Has RequestShutdown() been called?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBase, nullptr, "IsShutdownRequested", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::MoviePipelineBase_eventIsShutdownRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::MoviePipelineBase_eventIsShutdownRequested_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics
	{
		struct MoviePipelineBase_eventRequestShutdown_Parms
		{
			bool bIsError;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((MoviePipelineBase_eventRequestShutdown_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoviePipelineBase_eventRequestShutdown_Parms), &Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::NewProp_bIsError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Request the movie pipeline to shut down at the next available time. The pipeline will attempt to abandon\n\x09* the current frame (such as if there are more temporal samples pending) but may be forced into finishing if\n\x09* there are spatial samples already submitted to the GPU. The shutdown flow will be run to ensure already\n\x09* completed work is written to disk. This is a non-blocking operation, use Shutdown() instead if you need to\n\x09* block until it is fully shut down.\n\x09*\n\x09* @param bIsError - Whether this is a request for early shut down due to an error\n\x09*\n\x09* This function is thread safe.\n\x09*/" },
		{ "CPP_Default_bIsError", "false" },
		{ "ModuleRelativePath", "Public/MoviePipelineBase.h" },
		{ "ToolTip", "Request the movie pipeline to shut down at the next available time. The pipeline will attempt to abandon\nthe current frame (such as if there are more temporal samples pending) but may be forced into finishing if\nthere are spatial samples already submitted to the GPU. The shutdown flow will be run to ensure already\ncompleted work is written to disk. This is a non-blocking operation, use Shutdown() instead if you need to\nblock until it is fully shut down.\n\n@param bIsError - Whether this is a request for early shut down due to an error\n\nThis function is thread safe." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBase, nullptr, "RequestShutdown", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::MoviePipelineBase_eventRequestShutdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::MoviePipelineBase_eventRequestShutdown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics
	{
		struct MoviePipelineBase_eventShutdown_Parms
		{
			bool bIsError;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((MoviePipelineBase_eventShutdown_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoviePipelineBase_eventShutdown_Parms), &Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::NewProp_bIsError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Abandons any future work on this Movie Pipeline and runs through the shutdown flow to ensure already\n\x09* completed work is written to disk. This is a blocking-operation and will not return until all outstanding\n\x09* work has been completed.\n\x09*\n\x09* @param bIsError - Whether this is an early shut down due to an error\n\x09*\n\x09* This function should only be called from the game thread.\n\x09*/" },
		{ "CPP_Default_bIsError", "false" },
		{ "ModuleRelativePath", "Public/MoviePipelineBase.h" },
		{ "ToolTip", "Abandons any future work on this Movie Pipeline and runs through the shutdown flow to ensure already\ncompleted work is written to disk. This is a blocking-operation and will not return until all outstanding\nwork has been completed.\n\n@param bIsError - Whether this is an early shut down due to an error\n\nThis function should only be called from the game thread." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBase, nullptr, "Shutdown", nullptr, nullptr, Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::MoviePipelineBase_eventShutdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::MoviePipelineBase_eventShutdown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoviePipelineBase_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBase_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineBase);
	UClass* Z_Construct_UClass_UMoviePipelineBase_NoRegister()
	{
		return UMoviePipelineBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineBase_GetPipelineState, "GetPipelineState" }, // 2473126024
		{ &Z_Construct_UFunction_UMoviePipelineBase_IsShutdownRequested, "IsShutdownRequested" }, // 3637897265
		{ &Z_Construct_UFunction_UMoviePipelineBase_RequestShutdown, "RequestShutdown" }, // 3590268718
		{ &Z_Construct_UFunction_UMoviePipelineBase_Shutdown, "Shutdown" }, // 1321428004
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineBase.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineBase_Statics::ClassParams = {
		&UMoviePipelineBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoviePipelineBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMoviePipelineBase()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineBase.OuterSingleton, Z_Construct_UClass_UMoviePipelineBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineBase>()
	{
		return UMoviePipelineBase::StaticClass();
	}
	UMoviePipelineBase::UMoviePipelineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineBase);
	UMoviePipelineBase::~UMoviePipelineBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineBase, UMoviePipelineBase::StaticClass, TEXT("UMoviePipelineBase"), &Z_Registration_Info_UClass_UMoviePipelineBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineBase), 2895006288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_2371293977(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
