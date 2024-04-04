// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ZeroOutRootBoneModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZeroOutRootBoneModifier() {}
// Cross Module References
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UZeroOutRootBoneModifier();
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UZeroOutRootBoneModifier_NoRegister();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	UPackage* Z_Construct_UPackage__Script_AnimationModifierLibrary();
// End Cross Module References
	void UZeroOutRootBoneModifier::StaticRegisterNativesUZeroOutRootBoneModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZeroOutRootBoneModifier);
	UClass* Z_Construct_UClass_UZeroOutRootBoneModifier_NoRegister()
	{
		return UZeroOutRootBoneModifier::StaticClass();
	}
	struct Z_Construct_UClass_UZeroOutRootBoneModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClipStartFramesWithNoMotion_MetaData[];
#endif
		static void NewProp_bClipStartFramesWithNoMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClipStartFramesWithNoMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClipEndFramesWithNoMotion_MetaData[];
#endif
		static void NewProp_bClipEndFramesWithNoMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClipEndFramesWithNoMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Adjust root motion to be relative to the first frame. Optionally cut the start and end sections of the animation that don't have motion on the root.\n\x09This was written to be used when capturing Character Movement motion via Take Recorder. Take Recorder outputs an animation captured from\n\x09""a character moving in game in world space, and this modifier zeroes out the root. The animation can then be exported to fbx to be animated against. */" },
		{ "IncludePath", "ZeroOutRootBoneModifier.h" },
		{ "ModuleRelativePath", "Public/ZeroOutRootBoneModifier.h" },
		{ "ToolTip", "Adjust root motion to be relative to the first frame. Optionally cut the start and end sections of the animation that don't have motion on the root.\n      This was written to be used when capturing Character Movement motion via Take Recorder. Take Recorder outputs an animation captured from\n      a character moving in game in world space, and this modifier zeroes out the root. The animation can then be exported to fbx to be animated against." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipStartFramesWithNoMotion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Clip frames at the start of the animation that have no root motion.\n" },
		{ "ModuleRelativePath", "Public/ZeroOutRootBoneModifier.h" },
		{ "ToolTip", "Clip frames at the start of the animation that have no root motion." },
	};
#endif
	void Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipStartFramesWithNoMotion_SetBit(void* Obj)
	{
		((UZeroOutRootBoneModifier*)Obj)->bClipStartFramesWithNoMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipStartFramesWithNoMotion = { "bClipStartFramesWithNoMotion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZeroOutRootBoneModifier), &Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipStartFramesWithNoMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipStartFramesWithNoMotion_MetaData), Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipStartFramesWithNoMotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipEndFramesWithNoMotion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Clip frames at the end of the animation that have no root motion.\n" },
		{ "ModuleRelativePath", "Public/ZeroOutRootBoneModifier.h" },
		{ "ToolTip", "Clip frames at the end of the animation that have no root motion." },
	};
#endif
	void Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipEndFramesWithNoMotion_SetBit(void* Obj)
	{
		((UZeroOutRootBoneModifier*)Obj)->bClipEndFramesWithNoMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipEndFramesWithNoMotion = { "bClipEndFramesWithNoMotion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UZeroOutRootBoneModifier), &Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipEndFramesWithNoMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipEndFramesWithNoMotion_MetaData), Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipEndFramesWithNoMotion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipStartFramesWithNoMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::NewProp_bClipEndFramesWithNoMotion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZeroOutRootBoneModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::ClassParams = {
		&UZeroOutRootBoneModifier::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UZeroOutRootBoneModifier()
	{
		if (!Z_Registration_Info_UClass_UZeroOutRootBoneModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZeroOutRootBoneModifier.OuterSingleton, Z_Construct_UClass_UZeroOutRootBoneModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZeroOutRootBoneModifier.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERLIBRARY_API UClass* StaticClass<UZeroOutRootBoneModifier>()
	{
		return UZeroOutRootBoneModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZeroOutRootBoneModifier);
	UZeroOutRootBoneModifier::~UZeroOutRootBoneModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_ZeroOutRootBoneModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_ZeroOutRootBoneModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZeroOutRootBoneModifier, UZeroOutRootBoneModifier::StaticClass, TEXT("UZeroOutRootBoneModifier"), &Z_Registration_Info_UClass_UZeroOutRootBoneModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZeroOutRootBoneModifier), 2420598555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_ZeroOutRootBoneModifier_h_1930250797(TEXT("/Script/AnimationModifierLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_ZeroOutRootBoneModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_ZeroOutRootBoneModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
