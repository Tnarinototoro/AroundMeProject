// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/InputTestFramework.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputTestFramework() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UControllablePlayer();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UControllablePlayer_NoRegister();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UInputBindingTarget();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UInputBindingTarget_NoRegister();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UMockInputUserSettings();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UMockInputUserSettings_NoRegister();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UTestMappableKeysAction();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UTestMappableKeysAction_NoRegister();
	INPUTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBindingTargets();
	UPackage* Z_Construct_UPackage__Script_InputEditor();
// End Cross Module References
	void UInputBindingTarget::StaticRegisterNativesUInputBindingTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputBindingTarget);
	UClass* Z_Construct_UClass_UInputBindingTarget_NoRegister()
	{
		return UInputBindingTarget::StaticClass();
	}
	struct Z_Construct_UClass_UInputBindingTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBindingTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputBindingTarget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBindingTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/InputTestFramework.h" },
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBindingTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputBindingTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputBindingTarget_Statics::ClassParams = {
		&UInputBindingTarget::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputBindingTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputBindingTarget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInputBindingTarget()
	{
		if (!Z_Registration_Info_UClass_UInputBindingTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputBindingTarget.OuterSingleton, Z_Construct_UClass_UInputBindingTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputBindingTarget.OuterSingleton;
	}
	template<> INPUTEDITOR_API UClass* StaticClass<UInputBindingTarget>()
	{
		return UInputBindingTarget::StaticClass();
	}
	UInputBindingTarget::UInputBindingTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBindingTarget);
	UInputBindingTarget::~UInputBindingTarget() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BindingTargets;
class UScriptStruct* FBindingTargets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BindingTargets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BindingTargets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBindingTargets, (UObject*)Z_Construct_UPackage__Script_InputEditor(), TEXT("BindingTargets"));
	}
	return Z_Registration_Info_UScriptStruct_BindingTargets.OuterSingleton;
}
template<> INPUTEDITOR_API UScriptStruct* StaticStruct<FBindingTargets>()
{
	return FBindingTargets::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBindingTargets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Started_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Started;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ongoing_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Ongoing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Canceled_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Canceled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggered_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Triggered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindingTargets_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBindingTargets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBindingTargets>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Started_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Started = { "Started", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBindingTargets, Started), Z_Construct_UClass_UInputBindingTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Started_MetaData), Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Started_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Ongoing_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Ongoing = { "Ongoing", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBindingTargets, Ongoing), Z_Construct_UClass_UInputBindingTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Ongoing_MetaData), Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Ongoing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Canceled_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Canceled = { "Canceled", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBindingTargets, Canceled), Z_Construct_UClass_UInputBindingTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Canceled_MetaData), Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Canceled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBindingTargets, Completed), Z_Construct_UClass_UInputBindingTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Completed_MetaData), Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Completed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Triggered_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Triggered = { "Triggered", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBindingTargets, Triggered), Z_Construct_UClass_UInputBindingTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Triggered_MetaData), Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Triggered_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBindingTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Started,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Ongoing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Canceled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindingTargets_Statics::NewProp_Triggered,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBindingTargets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputEditor,
		nullptr,
		&NewStructOps,
		"BindingTargets",
		Z_Construct_UScriptStruct_FBindingTargets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingTargets_Statics::PropPointers),
		sizeof(FBindingTargets),
		alignof(FBindingTargets),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingTargets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBindingTargets_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingTargets_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBindingTargets()
	{
		if (!Z_Registration_Info_UScriptStruct_BindingTargets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BindingTargets.InnerSingleton, Z_Construct_UScriptStruct_FBindingTargets_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BindingTargets.InnerSingleton;
	}
	void UMockInputUserSettings::StaticRegisterNativesUMockInputUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockInputUserSettings);
	UClass* Z_Construct_UClass_UMockInputUserSettings_NoRegister()
	{
		return UMockInputUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMockInputUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockInputUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedInputUserSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_InputEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMockInputUserSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockInputUserSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/InputTestFramework.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockInputUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockInputUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockInputUserSettings_Statics::ClassParams = {
		&UMockInputUserSettings::StaticClass,
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
		0x048000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMockInputUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMockInputUserSettings_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMockInputUserSettings()
	{
		if (!Z_Registration_Info_UClass_UMockInputUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockInputUserSettings.OuterSingleton, Z_Construct_UClass_UMockInputUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockInputUserSettings.OuterSingleton;
	}
	template<> INPUTEDITOR_API UClass* StaticClass<UMockInputUserSettings>()
	{
		return UMockInputUserSettings::StaticClass();
	}
	UMockInputUserSettings::UMockInputUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockInputUserSettings);
	UMockInputUserSettings::~UMockInputUserSettings() {}
	void UControllablePlayer::StaticRegisterNativesUControllablePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControllablePlayer);
	UClass* Z_Construct_UClass_UControllablePlayer_NoRegister()
	{
		return UControllablePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UControllablePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Player;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingTargets_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindingTargets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingTargets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BindingTargets;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputContext_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputContext_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputContext;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputAction_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputAction_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControllablePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControllablePlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControllablePlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/InputTestFramework.h" },
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControllablePlayer_Statics::NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControllablePlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControllablePlayer, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControllablePlayer_Statics::NewProp_Player_MetaData), Z_Construct_UClass_UControllablePlayer_Statics::NewProp_Player_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControllablePlayer_Statics::NewProp_BindingTargets_ValueProp = { "BindingTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBindingTargets, METADATA_PARAMS(0, nullptr) }; // 1033290360
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControllablePlayer_Statics::NewProp_BindingTargets_Key_KeyProp = { "BindingTargets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControllablePlayer_Statics::NewProp_BindingTargets_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControllablePlayer_Statics::NewProp_BindingTargets = { "BindingTargets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControllablePlayer, BindingTargets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControllablePlayer_Statics::NewProp_BindingTargets_MetaData), Z_Construct_UClass_UControllablePlayer_Statics::NewProp_BindingTargets_MetaData) }; // 1033290360
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputContext_ValueProp = { "InputContext", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputContext_Key_KeyProp = { "InputContext_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputContext_MetaData[] = {
		{ "Comment", "// Storage for input mapping contexts applied to the player\n" },
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
		{ "ToolTip", "Storage for input mapping contexts applied to the player" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControllablePlayer, InputContext), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputContext_MetaData), Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputContext_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputAction_ValueProp = { "InputAction", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputAction_Key_KeyProp = { "InputAction_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputAction_MetaData[] = {
		{ "Comment", "// Storage for input actions applied to the player\n" },
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
		{ "ToolTip", "Storage for input actions applied to the player" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControllablePlayer, InputAction), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputAction_MetaData), Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControllablePlayer_Statics::NewProp_UserSettings_MetaData[] = {
		{ "Comment", "// The user settings object that we can use to test. Normally this is owned by the EI Local Player subsystem \n" },
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
		{ "ToolTip", "The user settings object that we can use to test. Normally this is owned by the EI Local Player subsystem" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControllablePlayer_Statics::NewProp_UserSettings = { "UserSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UControllablePlayer, UserSettings), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControllablePlayer_Statics::NewProp_UserSettings_MetaData), Z_Construct_UClass_UControllablePlayer_Statics::NewProp_UserSettings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControllablePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllablePlayer_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllablePlayer_Statics::NewProp_BindingTargets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllablePlayer_Statics::NewProp_BindingTargets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllablePlayer_Statics::NewProp_BindingTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputContext_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputContext_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputAction_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputAction_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllablePlayer_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControllablePlayer_Statics::NewProp_UserSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControllablePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControllablePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControllablePlayer_Statics::ClassParams = {
		&UControllablePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControllablePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControllablePlayer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UControllablePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UControllablePlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UControllablePlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UControllablePlayer()
	{
		if (!Z_Registration_Info_UClass_UControllablePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControllablePlayer.OuterSingleton, Z_Construct_UClass_UControllablePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControllablePlayer.OuterSingleton;
	}
	template<> INPUTEDITOR_API UClass* StaticClass<UControllablePlayer>()
	{
		return UControllablePlayer::StaticClass();
	}
	UControllablePlayer::UControllablePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControllablePlayer);
	UControllablePlayer::~UControllablePlayer() {}
	void UTestMappableKeysAction::StaticRegisterNativesUTestMappableKeysAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestMappableKeysAction);
	UClass* Z_Construct_UClass_UTestMappableKeysAction_NoRegister()
	{
		return UTestMappableKeysAction::StaticClass();
	}
	struct Z_Construct_UClass_UTestMappableKeysAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMappableKeysAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputAction,
		(UObject* (*)())Z_Construct_UPackage__Script_InputEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMappableKeysAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMappableKeysAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A subclass of UInputAction that will have it's player mappable key settings object set automatically so \n// we can test re-mappable keys.\n" },
		{ "IncludePath", "Tests/InputTestFramework.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/InputTestFramework.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "A subclass of UInputAction that will have it's player mappable key settings object set automatically so\nwe can test re-mappable keys." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMappableKeysAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMappableKeysAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestMappableKeysAction_Statics::ClassParams = {
		&UTestMappableKeysAction::StaticClass,
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
		0x048000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestMappableKeysAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestMappableKeysAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTestMappableKeysAction()
	{
		if (!Z_Registration_Info_UClass_UTestMappableKeysAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestMappableKeysAction.OuterSingleton, Z_Construct_UClass_UTestMappableKeysAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestMappableKeysAction.OuterSingleton;
	}
	template<> INPUTEDITOR_API UClass* StaticClass<UTestMappableKeysAction>()
	{
		return UTestMappableKeysAction::StaticClass();
	}
	UTestMappableKeysAction::UTestMappableKeysAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMappableKeysAction);
	UTestMappableKeysAction::~UTestMappableKeysAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Private_Tests_InputTestFramework_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Private_Tests_InputTestFramework_h_Statics::ScriptStructInfo[] = {
		{ FBindingTargets::StaticStruct, Z_Construct_UScriptStruct_FBindingTargets_Statics::NewStructOps, TEXT("BindingTargets"), &Z_Registration_Info_UScriptStruct_BindingTargets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBindingTargets), 1033290360U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Private_Tests_InputTestFramework_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputBindingTarget, UInputBindingTarget::StaticClass, TEXT("UInputBindingTarget"), &Z_Registration_Info_UClass_UInputBindingTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputBindingTarget), 4077799489U) },
		{ Z_Construct_UClass_UMockInputUserSettings, UMockInputUserSettings::StaticClass, TEXT("UMockInputUserSettings"), &Z_Registration_Info_UClass_UMockInputUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockInputUserSettings), 3544713643U) },
		{ Z_Construct_UClass_UControllablePlayer, UControllablePlayer::StaticClass, TEXT("UControllablePlayer"), &Z_Registration_Info_UClass_UControllablePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControllablePlayer), 1410918453U) },
		{ Z_Construct_UClass_UTestMappableKeysAction, UTestMappableKeysAction::StaticClass, TEXT("UTestMappableKeysAction"), &Z_Registration_Info_UClass_UTestMappableKeysAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestMappableKeysAction), 2878014857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Private_Tests_InputTestFramework_h_2240549313(TEXT("/Script/InputEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Private_Tests_InputTestFramework_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Private_Tests_InputTestFramework_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Private_Tests_InputTestFramework_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Private_Tests_InputTestFramework_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
