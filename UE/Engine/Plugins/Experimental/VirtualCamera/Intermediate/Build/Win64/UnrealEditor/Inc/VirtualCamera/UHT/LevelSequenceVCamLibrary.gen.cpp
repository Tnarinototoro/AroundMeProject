// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionLibraries/LevelSequenceVCamLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceVCamLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_ULevelSequenceVCamLibrary();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_ULevelSequenceVCamLibrary_NoRegister();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PilotableSequenceCameraInfo;
class UScriptStruct* FPilotableSequenceCameraInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PilotableSequenceCameraInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PilotableSequenceCameraInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("PilotableSequenceCameraInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PilotableSequenceCameraInfo.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FPilotableSequenceCameraInfo>()
{
	return FPilotableSequenceCameraInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/LevelSequenceVCamLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPilotableSequenceCameraInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Virtual Camera | Level Sequence" },
		{ "Comment", "/** A camera from a sequencer track */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/LevelSequenceVCamLibrary.h" },
		{ "ToolTip", "A camera from a sequencer track" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPilotableSequenceCameraInfo, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::NewProp_Camera_MetaData), Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::NewProp_Camera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::NewProp_Camera,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"PilotableSequenceCameraInfo",
		Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::PropPointers),
		sizeof(FPilotableSequenceCameraInfo),
		alignof(FPilotableSequenceCameraInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PilotableSequenceCameraInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PilotableSequenceCameraInfo.InnerSingleton, Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PilotableSequenceCameraInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(ULevelSequenceVCamLibrary::execFindPilotableCamerasInActiveLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPilotableSequenceCameraInfo>*)Z_Param__Result=ULevelSequenceVCamLibrary::FindPilotableCamerasInActiveLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequenceVCamLibrary::execHasAnyCameraCutsInLevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULevelSequenceVCamLibrary::HasAnyCameraCutsInLevelSequence(Z_Param_Sequence);
		P_NATIVE_END;
	}
	void ULevelSequenceVCamLibrary::StaticRegisterNativesULevelSequenceVCamLibrary()
	{
		UClass* Class = ULevelSequenceVCamLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindPilotableCamerasInActiveLevelSequence", &ULevelSequenceVCamLibrary::execFindPilotableCamerasInActiveLevelSequence },
			{ "HasAnyCameraCutsInLevelSequence", &ULevelSequenceVCamLibrary::execHasAnyCameraCutsInLevelSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics
	{
		struct LevelSequenceVCamLibrary_eventFindPilotableCamerasInActiveLevelSequence_Parms
		{
			TArray<FPilotableSequenceCameraInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo, METADATA_PARAMS(0, nullptr) }; // 822199950
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceVCamLibrary_eventFindPilotableCamerasInActiveLevelSequence_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 822199950
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera | Level Sequence" },
		{ "Comment", "/**\n\x09 * Gets all cameras currently spawned by the active level sequence.\n\x09 * Note: You must have called ULevelSequenceEditorBlueprintLibrary::OpenLevelSequence before calling this function.\n\x09 * Note: Only works in the editor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/LevelSequenceVCamLibrary.h" },
		{ "ToolTip", "Gets all cameras currently spawned by the active level sequence.\nNote: You must have called ULevelSequenceEditorBlueprintLibrary::OpenLevelSequence before calling this function.\nNote: Only works in the editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceVCamLibrary, nullptr, "FindPilotableCamerasInActiveLevelSequence", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::LevelSequenceVCamLibrary_eventFindPilotableCamerasInActiveLevelSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::LevelSequenceVCamLibrary_eventFindPilotableCamerasInActiveLevelSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics
	{
		struct LevelSequenceVCamLibrary_eventHasAnyCameraCutsInLevelSequence_Parms
		{
			ULevelSequence* Sequence;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSequenceVCamLibrary_eventHasAnyCameraCutsInLevelSequence_Parms, Sequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelSequenceVCamLibrary_eventHasAnyCameraCutsInLevelSequence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSequenceVCamLibrary_eventHasAnyCameraCutsInLevelSequence_Parms), &Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera | Level Sequence" },
		{ "Comment", "/**\n\x09 * Checks whether this sequence has any camera cuts set up.\n\x09 *\n\x09 * If yes, you should pilot the sequence using ULevelSequenceEditorBlueprintLibrary::SetLockCameraCutToViewport instead of directly piloting\n\x09 * by using FindLevelSequencePilotableCamerasInActiveLevelSequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/LevelSequenceVCamLibrary.h" },
		{ "ToolTip", "Checks whether this sequence has any camera cuts set up.\n\nIf yes, you should pilot the sequence using ULevelSequenceEditorBlueprintLibrary::SetLockCameraCutToViewport instead of directly piloting\nby using FindLevelSequencePilotableCamerasInActiveLevelSequence." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceVCamLibrary, nullptr, "HasAnyCameraCutsInLevelSequence", nullptr, nullptr, Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::LevelSequenceVCamLibrary_eventHasAnyCameraCutsInLevelSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::LevelSequenceVCamLibrary_eventHasAnyCameraCutsInLevelSequence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceVCamLibrary);
	UClass* Z_Construct_UClass_ULevelSequenceVCamLibrary_NoRegister()
	{
		return ULevelSequenceVCamLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceVCamLibrary_FindPilotableCamerasInActiveLevelSequence, "FindPilotableCamerasInActiveLevelSequence" }, // 4119994280
		{ &Z_Construct_UFunction_ULevelSequenceVCamLibrary_HasAnyCameraCutsInLevelSequence, "HasAnyCameraCutsInLevelSequence" }, // 2605732437
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility functions for Level Sequences to implement VCamHUD UI.\n */" },
		{ "IncludePath", "FunctionLibraries/LevelSequenceVCamLibrary.h" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/LevelSequenceVCamLibrary.h" },
		{ "ToolTip", "Utility functions for Level Sequences to implement VCamHUD UI." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceVCamLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics::ClassParams = {
		&ULevelSequenceVCamLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULevelSequenceVCamLibrary()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceVCamLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceVCamLibrary.OuterSingleton, Z_Construct_UClass_ULevelSequenceVCamLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceVCamLibrary.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<ULevelSequenceVCamLibrary>()
	{
		return ULevelSequenceVCamLibrary::StaticClass();
	}
	ULevelSequenceVCamLibrary::ULevelSequenceVCamLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceVCamLibrary);
	ULevelSequenceVCamLibrary::~ULevelSequenceVCamLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_Statics::ScriptStructInfo[] = {
		{ FPilotableSequenceCameraInfo::StaticStruct, Z_Construct_UScriptStruct_FPilotableSequenceCameraInfo_Statics::NewStructOps, TEXT("PilotableSequenceCameraInfo"), &Z_Registration_Info_UScriptStruct_PilotableSequenceCameraInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPilotableSequenceCameraInfo), 822199950U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceVCamLibrary, ULevelSequenceVCamLibrary::StaticClass, TEXT("ULevelSequenceVCamLibrary"), &Z_Registration_Info_UClass_ULevelSequenceVCamLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceVCamLibrary), 1001520169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_3626792414(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_LevelSequenceVCamLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
