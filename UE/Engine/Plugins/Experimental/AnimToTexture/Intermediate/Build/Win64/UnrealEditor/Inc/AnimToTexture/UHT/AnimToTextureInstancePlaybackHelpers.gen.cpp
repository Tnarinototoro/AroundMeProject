// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimToTextureInstancePlaybackHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimToTextureInstancePlaybackHelpers() {}
// Cross Module References
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary();
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_NoRegister();
	ANIMTOTEXTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData();
	ANIMTOTEXTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureFrameData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimToTexture();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimToTextureFrameData;
class UScriptStruct* FAnimToTextureFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimToTextureFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimToTextureFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimToTextureFrameData, (UObject*)Z_Construct_UPackage__Script_AnimToTexture(), TEXT("AnimToTextureFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimToTextureFrameData.OuterSingleton;
}
template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<FAnimToTextureFrameData>()
{
	return FAnimToTextureFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimToTextureFrameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewProp_Frame_MetaData[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* Frame to be played\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Frame to be played" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimToTextureFrameData, Frame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewProp_Frame_MetaData), Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewProp_Frame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewProp_PrevFrame_MetaData[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* Previous Frame (this is needeed for motion blur)\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Previous Frame (this is needeed for motion blur)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewProp_PrevFrame = { "PrevFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimToTextureFrameData, PrevFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewProp_PrevFrame_MetaData), Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewProp_PrevFrame_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewProp_PrevFrame,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
		nullptr,
		&NewStructOps,
		"AnimToTextureFrameData",
		Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::PropPointers),
		sizeof(FAnimToTextureFrameData),
		alignof(FAnimToTextureFrameData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimToTextureFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimToTextureFrameData.InnerSingleton, Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimToTextureFrameData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimToTextureAutoPlayData;
class UScriptStruct* FAnimToTextureAutoPlayData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimToTextureAutoPlayData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimToTextureAutoPlayData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData, (UObject*)Z_Construct_UPackage__Script_AnimToTexture(), TEXT("AnimToTextureAutoPlayData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimToTextureAutoPlayData.OuterSingleton;
}
template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<FAnimToTextureAutoPlayData>()
{
	return FAnimToTextureAutoPlayData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimToTextureAutoPlayData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_TimeOffset_MetaData[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* Adds offset to time\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Adds offset to time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_TimeOffset = { "TimeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimToTextureAutoPlayData, TimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_TimeOffset_MetaData), Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_TimeOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* Rate for increasing and decreasing speed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Rate for increasing and decreasing speed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimToTextureAutoPlayData, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* Starting frame for animation. \n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Starting frame for animation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimToTextureAutoPlayData, StartFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_StartFrame_MetaData), Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_StartFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_EndFrame_MetaData[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* Last frame of animation\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Last frame of animation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimToTextureAutoPlayData, EndFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_EndFrame_MetaData), Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_EndFrame_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_TimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewProp_EndFrame,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
		nullptr,
		&NewStructOps,
		"AnimToTextureAutoPlayData",
		Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::PropPointers),
		sizeof(FAnimToTextureAutoPlayData),
		alignof(FAnimToTextureAutoPlayData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimToTextureAutoPlayData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimToTextureAutoPlayData.InnerSingleton, Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimToTextureAutoPlayData.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execGetFrameDataFromDataAsset)
	{
		P_GET_OBJECT(UAnimToTextureDataAsset,Z_Param_DataAsset);
		P_GET_PROPERTY(FIntProperty,Z_Param_AnimationIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_STRUCT_REF(FAnimToTextureFrameData,Z_Param_Out_AutoPlayData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::GetFrameDataFromDataAsset(Z_Param_DataAsset,Z_Param_AnimationIndex,Z_Param_Time,Z_Param_Out_AutoPlayData,Z_Param_TimeOffset,Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execGetFrame)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartFrame);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndFrame);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::GetFrame(Z_Param_Time,Z_Param_StartFrame,Z_Param_EndFrame,Z_Param_TimeOffset,Z_Param_PlayRate,Z_Param_SampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execGetAutoPlayDataFromDataAsset)
	{
		P_GET_OBJECT(UAnimToTextureDataAsset,Z_Param_DataAsset);
		P_GET_PROPERTY(FIntProperty,Z_Param_AnimationIndex);
		P_GET_STRUCT_REF(FAnimToTextureAutoPlayData,Z_Param_Out_AutoPlayData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::GetAutoPlayDataFromDataAsset(Z_Param_DataAsset,Z_Param_AnimationIndex,Z_Param_Out_AutoPlayData,Z_Param_TimeOffset,Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execUpdateInstanceFrameData)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_InstancedMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT_REF(FAnimToTextureFrameData,Z_Param_Out_FrameData);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::UpdateInstanceFrameData(Z_Param_InstancedMeshComponent,Z_Param_InstanceIndex,Z_Param_Out_FrameData,Z_Param_bMarkRenderStateDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execUpdateInstanceAutoPlayData)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_InstancedMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT_REF(FAnimToTextureAutoPlayData,Z_Param_Out_AutoPlayData);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::UpdateInstanceAutoPlayData(Z_Param_InstancedMeshComponent,Z_Param_InstanceIndex,Z_Param_Out_AutoPlayData,Z_Param_bMarkRenderStateDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execBatchUpdateInstancesFrameData)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_InstancedMeshComponent);
		P_GET_TARRAY_REF(FAnimToTextureFrameData,Z_Param_Out_FrameData);
		P_GET_TARRAY_REF(FMatrix,Z_Param_Out_Transforms);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::BatchUpdateInstancesFrameData(Z_Param_InstancedMeshComponent,Z_Param_Out_FrameData,Z_Param_Out_Transforms,Z_Param_bMarkRenderStateDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execBatchUpdateInstancesAutoPlayData)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_InstancedMeshComponent);
		P_GET_TARRAY_REF(FAnimToTextureAutoPlayData,Z_Param_Out_AutoPlayData);
		P_GET_TARRAY_REF(FMatrix,Z_Param_Out_Transforms);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::BatchUpdateInstancesAutoPlayData(Z_Param_InstancedMeshComponent,Z_Param_Out_AutoPlayData,Z_Param_Out_Transforms,Z_Param_bMarkRenderStateDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execSetupInstancedMeshComponent)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_InstancedMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumInstances);
		P_GET_UBOOL(Z_Param_bAutoPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::SetupInstancedMeshComponent(Z_Param_InstancedMeshComponent,Z_Param_NumInstances,Z_Param_bAutoPlay);
		P_NATIVE_END;
	}
	void UAnimToTextureInstancePlaybackLibrary::StaticRegisterNativesUAnimToTextureInstancePlaybackLibrary()
	{
		UClass* Class = UAnimToTextureInstancePlaybackLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BatchUpdateInstancesAutoPlayData", &UAnimToTextureInstancePlaybackLibrary::execBatchUpdateInstancesAutoPlayData },
			{ "BatchUpdateInstancesFrameData", &UAnimToTextureInstancePlaybackLibrary::execBatchUpdateInstancesFrameData },
			{ "GetAutoPlayDataFromDataAsset", &UAnimToTextureInstancePlaybackLibrary::execGetAutoPlayDataFromDataAsset },
			{ "GetFrame", &UAnimToTextureInstancePlaybackLibrary::execGetFrame },
			{ "GetFrameDataFromDataAsset", &UAnimToTextureInstancePlaybackLibrary::execGetFrameDataFromDataAsset },
			{ "SetupInstancedMeshComponent", &UAnimToTextureInstancePlaybackLibrary::execSetupInstancedMeshComponent },
			{ "UpdateInstanceAutoPlayData", &UAnimToTextureInstancePlaybackLibrary::execUpdateInstanceAutoPlayData },
			{ "UpdateInstanceFrameData", &UAnimToTextureInstancePlaybackLibrary::execUpdateInstanceFrameData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesAutoPlayData_Parms
		{
			UInstancedStaticMeshComponent* InstancedMeshComponent;
			TArray<FAnimToTextureAutoPlayData> AutoPlayData;
			TArray<FMatrix> Transforms;
			bool bMarkRenderStateDirty;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoPlayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoPlayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AutoPlayData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_InstancedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_InstancedMeshComponent = { "InstancedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesAutoPlayData_Parms, InstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_InstancedMeshComponent_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_InstancedMeshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_AutoPlayData_Inner = { "AutoPlayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData, METADATA_PARAMS(0, nullptr) }; // 4118202468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_AutoPlayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_AutoPlayData = { "AutoPlayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesAutoPlayData_Parms, AutoPlayData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_AutoPlayData_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_AutoPlayData_MetaData) }; // 4118202468
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_Transforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesAutoPlayData_Parms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_Transforms_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_Transforms_MetaData) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesAutoPlayData_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesAutoPlayData_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesAutoPlayData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesAutoPlayData_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_InstancedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_AutoPlayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_AutoPlayData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* Updates all instances with the given Transforms and AutoPlayData\n\x09* @param bMarkRenderStateDirty: if true, the change should be visible immediatelly. If you are updating many instances you should only set this to true for the last instance\n\x09*/" },
		{ "CPP_Default_bMarkRenderStateDirty", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Updates all instances with the given Transforms and AutoPlayData\n@param bMarkRenderStateDirty: if true, the change should be visible immediatelly. If you are updating many instances you should only set this to true for the last instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "BatchUpdateInstancesAutoPlayData", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesAutoPlayData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesAutoPlayData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesFrameData_Parms
		{
			UInstancedStaticMeshComponent* InstancedMeshComponent;
			TArray<FAnimToTextureFrameData> FrameData;
			TArray<FMatrix> Transforms;
			bool bMarkRenderStateDirty;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_InstancedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_InstancedMeshComponent = { "InstancedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesFrameData_Parms, InstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_InstancedMeshComponent_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_InstancedMeshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_FrameData_Inner = { "FrameData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimToTextureFrameData, METADATA_PARAMS(0, nullptr) }; // 271575382
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_FrameData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesFrameData_Parms, FrameData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_FrameData_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_FrameData_MetaData) }; // 271575382
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_Transforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesFrameData_Parms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_Transforms_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_Transforms_MetaData) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesFrameData_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesFrameData_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesFrameData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesFrameData_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_InstancedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_FrameData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_FrameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* Updates all instances with the given Transforms and FrameData\n\x09* @param bMarkRenderStateDirty: if true, the change should be visible immediatelly. If you are updating many instances you should only set this to true for the last instance\n\x09*/" },
		{ "CPP_Default_bMarkRenderStateDirty", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Updates all instances with the given Transforms and FrameData\n@param bMarkRenderStateDirty: if true, the change should be visible immediatelly. If you are updating many instances you should only set this to true for the last instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "BatchUpdateInstancesFrameData", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesFrameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancesFrameData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventGetAutoPlayDataFromDataAsset_Parms
		{
			const UAnimToTextureDataAsset* DataAsset;
			int32 AnimationIndex;
			FAnimToTextureAutoPlayData AutoPlayData;
			float TimeOffset;
			float PlayRate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimationIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoPlayData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_DataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetAutoPlayDataFromDataAsset_Parms, DataAsset), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_DataAsset_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_DataAsset_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_AnimationIndex = { "AnimationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetAutoPlayDataFromDataAsset_Parms, AnimationIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_AutoPlayData = { "AutoPlayData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetAutoPlayDataFromDataAsset_Parms, AutoPlayData), Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData, METADATA_PARAMS(0, nullptr) }; // 4118202468
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_TimeOffset = { "TimeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetAutoPlayDataFromDataAsset_Parms, TimeOffset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetAutoPlayDataFromDataAsset_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventGetAutoPlayDataFromDataAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventGetAutoPlayDataFromDataAsset_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_AnimationIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_AutoPlayData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_TimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* Returns an AutoPlayData with the Start and End Frame for the given AnimationIndex.\n\x09* If AnimationIndex is out of range, false will be returned.\n\x09*/" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_TimeOffset", "0.000000" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Returns an AutoPlayData with the Start and End Frame for the given AnimationIndex.\nIf AnimationIndex is out of range, false will be returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "GetAutoPlayDataFromDataAsset", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::AnimToTextureInstancePlaybackLibrary_eventGetAutoPlayDataFromDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::AnimToTextureInstancePlaybackLibrary_eventGetAutoPlayDataFromDataAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventGetFrame_Parms
		{
			float Time;
			float StartFrame;
			float EndFrame;
			float TimeOffset;
			float PlayRate;
			float SampleRate;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartFrame;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndFrame;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrame_Parms, Time), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrame_Parms, StartFrame), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrame_Parms, EndFrame), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_TimeOffset = { "TimeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrame_Parms, TimeOffset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrame_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrame_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_EndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_TimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_SampleRate", "30.000000" },
		{ "CPP_Default_TimeOffset", "0.000000" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "GetFrame", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::AnimToTextureInstancePlaybackLibrary_eventGetFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::AnimToTextureInstancePlaybackLibrary_eventGetFrame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventGetFrameDataFromDataAsset_Parms
		{
			const UAnimToTextureDataAsset* DataAsset;
			int32 AnimationIndex;
			float Time;
			FAnimToTextureFrameData AutoPlayData;
			float TimeOffset;
			float PlayRate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimationIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoPlayData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_DataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrameDataFromDataAsset_Parms, DataAsset), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_DataAsset_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_DataAsset_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_AnimationIndex = { "AnimationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrameDataFromDataAsset_Parms, AnimationIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrameDataFromDataAsset_Parms, Time), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_AutoPlayData = { "AutoPlayData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrameDataFromDataAsset_Parms, AutoPlayData), Z_Construct_UScriptStruct_FAnimToTextureFrameData, METADATA_PARAMS(0, nullptr) }; // 271575382
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_TimeOffset = { "TimeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrameDataFromDataAsset_Parms, TimeOffset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetFrameDataFromDataAsset_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventGetFrameDataFromDataAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventGetFrameDataFromDataAsset_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_AnimationIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_AutoPlayData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_TimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_TimeOffset", "0.000000" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "GetFrameDataFromDataAsset", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::AnimToTextureInstancePlaybackLibrary_eventGetFrameDataFromDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::AnimToTextureInstancePlaybackLibrary_eventGetFrameDataFromDataAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms
		{
			UInstancedStaticMeshComponent* InstancedMeshComponent;
			int32 NumInstances;
			bool bAutoPlay;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMeshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstances;
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent = { "InstancedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms, InstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms, NumInstances), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_NumInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* Adds Instances and allocates the necessary CustomData.\n\x09* @param bAutoPlay: if true, it will allocate the required CustomData for working with AutoPlayData. If false, FrameData will be allocated instead./\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Adds Instances and allocates the necessary CustomData.\n@param bAutoPlay: if true, it will allocate the required CustomData for working with AutoPlayData. If false, FrameData will be allocated instead./" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "SetupInstancedMeshComponent", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceAutoPlayData_Parms
		{
			UInstancedStaticMeshComponent* InstancedMeshComponent;
			int32 InstanceIndex;
			FAnimToTextureAutoPlayData AutoPlayData;
			bool bMarkRenderStateDirty;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMeshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoPlayData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutoPlayData;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_InstancedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_InstancedMeshComponent = { "InstancedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceAutoPlayData_Parms, InstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_InstancedMeshComponent_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_InstancedMeshComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceAutoPlayData_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_AutoPlayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_AutoPlayData = { "AutoPlayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceAutoPlayData_Parms, AutoPlayData), Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_AutoPlayData_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_AutoPlayData_MetaData) }; // 4118202468
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceAutoPlayData_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceAutoPlayData_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceAutoPlayData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceAutoPlayData_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_InstancedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_AutoPlayData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* Updates a single instance with given AutoPlayData\n\x09* @param bMarkRenderStateDirty: if true, the change should be visible immediatelly. If you are updating many instances you should only set this to true for the last instance\n\x09*/" },
		{ "CPP_Default_bMarkRenderStateDirty", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Updates a single instance with given AutoPlayData\n@param bMarkRenderStateDirty: if true, the change should be visible immediatelly. If you are updating many instances you should only set this to true for the last instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "UpdateInstanceAutoPlayData", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceAutoPlayData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceAutoPlayData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceFrameData_Parms
		{
			UInstancedStaticMeshComponent* InstancedMeshComponent;
			int32 InstanceIndex;
			FAnimToTextureFrameData FrameData;
			bool bMarkRenderStateDirty;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMeshComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_InstancedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_InstancedMeshComponent = { "InstancedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceFrameData_Parms, InstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_InstancedMeshComponent_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_InstancedMeshComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceFrameData_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_FrameData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceFrameData_Parms, FrameData), Z_Construct_UScriptStruct_FAnimToTextureFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_FrameData_MetaData), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_FrameData_MetaData) }; // 271575382
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceFrameData_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceFrameData_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceFrameData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceFrameData_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_InstancedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_FrameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "Comment", "/**\n\x09* * Updates a single instance with given FrameData\n\x09* @param bMarkRenderStateDirty: if true, the change should be visible immediatelly. If you are updating many instances you should only set this to true for the last instance\n\x09*/" },
		{ "CPP_Default_bMarkRenderStateDirty", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "* Updates a single instance with given FrameData\n@param bMarkRenderStateDirty: if true, the change should be visible immediatelly. If you are updating many instances you should only set this to true for the last instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "UpdateInstanceFrameData", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceFrameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceFrameData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimToTextureInstancePlaybackLibrary);
	UClass* Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_NoRegister()
	{
		return UAnimToTextureInstancePlaybackLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesAutoPlayData, "BatchUpdateInstancesAutoPlayData" }, // 1856216949
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancesFrameData, "BatchUpdateInstancesFrameData" }, // 2734103509
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetAutoPlayDataFromDataAsset, "GetAutoPlayDataFromDataAsset" }, // 3596983540
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrame, "GetFrame" }, // 4273316980
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetFrameDataFromDataAsset, "GetFrameDataFromDataAsset" }, // 11998678
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent, "SetupInstancedMeshComponent" }, // 3018052441
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceAutoPlayData, "UpdateInstanceAutoPlayData" }, // 3508485017
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceFrameData, "UpdateInstanceFrameData" }, // 1234884524
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimToTextureInstancePlaybackHelpers.h" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimToTextureInstancePlaybackLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::ClassParams = {
		&UAnimToTextureInstancePlaybackLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimToTextureInstancePlaybackLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimToTextureInstancePlaybackLibrary.OuterSingleton, Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimToTextureInstancePlaybackLibrary.OuterSingleton;
	}
	template<> ANIMTOTEXTURE_API UClass* StaticClass<UAnimToTextureInstancePlaybackLibrary>()
	{
		return UAnimToTextureInstancePlaybackLibrary::StaticClass();
	}
	UAnimToTextureInstancePlaybackLibrary::UAnimToTextureInstancePlaybackLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimToTextureInstancePlaybackLibrary);
	UAnimToTextureInstancePlaybackLibrary::~UAnimToTextureInstancePlaybackLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ScriptStructInfo[] = {
		{ FAnimToTextureFrameData::StaticStruct, Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics::NewStructOps, TEXT("AnimToTextureFrameData"), &Z_Registration_Info_UScriptStruct_AnimToTextureFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimToTextureFrameData), 271575382U) },
		{ FAnimToTextureAutoPlayData::StaticStruct, Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics::NewStructOps, TEXT("AnimToTextureAutoPlayData"), &Z_Registration_Info_UScriptStruct_AnimToTextureAutoPlayData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimToTextureAutoPlayData), 4118202468U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, UAnimToTextureInstancePlaybackLibrary::StaticClass, TEXT("UAnimToTextureInstancePlaybackLibrary"), &Z_Registration_Info_UClass_UAnimToTextureInstancePlaybackLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimToTextureInstancePlaybackLibrary), 3588258403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_4290722900(TEXT("/Script/AnimToTexture"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
