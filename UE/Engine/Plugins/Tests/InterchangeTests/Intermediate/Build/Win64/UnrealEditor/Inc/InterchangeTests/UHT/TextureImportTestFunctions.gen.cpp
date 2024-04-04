// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/TextureImportTestFunctions.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureImportTestFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UTextureImportTestFunctions();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UTextureImportTestFunctions_NoRegister();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	DEFINE_FUNCTION(UTextureImportTestFunctions::execCheckTextureAddressZ)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_PROPERTY(FByteProperty,Z_Param_ExpectedTextureAddressZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UTextureImportTestFunctions::CheckTextureAddressZ(Z_Param_Texture,TextureAddress(Z_Param_ExpectedTextureAddressZ));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextureImportTestFunctions::execCheckTextureAddressY)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_PROPERTY(FByteProperty,Z_Param_ExpectedTextureAddressY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UTextureImportTestFunctions::CheckTextureAddressY(Z_Param_Texture,TextureAddress(Z_Param_ExpectedTextureAddressY));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextureImportTestFunctions::execCheckTextureAddressX)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_PROPERTY(FByteProperty,Z_Param_ExpectedTextureAddressX);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UTextureImportTestFunctions::CheckTextureAddressX(Z_Param_Texture,TextureAddress(Z_Param_ExpectedTextureAddressX));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextureImportTestFunctions::execCheckTextureFilter)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_PROPERTY(FByteProperty,Z_Param_ExpectedTextureFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UTextureImportTestFunctions::CheckTextureFilter(Z_Param_Texture,TextureFilter(Z_Param_ExpectedTextureFilter));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextureImportTestFunctions::execCheckImportedTextureCount)
	{
		P_GET_TARRAY_REF(UTexture*,Z_Param_Out_Textures);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfImportedTextures);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UTextureImportTestFunctions::CheckImportedTextureCount(Z_Param_Out_Textures,Z_Param_ExpectedNumberOfImportedTextures);
		P_NATIVE_END;
	}
	void UTextureImportTestFunctions::StaticRegisterNativesUTextureImportTestFunctions()
	{
		UClass* Class = UTextureImportTestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckImportedTextureCount", &UTextureImportTestFunctions::execCheckImportedTextureCount },
			{ "CheckTextureAddressX", &UTextureImportTestFunctions::execCheckTextureAddressX },
			{ "CheckTextureAddressY", &UTextureImportTestFunctions::execCheckTextureAddressY },
			{ "CheckTextureAddressZ", &UTextureImportTestFunctions::execCheckTextureAddressZ },
			{ "CheckTextureFilter", &UTextureImportTestFunctions::execCheckTextureFilter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics
	{
		struct TextureImportTestFunctions_eventCheckImportedTextureCount_Parms
		{
			TArray<UTexture*> Textures;
			int32 ExpectedNumberOfImportedTextures;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfImportedTextures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::NewProp_Textures_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckImportedTextureCount_Parms, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::NewProp_Textures_MetaData), Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::NewProp_Textures_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::NewProp_ExpectedNumberOfImportedTextures = { "ExpectedNumberOfImportedTextures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckImportedTextureCount_Parms, ExpectedNumberOfImportedTextures), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckImportedTextureCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(0, nullptr) }; // 3923235592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::NewProp_Textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::NewProp_ExpectedNumberOfImportedTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of textures are imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/TextureImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of textures are imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureImportTestFunctions, nullptr, "CheckImportedTextureCount", nullptr, nullptr, Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::TextureImportTestFunctions_eventCheckImportedTextureCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::TextureImportTestFunctions_eventCheckImportedTextureCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics
	{
		struct TextureImportTestFunctions_eventCheckTextureAddressX_Parms
		{
			const UTexture* Texture;
			TEnumAsByte<TextureAddress> ExpectedTextureAddressX;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExpectedTextureAddressX;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureAddressX_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::NewProp_Texture_MetaData), Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::NewProp_Texture_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::NewProp_ExpectedTextureAddressX = { "ExpectedTextureAddressX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureAddressX_Parms, ExpectedTextureAddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(0, nullptr) }; // 2845966638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureAddressX_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(0, nullptr) }; // 3923235592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::NewProp_ExpectedTextureAddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported texture has the expected addressing mode for X-axis */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/TextureImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported texture has the expected addressing mode for X-axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureImportTestFunctions, nullptr, "CheckTextureAddressX", nullptr, nullptr, Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::TextureImportTestFunctions_eventCheckTextureAddressX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::TextureImportTestFunctions_eventCheckTextureAddressX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics
	{
		struct TextureImportTestFunctions_eventCheckTextureAddressY_Parms
		{
			const UTexture* Texture;
			TEnumAsByte<TextureAddress> ExpectedTextureAddressY;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExpectedTextureAddressY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureAddressY_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::NewProp_Texture_MetaData), Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::NewProp_Texture_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::NewProp_ExpectedTextureAddressY = { "ExpectedTextureAddressY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureAddressY_Parms, ExpectedTextureAddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(0, nullptr) }; // 2845966638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureAddressY_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(0, nullptr) }; // 3923235592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::NewProp_ExpectedTextureAddressY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported texture has the expected addressing mode for Y-axis */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/TextureImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported texture has the expected addressing mode for Y-axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureImportTestFunctions, nullptr, "CheckTextureAddressY", nullptr, nullptr, Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::TextureImportTestFunctions_eventCheckTextureAddressY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::TextureImportTestFunctions_eventCheckTextureAddressY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics
	{
		struct TextureImportTestFunctions_eventCheckTextureAddressZ_Parms
		{
			const UTexture* Texture;
			TEnumAsByte<TextureAddress> ExpectedTextureAddressZ;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExpectedTextureAddressZ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureAddressZ_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::NewProp_Texture_MetaData), Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::NewProp_Texture_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::NewProp_ExpectedTextureAddressZ = { "ExpectedTextureAddressZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureAddressZ_Parms, ExpectedTextureAddressZ), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(0, nullptr) }; // 2845966638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureAddressZ_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(0, nullptr) }; // 3923235592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::NewProp_ExpectedTextureAddressZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported texture has the expected addressing mode for Z-axis */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/TextureImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported texture has the expected addressing mode for Z-axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureImportTestFunctions, nullptr, "CheckTextureAddressZ", nullptr, nullptr, Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::TextureImportTestFunctions_eventCheckTextureAddressZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::TextureImportTestFunctions_eventCheckTextureAddressZ_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics
	{
		struct TextureImportTestFunctions_eventCheckTextureFilter_Parms
		{
			const UTexture* Texture;
			TEnumAsByte<TextureFilter> ExpectedTextureFilter;
			FInterchangeTestFunctionResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExpectedTextureFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureFilter_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::NewProp_Texture_MetaData), Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::NewProp_Texture_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::NewProp_ExpectedTextureFilter = { "ExpectedTextureFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureFilter_Parms, ExpectedTextureFilter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(0, nullptr) }; // 2612248343
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureImportTestFunctions_eventCheckTextureFilter_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(0, nullptr) }; // 3923235592
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::NewProp_ExpectedTextureFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported texture has the expected filtering mode */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/TextureImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported texture has the expected filtering mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureImportTestFunctions, nullptr, "CheckTextureFilter", nullptr, nullptr, Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::TextureImportTestFunctions_eventCheckTextureFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::TextureImportTestFunctions_eventCheckTextureFilter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureImportTestFunctions);
	UClass* Z_Construct_UClass_UTextureImportTestFunctions_NoRegister()
	{
		return UTextureImportTestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UTextureImportTestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureImportTestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportTestFunctionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportTestFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextureImportTestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextureImportTestFunctions_CheckImportedTextureCount, "CheckImportedTextureCount" }, // 2418984416
		{ &Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressX, "CheckTextureAddressX" }, // 1843766783
		{ &Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressY, "CheckTextureAddressY" }, // 3071988959
		{ &Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureAddressZ, "CheckTextureAddressZ" }, // 709583423
		{ &Z_Construct_UFunction_UTextureImportTestFunctions_CheckTextureFilter, "CheckTextureFilter" }, // 1752640377
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportTestFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureImportTestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImportTestFunctions/TextureImportTestFunctions.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/TextureImportTestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureImportTestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureImportTestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureImportTestFunctions_Statics::ClassParams = {
		&UTextureImportTestFunctions::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportTestFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureImportTestFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTextureImportTestFunctions()
	{
		if (!Z_Registration_Info_UClass_UTextureImportTestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureImportTestFunctions.OuterSingleton, Z_Construct_UClass_UTextureImportTestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureImportTestFunctions.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UTextureImportTestFunctions>()
	{
		return UTextureImportTestFunctions::StaticClass();
	}
	UTextureImportTestFunctions::UTextureImportTestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureImportTestFunctions);
	UTextureImportTestFunctions::~UTextureImportTestFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureImportTestFunctions, UTextureImportTestFunctions::StaticClass, TEXT("UTextureImportTestFunctions"), &Z_Registration_Info_UClass_UTextureImportTestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureImportTestFunctions), 1440909148U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_1983660698(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
