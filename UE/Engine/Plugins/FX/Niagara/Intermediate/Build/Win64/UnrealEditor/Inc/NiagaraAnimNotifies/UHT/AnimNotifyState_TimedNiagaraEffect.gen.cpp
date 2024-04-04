// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_TimedNiagaraEffect() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect();
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_NoRegister();
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced();
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_NoRegister();
	NIAGARAANIMNOTIFIES_API UScriptStruct* Z_Construct_UScriptStruct_FCurveParameterPair();
	UPackage* Z_Construct_UPackage__Script_NiagaraAnimNotifies();
// End Cross Module References
	DEFINE_FUNCTION(UAnimNotifyState_TimedNiagaraEffect::execGetSpawnedEffect)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFXSystemComponent**)Z_Param__Result=P_THIS->GetSpawnedEffect(Z_Param_MeshComp);
		P_NATIVE_END;
	}
	void UAnimNotifyState_TimedNiagaraEffect::StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffect()
	{
		UClass* Class = UAnimNotifyState_TimedNiagaraEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnedEffect", &UAnimNotifyState_TimedNiagaraEffect::execGetSpawnedEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics
	{
		struct AnimNotifyState_TimedNiagaraEffect_eventGetSpawnedEffect_Parms
		{
			UMeshComponent* MeshComp;
			UFXSystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_TimedNiagaraEffect_eventGetSpawnedEffect_Parms, MeshComp), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_MeshComp_MetaData), Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_MeshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_TimedNiagaraEffect_eventGetSpawnedEffect_Parms, ReturnValue), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Return FXSystemComponent created from SpawnEffect\n" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Return FXSystemComponent created from SpawnEffect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect, nullptr, "GetSpawnedEffect", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::AnimNotifyState_TimedNiagaraEffect_eventGetSpawnedEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::AnimNotifyState_TimedNiagaraEffect_eventGetSpawnedEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_TimedNiagaraEffect);
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_NoRegister()
	{
		return UAnimNotifyState_TimedNiagaraEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Template;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyAtEnd_MetaData[];
#endif
		static void NewProp_bDestroyAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyAtEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraAnimNotifies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect, "GetSpawnedEffect" }, // 853363439
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Timed Niagara Effect Notify\n// Allows a looping Niagara effect to be played in an animation that will activate\n// at the beginning of the notify and deactivate at the end.\n" },
		{ "DisplayName", "Timed Niagara Effect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState_TimedNiagaraEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Timed Niagara Effect Notify\nAllows a looping Niagara effect to be played in an animation that will activate\nat the beginning of the notify and deactivate at the end." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "DisplayName", "Niagara System" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "The niagara system to spawn for the notify state" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, Template), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template_MetaData), Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName_MetaData[] = {
		{ "AnimNotifyBoneName", "true" },
		{ "Category", "NiagaraSystem" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "The socket or bone to attach the system to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName_MetaData), Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Offset from the socket or bone to place the Niagara system" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset_MetaData), Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Rotation offset from the socket or bone for the Niagara system" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset_MetaData), Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_MetaData[] = {
		{ "Category", "NiagaraSystem" },
		{ "DisplayName", "Destroy Immediately" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Whether the Niagara system should be immediately destroyed at the end of the notify state or be allowed to finish" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_SetBit(void* Obj)
	{
		((UAnimNotifyState_TimedNiagaraEffect*)Obj)->bDestroyAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd = { "bDestroyAtEnd", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_TimedNiagaraEffect), &Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_MetaData), Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_Template,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::NewProp_bDestroyAtEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_TimedNiagaraEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::ClassParams = {
		&UAnimNotifyState_TimedNiagaraEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::PropPointers),
		0,
		0x000930A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect.OuterSingleton;
	}
	template<> NIAGARAANIMNOTIFIES_API UClass* StaticClass<UAnimNotifyState_TimedNiagaraEffect>()
	{
		return UAnimNotifyState_TimedNiagaraEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_TimedNiagaraEffect);
	UAnimNotifyState_TimedNiagaraEffect::~UAnimNotifyState_TimedNiagaraEffect() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveParameterPair;
class UScriptStruct* FCurveParameterPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveParameterPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveParameterPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveParameterPair, (UObject*)Z_Construct_UPackage__Script_NiagaraAnimNotifies(), TEXT("CurveParameterPair"));
	}
	return Z_Registration_Info_UScriptStruct_CurveParameterPair.OuterSingleton;
}
template<> NIAGARAANIMNOTIFIES_API UScriptStruct* StaticStruct<FCurveParameterPair>()
{
	return FCurveParameterPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveParameterPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AnimCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserVariableName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveParameterPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveParameterPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewProp_AnimCurveName_MetaData[] = {
		{ "Category", "AnimCurves" },
		{ "DisplayName", "Anim Curve Name" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Name of the curve in this montage." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewProp_AnimCurveName = { "AnimCurveName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveParameterPair, AnimCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewProp_AnimCurveName_MetaData), Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewProp_AnimCurveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewProp_UserVariableName_MetaData[] = {
		{ "Category", "AnimCurves" },
		{ "DisplayName", "Niagara User Float" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Name of the Niagara user float variable." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewProp_UserVariableName = { "UserVariableName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveParameterPair, UserVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewProp_UserVariableName_MetaData), Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewProp_UserVariableName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveParameterPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewProp_AnimCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewProp_UserVariableName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveParameterPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraAnimNotifies,
		nullptr,
		&NewStructOps,
		"CurveParameterPair",
		Z_Construct_UScriptStruct_FCurveParameterPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveParameterPair_Statics::PropPointers),
		sizeof(FCurveParameterPair),
		alignof(FCurveParameterPair),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveParameterPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurveParameterPair_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveParameterPair_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCurveParameterPair()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveParameterPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveParameterPair.InnerSingleton, Z_Construct_UScriptStruct_FCurveParameterPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveParameterPair.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimNotifyState_TimedNiagaraEffectAdvanced::execGetNotifyProgress)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNotifyProgress(Z_Param_MeshComp);
		P_NATIVE_END;
	}
	void UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticRegisterNativesUAnimNotifyState_TimedNiagaraEffectAdvanced()
	{
		UClass* Class = UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNotifyProgress", &UAnimNotifyState_TimedNiagaraEffectAdvanced::execGetNotifyProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics
	{
		struct AnimNotifyState_TimedNiagaraEffectAdvanced_eventGetNotifyProgress_Parms
		{
			UMeshComponent* MeshComp;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_TimedNiagaraEffectAdvanced_eventGetNotifyProgress_Parms, MeshComp), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_MeshComp_MetaData), Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_MeshComp_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_TimedNiagaraEffectAdvanced_eventGetNotifyProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Returns a 0 to 1 value for the progress of this component along the notify.\n" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Returns a 0 to 1 value for the progress of this component along the notify." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced, nullptr, "GetNotifyProgress", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::AnimNotifyState_TimedNiagaraEffectAdvanced_eventGetNotifyProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::AnimNotifyState_TimedNiagaraEffectAdvanced_eventGetNotifyProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_TimedNiagaraEffectAdvanced);
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_NoRegister()
	{
		return UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNormalizedNotifyProgress_MetaData[];
#endif
		static void NewProp_bEnableNormalizedNotifyProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNormalizedNotifyProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyProgressUserParameter_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyProgressUserParameter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraAnimNotifies,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress, "GetNotifyProgress" }, // 3496026065
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nSame as Timed Niagara Effect but also provides some more advanced abilities at an additional cost. \n*/" },
		{ "DisplayName", "Advanced Timed Niagara Effect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState_TimedNiagaraEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Same as Timed Niagara Effect but also provides some more advanced abilities at an additional cost." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_bEnableNormalizedNotifyProgress_MetaData[] = {
		{ "Category", "NotifyProgress" },
		{ "DisplayName", "Enable Normalized Notify Progress" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "This send a 0-1 value of the normalized progress to the FX Component to the float User Parameter." },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_bEnableNormalizedNotifyProgress_SetBit(void* Obj)
	{
		((UAnimNotifyState_TimedNiagaraEffectAdvanced*)Obj)->bEnableNormalizedNotifyProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_bEnableNormalizedNotifyProgress = { "bEnableNormalizedNotifyProgress", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_TimedNiagaraEffectAdvanced), &Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_bEnableNormalizedNotifyProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_bEnableNormalizedNotifyProgress_MetaData), Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_bEnableNormalizedNotifyProgress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_NotifyProgressUserParameter_MetaData[] = {
		{ "Category", "NotifyProgress" },
		{ "DisplayName", "User Parameter" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "The name of your niagara user variable you would like to send the normalized notify progress to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_NotifyProgressUserParameter = { "NotifyProgressUserParameter", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffectAdvanced, NotifyProgressUserParameter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_NotifyProgressUserParameter_MetaData), Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_NotifyProgressUserParameter_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_AnimCurves_Inner = { "AnimCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCurveParameterPair, METADATA_PARAMS(0, nullptr) }; // 460285806
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_AnimCurves_MetaData[] = {
		{ "Category", "AnimCurves" },
		{ "DisplayName", "Anim Curve Parameters" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_TimedNiagaraEffect.h" },
		{ "ToolTip", "Array of fnames to map Anim Curve names to Niagara Parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_AnimCurves = { "AnimCurves", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_TimedNiagaraEffectAdvanced, AnimCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_AnimCurves_MetaData), Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_AnimCurves_MetaData) }; // 460285806
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_bEnableNormalizedNotifyProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_NotifyProgressUserParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_AnimCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::NewProp_AnimCurves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_TimedNiagaraEffectAdvanced>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::ClassParams = {
		&UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::PropPointers),
		0,
		0x000930A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced.OuterSingleton;
	}
	template<> NIAGARAANIMNOTIFIES_API UClass* StaticClass<UAnimNotifyState_TimedNiagaraEffectAdvanced>()
	{
		return UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_TimedNiagaraEffectAdvanced);
	UAnimNotifyState_TimedNiagaraEffectAdvanced::~UAnimNotifyState_TimedNiagaraEffectAdvanced() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h_Statics::ScriptStructInfo[] = {
		{ FCurveParameterPair::StaticStruct, Z_Construct_UScriptStruct_FCurveParameterPair_Statics::NewStructOps, TEXT("CurveParameterPair"), &Z_Registration_Info_UScriptStruct_CurveParameterPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveParameterPair), 460285806U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffect, UAnimNotifyState_TimedNiagaraEffect::StaticClass, TEXT("UAnimNotifyState_TimedNiagaraEffect"), &Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_TimedNiagaraEffect), 273500015U) },
		{ Z_Construct_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced, UAnimNotifyState_TimedNiagaraEffectAdvanced::StaticClass, TEXT("UAnimNotifyState_TimedNiagaraEffectAdvanced"), &Z_Registration_Info_UClass_UAnimNotifyState_TimedNiagaraEffectAdvanced, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_TimedNiagaraEffectAdvanced), 1108366003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h_201560373(TEXT("/Script/NiagaraAnimNotifies"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotifyState_TimedNiagaraEffect_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
