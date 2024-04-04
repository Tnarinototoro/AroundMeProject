// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EncodeRootBoneModifier.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEncodeRootBoneModifier() {}
// Cross Module References
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UEncodeRootBoneModifier();
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UEncodeRootBoneModifier_NoRegister();
	ANIMATIONMODIFIERLIBRARY_API UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis();
	ANIMATIONMODIFIERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone();
	ANIMATIONMODIFIERLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimationModifierLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEncodeRootBoneAxis;
	static UEnum* EEncodeRootBoneAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEncodeRootBoneAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEncodeRootBoneAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis, (UObject*)Z_Construct_UPackage__Script_AnimationModifierLibrary(), TEXT("EEncodeRootBoneAxis"));
		}
		return Z_Registration_Info_UEnum_EEncodeRootBoneAxis.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERLIBRARY_API UEnum* StaticEnum<EEncodeRootBoneAxis>()
	{
		return EEncodeRootBoneAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis_Statics::Enumerators[] = {
		{ "EEncodeRootBoneAxis::X", (int64)EEncodeRootBoneAxis::X },
		{ "EEncodeRootBoneAxis::Y", (int64)EEncodeRootBoneAxis::Y },
		{ "EEncodeRootBoneAxis::Z", (int64)EEncodeRootBoneAxis::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EncodeRootBoneModifier.h" },
		{ "X.Name", "EEncodeRootBoneAxis::X" },
		{ "Y.Name", "EEncodeRootBoneAxis::Y" },
		{ "Z.Name", "EEncodeRootBoneAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
		nullptr,
		"EEncodeRootBoneAxis",
		"EEncodeRootBoneAxis",
		Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis()
	{
		if (!Z_Registration_Info_UEnum_EEncodeRootBoneAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEncodeRootBoneAxis.InnerSingleton, Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEncodeRootBoneAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBone;
class UScriptStruct* FEncodeRootBoneWeightedBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone, (UObject*)Z_Construct_UPackage__Script_AnimationModifierLibrary(), TEXT("EncodeRootBoneWeightedBone"));
	}
	return Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBone.OuterSingleton;
}
template<> ANIMATIONMODIFIERLIBRARY_API UScriptStruct* StaticStruct<FEncodeRootBoneWeightedBone>()
{
	return FEncodeRootBoneWeightedBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EncodeRootBoneModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncodeRootBoneWeightedBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/EncodeRootBoneModifier.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodeRootBoneWeightedBone, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewProp_Bone_MetaData), Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewProp_Bone_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/EncodeRootBoneModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodeRootBoneWeightedBone, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
		nullptr,
		&NewStructOps,
		"EncodeRootBoneWeightedBone",
		Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::PropPointers),
		sizeof(FEncodeRootBoneWeightedBone),
		alignof(FEncodeRootBoneWeightedBone),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone()
	{
		if (!Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBone.InnerSingleton, Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBone.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEncodeRootBoneWeightedBoneAxis>() == std::is_polymorphic<FEncodeRootBoneWeightedBone>(), "USTRUCT FEncodeRootBoneWeightedBoneAxis cannot be polymorphic unless super FEncodeRootBoneWeightedBone is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBoneAxis;
class UScriptStruct* FEncodeRootBoneWeightedBoneAxis::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBoneAxis.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBoneAxis.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis, (UObject*)Z_Construct_UPackage__Script_AnimationModifierLibrary(), TEXT("EncodeRootBoneWeightedBoneAxis"));
	}
	return Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBoneAxis.OuterSingleton;
}
template<> ANIMATIONMODIFIERLIBRARY_API UScriptStruct* StaticStruct<FEncodeRootBoneWeightedBoneAxis>()
{
	return FEncodeRootBoneWeightedBoneAxis::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EncodeRootBoneModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncodeRootBoneWeightedBoneAxis>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::NewProp_BoneAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::NewProp_BoneAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/EncodeRootBoneModifier.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::NewProp_BoneAxis = { "BoneAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEncodeRootBoneWeightedBoneAxis, BoneAxis), Z_Construct_UEnum_AnimationModifierLibrary_EEncodeRootBoneAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::NewProp_BoneAxis_MetaData), Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::NewProp_BoneAxis_MetaData) }; // 3058567070
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::NewProp_BoneAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::NewProp_BoneAxis,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
		Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone,
		&NewStructOps,
		"EncodeRootBoneWeightedBoneAxis",
		Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::PropPointers),
		sizeof(FEncodeRootBoneWeightedBoneAxis),
		alignof(FEncodeRootBoneWeightedBoneAxis),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis()
	{
		if (!Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBoneAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBoneAxis.InnerSingleton, Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBoneAxis.InnerSingleton;
	}
	void UEncodeRootBoneModifier::StaticRegisterNativesUEncodeRootBoneModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEncodeRootBoneModifier);
	UClass* Z_Construct_UClass_UEncodeRootBoneModifier_NoRegister()
	{
		return UEncodeRootBoneModifier::StaticClass();
	}
	struct Z_Construct_UClass_UEncodeRootBoneModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightedBoneToComputeRootPosition_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightedBoneToComputeRootPosition_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightedBoneToComputeRootPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightedBoneToComputeRootOrientation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightedBoneToComputeRootOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightedBoneToComputeRootOrientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEncodeRootBoneModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEncodeRootBoneModifier_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEncodeRootBoneModifier_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EncodeRootBoneModifier.h" },
		{ "ModuleRelativePath", "Public/EncodeRootBoneModifier.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootPosition_Inner = { "WeightedBoneToComputeRootPosition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone, METADATA_PARAMS(0, nullptr) }; // 1484694030
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/EncodeRootBoneModifier.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootPosition = { "WeightedBoneToComputeRootPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEncodeRootBoneModifier, WeightedBoneToComputeRootPosition), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootPosition_MetaData), Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootPosition_MetaData) }; // 1484694030
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootOrientation_Inner = { "WeightedBoneToComputeRootOrientation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis, METADATA_PARAMS(0, nullptr) }; // 2978066544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootOrientation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/EncodeRootBoneModifier.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootOrientation = { "WeightedBoneToComputeRootOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEncodeRootBoneModifier, WeightedBoneToComputeRootOrientation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootOrientation_MetaData), Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootOrientation_MetaData) }; // 2978066544
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEncodeRootBoneModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootPosition_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootOrientation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEncodeRootBoneModifier_Statics::NewProp_WeightedBoneToComputeRootOrientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEncodeRootBoneModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEncodeRootBoneModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEncodeRootBoneModifier_Statics::ClassParams = {
		&UEncodeRootBoneModifier::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEncodeRootBoneModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEncodeRootBoneModifier_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEncodeRootBoneModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UEncodeRootBoneModifier_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEncodeRootBoneModifier_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEncodeRootBoneModifier()
	{
		if (!Z_Registration_Info_UClass_UEncodeRootBoneModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEncodeRootBoneModifier.OuterSingleton, Z_Construct_UClass_UEncodeRootBoneModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEncodeRootBoneModifier.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERLIBRARY_API UClass* StaticClass<UEncodeRootBoneModifier>()
	{
		return UEncodeRootBoneModifier::StaticClass();
	}
	UEncodeRootBoneModifier::UEncodeRootBoneModifier() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEncodeRootBoneModifier);
	UEncodeRootBoneModifier::~UEncodeRootBoneModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_Statics::EnumInfo[] = {
		{ EEncodeRootBoneAxis_StaticEnum, TEXT("EEncodeRootBoneAxis"), &Z_Registration_Info_UEnum_EEncodeRootBoneAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3058567070U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_Statics::ScriptStructInfo[] = {
		{ FEncodeRootBoneWeightedBone::StaticStruct, Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics::NewStructOps, TEXT("EncodeRootBoneWeightedBone"), &Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncodeRootBoneWeightedBone), 1484694030U) },
		{ FEncodeRootBoneWeightedBoneAxis::StaticStruct, Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics::NewStructOps, TEXT("EncodeRootBoneWeightedBoneAxis"), &Z_Registration_Info_UScriptStruct_EncodeRootBoneWeightedBoneAxis, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncodeRootBoneWeightedBoneAxis), 2978066544U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEncodeRootBoneModifier, UEncodeRootBoneModifier::StaticClass, TEXT("UEncodeRootBoneModifier"), &Z_Registration_Info_UClass_UEncodeRootBoneModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEncodeRootBoneModifier), 3286493870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_224932330(TEXT("/Script/AnimationModifierLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
