// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealUSDWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealUSDWrapper() {}
// Cross Module References
	UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind();
	UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet();
	UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType();
	UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition();
	UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy();
	UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose();
	UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling();
	UPackage* Z_Construct_UPackage__Script_UnrealUSDWrapper();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdPurpose;
	static UEnum* EUsdPurpose_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUsdPurpose.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUsdPurpose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdPurpose"));
		}
		return Z_Registration_Info_UEnum_EUsdPurpose.OuterSingleton;
	}
	template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdPurpose>()
	{
		return EUsdPurpose_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::Enumerators[] = {
		{ "EUsdPurpose::Default", (int64)EUsdPurpose::Default },
		{ "EUsdPurpose::Proxy", (int64)EUsdPurpose::Proxy },
		{ "EUsdPurpose::Render", (int64)EUsdPurpose::Render },
		{ "EUsdPurpose::Guide", (int64)EUsdPurpose::Guide },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Default.Hidden", "" },
		{ "Default.Name", "EUsdPurpose::Default" },
		{ "Guide.Name", "EUsdPurpose::Guide" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "Proxy.Name", "EUsdPurpose::Proxy" },
		{ "Render.Name", "EUsdPurpose::Render" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
		nullptr,
		"EUsdPurpose",
		"EUsdPurpose",
		Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose()
	{
		if (!Z_Registration_Info_UEnum_EUsdPurpose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdPurpose.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdPurpose_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUsdPurpose.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdDefaultKind;
	static UEnum* EUsdDefaultKind_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUsdDefaultKind.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUsdDefaultKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdDefaultKind"));
		}
		return Z_Registration_Info_UEnum_EUsdDefaultKind.OuterSingleton;
	}
	template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdDefaultKind>()
	{
		return EUsdDefaultKind_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::Enumerators[] = {
		{ "EUsdDefaultKind::None", (int64)EUsdDefaultKind::None },
		{ "EUsdDefaultKind::Model", (int64)EUsdDefaultKind::Model },
		{ "EUsdDefaultKind::Component", (int64)EUsdDefaultKind::Component },
		{ "EUsdDefaultKind::Group", (int64)EUsdDefaultKind::Group },
		{ "EUsdDefaultKind::Assembly", (int64)EUsdDefaultKind::Assembly },
		{ "EUsdDefaultKind::Subcomponent", (int64)EUsdDefaultKind::Subcomponent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::Enum_MetaDataParams[] = {
		{ "Assembly.Name", "EUsdDefaultKind::Assembly" },
		{ "Bitflags", "" },
		{ "Component.Name", "EUsdDefaultKind::Component" },
		{ "Group.Name", "EUsdDefaultKind::Group" },
		{ "Model.Name", "EUsdDefaultKind::Model" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EUsdDefaultKind::None" },
		{ "Subcomponent.Name", "EUsdDefaultKind::Subcomponent" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
		nullptr,
		"EUsdDefaultKind",
		"EUsdDefaultKind",
		Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind()
	{
		if (!Z_Registration_Info_UEnum_EUsdDefaultKind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdDefaultKind.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdDefaultKind_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUsdDefaultKind.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdLoadPolicy;
	static UEnum* EUsdLoadPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUsdLoadPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUsdLoadPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdLoadPolicy"));
		}
		return Z_Registration_Info_UEnum_EUsdLoadPolicy.OuterSingleton;
	}
	template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdLoadPolicy>()
	{
		return EUsdLoadPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::Enumerators[] = {
		{ "EUsdLoadPolicy::UsdLoadWithDescendants", (int64)EUsdLoadPolicy::UsdLoadWithDescendants },
		{ "EUsdLoadPolicy::UsdLoadWithoutDescendants", (int64)EUsdLoadPolicy::UsdLoadWithoutDescendants },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Corresponds to pxr::UsdLoadPolicy, refer to the USD SDK documentation */" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "ToolTip", "Corresponds to pxr::UsdLoadPolicy, refer to the USD SDK documentation" },
		{ "UsdLoadWithDescendants.Name", "EUsdLoadPolicy::UsdLoadWithDescendants" },
		{ "UsdLoadWithoutDescendants.Comment", "// Load a prim plus all its descendants.\n" },
		{ "UsdLoadWithoutDescendants.Name", "EUsdLoadPolicy::UsdLoadWithoutDescendants" },
		{ "UsdLoadWithoutDescendants.ToolTip", "Load a prim plus all its descendants." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
		nullptr,
		"EUsdLoadPolicy",
		"EUsdLoadPolicy",
		Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy()
	{
		if (!Z_Registration_Info_UEnum_EUsdLoadPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdLoadPolicy.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdLoadPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUsdLoadPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdInitialLoadSet;
	static UEnum* EUsdInitialLoadSet_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUsdInitialLoadSet.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUsdInitialLoadSet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdInitialLoadSet"));
		}
		return Z_Registration_Info_UEnum_EUsdInitialLoadSet.OuterSingleton;
	}
	template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdInitialLoadSet>()
	{
		return EUsdInitialLoadSet_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::Enumerators[] = {
		{ "EUsdInitialLoadSet::LoadAll", (int64)EUsdInitialLoadSet::LoadAll },
		{ "EUsdInitialLoadSet::LoadNone", (int64)EUsdInitialLoadSet::LoadNone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::Enum_MetaDataParams[] = {
		{ "LoadAll.Name", "EUsdInitialLoadSet::LoadAll" },
		{ "LoadNone.Name", "EUsdInitialLoadSet::LoadNone" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
		nullptr,
		"EUsdInitialLoadSet",
		"EUsdInitialLoadSet",
		Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet()
	{
		if (!Z_Registration_Info_UEnum_EUsdInitialLoadSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdInitialLoadSet.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdInitialLoadSet_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUsdInitialLoadSet.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdInterpolationType;
	static UEnum* EUsdInterpolationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUsdInterpolationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUsdInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdInterpolationType"));
		}
		return Z_Registration_Info_UEnum_EUsdInterpolationType.OuterSingleton;
	}
	template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdInterpolationType>()
	{
		return EUsdInterpolationType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::Enumerators[] = {
		{ "EUsdInterpolationType::Held", (int64)EUsdInterpolationType::Held },
		{ "EUsdInterpolationType::Linear", (int64)EUsdInterpolationType::Linear },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::Enum_MetaDataParams[] = {
		{ "Held.Name", "EUsdInterpolationType::Held" },
		{ "Linear.Name", "EUsdInterpolationType::Linear" },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
		nullptr,
		"EUsdInterpolationType",
		"EUsdInterpolationType",
		Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType()
	{
		if (!Z_Registration_Info_UEnum_EUsdInterpolationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdInterpolationType.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdInterpolationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUsdInterpolationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdRootMotionHandling;
	static UEnum* EUsdRootMotionHandling_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUsdRootMotionHandling.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUsdRootMotionHandling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdRootMotionHandling"));
		}
		return Z_Registration_Info_UEnum_EUsdRootMotionHandling.OuterSingleton;
	}
	template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdRootMotionHandling>()
	{
		return EUsdRootMotionHandling_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::Enumerators[] = {
		{ "EUsdRootMotionHandling::NoAdditionalRootMotion", (int64)EUsdRootMotionHandling::NoAdditionalRootMotion },
		{ "EUsdRootMotionHandling::UseMotionFromSkelRoot", (int64)EUsdRootMotionHandling::UseMotionFromSkelRoot },
		{ "EUsdRootMotionHandling::UseMotionFromSkeleton", (int64)EUsdRootMotionHandling::UseMotionFromSkeleton },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "NoAdditionalRootMotion.Comment", "// Use for the root bone just its regular joint animation as described on the SkelAnimation prim.\n" },
		{ "NoAdditionalRootMotion.Name", "EUsdRootMotionHandling::NoAdditionalRootMotion" },
		{ "NoAdditionalRootMotion.ToolTip", "Use for the root bone just its regular joint animation as described on the SkelAnimation prim." },
		{ "UseMotionFromSkeleton.Comment", "// Use the transform animation from the Skeleton prim in addition to the root bone joint animation as\n// described on the SkelAnimation prim.\n" },
		{ "UseMotionFromSkeleton.Name", "EUsdRootMotionHandling::UseMotionFromSkeleton" },
		{ "UseMotionFromSkeleton.ToolTip", "Use the transform animation from the Skeleton prim in addition to the root bone joint animation as\ndescribed on the SkelAnimation prim." },
		{ "UseMotionFromSkelRoot.Comment", "// Use the transform animation from the SkelRoot prim in addition to the root bone joint animation as\n// described on the SkelAnimation prim. Note that the SkelRoot prim's Sequencer transform track will no longer\n// contain the transform animation data used in this manner, so as to not apply the animation twice.\n" },
		{ "UseMotionFromSkelRoot.Name", "EUsdRootMotionHandling::UseMotionFromSkelRoot" },
		{ "UseMotionFromSkelRoot.ToolTip", "Use the transform animation from the SkelRoot prim in addition to the root bone joint animation as\ndescribed on the SkelAnimation prim. Note that the SkelRoot prim's Sequencer transform track will no longer\ncontain the transform animation data used in this manner, so as to not apply the animation twice." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
		nullptr,
		"EUsdRootMotionHandling",
		"EUsdRootMotionHandling",
		Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling()
	{
		if (!Z_Registration_Info_UEnum_EUsdRootMotionHandling.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdRootMotionHandling.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUsdRootMotionHandling.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUsdListPosition;
	static UEnum* EUsdListPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUsdListPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUsdListPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition, (UObject*)Z_Construct_UPackage__Script_UnrealUSDWrapper(), TEXT("EUsdListPosition"));
		}
		return Z_Registration_Info_UEnum_EUsdListPosition.OuterSingleton;
	}
	template<> UNREALUSDWRAPPER_API UEnum* StaticEnum<EUsdListPosition>()
	{
		return EUsdListPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::Enumerators[] = {
		{ "EUsdListPosition::FrontOfPrependList", (int64)EUsdListPosition::FrontOfPrependList },
		{ "EUsdListPosition::BackOfPrependList", (int64)EUsdListPosition::BackOfPrependList },
		{ "EUsdListPosition::FrontOfAppendList", (int64)EUsdListPosition::FrontOfAppendList },
		{ "EUsdListPosition::BackOfAppendList", (int64)EUsdListPosition::BackOfAppendList },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::Enum_MetaDataParams[] = {
		{ "BackOfAppendList.Comment", "// The position at the back of the append list.\n// An item added at this position will, after composition is applied,\n// be weaker than other items appended in this layer, but stronger\n// than items added by weaker layers.\n" },
		{ "BackOfAppendList.Name", "EUsdListPosition::BackOfAppendList" },
		{ "BackOfAppendList.ToolTip", "The position at the back of the append list.\nAn item added at this position will, after composition is applied,\nbe weaker than other items appended in this layer, but stronger\nthan items added by weaker layers." },
		{ "BackOfPrependList.Comment", "// The position at the back of the prepend list.\n// An item added at this position will, after composition is applied,\n// be weaker than other items prepended in this layer, but stronger\n// than items added by weaker layers.\n" },
		{ "BackOfPrependList.Name", "EUsdListPosition::BackOfPrependList" },
		{ "BackOfPrependList.ToolTip", "The position at the back of the prepend list.\nAn item added at this position will, after composition is applied,\nbe weaker than other items prepended in this layer, but stronger\nthan items added by weaker layers." },
		{ "Comment", "/** Corresponds to pxr::UsdListPosition, refer to the USD SDK documentation */" },
		{ "FrontOfAppendList.Comment", "// The position at the front of the append list.\n// An item added at this position will, after composition is applied,\n// be stronger than other items appended in this layer, and stronger\n// than items added by weaker layers.\n" },
		{ "FrontOfAppendList.Name", "EUsdListPosition::FrontOfAppendList" },
		{ "FrontOfAppendList.ToolTip", "The position at the front of the append list.\nAn item added at this position will, after composition is applied,\nbe stronger than other items appended in this layer, and stronger\nthan items added by weaker layers." },
		{ "FrontOfPrependList.Comment", "// The position at the front of the prepend list.\n// An item added at this position will, after composition is applied,\n// be stronger than other items prepended in this layer, and stronger\n// than items added by weaker layers.\n" },
		{ "FrontOfPrependList.Name", "EUsdListPosition::FrontOfPrependList" },
		{ "FrontOfPrependList.ToolTip", "The position at the front of the prepend list.\nAn item added at this position will, after composition is applied,\nbe stronger than other items prepended in this layer, and stronger\nthan items added by weaker layers." },
		{ "ModuleRelativePath", "Public/UnrealUSDWrapper.h" },
		{ "ToolTip", "Corresponds to pxr::UsdListPosition, refer to the USD SDK documentation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealUSDWrapper,
		nullptr,
		"EUsdListPosition",
		"EUsdListPosition",
		Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition()
	{
		if (!Z_Registration_Info_UEnum_EUsdListPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUsdListPosition.InnerSingleton, Z_Construct_UEnum_UnrealUSDWrapper_EUsdListPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUsdListPosition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h_Statics::EnumInfo[] = {
		{ EUsdPurpose_StaticEnum, TEXT("EUsdPurpose"), &Z_Registration_Info_UEnum_EUsdPurpose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 285688096U) },
		{ EUsdDefaultKind_StaticEnum, TEXT("EUsdDefaultKind"), &Z_Registration_Info_UEnum_EUsdDefaultKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 202986178U) },
		{ EUsdLoadPolicy_StaticEnum, TEXT("EUsdLoadPolicy"), &Z_Registration_Info_UEnum_EUsdLoadPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3664138226U) },
		{ EUsdInitialLoadSet_StaticEnum, TEXT("EUsdInitialLoadSet"), &Z_Registration_Info_UEnum_EUsdInitialLoadSet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3181613972U) },
		{ EUsdInterpolationType_StaticEnum, TEXT("EUsdInterpolationType"), &Z_Registration_Info_UEnum_EUsdInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4037301883U) },
		{ EUsdRootMotionHandling_StaticEnum, TEXT("EUsdRootMotionHandling"), &Z_Registration_Info_UEnum_EUsdRootMotionHandling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3645787672U) },
		{ EUsdListPosition_StaticEnum, TEXT("EUsdListPosition"), &Z_Registration_Info_UEnum_EUsdListPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 909562855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h_2578141997(TEXT("/Script/UnrealUSDWrapper"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_UnrealUSDWrapper_Public_UnrealUSDWrapper_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
