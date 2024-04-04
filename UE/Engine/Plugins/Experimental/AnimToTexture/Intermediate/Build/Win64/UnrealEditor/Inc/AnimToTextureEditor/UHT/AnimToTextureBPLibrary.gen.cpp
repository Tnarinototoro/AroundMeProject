// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimToTextureBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimToTextureBPLibrary() {}
// Cross Module References
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
	ANIMTOTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimToTextureBPLibrary();
	ANIMTOTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimToTextureBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation();
	UPackage* Z_Construct_UPackage__Script_AnimToTextureEditor();
// End Cross Module References
#if WITH_EDITOR
	DEFINE_FUNCTION(UAnimToTextureBPLibrary::execUpdateMaterialInstanceFromDataAsset)
	{
		P_GET_OBJECT(UAnimToTextureDataAsset,Z_Param_DataAsset);
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_MaterialInstance);
		P_GET_PROPERTY(FByteProperty,Z_Param_MaterialParameterAssociation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimToTextureBPLibrary::UpdateMaterialInstanceFromDataAsset(Z_Param_DataAsset,Z_Param_MaterialInstance,EMaterialParameterAssociation(Z_Param_MaterialParameterAssociation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureBPLibrary::execSetLightMapIndex)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_LightmapIndex);
		P_GET_UBOOL(Z_Param_bGenerateLightmapUVs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureBPLibrary::SetLightMapIndex(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_LightmapIndex,Z_Param_bGenerateLightmapUVs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureBPLibrary::execConvertSkeletalMeshToStaticMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=UAnimToTextureBPLibrary::ConvertSkeletalMeshToStaticMesh(Z_Param_SkeletalMesh,Z_Param_PackageName,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureBPLibrary::execAnimationToTexture)
	{
		P_GET_OBJECT(UAnimToTextureDataAsset,Z_Param_DataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureBPLibrary::AnimationToTexture(Z_Param_DataAsset);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAnimToTextureBPLibrary::StaticRegisterNativesUAnimToTextureBPLibrary()
	{
#if WITH_EDITOR
		UClass* Class = UAnimToTextureBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimationToTexture", &UAnimToTextureBPLibrary::execAnimationToTexture },
			{ "ConvertSkeletalMeshToStaticMesh", &UAnimToTextureBPLibrary::execConvertSkeletalMeshToStaticMesh },
			{ "SetLightMapIndex", &UAnimToTextureBPLibrary::execSetLightMapIndex },
			{ "UpdateMaterialInstanceFromDataAsset", &UAnimToTextureBPLibrary::execUpdateMaterialInstanceFromDataAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics
	{
		struct AnimToTextureBPLibrary_eventAnimationToTexture_Parms
		{
			UAnimToTextureDataAsset* DataAsset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureBPLibrary_eventAnimationToTexture_Parms, DataAsset), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "bSuccess" },
	};
#endif
	void Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureBPLibrary_eventAnimationToTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureBPLibrary_eventAnimationToTexture_Parms), &Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture" },
		{ "Comment", "/**\n\x09* Bakes Animation Data into Textures.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureBPLibrary.h" },
		{ "ToolTip", "Bakes Animation Data into Textures." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureBPLibrary, nullptr, "AnimationToTexture", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::AnimToTextureBPLibrary_eventAnimationToTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::AnimToTextureBPLibrary_eventAnimationToTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics
	{
		struct AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms
		{
			USkeletalMesh* SkeletalMesh;
			FString PackageName;
			int32 LODIndex;
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_PackageName_MetaData), Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_PackageName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_LODIndex_MetaData), Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_LODIndex_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture" },
		{ "Comment", "/** \n\x09* Utility for converting SkeletalMesh into a StaticMesh\n\x09*/" },
		{ "CPP_Default_LODIndex", "-1" },
		{ "ModuleRelativePath", "Public/AnimToTextureBPLibrary.h" },
		{ "ToolTip", "Utility for converting SkeletalMesh into a StaticMesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureBPLibrary, nullptr, "ConvertSkeletalMeshToStaticMesh", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics
	{
		struct AnimToTextureBPLibrary_eventSetLightMapIndex_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 LightmapIndex;
			bool bGenerateLightmapUVs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightmapIndex;
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureBPLibrary_eventSetLightMapIndex_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureBPLibrary_eventSetLightMapIndex_Parms, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LODIndex_MetaData), Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LODIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LightmapIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LightmapIndex = { "LightmapIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureBPLibrary_eventSetLightMapIndex_Parms, LightmapIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LightmapIndex_MetaData), Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LightmapIndex_MetaData) };
	void Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((AnimToTextureBPLibrary_eventSetLightMapIndex_Parms*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureBPLibrary_eventSetLightMapIndex_Parms), &Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "bSuccess" },
	};
#endif
	void Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureBPLibrary_eventSetLightMapIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimToTextureBPLibrary_eventSetLightMapIndex_Parms), &Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LightmapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture" },
		{ "Comment", "/**\n\x09* Utility for setting a StaticMesh LightMapIndex.\n\x09*/" },
		{ "CPP_Default_bGenerateLightmapUVs", "true" },
		{ "CPP_Default_LightmapIndex", "1" },
		{ "ModuleRelativePath", "Public/AnimToTextureBPLibrary.h" },
		{ "ToolTip", "Utility for setting a StaticMesh LightMapIndex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureBPLibrary, nullptr, "SetLightMapIndex", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::AnimToTextureBPLibrary_eventSetLightMapIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::AnimToTextureBPLibrary_eventSetLightMapIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics
	{
		struct AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms
		{
			const UAnimToTextureDataAsset* DataAsset;
			UMaterialInstanceConstant* MaterialInstance;
			TEnumAsByte<EMaterialParameterAssociation> MaterialParameterAssociation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterAssociation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialParameterAssociation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_DataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms, DataAsset), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_DataAsset_MetaData), Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_DataAsset_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialParameterAssociation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialParameterAssociation = { "MaterialParameterAssociation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms, MaterialParameterAssociation), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialParameterAssociation_MetaData), Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialParameterAssociation_MetaData) }; // 1464424446
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialParameterAssociation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture" },
		{ "Comment", "/**\n\x09* Updates a material's parameters to match those of an AnimToTexture DataAsset\n\x09*/" },
		{ "CPP_Default_MaterialParameterAssociation", "LayerParameter" },
		{ "ModuleRelativePath", "Public/AnimToTextureBPLibrary.h" },
		{ "ToolTip", "Updates a material's parameters to match those of an AnimToTexture DataAsset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureBPLibrary, nullptr, "UpdateMaterialInstanceFromDataAsset", nullptr, nullptr, Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimToTextureBPLibrary);
	UClass* Z_Construct_UClass_UAnimToTextureBPLibrary_NoRegister()
	{
		return UAnimToTextureBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimToTextureBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTextureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture, "AnimationToTexture" }, // 419919564
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh, "ConvertSkeletalMeshToStaticMesh" }, // 1734370285
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex, "SetLightMapIndex" }, // 1425557726
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset, "UpdateMaterialInstanceFromDataAsset" }, // 4255785039
#endif //WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Converts a series of animation frames into a Vertex Animation Texture (VAT)\n* \n* The texture can store Vertex positions and normals or Bone positions and rotations.\n*/" },
		{ "IncludePath", "AnimToTextureBPLibrary.h" },
		{ "ModuleRelativePath", "Public/AnimToTextureBPLibrary.h" },
		{ "ToolTip", "Converts a series of animation frames into a Vertex Animation Texture (VAT)\n\nThe texture can store Vertex positions and normals or Bone positions and rotations." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimToTextureBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::ClassParams = {
		&UAnimToTextureBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimToTextureBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimToTextureBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimToTextureBPLibrary.OuterSingleton, Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimToTextureBPLibrary.OuterSingleton;
	}
	template<> ANIMTOTEXTUREEDITOR_API UClass* StaticClass<UAnimToTextureBPLibrary>()
	{
		return UAnimToTextureBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimToTextureBPLibrary);
	UAnimToTextureBPLibrary::~UAnimToTextureBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimToTextureBPLibrary, UAnimToTextureBPLibrary::StaticClass, TEXT("UAnimToTextureBPLibrary"), &Z_Registration_Info_UClass_UAnimToTextureBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimToTextureBPLibrary), 1876168062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_2460317159(TEXT("/Script/AnimToTextureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
