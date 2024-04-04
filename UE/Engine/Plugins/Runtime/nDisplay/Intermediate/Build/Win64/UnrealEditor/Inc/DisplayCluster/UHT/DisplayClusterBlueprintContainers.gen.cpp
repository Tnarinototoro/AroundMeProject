// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/DisplayClusterBlueprintContainers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterBlueprintContainers() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterViewportContext();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterViewportContext;
class UScriptStruct* FDisplayClusterViewportContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterViewportContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterViewportContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterViewportContext, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("DisplayClusterViewportContext"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterViewportContext.OuterSingleton;
}
template<> DISPLAYCLUSTER_API UScriptStruct* StaticStruct<FDisplayClusterViewportContext>()
{
	return FDisplayClusterViewportContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ViewportID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RectLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RectLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RectSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RectSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionMatrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRendering_MetaData[];
#endif
		static void NewProp_bIsRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRendering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterViewportContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewportID_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Viewport Name\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Viewport Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewportID = { "ViewportID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportContext, ViewportID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewportID_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewportID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_RectLocation_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Location on a backbuffer.\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Location on a backbuffer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_RectLocation = { "RectLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportContext, RectLocation), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_RectLocation_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_RectLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_RectSize_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Size on a backbuffer.\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Size on a backbuffer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_RectSize = { "RectSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportContext, RectSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_RectSize_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_RectSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewLocation_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Camera view location\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Camera view location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewLocation = { "ViewLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportContext, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewLocation_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewRotation_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Camera view rotation\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Camera view rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewRotation = { "ViewRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportContext, ViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewRotation_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ProjectionMatrix_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Camera projection Matrix\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Camera projection Matrix" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ProjectionMatrix = { "ProjectionMatrix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportContext, ProjectionMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ProjectionMatrix_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ProjectionMatrix_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_bIsRendering_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Rendering status for this viewport (Overlay and other configuration rules can disable rendering for this viewport.)\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Rendering status for this viewport (Overlay and other configuration rules can disable rendering for this viewport.)" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_bIsRendering_SetBit(void* Obj)
	{
		((FDisplayClusterViewportContext*)Obj)->bIsRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_bIsRendering = { "bIsRendering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDisplayClusterViewportContext), &Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_bIsRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_bIsRendering_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_bIsRendering_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_RectLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_RectSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ViewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_ProjectionMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewProp_bIsRendering,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		&NewStructOps,
		"DisplayClusterViewportContext",
		Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::PropPointers),
		sizeof(FDisplayClusterViewportContext),
		alignof(FDisplayClusterViewportContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterViewportContext()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterViewportContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterViewportContext.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterViewportContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterViewportStereoContext;
class UScriptStruct* FDisplayClusterViewportStereoContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterViewportStereoContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterViewportStereoContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("DisplayClusterViewportStereoContext"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterViewportStereoContext.OuterSingleton;
}
template<> DISPLAYCLUSTER_API UScriptStruct* StaticStruct<FDisplayClusterViewportStereoContext>()
{
	return FDisplayClusterViewportStereoContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ViewportID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RectLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RectLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RectSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RectSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewLocation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ViewLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewRotation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewRotation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ViewRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionMatrix_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectionMatrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRendering_MetaData[];
#endif
		static void NewProp_bIsRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRendering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterViewportStereoContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewportID_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Viewport Name\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Viewport Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewportID = { "ViewportID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportStereoContext, ViewportID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewportID_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewportID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_RectLocation_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Location on a backbuffer.\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Location on a backbuffer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_RectLocation = { "RectLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportStereoContext, RectLocation), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_RectLocation_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_RectLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_RectSize_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Size on a backbuffer.\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Size on a backbuffer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_RectSize = { "RectSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportStereoContext, RectSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_RectSize_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_RectSize_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewLocation_Inner = { "ViewLocation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewLocation_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Camera view location\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Camera view location" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewLocation = { "ViewLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportStereoContext, ViewLocation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewLocation_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewLocation_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewRotation_Inner = { "ViewRotation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewRotation_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Camera view rotation\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Camera view rotation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewRotation = { "ViewRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportStereoContext, ViewRotation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewRotation_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewRotation_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ProjectionMatrix_Inner = { "ProjectionMatrix", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ProjectionMatrix_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Camera projection Matrix\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Camera projection Matrix" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ProjectionMatrix = { "ProjectionMatrix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDisplayClusterViewportStereoContext, ProjectionMatrix), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ProjectionMatrix_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ProjectionMatrix_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_bIsRendering_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// Rendering status for this viewport (Overlay and other configuration rules can disable rendering for this viewport.)\n" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintContainers.h" },
		{ "ToolTip", "Rendering status for this viewport (Overlay and other configuration rules can disable rendering for this viewport.)" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_bIsRendering_SetBit(void* Obj)
	{
		((FDisplayClusterViewportStereoContext*)Obj)->bIsRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_bIsRendering = { "bIsRendering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDisplayClusterViewportStereoContext), &Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_bIsRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_bIsRendering_MetaData), Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_bIsRendering_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewportID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_RectLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_RectSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewLocation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewRotation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ViewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ProjectionMatrix_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_ProjectionMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewProp_bIsRendering,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		&NewStructOps,
		"DisplayClusterViewportStereoContext",
		Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::PropPointers),
		sizeof(FDisplayClusterViewportStereoContext),
		alignof(FDisplayClusterViewportStereoContext),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterViewportStereoContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterViewportStereoContext.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterViewportStereoContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintContainers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintContainers_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterViewportContext::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterViewportContext_Statics::NewStructOps, TEXT("DisplayClusterViewportContext"), &Z_Registration_Info_UScriptStruct_DisplayClusterViewportContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterViewportContext), 414905946U) },
		{ FDisplayClusterViewportStereoContext::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterViewportStereoContext_Statics::NewStructOps, TEXT("DisplayClusterViewportStereoContext"), &Z_Registration_Info_UScriptStruct_DisplayClusterViewportStereoContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterViewportStereoContext), 1241605822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintContainers_h_459835104(TEXT("/Script/DisplayCluster"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintContainers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintContainers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
