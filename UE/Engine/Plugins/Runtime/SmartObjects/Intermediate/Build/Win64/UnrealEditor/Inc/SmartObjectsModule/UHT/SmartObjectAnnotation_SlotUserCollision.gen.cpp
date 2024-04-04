// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Annotations/SmartObjectAnnotation_SlotUserCollision.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectAnnotation_SlotUserCollision() {}
// Cross Module References
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References

static_assert(std::is_polymorphic<FSmartObjectAnnotation_SlotUserCollision>() == std::is_polymorphic<FSmartObjectSlotAnnotation>(), "USTRUCT FSmartObjectAnnotation_SlotUserCollision cannot be polymorphic unless super FSmartObjectSlotAnnotation is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectAnnotation_SlotUserCollision;
class UScriptStruct* FSmartObjectAnnotation_SlotUserCollision::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectAnnotation_SlotUserCollision.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectAnnotation_SlotUserCollision.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectAnnotation_SlotUserCollision"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectAnnotation_SlotUserCollision.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectAnnotation_SlotUserCollision>()
{
	return FSmartObjectAnnotation_SlotUserCollision::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseUserCapsuleSize_MetaData[];
#endif
		static void NewProp_bUseUserCapsuleSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUserCapsuleSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Capsule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Annotation to check if a smart object user can stand on the slot without overlaps.\n * Uses validation filter to get the user capsule for collisions testing, or use specific capsule defined in the annotation.\n */" },
		{ "DisplayName", "Slot User Collision" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectAnnotation_SlotUserCollision.h" },
		{ "ToolTip", "Annotation to check if a smart object user can stand on the slot without overlaps.\nUses validation filter to get the user capsule for collisions testing, or use specific capsule defined in the annotation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectAnnotation_SlotUserCollision>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_bUseUserCapsuleSize_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If true, the user capsule size is got from validation filter and used for testing. */" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectAnnotation_SlotUserCollision.h" },
		{ "ToolTip", "If true, the user capsule size is got from validation filter and used for testing." },
	};
#endif
	void Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_bUseUserCapsuleSize_SetBit(void* Obj)
	{
		((FSmartObjectAnnotation_SlotUserCollision*)Obj)->bUseUserCapsuleSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_bUseUserCapsuleSize = { "bUseUserCapsuleSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSmartObjectAnnotation_SlotUserCollision), &Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_bUseUserCapsuleSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_bUseUserCapsuleSize_MetaData), Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_bUseUserCapsuleSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Dimensions of the capsule to test at the slot location. */" },
		{ "EditCondition", "bUseUserCapsuleSize == false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Annotations/SmartObjectAnnotation_SlotUserCollision.h" },
		{ "ToolTip", "Dimensions of the capsule to test at the slot location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartObjectAnnotation_SlotUserCollision, Capsule), Z_Construct_UScriptStruct_FSmartObjectUserCapsuleParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_Capsule_MetaData), Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_Capsule_MetaData) }; // 359789534
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_bUseUserCapsuleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewProp_Capsule,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FSmartObjectSlotAnnotation,
		&NewStructOps,
		"SmartObjectAnnotation_SlotUserCollision",
		Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::PropPointers),
		sizeof(FSmartObjectAnnotation_SlotUserCollision),
		alignof(FSmartObjectAnnotation_SlotUserCollision),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectAnnotation_SlotUserCollision.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectAnnotation_SlotUserCollision.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectAnnotation_SlotUserCollision.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectAnnotation_SlotUserCollision_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectAnnotation_SlotUserCollision_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectAnnotation_SlotUserCollision::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectAnnotation_SlotUserCollision_Statics::NewStructOps, TEXT("SmartObjectAnnotation_SlotUserCollision"), &Z_Registration_Info_UScriptStruct_SmartObjectAnnotation_SlotUserCollision, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectAnnotation_SlotUserCollision), 898992819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectAnnotation_SlotUserCollision_h_2089143934(TEXT("/Script/SmartObjectsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectAnnotation_SlotUserCollision_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_Annotations_SmartObjectAnnotation_SlotUserCollision_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
