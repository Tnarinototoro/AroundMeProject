// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTextureFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomPreferCompressedSourceData)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomPreferCompressedSourceData(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomPreferCompressedSourceData)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomPreferCompressedSourceData(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomAllowNonPowerOfTwo)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAllowNonPowerOfTwo(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomAllowNonPowerOfTwo)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAllowNonPowerOfTwo(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomCompositePower)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomCompositePower(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomCompositePower)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomCompositePower(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomCompositeTextureMode)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomCompositeTextureMode(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomCompositeTextureMode)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomCompositeTextureMode(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomDownscaleOptions)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDownscaleOptions(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomDownscaleOptions)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDownscaleOptions(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomDownscale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDownscale(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomDownscale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDownscale(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomLODGroup)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomLODGroup(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomLODGroup)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomLODGroup(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomLODBias)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomLODBias(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomLODBias)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomLODBias(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomMipGenSettings)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMipGenSettings(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomMipGenSettings)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomMipGenSettings(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustombPreserveBorder)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustombPreserveBorder(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustombPreserveBorder)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustombPreserveBorder(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomVirtualTextureStreaming)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomVirtualTextureStreaming(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomVirtualTextureStreaming)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomVirtualTextureStreaming(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustombUseLegacyGamma)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustombUseLegacyGamma(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustombUseLegacyGamma)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustombUseLegacyGamma(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomSRGB)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSRGB(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomSRGB)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSRGB(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomMipLoadOptions)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMipLoadOptions(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomMipLoadOptions)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomMipLoadOptions(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomFilter)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomFilter(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomFilter)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomFilter(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomPaddingColor)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomPaddingColor(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomPaddingColor)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomPaddingColor(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomPowerOfTwoMode)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomPowerOfTwoMode(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomPowerOfTwoMode)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomPowerOfTwoMode(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustombFlipGreenChannel)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustombFlipGreenChannel(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustombFlipGreenChannel)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustombFlipGreenChannel(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustombDoScaleMipsForAlphaCoverage)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustombDoScaleMipsForAlphaCoverage(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustombDoScaleMipsForAlphaCoverage)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustombDoScaleMipsForAlphaCoverage(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomAlphaCoverageThresholds)
	{
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAlphaCoverageThresholds(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomAlphaCoverageThresholds)
	{
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAlphaCoverageThresholds(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomCompressionSettings)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomCompressionSettings(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomCompressionSettings)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomCompressionSettings(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomCompressionQuality)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomCompressionQuality(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomCompressionQuality)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomCompressionQuality(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomMaxTextureSize)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMaxTextureSize(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomMaxTextureSize)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomMaxTextureSize(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomLossyCompressionAmount)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomLossyCompressionAmount(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomLossyCompressionAmount)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomLossyCompressionAmount(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomDeferCompression)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDeferCompression(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomDeferCompression)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDeferCompression(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomCompressionNoAlpha)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomCompressionNoAlpha(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomCompressionNoAlpha)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomCompressionNoAlpha(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomChromaKeyColor)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomChromaKeyColor(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomChromaKeyColor)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomChromaKeyColor(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomChromaKeyThreshold)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomChromaKeyThreshold(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomChromaKeyThreshold)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomChromaKeyThreshold(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustombChromaKeyTexture)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustombChromaKeyTexture(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustombChromaKeyTexture)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustombChromaKeyTexture(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomAdjustMaxAlpha)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAdjustMaxAlpha(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomAdjustMaxAlpha)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAdjustMaxAlpha(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomAdjustMinAlpha)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAdjustMinAlpha(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomAdjustMinAlpha)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAdjustMinAlpha(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomAdjustHue)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAdjustHue(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomAdjustHue)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAdjustHue(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomAdjustRGBCurve)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAdjustRGBCurve(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomAdjustRGBCurve)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAdjustRGBCurve(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomAdjustSaturation)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAdjustSaturation(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomAdjustSaturation)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAdjustSaturation(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomAdjustVibrance)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAdjustVibrance(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomAdjustVibrance)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAdjustVibrance(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomAdjustBrightnessCurve)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAdjustBrightnessCurve(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomAdjustBrightnessCurve)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAdjustBrightnessCurve(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomAdjustBrightness)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAdjustBrightness(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomAdjustBrightness)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAdjustBrightness(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execSetCustomTranslatedTextureNodeUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomTranslatedTextureNodeUid(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetCustomTranslatedTextureNodeUid)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomTranslatedTextureNodeUid(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execGetObjectClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureFactoryNode::execInitializeTextureNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTextureNode(Z_Param_UniqueID,Z_Param_DisplayLabel,Z_Param_InAssetName);
		P_NATIVE_END;
	}
	void UInterchangeTextureFactoryNode::StaticRegisterNativesUInterchangeTextureFactoryNode()
	{
		UClass* Class = UInterchangeTextureFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomAdjustBrightness", &UInterchangeTextureFactoryNode::execGetCustomAdjustBrightness },
			{ "GetCustomAdjustBrightnessCurve", &UInterchangeTextureFactoryNode::execGetCustomAdjustBrightnessCurve },
			{ "GetCustomAdjustHue", &UInterchangeTextureFactoryNode::execGetCustomAdjustHue },
			{ "GetCustomAdjustMaxAlpha", &UInterchangeTextureFactoryNode::execGetCustomAdjustMaxAlpha },
			{ "GetCustomAdjustMinAlpha", &UInterchangeTextureFactoryNode::execGetCustomAdjustMinAlpha },
			{ "GetCustomAdjustRGBCurve", &UInterchangeTextureFactoryNode::execGetCustomAdjustRGBCurve },
			{ "GetCustomAdjustSaturation", &UInterchangeTextureFactoryNode::execGetCustomAdjustSaturation },
			{ "GetCustomAdjustVibrance", &UInterchangeTextureFactoryNode::execGetCustomAdjustVibrance },
			{ "GetCustomAllowNonPowerOfTwo", &UInterchangeTextureFactoryNode::execGetCustomAllowNonPowerOfTwo },
			{ "GetCustomAlphaCoverageThresholds", &UInterchangeTextureFactoryNode::execGetCustomAlphaCoverageThresholds },
			{ "GetCustombChromaKeyTexture", &UInterchangeTextureFactoryNode::execGetCustombChromaKeyTexture },
			{ "GetCustombDoScaleMipsForAlphaCoverage", &UInterchangeTextureFactoryNode::execGetCustombDoScaleMipsForAlphaCoverage },
			{ "GetCustombFlipGreenChannel", &UInterchangeTextureFactoryNode::execGetCustombFlipGreenChannel },
			{ "GetCustombPreserveBorder", &UInterchangeTextureFactoryNode::execGetCustombPreserveBorder },
			{ "GetCustombUseLegacyGamma", &UInterchangeTextureFactoryNode::execGetCustombUseLegacyGamma },
			{ "GetCustomChromaKeyColor", &UInterchangeTextureFactoryNode::execGetCustomChromaKeyColor },
			{ "GetCustomChromaKeyThreshold", &UInterchangeTextureFactoryNode::execGetCustomChromaKeyThreshold },
			{ "GetCustomCompositePower", &UInterchangeTextureFactoryNode::execGetCustomCompositePower },
			{ "GetCustomCompositeTextureMode", &UInterchangeTextureFactoryNode::execGetCustomCompositeTextureMode },
			{ "GetCustomCompressionNoAlpha", &UInterchangeTextureFactoryNode::execGetCustomCompressionNoAlpha },
			{ "GetCustomCompressionQuality", &UInterchangeTextureFactoryNode::execGetCustomCompressionQuality },
			{ "GetCustomCompressionSettings", &UInterchangeTextureFactoryNode::execGetCustomCompressionSettings },
			{ "GetCustomDeferCompression", &UInterchangeTextureFactoryNode::execGetCustomDeferCompression },
			{ "GetCustomDownscale", &UInterchangeTextureFactoryNode::execGetCustomDownscale },
			{ "GetCustomDownscaleOptions", &UInterchangeTextureFactoryNode::execGetCustomDownscaleOptions },
			{ "GetCustomFilter", &UInterchangeTextureFactoryNode::execGetCustomFilter },
			{ "GetCustomLODBias", &UInterchangeTextureFactoryNode::execGetCustomLODBias },
			{ "GetCustomLODGroup", &UInterchangeTextureFactoryNode::execGetCustomLODGroup },
			{ "GetCustomLossyCompressionAmount", &UInterchangeTextureFactoryNode::execGetCustomLossyCompressionAmount },
			{ "GetCustomMaxTextureSize", &UInterchangeTextureFactoryNode::execGetCustomMaxTextureSize },
			{ "GetCustomMipGenSettings", &UInterchangeTextureFactoryNode::execGetCustomMipGenSettings },
			{ "GetCustomMipLoadOptions", &UInterchangeTextureFactoryNode::execGetCustomMipLoadOptions },
			{ "GetCustomPaddingColor", &UInterchangeTextureFactoryNode::execGetCustomPaddingColor },
			{ "GetCustomPowerOfTwoMode", &UInterchangeTextureFactoryNode::execGetCustomPowerOfTwoMode },
			{ "GetCustomPreferCompressedSourceData", &UInterchangeTextureFactoryNode::execGetCustomPreferCompressedSourceData },
			{ "GetCustomSRGB", &UInterchangeTextureFactoryNode::execGetCustomSRGB },
			{ "GetCustomTranslatedTextureNodeUid", &UInterchangeTextureFactoryNode::execGetCustomTranslatedTextureNodeUid },
			{ "GetCustomVirtualTextureStreaming", &UInterchangeTextureFactoryNode::execGetCustomVirtualTextureStreaming },
			{ "GetObjectClass", &UInterchangeTextureFactoryNode::execGetObjectClass },
			{ "InitializeTextureNode", &UInterchangeTextureFactoryNode::execInitializeTextureNode },
			{ "SetCustomAdjustBrightness", &UInterchangeTextureFactoryNode::execSetCustomAdjustBrightness },
			{ "SetCustomAdjustBrightnessCurve", &UInterchangeTextureFactoryNode::execSetCustomAdjustBrightnessCurve },
			{ "SetCustomAdjustHue", &UInterchangeTextureFactoryNode::execSetCustomAdjustHue },
			{ "SetCustomAdjustMaxAlpha", &UInterchangeTextureFactoryNode::execSetCustomAdjustMaxAlpha },
			{ "SetCustomAdjustMinAlpha", &UInterchangeTextureFactoryNode::execSetCustomAdjustMinAlpha },
			{ "SetCustomAdjustRGBCurve", &UInterchangeTextureFactoryNode::execSetCustomAdjustRGBCurve },
			{ "SetCustomAdjustSaturation", &UInterchangeTextureFactoryNode::execSetCustomAdjustSaturation },
			{ "SetCustomAdjustVibrance", &UInterchangeTextureFactoryNode::execSetCustomAdjustVibrance },
			{ "SetCustomAllowNonPowerOfTwo", &UInterchangeTextureFactoryNode::execSetCustomAllowNonPowerOfTwo },
			{ "SetCustomAlphaCoverageThresholds", &UInterchangeTextureFactoryNode::execSetCustomAlphaCoverageThresholds },
			{ "SetCustombChromaKeyTexture", &UInterchangeTextureFactoryNode::execSetCustombChromaKeyTexture },
			{ "SetCustombDoScaleMipsForAlphaCoverage", &UInterchangeTextureFactoryNode::execSetCustombDoScaleMipsForAlphaCoverage },
			{ "SetCustombFlipGreenChannel", &UInterchangeTextureFactoryNode::execSetCustombFlipGreenChannel },
			{ "SetCustombPreserveBorder", &UInterchangeTextureFactoryNode::execSetCustombPreserveBorder },
			{ "SetCustombUseLegacyGamma", &UInterchangeTextureFactoryNode::execSetCustombUseLegacyGamma },
			{ "SetCustomChromaKeyColor", &UInterchangeTextureFactoryNode::execSetCustomChromaKeyColor },
			{ "SetCustomChromaKeyThreshold", &UInterchangeTextureFactoryNode::execSetCustomChromaKeyThreshold },
			{ "SetCustomCompositePower", &UInterchangeTextureFactoryNode::execSetCustomCompositePower },
			{ "SetCustomCompositeTextureMode", &UInterchangeTextureFactoryNode::execSetCustomCompositeTextureMode },
			{ "SetCustomCompressionNoAlpha", &UInterchangeTextureFactoryNode::execSetCustomCompressionNoAlpha },
			{ "SetCustomCompressionQuality", &UInterchangeTextureFactoryNode::execSetCustomCompressionQuality },
			{ "SetCustomCompressionSettings", &UInterchangeTextureFactoryNode::execSetCustomCompressionSettings },
			{ "SetCustomDeferCompression", &UInterchangeTextureFactoryNode::execSetCustomDeferCompression },
			{ "SetCustomDownscale", &UInterchangeTextureFactoryNode::execSetCustomDownscale },
			{ "SetCustomDownscaleOptions", &UInterchangeTextureFactoryNode::execSetCustomDownscaleOptions },
			{ "SetCustomFilter", &UInterchangeTextureFactoryNode::execSetCustomFilter },
			{ "SetCustomLODBias", &UInterchangeTextureFactoryNode::execSetCustomLODBias },
			{ "SetCustomLODGroup", &UInterchangeTextureFactoryNode::execSetCustomLODGroup },
			{ "SetCustomLossyCompressionAmount", &UInterchangeTextureFactoryNode::execSetCustomLossyCompressionAmount },
			{ "SetCustomMaxTextureSize", &UInterchangeTextureFactoryNode::execSetCustomMaxTextureSize },
			{ "SetCustomMipGenSettings", &UInterchangeTextureFactoryNode::execSetCustomMipGenSettings },
			{ "SetCustomMipLoadOptions", &UInterchangeTextureFactoryNode::execSetCustomMipLoadOptions },
			{ "SetCustomPaddingColor", &UInterchangeTextureFactoryNode::execSetCustomPaddingColor },
			{ "SetCustomPowerOfTwoMode", &UInterchangeTextureFactoryNode::execSetCustomPowerOfTwoMode },
			{ "SetCustomPreferCompressedSourceData", &UInterchangeTextureFactoryNode::execSetCustomPreferCompressedSourceData },
			{ "SetCustomSRGB", &UInterchangeTextureFactoryNode::execSetCustomSRGB },
			{ "SetCustomTranslatedTextureNodeUid", &UInterchangeTextureFactoryNode::execSetCustomTranslatedTextureNodeUid },
			{ "SetCustomVirtualTextureStreaming", &UInterchangeTextureFactoryNode::execSetCustomVirtualTextureStreaming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomAdjustBrightness_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomAdjustBrightness_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomAdjustBrightness_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomAdjustBrightness_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomAdjustBrightness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustBrightness_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomAdjustBrightnessCurve_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomAdjustBrightnessCurve_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomAdjustBrightnessCurve_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomAdjustBrightnessCurve_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomAdjustBrightnessCurve", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustBrightnessCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustBrightnessCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomAdjustHue_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomAdjustHue_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomAdjustHue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomAdjustHue_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomAdjustHue", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustHue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustHue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomAdjustMaxAlpha_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomAdjustMaxAlpha_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomAdjustMaxAlpha_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomAdjustMaxAlpha_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomAdjustMaxAlpha", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustMaxAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustMaxAlpha_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomAdjustMinAlpha_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomAdjustMinAlpha_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomAdjustMinAlpha_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomAdjustMinAlpha_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomAdjustMinAlpha", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustMinAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustMinAlpha_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomAdjustRGBCurve_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomAdjustRGBCurve_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomAdjustRGBCurve_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomAdjustRGBCurve_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomAdjustRGBCurve", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustRGBCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustRGBCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomAdjustSaturation_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomAdjustSaturation_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomAdjustSaturation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomAdjustSaturation_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomAdjustSaturation", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustSaturation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustSaturation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomAdjustVibrance_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomAdjustVibrance_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomAdjustVibrance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomAdjustVibrance_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomAdjustVibrance", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustVibrance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::InterchangeTextureFactoryNode_eventGetCustomAdjustVibrance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomAllowNonPowerOfTwo_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomAllowNonPowerOfTwo_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomAllowNonPowerOfTwo_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomAllowNonPowerOfTwo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomAllowNonPowerOfTwo_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture | Import Settings" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomAllowNonPowerOfTwo", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::InterchangeTextureFactoryNode_eventGetCustomAllowNonPowerOfTwo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::InterchangeTextureFactoryNode_eventGetCustomAllowNonPowerOfTwo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomAlphaCoverageThresholds_Parms
		{
			FVector4 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomAlphaCoverageThresholds_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomAlphaCoverageThresholds_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomAlphaCoverageThresholds_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomAlphaCoverageThresholds", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::InterchangeTextureFactoryNode_eventGetCustomAlphaCoverageThresholds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::InterchangeTextureFactoryNode_eventGetCustomAlphaCoverageThresholds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustombChromaKeyTexture_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustombChromaKeyTexture_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustombChromaKeyTexture_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustombChromaKeyTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustombChromaKeyTexture_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustombChromaKeyTexture", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::InterchangeTextureFactoryNode_eventGetCustombChromaKeyTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::InterchangeTextureFactoryNode_eventGetCustombChromaKeyTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustombDoScaleMipsForAlphaCoverage_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustombDoScaleMipsForAlphaCoverage_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustombDoScaleMipsForAlphaCoverage_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustombDoScaleMipsForAlphaCoverage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustombDoScaleMipsForAlphaCoverage_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustombDoScaleMipsForAlphaCoverage", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::InterchangeTextureFactoryNode_eventGetCustombDoScaleMipsForAlphaCoverage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::InterchangeTextureFactoryNode_eventGetCustombDoScaleMipsForAlphaCoverage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustombFlipGreenChannel_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustombFlipGreenChannel_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustombFlipGreenChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustombFlipGreenChannel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::InterchangeTextureFactoryNode_eventGetCustombFlipGreenChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::InterchangeTextureFactoryNode_eventGetCustombFlipGreenChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustombPreserveBorder_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustombPreserveBorder_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustombPreserveBorder_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustombPreserveBorder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustombPreserveBorder_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustombPreserveBorder", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::InterchangeTextureFactoryNode_eventGetCustombPreserveBorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::InterchangeTextureFactoryNode_eventGetCustombPreserveBorder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustombUseLegacyGamma_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustombUseLegacyGamma_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustombUseLegacyGamma_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustombUseLegacyGamma_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustombUseLegacyGamma_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustombUseLegacyGamma", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::InterchangeTextureFactoryNode_eventGetCustombUseLegacyGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::InterchangeTextureFactoryNode_eventGetCustombUseLegacyGamma_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomChromaKeyColor_Parms
		{
			FColor AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomChromaKeyColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomChromaKeyColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomChromaKeyColor_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomChromaKeyColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::InterchangeTextureFactoryNode_eventGetCustomChromaKeyColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::InterchangeTextureFactoryNode_eventGetCustomChromaKeyColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomChromaKeyThreshold_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomChromaKeyThreshold_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomChromaKeyThreshold_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomChromaKeyThreshold_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomChromaKeyThreshold", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::InterchangeTextureFactoryNode_eventGetCustomChromaKeyThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::InterchangeTextureFactoryNode_eventGetCustomChromaKeyThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomCompositePower_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomCompositePower_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomCompositePower_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomCompositePower_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomCompositePower", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::InterchangeTextureFactoryNode_eventGetCustomCompositePower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::InterchangeTextureFactoryNode_eventGetCustomCompositePower_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomCompositeTextureMode_Parms
		{
			uint8 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomCompositeTextureMode_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomCompositeTextureMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomCompositeTextureMode_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomCompositeTextureMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::InterchangeTextureFactoryNode_eventGetCustomCompositeTextureMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::InterchangeTextureFactoryNode_eventGetCustomCompositeTextureMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomCompressionNoAlpha_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomCompressionNoAlpha_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomCompressionNoAlpha_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomCompressionNoAlpha_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomCompressionNoAlpha_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomCompressionNoAlpha", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::InterchangeTextureFactoryNode_eventGetCustomCompressionNoAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::InterchangeTextureFactoryNode_eventGetCustomCompressionNoAlpha_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomCompressionQuality_Parms
		{
			uint8 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomCompressionQuality_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomCompressionQuality_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomCompressionQuality_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomCompressionQuality", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::InterchangeTextureFactoryNode_eventGetCustomCompressionQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::InterchangeTextureFactoryNode_eventGetCustomCompressionQuality_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomCompressionSettings_Parms
		{
			uint8 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomCompressionSettings_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomCompressionSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomCompressionSettings_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomCompressionSettings", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::InterchangeTextureFactoryNode_eventGetCustomCompressionSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::InterchangeTextureFactoryNode_eventGetCustomCompressionSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomDeferCompression_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomDeferCompression_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomDeferCompression_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomDeferCompression_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomDeferCompression_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomDeferCompression", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::InterchangeTextureFactoryNode_eventGetCustomDeferCompression_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::InterchangeTextureFactoryNode_eventGetCustomDeferCompression_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomDownscale_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomDownscale_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomDownscale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomDownscale_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomDownscale", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::InterchangeTextureFactoryNode_eventGetCustomDownscale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::InterchangeTextureFactoryNode_eventGetCustomDownscale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomDownscaleOptions_Parms
		{
			uint8 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomDownscaleOptions_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomDownscaleOptions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomDownscaleOptions_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomDownscaleOptions", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::InterchangeTextureFactoryNode_eventGetCustomDownscaleOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::InterchangeTextureFactoryNode_eventGetCustomDownscaleOptions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomFilter_Parms
		{
			uint8 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomFilter_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomFilter_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomFilter", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::InterchangeTextureFactoryNode_eventGetCustomFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::InterchangeTextureFactoryNode_eventGetCustomFilter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomLODBias_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomLODBias_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomLODBias_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomLODBias_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomLODBias", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::InterchangeTextureFactoryNode_eventGetCustomLODBias_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::InterchangeTextureFactoryNode_eventGetCustomLODBias_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomLODGroup_Parms
		{
			uint8 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomLODGroup_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomLODGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomLODGroup_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomLODGroup", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::InterchangeTextureFactoryNode_eventGetCustomLODGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::InterchangeTextureFactoryNode_eventGetCustomLODGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomLossyCompressionAmount_Parms
		{
			uint8 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomLossyCompressionAmount_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomLossyCompressionAmount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomLossyCompressionAmount_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomLossyCompressionAmount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::InterchangeTextureFactoryNode_eventGetCustomLossyCompressionAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::InterchangeTextureFactoryNode_eventGetCustomLossyCompressionAmount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomMaxTextureSize_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomMaxTextureSize_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomMaxTextureSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomMaxTextureSize_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomMaxTextureSize", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::InterchangeTextureFactoryNode_eventGetCustomMaxTextureSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::InterchangeTextureFactoryNode_eventGetCustomMaxTextureSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomMipGenSettings_Parms
		{
			uint8 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomMipGenSettings_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomMipGenSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomMipGenSettings_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomMipGenSettings", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::InterchangeTextureFactoryNode_eventGetCustomMipGenSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::InterchangeTextureFactoryNode_eventGetCustomMipGenSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomMipLoadOptions_Parms
		{
			uint8 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomMipLoadOptions_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomMipLoadOptions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomMipLoadOptions_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomMipLoadOptions", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::InterchangeTextureFactoryNode_eventGetCustomMipLoadOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::InterchangeTextureFactoryNode_eventGetCustomMipLoadOptions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomPaddingColor_Parms
		{
			FColor AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomPaddingColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomPaddingColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomPaddingColor_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomPaddingColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::InterchangeTextureFactoryNode_eventGetCustomPaddingColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::InterchangeTextureFactoryNode_eventGetCustomPaddingColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomPowerOfTwoMode_Parms
		{
			uint8 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomPowerOfTwoMode_Parms, AttributeValue), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomPowerOfTwoMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomPowerOfTwoMode_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomPowerOfTwoMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::InterchangeTextureFactoryNode_eventGetCustomPowerOfTwoMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::InterchangeTextureFactoryNode_eventGetCustomPowerOfTwoMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomPreferCompressedSourceData_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomPreferCompressedSourceData_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomPreferCompressedSourceData_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomPreferCompressedSourceData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomPreferCompressedSourceData_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture | Import Settings" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomPreferCompressedSourceData", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::InterchangeTextureFactoryNode_eventGetCustomPreferCompressedSourceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::InterchangeTextureFactoryNode_eventGetCustomPreferCompressedSourceData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomSRGB_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomSRGB_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomSRGB_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomSRGB", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::InterchangeTextureFactoryNode_eventGetCustomSRGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::InterchangeTextureFactoryNode_eventGetCustomSRGB_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomTranslatedTextureNodeUid_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetCustomTranslatedTextureNodeUid_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomTranslatedTextureNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomTranslatedTextureNodeUid_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/**\n\x09 * Get the translated texture node unique ID.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Get the translated texture node unique ID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomTranslatedTextureNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::InterchangeTextureFactoryNode_eventGetCustomTranslatedTextureNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::InterchangeTextureFactoryNode_eventGetCustomTranslatedTextureNodeUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetCustomVirtualTextureStreaming_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomVirtualTextureStreaming_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomVirtualTextureStreaming_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventGetCustomVirtualTextureStreaming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventGetCustomVirtualTextureStreaming_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetCustomVirtualTextureStreaming", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::InterchangeTextureFactoryNode_eventGetCustomVirtualTextureStreaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::InterchangeTextureFactoryNode_eventGetCustomVirtualTextureStreaming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics
	{
		struct InterchangeTextureFactoryNode_eventGetObjectClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/** Get the class this node want to create */" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Get the class this node want to create" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::InterchangeTextureFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::InterchangeTextureFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics
	{
		struct InterchangeTextureFactoryNode_eventInitializeTextureNode_Parms
		{
			FString UniqueID;
			FString DisplayLabel;
			FString InAssetName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_UniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventInitializeTextureNode_Parms, UniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_UniqueID_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_UniqueID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_DisplayLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventInitializeTextureNode_Parms, DisplayLabel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_DisplayLabel_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_DisplayLabel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_InAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_InAssetName = { "InAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventInitializeTextureNode_Parms, InAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_InAssetName_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_InAssetName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_UniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_DisplayLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::NewProp_InAssetName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/**\n\x09 * Initialize node data\n\x09 * @param: UniqueID - The uniqueId for this node\n\x09 * @param DisplayLabel - The name of the node\n\x09 * @param InAssetClass - The class the texture factory will create for this node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Initialize node data\n@param: UniqueID - The uniqueId for this node\n@param DisplayLabel - The name of the node\n@param InAssetClass - The class the texture factory will create for this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "InitializeTextureNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::InterchangeTextureFactoryNode_eventInitializeTextureNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::InterchangeTextureFactoryNode_eventInitializeTextureNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomAdjustBrightness_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomAdjustBrightness_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustBrightness_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustBrightness_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustBrightness_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustBrightness_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomAdjustBrightness", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustBrightness_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomAdjustBrightnessCurve_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomAdjustBrightnessCurve_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustBrightnessCurve_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustBrightnessCurve_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustBrightnessCurve_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustBrightnessCurve_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomAdjustBrightnessCurve", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustBrightnessCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustBrightnessCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomAdjustHue_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomAdjustHue_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustHue_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustHue_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustHue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustHue_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomAdjustHue", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustHue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustHue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomAdjustMaxAlpha_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomAdjustMaxAlpha_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustMaxAlpha_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustMaxAlpha_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustMaxAlpha_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustMaxAlpha_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomAdjustMaxAlpha", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustMaxAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustMaxAlpha_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomAdjustMinAlpha_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomAdjustMinAlpha_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustMinAlpha_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustMinAlpha_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustMinAlpha_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustMinAlpha_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomAdjustMinAlpha", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustMinAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustMinAlpha_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomAdjustRGBCurve_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomAdjustRGBCurve_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustRGBCurve_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustRGBCurve_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustRGBCurve_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustRGBCurve_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomAdjustRGBCurve", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustRGBCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustRGBCurve_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomAdjustSaturation_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomAdjustSaturation_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustSaturation_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustSaturation_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustSaturation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustSaturation_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomAdjustSaturation", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustSaturation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustSaturation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomAdjustVibrance_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomAdjustVibrance_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustVibrance_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustVibrance_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAdjustVibrance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAdjustVibrance_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomAdjustVibrance", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustVibrance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::InterchangeTextureFactoryNode_eventSetCustomAdjustVibrance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomAllowNonPowerOfTwo_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAllowNonPowerOfTwo_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAllowNonPowerOfTwo_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAllowNonPowerOfTwo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAllowNonPowerOfTwo_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture | Import Settings" },
		{ "Comment", "/*\n\x09 * Should the factory allow the import of texture that would have a resolution that is not a power of two\n\x09 * By default this is not allowed\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "* Should the factory allow the import of texture that would have a resolution that is not a power of two\n* By default this is not allowed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomAllowNonPowerOfTwo", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::InterchangeTextureFactoryNode_eventSetCustomAllowNonPowerOfTwo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::InterchangeTextureFactoryNode_eventSetCustomAllowNonPowerOfTwo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomAlphaCoverageThresholds_Parms
		{
			FVector4 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomAlphaCoverageThresholds_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAlphaCoverageThresholds_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAlphaCoverageThresholds_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomAlphaCoverageThresholds_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomAlphaCoverageThresholds_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomAlphaCoverageThresholds", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::InterchangeTextureFactoryNode_eventSetCustomAlphaCoverageThresholds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::InterchangeTextureFactoryNode_eventSetCustomAlphaCoverageThresholds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustombChromaKeyTexture_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombChromaKeyTexture_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombChromaKeyTexture_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombChromaKeyTexture_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombChromaKeyTexture_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombChromaKeyTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombChromaKeyTexture_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustombChromaKeyTexture", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::InterchangeTextureFactoryNode_eventSetCustombChromaKeyTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::InterchangeTextureFactoryNode_eventSetCustombChromaKeyTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustombDoScaleMipsForAlphaCoverage_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombDoScaleMipsForAlphaCoverage_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombDoScaleMipsForAlphaCoverage_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombDoScaleMipsForAlphaCoverage_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombDoScaleMipsForAlphaCoverage_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombDoScaleMipsForAlphaCoverage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombDoScaleMipsForAlphaCoverage_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustombDoScaleMipsForAlphaCoverage", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::InterchangeTextureFactoryNode_eventSetCustombDoScaleMipsForAlphaCoverage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::InterchangeTextureFactoryNode_eventSetCustombDoScaleMipsForAlphaCoverage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustombFlipGreenChannel_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombFlipGreenChannel_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombFlipGreenChannel_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombFlipGreenChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustombFlipGreenChannel", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::InterchangeTextureFactoryNode_eventSetCustombFlipGreenChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::InterchangeTextureFactoryNode_eventSetCustombFlipGreenChannel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustombPreserveBorder_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombPreserveBorder_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombPreserveBorder_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombPreserveBorder_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombPreserveBorder_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombPreserveBorder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombPreserveBorder_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustombPreserveBorder", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::InterchangeTextureFactoryNode_eventSetCustombPreserveBorder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::InterchangeTextureFactoryNode_eventSetCustombPreserveBorder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustombUseLegacyGamma_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombUseLegacyGamma_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombUseLegacyGamma_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombUseLegacyGamma_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombUseLegacyGamma_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustombUseLegacyGamma_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustombUseLegacyGamma_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustombUseLegacyGamma", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::InterchangeTextureFactoryNode_eventSetCustombUseLegacyGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::InterchangeTextureFactoryNode_eventSetCustombUseLegacyGamma_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomChromaKeyColor_Parms
		{
			FColor AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomChromaKeyColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomChromaKeyColor_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomChromaKeyColor_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomChromaKeyColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomChromaKeyColor_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomChromaKeyColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::InterchangeTextureFactoryNode_eventSetCustomChromaKeyColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::InterchangeTextureFactoryNode_eventSetCustomChromaKeyColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomChromaKeyThreshold_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomChromaKeyThreshold_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomChromaKeyThreshold_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomChromaKeyThreshold_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomChromaKeyThreshold_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomChromaKeyThreshold_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomChromaKeyThreshold", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::InterchangeTextureFactoryNode_eventSetCustomChromaKeyThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::InterchangeTextureFactoryNode_eventSetCustomChromaKeyThreshold_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomCompositePower_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomCompositePower_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomCompositePower_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomCompositePower_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomCompositePower_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomCompositePower_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomCompositePower", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::InterchangeTextureFactoryNode_eventSetCustomCompositePower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::InterchangeTextureFactoryNode_eventSetCustomCompositePower_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomCompositeTextureMode_Parms
		{
			uint8 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomCompositeTextureMode_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomCompositeTextureMode_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomCompositeTextureMode_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomCompositeTextureMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomCompositeTextureMode_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomCompositeTextureMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::InterchangeTextureFactoryNode_eventSetCustomCompositeTextureMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::InterchangeTextureFactoryNode_eventSetCustomCompositeTextureMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomCompressionNoAlpha_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomCompressionNoAlpha_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomCompressionNoAlpha_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomCompressionNoAlpha_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomCompressionNoAlpha_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomCompressionNoAlpha_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomCompressionNoAlpha_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomCompressionNoAlpha", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::InterchangeTextureFactoryNode_eventSetCustomCompressionNoAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::InterchangeTextureFactoryNode_eventSetCustomCompressionNoAlpha_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomCompressionQuality_Parms
		{
			uint8 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomCompressionQuality_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomCompressionQuality_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomCompressionQuality_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomCompressionQuality_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomCompressionQuality_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomCompressionQuality", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::InterchangeTextureFactoryNode_eventSetCustomCompressionQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::InterchangeTextureFactoryNode_eventSetCustomCompressionQuality_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomCompressionSettings_Parms
		{
			uint8 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomCompressionSettings_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomCompressionSettings_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomCompressionSettings_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomCompressionSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomCompressionSettings_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomCompressionSettings", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::InterchangeTextureFactoryNode_eventSetCustomCompressionSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::InterchangeTextureFactoryNode_eventSetCustomCompressionSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomDeferCompression_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomDeferCompression_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomDeferCompression_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomDeferCompression_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomDeferCompression_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomDeferCompression_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomDeferCompression_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomDeferCompression", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::InterchangeTextureFactoryNode_eventSetCustomDeferCompression_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::InterchangeTextureFactoryNode_eventSetCustomDeferCompression_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomDownscale_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomDownscale_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomDownscale_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomDownscale_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomDownscale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomDownscale_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomDownscale", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::InterchangeTextureFactoryNode_eventSetCustomDownscale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::InterchangeTextureFactoryNode_eventSetCustomDownscale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomDownscaleOptions_Parms
		{
			uint8 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomDownscaleOptions_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomDownscaleOptions_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomDownscaleOptions_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomDownscaleOptions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomDownscaleOptions_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomDownscaleOptions", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::InterchangeTextureFactoryNode_eventSetCustomDownscaleOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::InterchangeTextureFactoryNode_eventSetCustomDownscaleOptions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomFilter_Parms
		{
			uint8 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomFilter_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomFilter_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomFilter_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomFilter_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomFilter", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::InterchangeTextureFactoryNode_eventSetCustomFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::InterchangeTextureFactoryNode_eventSetCustomFilter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomLODBias_Parms
		{
			int32 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomLODBias_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomLODBias_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomLODBias_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomLODBias_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomLODBias_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomLODBias", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::InterchangeTextureFactoryNode_eventSetCustomLODBias_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::InterchangeTextureFactoryNode_eventSetCustomLODBias_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomLODGroup_Parms
		{
			uint8 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomLODGroup_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomLODGroup_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomLODGroup_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomLODGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomLODGroup_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomLODGroup", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::InterchangeTextureFactoryNode_eventSetCustomLODGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::InterchangeTextureFactoryNode_eventSetCustomLODGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomLossyCompressionAmount_Parms
		{
			uint8 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomLossyCompressionAmount_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomLossyCompressionAmount_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomLossyCompressionAmount_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomLossyCompressionAmount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomLossyCompressionAmount_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomLossyCompressionAmount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::InterchangeTextureFactoryNode_eventSetCustomLossyCompressionAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::InterchangeTextureFactoryNode_eventSetCustomLossyCompressionAmount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomMaxTextureSize_Parms
		{
			int32 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomMaxTextureSize_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomMaxTextureSize_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomMaxTextureSize_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomMaxTextureSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomMaxTextureSize_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomMaxTextureSize", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::InterchangeTextureFactoryNode_eventSetCustomMaxTextureSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::InterchangeTextureFactoryNode_eventSetCustomMaxTextureSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomMipGenSettings_Parms
		{
			uint8 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomMipGenSettings_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomMipGenSettings_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomMipGenSettings_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomMipGenSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomMipGenSettings_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomMipGenSettings", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::InterchangeTextureFactoryNode_eventSetCustomMipGenSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::InterchangeTextureFactoryNode_eventSetCustomMipGenSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomMipLoadOptions_Parms
		{
			uint8 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomMipLoadOptions_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomMipLoadOptions_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomMipLoadOptions_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomMipLoadOptions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomMipLoadOptions_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomMipLoadOptions", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::InterchangeTextureFactoryNode_eventSetCustomMipLoadOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::InterchangeTextureFactoryNode_eventSetCustomMipLoadOptions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomPaddingColor_Parms
		{
			FColor AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomPaddingColor_Parms, AttributeValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomPaddingColor_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomPaddingColor_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomPaddingColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomPaddingColor_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomPaddingColor", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::InterchangeTextureFactoryNode_eventSetCustomPaddingColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::InterchangeTextureFactoryNode_eventSetCustomPaddingColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomPowerOfTwoMode_Parms
		{
			uint8 AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomPowerOfTwoMode_Parms, AttributeValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomPowerOfTwoMode_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomPowerOfTwoMode_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomPowerOfTwoMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomPowerOfTwoMode_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomPowerOfTwoMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::InterchangeTextureFactoryNode_eventSetCustomPowerOfTwoMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::InterchangeTextureFactoryNode_eventSetCustomPowerOfTwoMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomPreferCompressedSourceData_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomPreferCompressedSourceData_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomPreferCompressedSourceData_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomPreferCompressedSourceData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomPreferCompressedSourceData_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture | Import Settings" },
		{ "Comment", "/*\n\x09 * Should the factory tell the translator to provide a compressed source data payload when available.\n\x09 * This will generally result in smaller assets, but some operations like the texture build might be slower because the source data will need to be uncompressed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "* Should the factory tell the translator to provide a compressed source data payload when available.\n* This will generally result in smaller assets, but some operations like the texture build might be slower because the source data will need to be uncompressed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomPreferCompressedSourceData", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::InterchangeTextureFactoryNode_eventSetCustomPreferCompressedSourceData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::InterchangeTextureFactoryNode_eventSetCustomPreferCompressedSourceData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomSRGB_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomSRGB_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomSRGB_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomSRGB_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomSRGB", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::InterchangeTextureFactoryNode_eventSetCustomSRGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::InterchangeTextureFactoryNode_eventSetCustomSRGB_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomTranslatedTextureNodeUid_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeTextureFactoryNode_eventSetCustomTranslatedTextureNodeUid_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomTranslatedTextureNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomTranslatedTextureNodeUid_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "Comment", "/**\n\x09 * Set the translated texture node unique ID. This is the reference to the node that was create by the translator and this node is needed to get the texture payload.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
		{ "ToolTip", "Set the translated texture node unique ID. This is the reference to the node that was create by the translator and this node is needed to get the texture payload." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomTranslatedTextureNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::InterchangeTextureFactoryNode_eventSetCustomTranslatedTextureNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::InterchangeTextureFactoryNode_eventSetCustomTranslatedTextureNodeUid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics
	{
		struct InterchangeTextureFactoryNode_eventSetCustomVirtualTextureStreaming_Parms
		{
			bool AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomVirtualTextureStreaming_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomVirtualTextureStreaming_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_AttributeValue_MetaData), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_AttributeValue_MetaData) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomVirtualTextureStreaming_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomVirtualTextureStreaming_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureFactoryNode_eventSetCustomVirtualTextureStreaming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeTextureFactoryNode_eventSetCustomVirtualTextureStreaming_Parms), &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureFactoryNode, nullptr, "SetCustomVirtualTextureStreaming", nullptr, nullptr, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::InterchangeTextureFactoryNode_eventSetCustomVirtualTextureStreaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::InterchangeTextureFactoryNode_eventSetCustomVirtualTextureStreaming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode_NoRegister()
	{
		return UInterchangeTextureFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTextureFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTextureFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureFactoryNode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeTextureFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightness, "GetCustomAdjustBrightness" }, // 129659689
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustBrightnessCurve, "GetCustomAdjustBrightnessCurve" }, // 995141309
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustHue, "GetCustomAdjustHue" }, // 2404373763
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMaxAlpha, "GetCustomAdjustMaxAlpha" }, // 3631477966
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustMinAlpha, "GetCustomAdjustMinAlpha" }, // 4084561511
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustRGBCurve, "GetCustomAdjustRGBCurve" }, // 1572717024
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustSaturation, "GetCustomAdjustSaturation" }, // 3850551185
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAdjustVibrance, "GetCustomAdjustVibrance" }, // 3188159916
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAllowNonPowerOfTwo, "GetCustomAllowNonPowerOfTwo" }, // 1128420438
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomAlphaCoverageThresholds, "GetCustomAlphaCoverageThresholds" }, // 1751010401
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombChromaKeyTexture, "GetCustombChromaKeyTexture" }, // 483143768
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombDoScaleMipsForAlphaCoverage, "GetCustombDoScaleMipsForAlphaCoverage" }, // 1984425510
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombFlipGreenChannel, "GetCustombFlipGreenChannel" }, // 2986847914
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombPreserveBorder, "GetCustombPreserveBorder" }, // 4280902812
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustombUseLegacyGamma, "GetCustombUseLegacyGamma" }, // 3657857482
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyColor, "GetCustomChromaKeyColor" }, // 2471594320
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomChromaKeyThreshold, "GetCustomChromaKeyThreshold" }, // 338305964
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositePower, "GetCustomCompositePower" }, // 3268001768
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompositeTextureMode, "GetCustomCompositeTextureMode" }, // 2252043396
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionNoAlpha, "GetCustomCompressionNoAlpha" }, // 1599397651
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionQuality, "GetCustomCompressionQuality" }, // 3895687729
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomCompressionSettings, "GetCustomCompressionSettings" }, // 2470817346
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDeferCompression, "GetCustomDeferCompression" }, // 759632415
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscale, "GetCustomDownscale" }, // 3668481567
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomDownscaleOptions, "GetCustomDownscaleOptions" }, // 1332924374
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomFilter, "GetCustomFilter" }, // 70727203
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODBias, "GetCustomLODBias" }, // 3721820030
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLODGroup, "GetCustomLODGroup" }, // 1956811471
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomLossyCompressionAmount, "GetCustomLossyCompressionAmount" }, // 4220042280
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMaxTextureSize, "GetCustomMaxTextureSize" }, // 1664802065
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipGenSettings, "GetCustomMipGenSettings" }, // 1660738507
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomMipLoadOptions, "GetCustomMipLoadOptions" }, // 2123464602
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPaddingColor, "GetCustomPaddingColor" }, // 2107159897
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPowerOfTwoMode, "GetCustomPowerOfTwoMode" }, // 757284095
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomPreferCompressedSourceData, "GetCustomPreferCompressedSourceData" }, // 571622189
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomSRGB, "GetCustomSRGB" }, // 1301792914
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomTranslatedTextureNodeUid, "GetCustomTranslatedTextureNodeUid" }, // 665332937
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetCustomVirtualTextureStreaming, "GetCustomVirtualTextureStreaming" }, // 3296838440
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_GetObjectClass, "GetObjectClass" }, // 3017179970
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_InitializeTextureNode, "InitializeTextureNode" }, // 2190079089
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightness, "SetCustomAdjustBrightness" }, // 1510091607
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustBrightnessCurve, "SetCustomAdjustBrightnessCurve" }, // 2617714357
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustHue, "SetCustomAdjustHue" }, // 871516388
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMaxAlpha, "SetCustomAdjustMaxAlpha" }, // 954798788
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustMinAlpha, "SetCustomAdjustMinAlpha" }, // 948935307
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustRGBCurve, "SetCustomAdjustRGBCurve" }, // 2238471290
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustSaturation, "SetCustomAdjustSaturation" }, // 934040866
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAdjustVibrance, "SetCustomAdjustVibrance" }, // 1745393587
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAllowNonPowerOfTwo, "SetCustomAllowNonPowerOfTwo" }, // 793557533
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomAlphaCoverageThresholds, "SetCustomAlphaCoverageThresholds" }, // 1150589745
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombChromaKeyTexture, "SetCustombChromaKeyTexture" }, // 1999012518
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombDoScaleMipsForAlphaCoverage, "SetCustombDoScaleMipsForAlphaCoverage" }, // 3093726488
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombFlipGreenChannel, "SetCustombFlipGreenChannel" }, // 1719211275
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombPreserveBorder, "SetCustombPreserveBorder" }, // 2746611948
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustombUseLegacyGamma, "SetCustombUseLegacyGamma" }, // 2052911146
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyColor, "SetCustomChromaKeyColor" }, // 4216218115
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomChromaKeyThreshold, "SetCustomChromaKeyThreshold" }, // 3206131019
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositePower, "SetCustomCompositePower" }, // 2071270698
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompositeTextureMode, "SetCustomCompositeTextureMode" }, // 2805807905
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionNoAlpha, "SetCustomCompressionNoAlpha" }, // 1018636509
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionQuality, "SetCustomCompressionQuality" }, // 2313052489
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomCompressionSettings, "SetCustomCompressionSettings" }, // 3503015798
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDeferCompression, "SetCustomDeferCompression" }, // 3117478666
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscale, "SetCustomDownscale" }, // 3244392521
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomDownscaleOptions, "SetCustomDownscaleOptions" }, // 730974570
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomFilter, "SetCustomFilter" }, // 177929373
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODBias, "SetCustomLODBias" }, // 4019624341
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLODGroup, "SetCustomLODGroup" }, // 737888676
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomLossyCompressionAmount, "SetCustomLossyCompressionAmount" }, // 4008199100
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMaxTextureSize, "SetCustomMaxTextureSize" }, // 776120513
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipGenSettings, "SetCustomMipGenSettings" }, // 3738727897
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomMipLoadOptions, "SetCustomMipLoadOptions" }, // 3809515247
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPaddingColor, "SetCustomPaddingColor" }, // 2699628032
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPowerOfTwoMode, "SetCustomPowerOfTwoMode" }, // 379381325
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomPreferCompressedSourceData, "SetCustomPreferCompressedSourceData" }, // 3380765293
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomSRGB, "SetCustomSRGB" }, // 2856868323
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomTranslatedTextureNodeUid, "SetCustomTranslatedTextureNodeUid" }, // 1765562480
		{ &Z_Construct_UFunction_UInterchangeTextureFactoryNode_SetCustomVirtualTextureStreaming, "SetCustomVirtualTextureStreaming" }, // 1825178031
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureFactoryNode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTextureFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTextureFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTextureFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureFactoryNode_Statics::ClassParams = {
		&UInterchangeTextureFactoryNode::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTextureFactoryNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTextureFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTextureFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeTextureFactoryNode>()
	{
		return UInterchangeTextureFactoryNode::StaticClass();
	}
	UInterchangeTextureFactoryNode::UInterchangeTextureFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureFactoryNode);
	UInterchangeTextureFactoryNode::~UInterchangeTextureFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureFactoryNode, UInterchangeTextureFactoryNode::StaticClass, TEXT("UInterchangeTextureFactoryNode"), &Z_Registration_Info_UClass_UInterchangeTextureFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureFactoryNode), 3663074607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureFactoryNode_h_2528439411(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
