// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayBehavior_AnimationBased.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayBehavior_AnimationBased() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior_AnimationBased();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior_AnimationBased_NoRegister();
	GAMEPLAYBEHAVIORSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FMontagePlaybackData();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MontagePlaybackData;
class UScriptStruct* FMontagePlaybackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MontagePlaybackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MontagePlaybackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMontagePlaybackData, (UObject*)Z_Construct_UPackage__Script_GameplayBehaviorsModule(), TEXT("MontagePlaybackData"));
	}
	return Z_Registration_Info_UScriptStruct_MontagePlaybackData.OuterSingleton;
}
template<> GAMEPLAYBEHAVIORSMODULE_API UScriptStruct* StaticStruct<FMontagePlaybackData>()
{
	return FMontagePlaybackData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMontagePlaybackData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Avatar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Avatar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilityComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayBehavior_AnimationBased.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMontagePlaybackData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_Avatar_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayBehavior_AnimationBased.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMontagePlaybackData, Avatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_Avatar_MetaData), Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_Avatar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayBehavior_AnimationBased.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMontagePlaybackData, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_AnimMontage_MetaData), Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_AnimMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_AbilityComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayBehavior_AnimationBased.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMontagePlaybackData, AbilityComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_AbilityComponent_MetaData), Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_AbilityComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_Avatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewProp_AbilityComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorsModule,
		nullptr,
		&NewStructOps,
		"MontagePlaybackData",
		Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::PropPointers),
		sizeof(FMontagePlaybackData),
		alignof(FMontagePlaybackData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMontagePlaybackData()
	{
		if (!Z_Registration_Info_UScriptStruct_MontagePlaybackData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MontagePlaybackData.InnerSingleton, Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MontagePlaybackData.InnerSingleton;
	}
	DEFINE_FUNCTION(UGameplayBehavior_AnimationBased::execOnMontageFinished)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_GET_OBJECT(AActor,Z_Param_InAvatar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageFinished(Z_Param_Montage,Z_Param_bInterrupted,Z_Param_InAvatar);
		P_NATIVE_END;
	}
	void UGameplayBehavior_AnimationBased::StaticRegisterNativesUGameplayBehavior_AnimationBased()
	{
		UClass* Class = UGameplayBehavior_AnimationBased::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMontageFinished", &UGameplayBehavior_AnimationBased::execOnMontageFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics
	{
		struct GameplayBehavior_AnimationBased_eventOnMontageFinished_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
			AActor* InAvatar;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAvatar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayBehavior_AnimationBased_eventOnMontageFinished_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((GameplayBehavior_AnimationBased_eventOnMontageFinished_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameplayBehavior_AnimationBased_eventOnMontageFinished_Parms), &Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::NewProp_InAvatar = { "InAvatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayBehavior_AnimationBased_eventOnMontageFinished_Parms, InAvatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::NewProp_bInterrupted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::NewProp_InAvatar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayBehavior_AnimationBased.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehavior_AnimationBased, nullptr, "OnMontageFinished", nullptr, nullptr, Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::GameplayBehavior_AnimationBased_eventOnMontageFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::GameplayBehavior_AnimationBased_eventOnMontageFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayBehavior_AnimationBased);
	UClass* Z_Construct_UClass_UGameplayBehavior_AnimationBased_NoRegister()
	{
		return UGameplayBehavior_AnimationBased::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivePlayback_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePlayback_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivePlayback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorsModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayBehavior_AnimationBased_OnMontageFinished, "OnMontageFinished" }, // 3530699753
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Note that this behavior is supporting playing only a single montage for a\n *\x09given Avatar at a time. Trying to play multiple or using multiple UGameplayBehavior_AnimationBased\n *\x09instances will result in requests overriding and interfering. */" },
		{ "IncludePath", "GameplayBehavior_AnimationBased.h" },
		{ "ModuleRelativePath", "Public/GameplayBehavior_AnimationBased.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Note that this behavior is supporting playing only a single montage for a\ngiven Avatar at a time. Trying to play multiple or using multiple UGameplayBehavior_AnimationBased\ninstances will result in requests overriding and interfering." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::NewProp_ActivePlayback_Inner = { "ActivePlayback", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMontagePlaybackData, METADATA_PARAMS(0, nullptr) }; // 3714266356
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::NewProp_ActivePlayback_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09If this array ever gets more than couple elements at a time we should consider\n\x09 *\x09switching over to a TMap\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayBehavior_AnimationBased.h" },
		{ "ToolTip", "If this array ever gets more than couple elements at a time we should consider\nswitching over to a TMap" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::NewProp_ActivePlayback = { "ActivePlayback", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayBehavior_AnimationBased, ActivePlayback), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::NewProp_ActivePlayback_MetaData), Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::NewProp_ActivePlayback_MetaData) }; // 3714266356
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::NewProp_ActivePlayback_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::NewProp_ActivePlayback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayBehavior_AnimationBased>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::ClassParams = {
		&UGameplayBehavior_AnimationBased::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameplayBehavior_AnimationBased()
	{
		if (!Z_Registration_Info_UClass_UGameplayBehavior_AnimationBased.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayBehavior_AnimationBased.OuterSingleton, Z_Construct_UClass_UGameplayBehavior_AnimationBased_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayBehavior_AnimationBased.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<UGameplayBehavior_AnimationBased>()
	{
		return UGameplayBehavior_AnimationBased::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayBehavior_AnimationBased);
	UGameplayBehavior_AnimationBased::~UGameplayBehavior_AnimationBased() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_Statics::ScriptStructInfo[] = {
		{ FMontagePlaybackData::StaticStruct, Z_Construct_UScriptStruct_FMontagePlaybackData_Statics::NewStructOps, TEXT("MontagePlaybackData"), &Z_Registration_Info_UScriptStruct_MontagePlaybackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMontagePlaybackData), 3714266356U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayBehavior_AnimationBased, UGameplayBehavior_AnimationBased::StaticClass, TEXT("UGameplayBehavior_AnimationBased"), &Z_Registration_Info_UClass_UGameplayBehavior_AnimationBased, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayBehavior_AnimationBased), 1325607906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_2439769267(TEXT("/Script/GameplayBehaviorsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehavior_AnimationBased_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
