// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGameplay_init() {}
	AUDIOGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature();
	AUDIOGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature();
	AUDIOGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature();
	AUDIOGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature();
	AUDIOGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AudioGameplay;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AudioGameplay()
	{
		if (!Z_Registration_Info_UPackage__Script_AudioGameplay.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioGameplay_BoolParamCallback__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioGameplay_SoundCallback__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioGameplay_SoundGroupChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioGameplay_StringParamCallback__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AudioGameplay",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA95181FC,
				0xCB7091A1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AudioGameplay.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AudioGameplay.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AudioGameplay(Z_Construct_UPackage__Script_AudioGameplay, TEXT("/Script/AudioGameplay"), Z_Registration_Info_UPackage__Script_AudioGameplay, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA95181FC, 0xCB7091A1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
