// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyOceanComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyOceanComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UOceanBoxCollisionComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UOceanCollisionComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyOceanComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyOceanComponent_NoRegister();
// End Cross Module References
#if WITH_EDITOR
	DEFINE_FUNCTION(UWaterBodyOceanComponent::execFillWaterZoneWithOcean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FillWaterZoneWithOcean();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UWaterBodyOceanComponent::StaticRegisterNativesUWaterBodyOceanComponent()
	{
#if WITH_EDITOR
		UClass* Class = UWaterBodyOceanComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FillWaterZoneWithOcean", &UWaterBodyOceanComponent::execFillWaterZoneWithOcean },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UWaterBodyOceanComponent_FillWaterZoneWithOcean_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBodyOceanComponent_FillWaterZoneWithOcean_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Water" },
		{ "Comment", "/** Rebuilds the ocean mesh to completely fill the zone to which it belongs. */" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
		{ "ToolTip", "Rebuilds the ocean mesh to completely fill the zone to which it belongs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBodyOceanComponent_FillWaterZoneWithOcean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBodyOceanComponent, nullptr, "FillWaterZoneWithOcean", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBodyOceanComponent_FillWaterZoneWithOcean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaterBodyOceanComponent_FillWaterZoneWithOcean_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UWaterBodyOceanComponent_FillWaterZoneWithOcean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBodyOceanComponent_FillWaterZoneWithOcean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyOceanComponent);
	UClass* Z_Construct_UClass_UWaterBodyOceanComponent_NoRegister()
	{
		return UWaterBodyOceanComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyOceanComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionBoxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionBoxes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionHullSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionHullSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionHullSets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OceanExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedZoneLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedZoneLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualExtents;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyOceanComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterBodyComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaterBodyOceanComponent_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UWaterBodyOceanComponent_FillWaterZoneWithOcean, "FillWaterZoneWithOcean" }, // 3004640252
#endif //WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "HideCategories", "Tags Activation Cooking Physics Replication Input AssetUserData Mesh Mobility VirtualTexture Trigger" },
		{ "IncludePath", "WaterBodyOceanComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes_Inner = { "CollisionBoxes", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOceanBoxCollisionComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes = { "CollisionBoxes", nullptr, (EPropertyFlags)0x0024888000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaterBodyOceanComponent, CollisionBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes_MetaData), Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets_Inner = { "CollisionHullSets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOceanCollisionComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets = { "CollisionHullSets", nullptr, (EPropertyFlags)0x0024888000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaterBodyOceanComponent, CollisionHullSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets_MetaData), Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionExtents_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionExtents = { "CollisionExtents", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaterBodyOceanComponent, CollisionExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionExtents_MetaData), Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionExtents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_OceanExtents_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** The extent of the ocean, centered around water zone to which the ocean belongs. */" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
		{ "ToolTip", "The extent of the ocean, centered around water zone to which the ocean belongs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_OceanExtents = { "OceanExtents", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaterBodyOceanComponent, OceanExtents), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_OceanExtents_MetaData), Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_OceanExtents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_SavedZoneLocation_MetaData[] = {
		{ "Comment", "/** Saved water zone location so that the ocean mesh can be regenerated relative to it and match it perfectly without being loaded. */" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
		{ "ToolTip", "Saved water zone location so that the ocean mesh can be regenerated relative to it and match it perfectly without being loaded." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_SavedZoneLocation = { "SavedZoneLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaterBodyOceanComponent, SavedZoneLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_SavedZoneLocation_MetaData), Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_SavedZoneLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_HeightOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaterBodyOceanComponent, HeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_HeightOffset_MetaData), Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_HeightOffset_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_VisualExtents_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_VisualExtents = { "VisualExtents", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWaterBodyOceanComponent, VisualExtents_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_VisualExtents_MetaData), Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_VisualExtents_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterBodyOceanComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_OceanExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_SavedZoneLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_HeightOffset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_VisualExtents,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyOceanComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyOceanComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::ClassParams = {
		&UWaterBodyOceanComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UWaterBodyOceanComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaterBodyOceanComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWaterBodyOceanComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyOceanComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyOceanComponent.OuterSingleton, Z_Construct_UClass_UWaterBodyOceanComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyOceanComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterBodyOceanComponent>()
	{
		return UWaterBodyOceanComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyOceanComponent);
	UWaterBodyOceanComponent::~UWaterBodyOceanComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyOceanComponent, UWaterBodyOceanComponent::StaticClass, TEXT("UWaterBodyOceanComponent"), &Z_Registration_Info_UClass_UWaterBodyOceanComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyOceanComponent), 1218637951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_4082077196(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
