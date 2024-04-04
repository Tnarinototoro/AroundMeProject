// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/InputVCamSubsystem.h"
#include "VCamComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputVCamSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UInputVCamSubsystem();
	VCAMCORE_API UClass* Z_Construct_UClass_UInputVCamSubsystem_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamPlayerInput_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamSubsystem();
// End Cross Module References
	void UInputVCamSubsystem::StaticRegisterNativesUInputVCamSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputVCamSubsystem);
	UClass* Z_Construct_UClass_UInputVCamSubsystem_NoRegister()
	{
		return UInputVCamSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UInputVCamSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerInput;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentInputStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentInputStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputVCamSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputVCamSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles all input for UVCamComponent.\n * Essentially maps input devices to UVCamComponents, similar like APlayerController does for gameplay code.\n */" },
		{ "IncludePath", "Input/InputVCamSubsystem.h" },
		{ "ModuleRelativePath", "Public/Input/InputVCamSubsystem.h" },
		{ "ToolTip", "Handles all input for UVCamComponent.\nEssentially maps input devices to UVCamComponents, similar like APlayerController does for gameplay code." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_PlayerInput_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Input/InputVCamSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0046000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputVCamSubsystem, PlayerInput), Z_Construct_UClass_UVCamPlayerInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_PlayerInput_MetaData), Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_PlayerInput_MetaData) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack_Inner = { "CurrentInputStack", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack_MetaData[] = {
		{ "Comment", "/** Internal. This is the current stack of InputComponents that is being processed by the PlayerInput. */" },
		{ "ModuleRelativePath", "Public/Input/InputVCamSubsystem.h" },
		{ "ToolTip", "Internal. This is the current stack of InputComponents that is being processed by the PlayerInput." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack = { "CurrentInputStack", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputVCamSubsystem, CurrentInputStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack_MetaData), Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_UserSettings_MetaData[] = {
		{ "Comment", "/** The user settings for this subsystem used to store each user's input related settings */" },
		{ "ModuleRelativePath", "Public/Input/InputVCamSubsystem.h" },
		{ "ToolTip", "The user settings for this subsystem used to store each user's input related settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_UserSettings = { "UserSettings", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputVCamSubsystem, UserSettings), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_UserSettings_MetaData), Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_UserSettings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputVCamSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_PlayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_UserSettings,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInputVCamSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister, (int32)VTABLE_OFFSET(UInputVCamSubsystem, IEnhancedInputSubsystemInterface), false },  // 3138112689
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputVCamSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputVCamSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputVCamSubsystem_Statics::ClassParams = {
		&UInputVCamSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputVCamSubsystem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputVCamSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInputVCamSubsystem()
	{
		if (!Z_Registration_Info_UClass_UInputVCamSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputVCamSubsystem.OuterSingleton, Z_Construct_UClass_UInputVCamSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputVCamSubsystem.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UInputVCamSubsystem>()
	{
		return UInputVCamSubsystem::StaticClass();
	}
	UInputVCamSubsystem::UInputVCamSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputVCamSubsystem);
	UInputVCamSubsystem::~UInputVCamSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputVCamSubsystem, UInputVCamSubsystem::StaticClass, TEXT("UInputVCamSubsystem"), &Z_Registration_Info_UClass_UInputVCamSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputVCamSubsystem), 3228242424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_2992022132(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
