// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeMetaDataTagsFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTakeMetaDataTagsFunctionLibrary::execGetAllTakeMetaDataTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=UTakeMetaDataTagsFunctionLibrary::GetAllTakeMetaDataTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_LevelPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UTakeMetaDataTagsFunctionLibrary::GetTakeMetaDataTag_LevelPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_Description)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UTakeMetaDataTagsFunctionLibrary::GetTakeMetaDataTag_Description();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_TimecodeOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UTakeMetaDataTagsFunctionLibrary::GetTakeMetaDataTag_TimecodeOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_TimecodeIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UTakeMetaDataTagsFunctionLibrary::GetTakeMetaDataTag_TimecodeIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_Timestamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UTakeMetaDataTagsFunctionLibrary::GetTakeMetaDataTag_Timestamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_TakeNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UTakeMetaDataTagsFunctionLibrary::GetTakeMetaDataTag_TakeNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_Slate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UTakeMetaDataTagsFunctionLibrary::GetTakeMetaDataTag_Slate();
		P_NATIVE_END;
	}
	void UTakeMetaDataTagsFunctionLibrary::StaticRegisterNativesUTakeMetaDataTagsFunctionLibrary()
	{
		UClass* Class = UTakeMetaDataTagsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllTakeMetaDataTags", &UTakeMetaDataTagsFunctionLibrary::execGetAllTakeMetaDataTags },
			{ "GetTakeMetaDataTag_Description", &UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_Description },
			{ "GetTakeMetaDataTag_LevelPath", &UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_LevelPath },
			{ "GetTakeMetaDataTag_Slate", &UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_Slate },
			{ "GetTakeMetaDataTag_TakeNumber", &UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_TakeNumber },
			{ "GetTakeMetaDataTag_TimecodeIn", &UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_TimecodeIn },
			{ "GetTakeMetaDataTag_TimecodeOut", &UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_TimecodeOut },
			{ "GetTakeMetaDataTag_Timestamp", &UTakeMetaDataTagsFunctionLibrary::execGetTakeMetaDataTag_Timestamp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics
	{
		struct TakeMetaDataTagsFunctionLibrary_eventGetAllTakeMetaDataTags_Parms
		{
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TakeMetaDataTagsFunctionLibrary_eventGetAllTakeMetaDataTags_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Gets all tags for TakeMetaData */" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h" },
		{ "ToolTip", "Gets all tags for TakeMetaData" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary, nullptr, "GetAllTakeMetaDataTags", nullptr, nullptr, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::TakeMetaDataTagsFunctionLibrary_eventGetAllTakeMetaDataTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::TakeMetaDataTagsFunctionLibrary_eventGetAllTakeMetaDataTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics
	{
		struct TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Description_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Description_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** The asset registry tag that contains the user-description for this meta-data */" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h" },
		{ "ToolTip", "The asset registry tag that contains the user-description for this meta-data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary, nullptr, "GetTakeMetaDataTag_Description", nullptr, nullptr, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Description_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Description_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics
	{
		struct TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_LevelPath_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_LevelPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** The asset registry tag that contains the level-path for this meta-data */" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h" },
		{ "ToolTip", "The asset registry tag that contains the level-path for this meta-data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary, nullptr, "GetTakeMetaDataTag_LevelPath", nullptr, nullptr, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_LevelPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_LevelPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics
	{
		struct TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Slate_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Slate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** The asset registry tag that contains the slate for this meta-data */" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h" },
		{ "ToolTip", "The asset registry tag that contains the slate for this meta-data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary, nullptr, "GetTakeMetaDataTag_Slate", nullptr, nullptr, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Slate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Slate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics
	{
		struct TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TakeNumber_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TakeNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** The asset registry tag that contains the take number for this meta-data */" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h" },
		{ "ToolTip", "The asset registry tag that contains the take number for this meta-data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary, nullptr, "GetTakeMetaDataTag_TakeNumber", nullptr, nullptr, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TakeNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TakeNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics
	{
		struct TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TimecodeIn_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TimecodeIn_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** The asset registry tag that contains the timecode in for this meta-data */" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h" },
		{ "ToolTip", "The asset registry tag that contains the timecode in for this meta-data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary, nullptr, "GetTakeMetaDataTag_TimecodeIn", nullptr, nullptr, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TimecodeIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TimecodeIn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics
	{
		struct TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TimecodeOut_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TimecodeOut_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** The asset registry tag that contains the timecode out for this meta-data */" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h" },
		{ "ToolTip", "The asset registry tag that contains the timecode out for this meta-data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary, nullptr, "GetTakeMetaDataTag_TimecodeOut", nullptr, nullptr, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TimecodeOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_TimecodeOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics
	{
		struct TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Timestamp_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Timestamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** The asset registry tag that contains the timestamp for this meta-data */" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h" },
		{ "ToolTip", "The asset registry tag that contains the timestamp for this meta-data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary, nullptr, "GetTakeMetaDataTag_Timestamp", nullptr, nullptr, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Timestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::TakeMetaDataTagsFunctionLibrary_eventGetTakeMetaDataTag_Timestamp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeMetaDataTagsFunctionLibrary);
	UClass* Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_NoRegister()
	{
		return UTakeMetaDataTagsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetAllTakeMetaDataTags, "GetAllTakeMetaDataTags" }, // 1217770003
		{ &Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Description, "GetTakeMetaDataTag_Description" }, // 2167117597
		{ &Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_LevelPath, "GetTakeMetaDataTag_LevelPath" }, // 279140624
		{ &Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Slate, "GetTakeMetaDataTag_Slate" }, // 1982203700
		{ &Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TakeNumber, "GetTakeMetaDataTag_TakeNumber" }, // 1818144642
		{ &Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeIn, "GetTakeMetaDataTag_TimecodeIn" }, // 259965593
		{ &Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_TimecodeOut, "GetTakeMetaDataTag_TimecodeOut" }, // 2837068922
		{ &Z_Construct_UFunction_UTakeMetaDataTagsFunctionLibrary_GetTakeMetaDataTag_Timestamp, "GetTakeMetaDataTag_Timestamp" }, // 130064094
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This library's purpose is to expose the names of the UTakeMetaData asset registry tag names. */" },
		{ "IncludePath", "FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h" },
		{ "ToolTip", "This library's purpose is to expose the names of the UTakeMetaData asset registry tag names." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeMetaDataTagsFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics::ClassParams = {
		&UTakeMetaDataTagsFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UTakeMetaDataTagsFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeMetaDataTagsFunctionLibrary.OuterSingleton, Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeMetaDataTagsFunctionLibrary.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UTakeMetaDataTagsFunctionLibrary>()
	{
		return UTakeMetaDataTagsFunctionLibrary::StaticClass();
	}
	UTakeMetaDataTagsFunctionLibrary::UTakeMetaDataTagsFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeMetaDataTagsFunctionLibrary);
	UTakeMetaDataTagsFunctionLibrary::~UTakeMetaDataTagsFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary, UTakeMetaDataTagsFunctionLibrary::StaticClass, TEXT("UTakeMetaDataTagsFunctionLibrary"), &Z_Registration_Info_UClass_UTakeMetaDataTagsFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeMetaDataTagsFunctionLibrary), 2738432748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_314380120(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
