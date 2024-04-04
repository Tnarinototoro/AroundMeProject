// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/PCGSplineStruct.h"
#include "../../Source/Runtime/Engine/Classes/Components/SplineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSplineStruct() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineCurves();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGSplineStruct();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PCGSplineStruct;
class UScriptStruct* FPCGSplineStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PCGSplineStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PCGSplineStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGSplineStruct, (UObject*)Z_Construct_UPackage__Script_PCG(), TEXT("PCGSplineStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PCGSplineStruct.OuterSingleton;
}
template<> PCG_API UScriptStruct* StaticStruct<FPCGSplineStruct>()
{
	return FPCGSplineStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPCGSplineStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultUpVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReparamStepsPerSegment_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReparamStepsPerSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosedLoop_MetaData[];
#endif
		static void NewProp_bClosedLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Subset of the Spline Component API in a standalone struct */" },
		{ "ModuleRelativePath", "Public/Data/PCGSplineStruct.h" },
		{ "ToolTip", "Subset of the Spline Component API in a standalone struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGSplineStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_SplineCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGSplineStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_SplineCurves = { "SplineCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGSplineStruct, SplineCurves), Z_Construct_UScriptStruct_FSplineCurves, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_SplineCurves_MetaData), Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_SplineCurves_MetaData) }; // 3882643525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_Transform_MetaData[] = {
		{ "Comment", "// Replaces the component trasnform\n" },
		{ "ModuleRelativePath", "Public/Data/PCGSplineStruct.h" },
		{ "ToolTip", "Replaces the component trasnform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGSplineStruct, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_Transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_DefaultUpVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGSplineStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_DefaultUpVector = { "DefaultUpVector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGSplineStruct, DefaultUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_DefaultUpVector_MetaData), Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_DefaultUpVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_ReparamStepsPerSegment_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGSplineStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_ReparamStepsPerSegment = { "ReparamStepsPerSegment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGSplineStruct, ReparamStepsPerSegment), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_ReparamStepsPerSegment_MetaData), Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_ReparamStepsPerSegment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_bClosedLoop_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGSplineStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_bClosedLoop_SetBit(void* Obj)
	{
		((FPCGSplineStruct*)Obj)->bClosedLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGSplineStruct), &Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_bClosedLoop_MetaData), Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_bClosedLoop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGSplineStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGSplineStruct, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_LocalBounds_MetaData), Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_LocalBounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/PCGSplineStruct.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGSplineStruct, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_Bounds_MetaData), Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_Bounds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_SplineCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_DefaultUpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_ReparamStepsPerSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_bClosedLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_LocalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewProp_Bounds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
		nullptr,
		&NewStructOps,
		"PCGSplineStruct",
		Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::PropPointers),
		sizeof(FPCGSplineStruct),
		alignof(FPCGSplineStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPCGSplineStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PCGSplineStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PCGSplineStruct.InnerSingleton, Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PCGSplineStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGSplineStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGSplineStruct_h_Statics::ScriptStructInfo[] = {
		{ FPCGSplineStruct::StaticStruct, Z_Construct_UScriptStruct_FPCGSplineStruct_Statics::NewStructOps, TEXT("PCGSplineStruct"), &Z_Registration_Info_UScriptStruct_PCGSplineStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGSplineStruct), 682653739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGSplineStruct_h_316600461(TEXT("/Script/PCG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGSplineStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Data_PCGSplineStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
