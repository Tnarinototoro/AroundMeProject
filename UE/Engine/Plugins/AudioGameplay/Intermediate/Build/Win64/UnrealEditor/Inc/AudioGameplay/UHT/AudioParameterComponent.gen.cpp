// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioParameterComponent.h"
#include "AudioParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioParameterComponent() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioParameterControllerInterface_NoRegister();
	AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayComponent();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioParameterComponent();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioParameterComponent_NoRegister();
	AUDIOGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorSoundParameterInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioGameplay();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics
	{
		struct _Script_AudioGameplay_eventOnParameterChanged_Parms
		{
			FAudioParameter Parameter;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::NewProp_Parameter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AudioGameplay_eventOnParameterChanged_Parms, Parameter), Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::NewProp_Parameter_MetaData), Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::NewProp_Parameter_MetaData) }; // 1058137875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::NewProp_Parameter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioParameterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioGameplay, nullptr, "OnParameterChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::_Script_AudioGameplay_eventOnParameterChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::_Script_AudioGameplay_eventOnParameterChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnParameterChanged_DelegateWrapper(const FMulticastScriptDelegate& OnParameterChanged, FAudioParameter const& Parameter)
{
	struct _Script_AudioGameplay_eventOnParameterChanged_Parms
	{
		FAudioParameter Parameter;
	};
	_Script_AudioGameplay_eventOnParameterChanged_Parms Parms;
	Parms.Parameter=Parameter;
	OnParameterChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAudioParameterComponent::execGetParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAudioParameter>*)Z_Param__Result=P_THIS->GetParameters();
		P_NATIVE_END;
	}
	void UAudioParameterComponent::StaticRegisterNativesUAudioParameterComponent()
	{
		UClass* Class = UAudioParameterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetParameters", &UAudioParameterComponent::execGetParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics
	{
		struct AudioParameterComponent_eventGetParameters_Parms
		{
			TArray<FAudioParameter> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(0, nullptr) }; // 1058137875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioParameterComponent_eventGetParameters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::NewProp_ReturnValue_MetaData) }; // 1058137875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/AudioParameterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterComponent, nullptr, "GetParameters", nullptr, nullptr, Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::AudioParameterComponent_eventGetParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::AudioParameterComponent_eventGetParameters_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioParameterComponent_GetParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterComponent_GetParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioParameterComponent);
	UClass* Z_Construct_UClass_UAudioParameterComponent_NoRegister()
	{
		return UAudioParameterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAudioParameterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnParameterChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParameterChanged;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActiveComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveComponents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioParameterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioGameplayComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioParameterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioParameterComponent_GetParameters, "GetParameters" }, // 4098283379
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioParameterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09UAudioParameterComponent - Can be used to set/store audio parameters and automatically dispatch them (through ActorSoundParameterInterface) \n *  to any sounds played by the component's Owner Actor\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD" },
		{ "IncludePath", "AudioParameterComponent.h" },
		{ "ModuleRelativePath", "Public/AudioParameterComponent.h" },
		{ "ToolTip", "UAudioParameterComponent - Can be used to set/store audio parameters and automatically dispatch them (through ActorSoundParameterInterface)\nto any sounds played by the component's Owner Actor" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_OnParameterChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/AudioParameterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_OnParameterChanged = { "OnParameterChanged", nullptr, (EPropertyFlags)0x0010000810080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioParameterComponent, OnParameterChanged), Z_Construct_UDelegateFunction_AudioGameplay_OnParameterChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_OnParameterChanged_MetaData), Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_OnParameterChanged_MetaData) }; // 2807601124
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_ActiveComponents_Inner = { "ActiveComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_ActiveComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/AudioParameterComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_ActiveComponents = { "ActiveComponents", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioParameterComponent, ActiveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_ActiveComponents_MetaData), Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_ActiveComponents_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(0, nullptr) }; // 1058137875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/AudioParameterComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioParameterComponent, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_Parameters_MetaData), Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_Parameters_MetaData) }; // 1058137875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioParameterComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_OnParameterChanged,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_ActiveComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_ActiveComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioParameterComponent_Statics::NewProp_Parameters,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAudioParameterComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAudioParameterControllerInterface_NoRegister, (int32)VTABLE_OFFSET(UAudioParameterComponent, IAudioParameterControllerInterface), false },  // 2237366973
			{ Z_Construct_UClass_UActorSoundParameterInterface_NoRegister, (int32)VTABLE_OFFSET(UAudioParameterComponent, IActorSoundParameterInterface), false },  // 347268119
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioParameterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioParameterComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioParameterComponent_Statics::ClassParams = {
		&UAudioParameterComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioParameterComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioParameterComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAudioParameterComponent()
	{
		if (!Z_Registration_Info_UClass_UAudioParameterComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioParameterComponent.OuterSingleton, Z_Construct_UClass_UAudioParameterComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioParameterComponent.OuterSingleton;
	}
	template<> AUDIOGAMEPLAY_API UClass* StaticClass<UAudioParameterComponent>()
	{
		return UAudioParameterComponent::StaticClass();
	}
	UAudioParameterComponent::UAudioParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioParameterComponent);
	UAudioParameterComponent::~UAudioParameterComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioParameterComponent, UAudioParameterComponent::StaticClass, TEXT("UAudioParameterComponent"), &Z_Registration_Info_UClass_UAudioParameterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioParameterComponent), 4512514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_703704592(TEXT("/Script/AudioGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
