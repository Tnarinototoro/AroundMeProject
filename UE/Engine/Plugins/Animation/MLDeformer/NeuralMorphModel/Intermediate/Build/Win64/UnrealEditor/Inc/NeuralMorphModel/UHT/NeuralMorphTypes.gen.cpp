// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralMorphTypes.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneReference.h"
#include "MLDeformerCurveReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralMorphTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MLDEFORMERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMLDeformerCurveReference();
	NEURALMORPHMODEL_API UEnum* Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode();
	NEURALMORPHMODEL_API UEnum* Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode();
	NEURALMORPHMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphBoneGroup();
	NEURALMORPHMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphCurveGroup();
	NEURALMORPHMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphMaskInfo();
	UPackage* Z_Construct_UPackage__Script_NeuralMorphModel();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralMorphMode;
	static UEnum* ENeuralMorphMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENeuralMorphMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENeuralMorphMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode, (UObject*)Z_Construct_UPackage__Script_NeuralMorphModel(), TEXT("ENeuralMorphMode"));
		}
		return Z_Registration_Info_UEnum_ENeuralMorphMode.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UEnum* StaticEnum<ENeuralMorphMode>()
	{
		return ENeuralMorphMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enumerators[] = {
		{ "ENeuralMorphMode::Local", (int64)ENeuralMorphMode::Local },
		{ "ENeuralMorphMode::Global", (int64)ENeuralMorphMode::Global },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** \n * The mode of the model, either local or global. \n * In local mode the network contains a super simple neural network for each bone, while in \n * global mode all bones and curves are input to one larger fully connected network.\n * The local mode has faster performance, while global mode can result in higher quality deformation.\n * This model runs its neural network on the CPU, but uses comrpessed GPU based morph targets, which require shader model 5.\n */" },
		{ "Global.Comment", "/** \n\x09 * There is one fully connected neural network that generates a set of morph targets.\n\x09 * This has a slightly higher CPU overhead, but could result in higher quality.\n\x09 * The Global mode is basically the same as the Vertex Delta Model, but runs the neural network on the CPU\n\x09 * and uses GPU compressed morph targets.\n\x09 */" },
		{ "Global.Name", "ENeuralMorphMode::Global" },
		{ "Global.ToolTip", "There is one fully connected neural network that generates a set of morph targets.\nThis has a slightly higher CPU overhead, but could result in higher quality.\nThe Global mode is basically the same as the Vertex Delta Model, but runs the neural network on the CPU\nand uses GPU compressed morph targets." },
		{ "Local.Comment", "/**\n\x09 * Each bone creates a set of morph targets and has its own small neural network.\n\x09 * The local mode can also create more localized morph targets and tends to use slightly less memory.\n\x09 * This mode is faster to process on the CPU side.\n\x09 */" },
		{ "Local.Name", "ENeuralMorphMode::Local" },
		{ "Local.ToolTip", "Each bone creates a set of morph targets and has its own small neural network.\nThe local mode can also create more localized morph targets and tends to use slightly less memory.\nThis mode is faster to process on the CPU side." },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "The mode of the model, either local or global.\nIn local mode the network contains a super simple neural network for each bone, while in\nglobal mode all bones and curves are input to one larger fully connected network.\nThe local mode has faster performance, while global mode can result in higher quality deformation.\nThis model runs its neural network on the CPU, but uses comrpessed GPU based morph targets, which require shader model 5." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NeuralMorphModel,
		nullptr,
		"ENeuralMorphMode",
		"ENeuralMorphMode",
		Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode()
	{
		if (!Z_Registration_Info_UEnum_ENeuralMorphMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralMorphMode.InnerSingleton, Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENeuralMorphMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENeuralMorphMaskVizMode;
	static UEnum* ENeuralMorphMaskVizMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENeuralMorphMaskVizMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENeuralMorphMaskVizMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode, (UObject*)Z_Construct_UPackage__Script_NeuralMorphModel(), TEXT("ENeuralMorphMaskVizMode"));
		}
		return Z_Registration_Info_UEnum_ENeuralMorphMaskVizMode.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UEnum* StaticEnum<ENeuralMorphMaskVizMode>()
	{
		return ENeuralMorphMaskVizMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode_Statics::Enumerators[] = {
		{ "ENeuralMorphMaskVizMode::Off", (int64)ENeuralMorphMaskVizMode::Off },
		{ "ENeuralMorphMaskVizMode::WhenInFocus", (int64)ENeuralMorphMaskVizMode::WhenInFocus },
		{ "ENeuralMorphMaskVizMode::Always", (int64)ENeuralMorphMaskVizMode::Always },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode_Statics::Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** Always show the selected mask. The mask selected is defined by what is selected in the input widget on the right side of the UI. */" },
		{ "Always.Name", "ENeuralMorphMaskVizMode::Always" },
		{ "Always.ToolTip", "Always show the selected mask. The mask selected is defined by what is selected in the input widget on the right side of the UI." },
		{ "Comment", "/**\n * The visualization mode for the masks.\n * Each bone, curve, bone group or curve group has a specific mask area on the mesh.\n * This mask defines areas where generated morph targets can be active. They can be used to filter out deformations in undesired areas.\n * For example if you rotate the left arm, you don't want the right arm to deform. The mask for the left arm can be setup in a way that it only includes \n * vertices around the area of the left arm to enforce this.\n */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "Off.Comment", "/** Do not display the masks in the viewport. */" },
		{ "Off.Name", "ENeuralMorphMaskVizMode::Off" },
		{ "Off.ToolTip", "Do not display the masks in the viewport." },
		{ "ToolTip", "The visualization mode for the masks.\nEach bone, curve, bone group or curve group has a specific mask area on the mesh.\nThis mask defines areas where generated morph targets can be active. They can be used to filter out deformations in undesired areas.\nFor example if you rotate the left arm, you don't want the right arm to deform. The mask for the left arm can be setup in a way that it only includes\nvertices around the area of the left arm to enforce this." },
		{ "WhenInFocus.Comment", "/** Only show the masks inside the viewport when the inputs widget on the right side of the UI is in focus. Show the mask for the selected item (bone, curve, bone group, curve group). */" },
		{ "WhenInFocus.Name", "ENeuralMorphMaskVizMode::WhenInFocus" },
		{ "WhenInFocus.ToolTip", "Only show the masks inside the viewport when the inputs widget on the right side of the UI is in focus. Show the mask for the selected item (bone, curve, bone group, curve group)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NeuralMorphModel,
		nullptr,
		"ENeuralMorphMaskVizMode",
		"ENeuralMorphMaskVizMode",
		Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode()
	{
		if (!Z_Registration_Info_UEnum_ENeuralMorphMaskVizMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENeuralMorphMaskVizMode.InnerSingleton, Z_Construct_UEnum_NeuralMorphModel_ENeuralMorphMaskVizMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENeuralMorphMaskVizMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup;
class UScriptStruct* FNeuralMorphBoneGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup, (UObject*)Z_Construct_UPackage__Script_NeuralMorphModel(), TEXT("NeuralMorphBoneGroup"));
	}
	return Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.OuterSingleton;
}
template<> NEURALMORPHMODEL_API UScriptStruct* StaticStruct<FNeuralMorphBoneGroup>()
{
	return FNeuralMorphBoneGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A group of bones, which can generate morph targets together.\n * This is useful when there are specific correlations between different bones, that all effect the same region on the body.\n */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "A group of bones, which can generate morph targets together.\nThis is useful when there are specific correlations between different bones, that all effect the same region on the body." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuralMorphBoneGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "Comment", "/** The name of the group, also shown in the UI. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "The name of the group, also shown in the UI." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralMorphBoneGroup, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_GroupName_MetaData), Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_GroupName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Category", "Bones" },
		{ "Comment", "/** The list of bones that should form a group together. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "The list of bones that should form a group together." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralMorphBoneGroup, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames_MetaData), Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames_MetaData) }; // 1286936164
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewProp_BoneNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
		nullptr,
		&NewStructOps,
		"NeuralMorphBoneGroup",
		Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::PropPointers),
		sizeof(FNeuralMorphBoneGroup),
		alignof(FNeuralMorphBoneGroup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphBoneGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.InnerSingleton, Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup;
class UScriptStruct* FNeuralMorphCurveGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup, (UObject*)Z_Construct_UPackage__Script_NeuralMorphModel(), TEXT("NeuralMorphCurveGroup"));
	}
	return Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.OuterSingleton;
}
template<> NEURALMORPHMODEL_API UScriptStruct* StaticStruct<FNeuralMorphCurveGroup>()
{
	return FNeuralMorphCurveGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A group of curves, which can generate morph targets together.\n * This is useful when there are specific correlations between different curves, that all effect the same region on the body.\n */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "A group of curves, which can generate morph targets together.\nThis is useful when there are specific correlations between different curves, that all effect the same region on the body." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuralMorphCurveGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "Comment", "/** The name of the group, also shown in the UI. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "The name of the group, also shown in the UI." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralMorphCurveGroup, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_GroupName_MetaData), Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_GroupName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMLDeformerCurveReference, METADATA_PARAMS(0, nullptr) }; // 511511731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** The list of curves that should form a group together. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "The list of curves that should form a group together." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralMorphCurveGroup, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames_MetaData), Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames_MetaData) }; // 511511731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewProp_CurveNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
		nullptr,
		&NewStructOps,
		"NeuralMorphCurveGroup",
		Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::PropPointers),
		sizeof(FNeuralMorphCurveGroup),
		alignof(FNeuralMorphCurveGroup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphCurveGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.InnerSingleton, Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeuralMorphMaskInfo;
class UScriptStruct* FNeuralMorphMaskInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuralMorphMaskInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeuralMorphMaskInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuralMorphMaskInfo, (UObject*)Z_Construct_UPackage__Script_NeuralMorphModel(), TEXT("NeuralMorphMaskInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NeuralMorphMaskInfo.OuterSingleton;
}
template<> NEURALMORPHMODEL_API UScriptStruct* StaticStruct<FNeuralMorphMaskInfo>()
{
	return FNeuralMorphMaskInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Information needed to generate the mask for a specific bone.\n * This includes a list of bone names. Each bone has a skinning influence mask.\n * The final mask will be a merge of all the bone masks of bones listed inside this info struct.\n * There will be an array of these structs, one for each bone.\n */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "Information needed to generate the mask for a specific bone.\nThis includes a list of bone names. Each bone has a skinning influence mask.\nThe final mask will be a merge of all the bone masks of bones listed inside this info struct.\nThere will be an array of these structs, one for each bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuralMorphMaskInfo>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Comment", "/** The list of bone names that should be included in the mask generation. */" },
		{ "ModuleRelativePath", "Public/NeuralMorphTypes.h" },
		{ "ToolTip", "The list of bone names that should be included in the mask generation." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuralMorphMaskInfo, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::NewProp_BoneNames_MetaData), Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::NewProp_BoneNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::NewProp_BoneNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
		nullptr,
		&NewStructOps,
		"NeuralMorphMaskInfo",
		Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::PropPointers),
		sizeof(FNeuralMorphMaskInfo),
		alignof(FNeuralMorphMaskInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNeuralMorphMaskInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NeuralMorphMaskInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeuralMorphMaskInfo.InnerSingleton, Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NeuralMorphMaskInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::EnumInfo[] = {
		{ ENeuralMorphMode_StaticEnum, TEXT("ENeuralMorphMode"), &Z_Registration_Info_UEnum_ENeuralMorphMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2601490130U) },
		{ ENeuralMorphMaskVizMode_StaticEnum, TEXT("ENeuralMorphMaskVizMode"), &Z_Registration_Info_UEnum_ENeuralMorphMaskVizMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3975074985U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::ScriptStructInfo[] = {
		{ FNeuralMorphBoneGroup::StaticStruct, Z_Construct_UScriptStruct_FNeuralMorphBoneGroup_Statics::NewStructOps, TEXT("NeuralMorphBoneGroup"), &Z_Registration_Info_UScriptStruct_NeuralMorphBoneGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeuralMorphBoneGroup), 725389796U) },
		{ FNeuralMorphCurveGroup::StaticStruct, Z_Construct_UScriptStruct_FNeuralMorphCurveGroup_Statics::NewStructOps, TEXT("NeuralMorphCurveGroup"), &Z_Registration_Info_UScriptStruct_NeuralMorphCurveGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeuralMorphCurveGroup), 683888895U) },
		{ FNeuralMorphMaskInfo::StaticStruct, Z_Construct_UScriptStruct_FNeuralMorphMaskInfo_Statics::NewStructOps, TEXT("NeuralMorphMaskInfo"), &Z_Registration_Info_UScriptStruct_NeuralMorphMaskInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeuralMorphMaskInfo), 4053489752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_2454888780(TEXT("/Script/NeuralMorphModel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
