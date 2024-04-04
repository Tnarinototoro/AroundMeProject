// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Profile/MediaProfileBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaProfileBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfile_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfileBlueprintLibrary();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfileBlueprintLibrary_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UProxyMediaOutput_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UProxyMediaSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UMediaProfileBlueprintLibrary::execGetAllMediaOutputProxy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UProxyMediaOutput*>*)Z_Param__Result=UMediaProfileBlueprintLibrary::GetAllMediaOutputProxy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaProfileBlueprintLibrary::execGetAllMediaSourceProxy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UProxyMediaSource*>*)Z_Param__Result=UMediaProfileBlueprintLibrary::GetAllMediaSourceProxy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaProfileBlueprintLibrary::execSetMediaProfile)
	{
		P_GET_OBJECT(UMediaProfile,Z_Param_MediaProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMediaProfileBlueprintLibrary::SetMediaProfile(Z_Param_MediaProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaProfileBlueprintLibrary::execGetMediaProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaProfile**)Z_Param__Result=UMediaProfileBlueprintLibrary::GetMediaProfile();
		P_NATIVE_END;
	}
	void UMediaProfileBlueprintLibrary::StaticRegisterNativesUMediaProfileBlueprintLibrary()
	{
		UClass* Class = UMediaProfileBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllMediaOutputProxy", &UMediaProfileBlueprintLibrary::execGetAllMediaOutputProxy },
			{ "GetAllMediaSourceProxy", &UMediaProfileBlueprintLibrary::execGetAllMediaSourceProxy },
			{ "GetMediaProfile", &UMediaProfileBlueprintLibrary::execGetMediaProfile },
			{ "SetMediaProfile", &UMediaProfileBlueprintLibrary::execSetMediaProfile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics
	{
		struct MediaProfileBlueprintLibrary_eventGetAllMediaOutputProxy_Parms
		{
			TArray<UProxyMediaOutput*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProxyMediaOutput_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaProfileBlueprintLibrary_eventGetAllMediaOutputProxy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaProfile" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaProfileBlueprintLibrary, nullptr, "GetAllMediaOutputProxy", nullptr, nullptr, Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::MediaProfileBlueprintLibrary_eventGetAllMediaOutputProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::MediaProfileBlueprintLibrary_eventGetAllMediaOutputProxy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics
	{
		struct MediaProfileBlueprintLibrary_eventGetAllMediaSourceProxy_Parms
		{
			TArray<UProxyMediaSource*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProxyMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaProfileBlueprintLibrary_eventGetAllMediaSourceProxy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaProfile" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaProfileBlueprintLibrary, nullptr, "GetAllMediaSourceProxy", nullptr, nullptr, Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::MediaProfileBlueprintLibrary_eventGetAllMediaSourceProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::MediaProfileBlueprintLibrary_eventGetAllMediaSourceProxy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics
	{
		struct MediaProfileBlueprintLibrary_eventGetMediaProfile_Parms
		{
			UMediaProfile* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaProfileBlueprintLibrary_eventGetMediaProfile_Parms, ReturnValue), Z_Construct_UClass_UMediaProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaProfile" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaProfileBlueprintLibrary, nullptr, "GetMediaProfile", nullptr, nullptr, Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::MediaProfileBlueprintLibrary_eventGetMediaProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::MediaProfileBlueprintLibrary_eventGetMediaProfile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics
	{
		struct MediaProfileBlueprintLibrary_eventSetMediaProfile_Parms
		{
			UMediaProfile* MediaProfile;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::NewProp_MediaProfile = { "MediaProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaProfileBlueprintLibrary_eventSetMediaProfile_Parms, MediaProfile), Z_Construct_UClass_UMediaProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::NewProp_MediaProfile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "MediaProfile" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaProfileBlueprintLibrary, nullptr, "SetMediaProfile", nullptr, nullptr, Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::MediaProfileBlueprintLibrary_eventSetMediaProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::MediaProfileBlueprintLibrary_eventSetMediaProfile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaProfileBlueprintLibrary);
	UClass* Z_Construct_UClass_UMediaProfileBlueprintLibrary_NoRegister()
	{
		return UMediaProfileBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilities,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy, "GetAllMediaOutputProxy" }, // 3930726710
		{ &Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy, "GetAllMediaSourceProxy" }, // 4052520646
		{ &Z_Construct_UFunction_UMediaProfileBlueprintLibrary_GetMediaProfile, "GetMediaProfile" }, // 2573219738
		{ &Z_Construct_UFunction_UMediaProfileBlueprintLibrary_SetMediaProfile, "SetMediaProfile" }, // 241809314
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Profile/MediaProfileBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Profile/MediaProfileBlueprintLibrary.h" },
		{ "ScriptName", "MediaProfileLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaProfileBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::ClassParams = {
		&UMediaProfileBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMediaProfileBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIES_API UClass* StaticClass<UMediaProfileBlueprintLibrary>()
	{
		return UMediaProfileBlueprintLibrary::StaticClass();
	}
	UMediaProfileBlueprintLibrary::UMediaProfileBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaProfileBlueprintLibrary);
	UMediaProfileBlueprintLibrary::~UMediaProfileBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaProfileBlueprintLibrary, UMediaProfileBlueprintLibrary::StaticClass, TEXT("UMediaProfileBlueprintLibrary"), &Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaProfileBlueprintLibrary), 1279978931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileBlueprintLibrary_h_678692996(TEXT("/Script/MediaFrameworkUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfileBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
