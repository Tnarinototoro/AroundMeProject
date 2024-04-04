// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAudioMotorSim.h"
#include "AudioMotorSimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioMotorSim() {}
// Cross Module References
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSim();
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSim_NoRegister();
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimComponent();
	AUDIOMOTORSIM_API UClass* Z_Construct_UClass_UAudioMotorSimComponent_NoRegister();
	AUDIOMOTORSIM_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMotorSimInputContext();
	AUDIOMOTORSIM_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSim();
// End Cross Module References
	DEFINE_FUNCTION(IAudioMotorSim::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UAudioMotorSim::StaticRegisterNativesUAudioMotorSim()
	{
		UClass* Class = UAudioMotorSim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &IAudioMotorSim::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioMotorSim_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorSim_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioMotorSim" },
		{ "Comment", "// Use to reset any state that might be desired. Will be called automatically if the entire MotorSim is Reset, or call it manually\n" },
		{ "ModuleRelativePath", "Public/IAudioMotorSim.h" },
		{ "ToolTip", "Use to reset any state that might be desired. Will be called automatically if the entire MotorSim is Reset, or call it manually" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorSim_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorSim, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorSim_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMotorSim_Reset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAudioMotorSim_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorSim_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMotorSim);
	UClass* Z_Construct_UClass_UAudioMotorSim_NoRegister()
	{
		return UAudioMotorSim::StaticClass();
	}
	struct Z_Construct_UClass_UAudioMotorSim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioMotorSim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSim,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSim_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioMotorSim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioMotorSim_Reset, "Reset" }, // 2086800265
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSim_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMotorSim_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/IAudioMotorSim.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioMotorSim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAudioMotorSim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMotorSim_Statics::ClassParams = {
		&UAudioMotorSim::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSim_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioMotorSim_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAudioMotorSim()
	{
		if (!Z_Registration_Info_UClass_UAudioMotorSim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMotorSim.OuterSingleton, Z_Construct_UClass_UAudioMotorSim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioMotorSim.OuterSingleton;
	}
	template<> AUDIOMOTORSIM_API UClass* StaticClass<UAudioMotorSim>()
	{
		return UAudioMotorSim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMotorSim);
	UAudioMotorSim::~UAudioMotorSim() {}
	struct AudioMotorSimComponent_eventBP_Update_Parms
	{
		FAudioMotorSimInputContext Input;
		FAudioMotorSimRuntimeContext RuntimeInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AudioMotorSimComponent_eventBP_Update_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UAudioMotorSimComponent_BP_Reset = FName(TEXT("BP_Reset"));
	void UAudioMotorSimComponent::BP_Reset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAudioMotorSimComponent_BP_Reset),NULL);
	}
	static FName NAME_UAudioMotorSimComponent_BP_Update = FName(TEXT("BP_Update"));
	bool UAudioMotorSimComponent::BP_Update(FAudioMotorSimInputContext& Input, FAudioMotorSimRuntimeContext& RuntimeInfo)
	{
		AudioMotorSimComponent_eventBP_Update_Parms Parms;
		Parms.Input=Input;
		Parms.RuntimeInfo=RuntimeInfo;
		ProcessEvent(FindFunctionChecked(NAME_UAudioMotorSimComponent_BP_Update),&Parms);
		Input=Parms.Input;
		RuntimeInfo=Parms.RuntimeInfo;
		return !!Parms.ReturnValue;
	}
	void UAudioMotorSimComponent::StaticRegisterNativesUAudioMotorSimComponent()
	{
	}
	struct Z_Construct_UFunction_UAudioMotorSimComponent_BP_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorSimComponent_BP_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioMotorSim" },
		{ "Comment", "// Called when something Resets this component\n" },
		{ "DisplayName", "OnReset" },
		{ "ModuleRelativePath", "Public/IAudioMotorSim.h" },
		{ "ToolTip", "Called when something Resets this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorSimComponent_BP_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorSimComponent, nullptr, "BP_Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorSimComponent_BP_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMotorSimComponent_BP_Reset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAudioMotorSimComponent_BP_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorSimComponent_BP_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMotorSimComponent_eventBP_Update_Parms, Input), Z_Construct_UScriptStruct_FAudioMotorSimInputContext, METADATA_PARAMS(0, nullptr) }; // 2774495768
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::NewProp_RuntimeInfo = { "RuntimeInfo", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioMotorSimComponent_eventBP_Update_Parms, RuntimeInfo), Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext, METADATA_PARAMS(0, nullptr) }; // 4091726812
	void Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioMotorSimComponent_eventBP_Update_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioMotorSimComponent_eventBP_Update_Parms), &Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::NewProp_RuntimeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioMotorSim" },
		{ "Comment", "/* Called every tick that this component is being updated. Use \"Set Members in Struct\" to update values for future components in the chain. The return value does nothing.\n\x09* @param Input\x09\x09\x09Holds values which are not saved between update frames which represent input to the simulation\n\x09* @param RuntimeInfo\x09Holds values which are saved between update frames to represent the output or state of the simulation\n\x09* @return\x09\x09\x09\x09Vestigial, does nothing.\n\x09*/" },
		{ "DisplayName", "OnUpdate" },
		{ "ModuleRelativePath", "Public/IAudioMotorSim.h" },
		{ "ToolTip", "Called every tick that this component is being updated. Use \"Set Members in Struct\" to update values for future components in the chain. The return value does nothing.\n      * @param Input                  Holds values which are not saved between update frames which represent input to the simulation\n      * @param RuntimeInfo    Holds values which are saved between update frames to represent the output or state of the simulation\n      * @return                               Vestigial, does nothing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMotorSimComponent, nullptr, "BP_Update", nullptr, nullptr, Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::PropPointers), sizeof(AudioMotorSimComponent_eventBP_Update_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::PropPointers) < 2048);
	static_assert(sizeof(AudioMotorSimComponent_eventBP_Update_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMotorSimComponent);
	UClass* Z_Construct_UClass_UAudioMotorSimComponent_NoRegister()
	{
		return UAudioMotorSimComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAudioMotorSimComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRuntimeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRuntimeInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioMotorSimComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSim,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSimComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioMotorSimComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioMotorSimComponent_BP_Reset, "BP_Reset" }, // 4218967862
		{ &Z_Construct_UFunction_UAudioMotorSimComponent_BP_Update, "BP_Update" }, // 3826155528
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSimComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMotorSimComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "AudioMotorSim" },
		{ "IncludePath", "IAudioMotorSim.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IAudioMotorSim.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMotorSimComponent_Statics::NewProp_CachedInput_MetaData[] = {
		{ "Category", "DebugInfo" },
		{ "Comment", "// Input data after running this component\n" },
		{ "ModuleRelativePath", "Public/IAudioMotorSim.h" },
		{ "ToolTip", "Input data after running this component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMotorSimComponent_Statics::NewProp_CachedInput = { "CachedInput", nullptr, (EPropertyFlags)0x0010000800000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMotorSimComponent, CachedInput), Z_Construct_UScriptStruct_FAudioMotorSimInputContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSimComponent_Statics::NewProp_CachedInput_MetaData), Z_Construct_UClass_UAudioMotorSimComponent_Statics::NewProp_CachedInput_MetaData) }; // 2774495768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMotorSimComponent_Statics::NewProp_CachedRuntimeInfo_MetaData[] = {
		{ "Category", "DebugInfo" },
		{ "Comment", "// runtime info after running this component\n" },
		{ "ModuleRelativePath", "Public/IAudioMotorSim.h" },
		{ "ToolTip", "runtime info after running this component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioMotorSimComponent_Statics::NewProp_CachedRuntimeInfo = { "CachedRuntimeInfo", nullptr, (EPropertyFlags)0x0010000800000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioMotorSimComponent, CachedRuntimeInfo), Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSimComponent_Statics::NewProp_CachedRuntimeInfo_MetaData), Z_Construct_UClass_UAudioMotorSimComponent_Statics::NewProp_CachedRuntimeInfo_MetaData) }; // 4091726812
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioMotorSimComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMotorSimComponent_Statics::NewProp_CachedInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioMotorSimComponent_Statics::NewProp_CachedRuntimeInfo,
	};
#endif // WITH_EDITORONLY_DATA
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAudioMotorSimComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAudioMotorSim_NoRegister, (int32)VTABLE_OFFSET(UAudioMotorSimComponent, IAudioMotorSim), false },  // 4255479310
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSimComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioMotorSimComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMotorSimComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMotorSimComponent_Statics::ClassParams = {
		&UAudioMotorSimComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAudioMotorSimComponent_Statics::PropPointers, nullptr),
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSimComponent_Statics::PropPointers), 0),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSimComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioMotorSimComponent_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMotorSimComponent_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_UAudioMotorSimComponent()
	{
		if (!Z_Registration_Info_UClass_UAudioMotorSimComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMotorSimComponent.OuterSingleton, Z_Construct_UClass_UAudioMotorSimComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioMotorSimComponent.OuterSingleton;
	}
	template<> AUDIOMOTORSIM_API UClass* StaticClass<UAudioMotorSimComponent>()
	{
		return UAudioMotorSimComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMotorSimComponent);
	UAudioMotorSimComponent::~UAudioMotorSimComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMotorSim, UAudioMotorSim::StaticClass, TEXT("UAudioMotorSim"), &Z_Registration_Info_UClass_UAudioMotorSim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMotorSim), 4255479310U) },
		{ Z_Construct_UClass_UAudioMotorSimComponent, UAudioMotorSimComponent::StaticClass, TEXT("UAudioMotorSimComponent"), &Z_Registration_Info_UClass_UAudioMotorSimComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMotorSimComponent), 4265536592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_2187939247(TEXT("/Script/AudioMotorSim"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_IAudioMotorSim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
