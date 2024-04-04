// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSceneCapture2D() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureSource();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode;
	static UEnum* ENDISceneCapture2DSourceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISceneCapture2DSourceMode"));
		}
		return Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISceneCapture2DSourceMode>()
	{
		return ENDISceneCapture2DSourceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::Enumerators[] = {
		{ "ENDISceneCapture2DSourceMode::UserParameterThenAttachParent", (int64)ENDISceneCapture2DSourceMode::UserParameterThenAttachParent },
		{ "ENDISceneCapture2DSourceMode::UserParameterOnly", (int64)ENDISceneCapture2DSourceMode::UserParameterOnly },
		{ "ENDISceneCapture2DSourceMode::AttachParentOnly", (int64)ENDISceneCapture2DSourceMode::AttachParentOnly },
		{ "ENDISceneCapture2DSourceMode::Managed", (int64)ENDISceneCapture2DSourceMode::Managed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::Enum_MetaDataParams[] = {
		{ "AttachParentOnly.Comment", "/* Only look at the attach parent to find the scene capture component. */" },
		{ "AttachParentOnly.Name", "ENDISceneCapture2DSourceMode::AttachParentOnly" },
		{ "AttachParentOnly.ToolTip", "Only look at the attach parent to find the scene capture component." },
		{ "Managed.Comment", "/* Managed mode, we will not search for any and instead create one internally. */" },
		{ "Managed.Name", "ENDISceneCapture2DSourceMode::Managed" },
		{ "Managed.ToolTip", "Managed mode, we will not search for any and instead create one internally." },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "UserParameterOnly.Comment", "/* Only check the user parameter to find the scene capture component. */" },
		{ "UserParameterOnly.Name", "ENDISceneCapture2DSourceMode::UserParameterOnly" },
		{ "UserParameterOnly.ToolTip", "Only check the user parameter to find the scene capture component." },
		{ "UserParameterThenAttachParent.Comment", "/* Check the user parameter then the attach parent to find the scene capture component. */" },
		{ "UserParameterThenAttachParent.Name", "ENDISceneCapture2DSourceMode::UserParameterThenAttachParent" },
		{ "UserParameterThenAttachParent.ToolTip", "Check the user parameter then the attach parent to find the scene capture component." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDISceneCapture2DSourceMode",
		"ENDISceneCapture2DSourceMode",
		Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode()
	{
		if (!Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode;
	static UEnum* ENDISceneCapture2DOffsetMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISceneCapture2DOffsetMode"));
		}
		return Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISceneCapture2DOffsetMode>()
	{
		return ENDISceneCapture2DOffsetMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::Enumerators[] = {
		{ "ENDISceneCapture2DOffsetMode::Disabled", (int64)ENDISceneCapture2DOffsetMode::Disabled },
		{ "ENDISceneCapture2DOffsetMode::RelativeLocal", (int64)ENDISceneCapture2DOffsetMode::RelativeLocal },
		{ "ENDISceneCapture2DOffsetMode::RelativeWorld", (int64)ENDISceneCapture2DOffsetMode::RelativeWorld },
		{ "ENDISceneCapture2DOffsetMode::AbsoluteWorld", (int64)ENDISceneCapture2DOffsetMode::AbsoluteWorld },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::Enum_MetaDataParams[] = {
		{ "AbsoluteWorld.Comment", "/** The offset is applied directly, i.e. not added to the existing valud */" },
		{ "AbsoluteWorld.Name", "ENDISceneCapture2DOffsetMode::AbsoluteWorld" },
		{ "AbsoluteWorld.ToolTip", "The offset is applied directly, i.e. not added to the existing valud" },
		{ "Disabled.Comment", "/** The offset is disabled and will not be applied. */" },
		{ "Disabled.Name", "ENDISceneCapture2DOffsetMode::Disabled" },
		{ "Disabled.ToolTip", "The offset is disabled and will not be applied." },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "RelativeLocal.Comment", "/** The offset is in the component local space. */" },
		{ "RelativeLocal.Name", "ENDISceneCapture2DOffsetMode::RelativeLocal" },
		{ "RelativeLocal.ToolTip", "The offset is in the component local space." },
		{ "RelativeWorld.Comment", "/** The offset is in world space, i.e. added to the exising value directly. */" },
		{ "RelativeWorld.Name", "ENDISceneCapture2DOffsetMode::RelativeWorld" },
		{ "RelativeWorld.ToolTip", "The offset is in world space, i.e. added to the exising value directly." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDISceneCapture2DOffsetMode",
		"ENDISceneCapture2DOffsetMode",
		Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode()
	{
		if (!Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceSceneCapture2D::execSetSceneCapture2DManagedShowOnlyActors)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_TARRAY(AActor*,Z_Param_ShowOnlyActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceSceneCapture2D::SetSceneCapture2DManagedShowOnlyActors(Z_Param_NiagaraSystem,Z_Param_ParameterName,Z_Param_ShowOnlyActors);
		P_NATIVE_END;
	}
	void UNiagaraDataInterfaceSceneCapture2D::StaticRegisterNativesUNiagaraDataInterfaceSceneCapture2D()
	{
		UClass* Class = UNiagaraDataInterfaceSceneCapture2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSceneCapture2DManagedShowOnlyActors", &UNiagaraDataInterfaceSceneCapture2D::execSetSceneCapture2DManagedShowOnlyActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics
	{
		struct NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName ParameterName;
			TArray<AActor*> ShowOnlyActors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowOnlyActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_NiagaraSystem_MetaData), Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_NiagaraSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ParameterName_MetaData), Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ParameterName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ShowOnlyActors_Inner = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ShowOnlyActors = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms, ShowOnlyActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ShowOnlyActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NewProp_ShowOnlyActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Allows you to set the show only actors when Niagara manages the component.  If Niagara does not manage the component use the regular BP methods. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "Allows you to set the show only actors when Niagara manages the component.  If Niagara does not manage the component use the regular BP methods." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D, nullptr, "SetSceneCapture2DManagedShowOnlyActors", nullptr, nullptr, Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::NiagaraDataInterfaceSceneCapture2D_eventSetSceneCapture2DManagedShowOnlyActors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSceneCapture2D);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_NoRegister()
	{
		return UNiagaraDataInterfaceSceneCapture2D::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureUserParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneCaptureUserParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoMoveWithComponent_MetaData[];
#endif
		static void NewProp_bAutoMoveWithComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoMoveWithComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoMoveOffsetLocationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoMoveOffsetLocationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoMoveOffsetLocationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoMoveOffsetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoMoveOffsetLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoMoveOffsetRotationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoMoveOffsetRotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoMoveOffsetRotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoMoveOffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoMoveOffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedCaptureSource_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ManagedCaptureSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManagedTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedTextureFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ManagedTextureFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedProjectionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ManagedProjectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedFOVAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManagedFOVAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedOrthoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManagedOrthoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bManagedCaptureEveryFrame_MetaData[];
#endif
		static void NewProp_bManagedCaptureEveryFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManagedCaptureEveryFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bManagedCaptureOnMovement_MetaData[];
#endif
		static void NewProp_bManagedCaptureOnMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManagedCaptureOnMovement;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ManagedShowOnlyActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedShowOnlyActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ManagedShowOnlyActors;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ManagedCaptureComponents_ValueProp;
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_ManagedCaptureComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedCaptureComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ManagedCaptureComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceSceneCapture2D_SetSceneCapture2DManagedShowOnlyActors, "SetSceneCapture2DManagedShowOnlyActors" }, // 1474869219
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::Class_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Data Interface which can control or read from a scene capture component. */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Scene Capture 2D" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "Data Interface which can control or read from a scene capture component." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "How should we find the scene capture component to use?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, SourceMode), Z_Construct_UEnum_Niagara_ENDISceneCapture2DSourceMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SourceMode_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SourceMode_MetaData) }; // 1852935585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SceneCaptureUserParameter_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "EditCondition", "SourceMode != ENDISceneCapture2DSourceMode::AttachParentOnly && SourceMode != ENDISceneCapture2DSourceMode::Managed" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "When valid should point to either a Scene Capture 2D Component or a Scene Capture 2D Actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SceneCaptureUserParameter = { "SceneCaptureUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, SceneCaptureUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SceneCaptureUserParameter_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SceneCaptureUserParameter_MetaData) }; // 4146958699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bAutoMoveWithComponent_MetaData[] = {
		{ "Category", "SceneCaptureAutoMove" },
		{ "Comment", "/** When enabled the scene capture component will be automatically moved to the location of the NiagaraComponent with an optional offset. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "When enabled the scene capture component will be automatically moved to the location of the NiagaraComponent with an optional offset." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bAutoMoveWithComponent_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceSceneCapture2D*)Obj)->bAutoMoveWithComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bAutoMoveWithComponent = { "bAutoMoveWithComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSceneCapture2D), &Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bAutoMoveWithComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bAutoMoveWithComponent_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bAutoMoveWithComponent_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocationMode_MetaData[] = {
		{ "Category", "SceneCaptureAutoMove" },
		{ "Comment", "/** Should we apply the auto move offset in local or world space? */" },
		{ "EditCondition", "bAutoMoveWithComponent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "Should we apply the auto move offset in local or world space?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocationMode = { "AutoMoveOffsetLocationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetLocationMode), Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocationMode_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocationMode_MetaData) }; // 2019366291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocation_MetaData[] = {
		{ "Category", "SceneCaptureAutoMove" },
		{ "Comment", "/** Location offset when applying auto movement. */" },
		{ "EditCondition", "bAutoMoveWithComponent && AutoMoveOffsetLocationMode != ENDISceneCapture2DOffsetMode::Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "Location offset when applying auto movement." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocation = { "AutoMoveOffsetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocation_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocation_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotationMode_MetaData[] = {
		{ "Category", "SceneCaptureAutoMove" },
		{ "Comment", "/** How we should apply the rotation */" },
		{ "EditCondition", "bAutoMoveWithComponent" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "How we should apply the rotation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotationMode = { "AutoMoveOffsetRotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetRotationMode), Z_Construct_UEnum_Niagara_ENDISceneCapture2DOffsetMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotationMode_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotationMode_MetaData) }; // 2019366291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotation_MetaData[] = {
		{ "Category", "SceneCaptureAutoMove" },
		{ "Comment", "/** Rotation offset when applying auto movement. */" },
		{ "EditCondition", "bAutoMoveWithComponent && AutoMoveOffsetRotationMode != ENDISceneCapture2DOffsetMode::Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
		{ "ToolTip", "Rotation offset when applying auto movement." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotation = { "AutoMoveOffsetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotation_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureSource_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureSource = { "ManagedCaptureSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedCaptureSource), Z_Construct_UEnum_Engine_ESceneCaptureSource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureSource_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureSource_MetaData) }; // 4230782656
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureSize_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureSize = { "ManagedTextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureSize_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureFormat_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureFormat = { "ManagedTextureFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedTextureFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureFormat_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureFormat_MetaData) }; // 161131239
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedProjectionType_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedProjectionType = { "ManagedProjectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedProjectionType), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedProjectionType_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedProjectionType_MetaData) }; // 3509682973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedFOVAngle_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed && ManagedProjectionType == ECameraProjectionMode::Perspective" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedFOVAngle = { "ManagedFOVAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedFOVAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedFOVAngle_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedFOVAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedOrthoWidth_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed && ManagedProjectionType != ECameraProjectionMode::Perspective" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedOrthoWidth = { "ManagedOrthoWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedOrthoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedOrthoWidth_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedOrthoWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureEveryFrame_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureEveryFrame_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceSceneCapture2D*)Obj)->bManagedCaptureEveryFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureEveryFrame = { "bManagedCaptureEveryFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSceneCapture2D), &Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureEveryFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureEveryFrame_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureEveryFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureOnMovement_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureOnMovement_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceSceneCapture2D*)Obj)->bManagedCaptureOnMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureOnMovement = { "bManagedCaptureOnMovement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceSceneCapture2D), &Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureOnMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureOnMovement_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureOnMovement_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedShowOnlyActors_Inner = { "ManagedShowOnlyActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedShowOnlyActors_MetaData[] = {
		{ "Category", "SceneCaptureManaged" },
		{ "EditCondition", "SourceMode == ENDISceneCapture2DSourceMode::Managed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedShowOnlyActors = { "ManagedShowOnlyActors", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedShowOnlyActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedShowOnlyActors_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedShowOnlyActors_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents_ValueProp = { "ManagedCaptureComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents_Key_KeyProp = { "ManagedCaptureComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceSceneCapture2D.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents = { "ManagedCaptureComponents", nullptr, (EPropertyFlags)0x0024088000202008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceSceneCapture2D, ManagedCaptureComponents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_SceneCaptureUserParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bAutoMoveWithComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_AutoMoveOffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedTextureFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedProjectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedFOVAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedOrthoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureEveryFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_bManagedCaptureOnMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedShowOnlyActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedShowOnlyActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::NewProp_ManagedCaptureComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSceneCapture2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::ClassParams = {
		&UNiagaraDataInterfaceSceneCapture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSceneCapture2D>()
	{
		return UNiagaraDataInterfaceSceneCapture2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSceneCapture2D);
	UNiagaraDataInterfaceSceneCapture2D::~UNiagaraDataInterfaceSceneCapture2D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics::EnumInfo[] = {
		{ ENDISceneCapture2DSourceMode_StaticEnum, TEXT("ENDISceneCapture2DSourceMode"), &Z_Registration_Info_UEnum_ENDISceneCapture2DSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1852935585U) },
		{ ENDISceneCapture2DOffsetMode_StaticEnum, TEXT("ENDISceneCapture2DOffsetMode"), &Z_Registration_Info_UEnum_ENDISceneCapture2DOffsetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2019366291U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D, UNiagaraDataInterfaceSceneCapture2D::StaticClass, TEXT("UNiagaraDataInterfaceSceneCapture2D"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSceneCapture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSceneCapture2D), 2448632986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_938047417(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
