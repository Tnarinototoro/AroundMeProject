// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreFunctionLibrary() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	DEFINE_FUNCTION(UGoogleARCoreSessionFunctionLibrary::execAddRuntimeCandidateImageFromRawbytes)
	{
		P_GET_OBJECT(UARSessionConfig,Z_Param_SessionConfig);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ImageGrayscalePixels);
		P_GET_PROPERTY(FIntProperty,Z_Param_ImageWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_ImageHeight);
		P_GET_PROPERTY(FStrProperty,Z_Param_FriendlyName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PhysicalWidth);
		P_GET_OBJECT(UTexture2D,Z_Param_CandidateTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARCandidateImage**)Z_Param__Result=UGoogleARCoreSessionFunctionLibrary::AddRuntimeCandidateImageFromRawbytes(Z_Param_SessionConfig,Z_Param_Out_ImageGrayscalePixels,Z_Param_ImageWidth,Z_Param_ImageHeight,Z_Param_FriendlyName,Z_Param_PhysicalWidth,Z_Param_CandidateTexture);
		P_NATIVE_END;
	}
	void UGoogleARCoreSessionFunctionLibrary::StaticRegisterNativesUGoogleARCoreSessionFunctionLibrary()
	{
		UClass* Class = UGoogleARCoreSessionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRuntimeCandidateImageFromRawbytes", &UGoogleARCoreSessionFunctionLibrary::execAddRuntimeCandidateImageFromRawbytes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics
	{
		struct GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms
		{
			UARSessionConfig* SessionConfig;
			TArray<uint8> ImageGrayscalePixels;
			int32 ImageWidth;
			int32 ImageHeight;
			FString FriendlyName;
			float PhysicalWidth;
			UTexture2D* CandidateTexture;
			UARCandidateImage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionConfig;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageGrayscalePixels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageGrayscalePixels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageGrayscalePixels;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageWidth;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageHeight;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalWidth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CandidateTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_SessionConfig = { "SessionConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, SessionConfig), Z_Construct_UClass_UARSessionConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels_Inner = { "ImageGrayscalePixels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels = { "ImageGrayscalePixels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, ImageGrayscalePixels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels_MetaData), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageWidth = { "ImageWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, ImageWidth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageHeight = { "ImageHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, ImageHeight), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, FriendlyName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_PhysicalWidth = { "PhysicalWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, PhysicalWidth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_CandidateTexture = { "CandidateTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, CandidateTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms, ReturnValue), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_SessionConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageGrayscalePixels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ImageHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_FriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_PhysicalWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_CandidateTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Session" },
		{ "Comment", "/**\n\x09 * Create an ARCandidateImage object from the raw pixel data and add it to the ARCandidateImageList of the given \\c UARSessionConfig object.\n\x09 *\n\x09 * Note that you need to restart the AR session with the \\c UARSessionConfig you are adding to to make the change take effect.\n\x09 *\n\x09 * On ARCore platform, you can leave the PhysicalWidth and PhysicalHeight to 0 if you don't know the physical size of the image or\n\x09 * the physical size is dynamic. And this function takes time to perform non-trivial image processing (20ms - 30ms),\n\x09 * and should be run on a background thread.\n\x09 *\n\x09 * @return A \\c UARCandidateImage Object pointer if the underlying ARPlatform added the candidate image at runtime successfully.\n\x09 *\x09\x09  Return nullptr otherwise.\n\x09 */" },
		{ "CPP_Default_CandidateTexture", "None" },
		{ "Keywords", "ar augmentedreality augmented reality candidate image" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
		{ "ToolTip", "Create an ARCandidateImage object from the raw pixel data and add it to the ARCandidateImageList of the given \\c UARSessionConfig object.\n\nNote that you need to restart the AR session with the \\c UARSessionConfig you are adding to to make the change take effect.\n\nOn ARCore platform, you can leave the PhysicalWidth and PhysicalHeight to 0 if you don't know the physical size of the image or\nthe physical size is dynamic. And this function takes time to perform non-trivial image processing (20ms - 30ms),\nand should be run on a background thread.\n\n@return A \\c UARCandidateImage Object pointer if the underlying ARPlatform added the candidate image at runtime successfully.\n               Return nullptr otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, nullptr, "AddRuntimeCandidateImageFromRawbytes", nullptr, nullptr, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::GoogleARCoreSessionFunctionLibrary_eventAddRuntimeCandidateImageFromRawbytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreSessionFunctionLibrary);
	UClass* Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_NoRegister()
	{
		return UGoogleARCoreSessionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleARCoreSessionFunctionLibrary_AddRuntimeCandidateImageFromRawbytes, "AddRuntimeCandidateImageFromRawbytes" }, // 1527742126
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A function library that provides static/Blueprint functions associated with GoogleARCore session.*/" },
		{ "IncludePath", "GoogleARCoreFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
		{ "ToolTip", "A function library that provides static/Blueprint functions associated with GoogleARCore session." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreSessionFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::ClassParams = {
		&UGoogleARCoreSessionFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreSessionFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreSessionFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreSessionFunctionLibrary.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreSessionFunctionLibrary>()
	{
		return UGoogleARCoreSessionFunctionLibrary::StaticClass();
	}
	UGoogleARCoreSessionFunctionLibrary::UGoogleARCoreSessionFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreSessionFunctionLibrary);
	UGoogleARCoreSessionFunctionLibrary::~UGoogleARCoreSessionFunctionLibrary() {}
	void UGoogleARCoreFrameFunctionLibrary::StaticRegisterNativesUGoogleARCoreFrameFunctionLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreFrameFunctionLibrary);
	UClass* Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_NoRegister()
	{
		return UGoogleARCoreFrameFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A function library that provides static/Blueprint functions associated with most recent GoogleARCore tracking frame.*/" },
		{ "IncludePath", "GoogleARCoreFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreFunctionLibrary.h" },
		{ "ToolTip", "A function library that provides static/Blueprint functions associated with most recent GoogleARCore tracking frame." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreFrameFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::ClassParams = {
		&UGoogleARCoreFrameFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreFrameFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreFrameFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreFrameFunctionLibrary.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreFrameFunctionLibrary>()
	{
		return UGoogleARCoreFrameFunctionLibrary::StaticClass();
	}
	UGoogleARCoreFrameFunctionLibrary::UGoogleARCoreFrameFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreFrameFunctionLibrary);
	UGoogleARCoreFrameFunctionLibrary::~UGoogleARCoreFrameFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary, UGoogleARCoreSessionFunctionLibrary::StaticClass, TEXT("UGoogleARCoreSessionFunctionLibrary"), &Z_Registration_Info_UClass_UGoogleARCoreSessionFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreSessionFunctionLibrary), 2634365568U) },
		{ Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary, UGoogleARCoreFrameFunctionLibrary::StaticClass, TEXT("UGoogleARCoreFrameFunctionLibrary"), &Z_Registration_Info_UClass_UGoogleARCoreFrameFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreFrameFunctionLibrary), 2738833717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_1218719529(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
