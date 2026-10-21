#include "DIY_StylizedMaterialLibrary.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "Materials/Material.h"
#include "Materials/MaterialExpressionAdd.h"
#include "Materials/MaterialExpressionComponentMask.h"
#include "Materials/MaterialExpressionCollectionParameter.h"
#include "Materials/MaterialExpressionDotProduct.h"
#include "Materials/MaterialExpressionLinearInterpolate.h"
#include "Materials/MaterialExpressionMultiply.h"
#include "Materials/MaterialExpressionNormalize.h"
#include "Materials/MaterialExpressionPixelNormalWS.h"
#include "Materials/MaterialExpressionSaturate.h"
#include "Materials/MaterialExpressionSmoothStep.h"
#include "Materials/MaterialExpressionSubtract.h"
#include "Materials/MaterialExpressionTextureSampleParameter2D.h"
#include "Materials/MaterialExpressionVectorParameter.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialParameterCollection.h"
#include "Editor.h"
#include "MaterialTypes.h"
#include "Misc/PackageName.h"
#include "UObject/Package.h"
#include "UObject/SavePackage.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/UnrealType.h"

namespace
{
    const TCHAR *RenderingPackagePath = TEXT("/Game/AroundMe/Rendering");
    const TCHAR *CollectionPackagePath = TEXT("/Game/AroundMe/Rendering/MPC_AroundMeStylized");
    const TCHAR *MaterialPackagePath = TEXT("/Game/AroundMe/Rendering/M_AroundMe_Stylized");
    const TCHAR *InstancePackagePath = TEXT("/Game/AroundMe/Rendering/MI_AroundMe_Stylized_Default");

    const FName SunDirectionName(TEXT("StylizedSunDirection"));
    const FName LightColorName(TEXT("StylizedLightColor"));
    const FName ShadowColorName(TEXT("StylizedShadowColor"));
    const FName BandThresholdName(TEXT("StylizedBandThreshold"));
    const FName BandSoftnessName(TEXT("StylizedBandSoftness"));

    template <typename AssetType>
    AssetType *LoadOrCreateAsset(const TCHAR *PackagePath, const TCHAR *AssetName)
    {
        const FString ObjectPath = FString::Printf(TEXT("%s.%s"), PackagePath, AssetName);
        if (AssetType *ExistingAsset = LoadObject<AssetType>(nullptr, *ObjectPath))
        {
            return ExistingAsset;
        }

        UPackage *Package = CreatePackage(PackagePath);
        if (!Package)
        {
            return nullptr;
        }

        AssetType *NewAsset = NewObject<AssetType>(
            Package,
            FName(AssetName),
            RF_Public | RF_Standalone | RF_Transactional);
        if (NewAsset)
        {
            FAssetRegistryModule::AssetCreated(NewAsset);
            Package->SetDirtyFlag(true);
        }
        return NewAsset;
    }

    bool SaveAsset(UObject *Asset)
    {
        if (!Asset)
        {
            return false;
        }

        UPackage *Package = Asset->GetOutermost();
        const FString PackageFileName = FPackageName::LongPackageNameToFilename(
            Package->GetName(),
            FPackageName::GetAssetPackageExtension());

        FSavePackageArgs SaveArgs;
        SaveArgs.TopLevelFlags = RF_Public | RF_Standalone;
        SaveArgs.Error = GError;
        Package->SetDirtyFlag(true);
        return UPackage::SavePackage(Package, Asset, *PackageFileName, SaveArgs);
    }

    void AddScalarParameter(
        UMaterialParameterCollection *Collection,
        FName ParameterName,
        float DefaultValue)
    {
        FCollectionScalarParameter Parameter;
        Parameter.ParameterName = ParameterName;
        Parameter.DefaultValue = DefaultValue;
        Collection->ScalarParameters.Add(Parameter);
    }

    void AddVectorParameter(
        UMaterialParameterCollection *Collection,
        FName ParameterName,
        const FLinearColor &DefaultValue)
    {
        FCollectionVectorParameter Parameter;
        Parameter.ParameterName = ParameterName;
        Parameter.DefaultValue = DefaultValue;
        Collection->VectorParameters.Add(Parameter);
    }

    void ConfigureCollection(UMaterialParameterCollection *Collection)
    {
        Collection->Modify();
        Collection->ScalarParameters.Reset();
        Collection->VectorParameters.Reset();

        AddScalarParameter(Collection, BandThresholdName, 0.45f);
        AddScalarParameter(Collection, BandSoftnessName, 0.12f);
        AddVectorParameter(Collection, SunDirectionName, FLinearColor(0.4f, 0.5f, 0.75f, 1.0f));
        AddVectorParameter(Collection, LightColorName, FLinearColor(1.0f, 0.88f, 0.72f, 1.0f));
        AddVectorParameter(Collection, ShadowColorName, FLinearColor(0.25f, 0.31f, 0.42f, 1.0f));

        Collection->PostEditChange();
        Collection->MarkPackageDirty();
    }

    template <typename ExpressionType>
    ExpressionType *AddExpression(UMaterial *Material, int32 EditorX, int32 EditorY)
    {
        ExpressionType *Expression = NewObject<ExpressionType>(Material);
        Expression->MaterialExpressionEditorX = EditorX;
        Expression->MaterialExpressionEditorY = EditorY;
        Material->GetExpressionCollection().AddExpression(Expression);
        return Expression;
    }

    UMaterialExpressionCollectionParameter *AddCollectionParameter(
        UMaterial *Material,
        UMaterialParameterCollection *Collection,
        FName ParameterName,
        int32 EditorX,
        int32 EditorY)
    {
        UMaterialExpressionCollectionParameter *Expression =
            AddExpression<UMaterialExpressionCollectionParameter>(Material, EditorX, EditorY);
        Expression->Collection = Collection;
        Expression->ParameterName = ParameterName;
        Expression->ParameterId = Collection->GetParameterId(ParameterName);
        return Expression;
    }

    UMaterialExpressionComponentMask *AddRgbMask(
        UMaterial *Material,
        UMaterialExpression *Source,
        int32 EditorX,
        int32 EditorY)
    {
        UMaterialExpressionComponentMask *Mask =
            AddExpression<UMaterialExpressionComponentMask>(Material, EditorX, EditorY);
        Mask->Input.Connect(0, Source);
        Mask->R = 1;
        Mask->G = 1;
        Mask->B = 1;
        Mask->A = 0;
        return Mask;
    }

    UMaterial *ConfigureMaterial(
        UMaterial *Material,
        UMaterialParameterCollection *Collection)
    {
        Material->Modify();
        Material->GetExpressionCollection().Empty();

        UMaterialExpressionTextureSampleParameter2D *Texture =
            AddExpression<UMaterialExpressionTextureSampleParameter2D>(Material, -1200, -240);
        Texture->ParameterName = TEXT("BaseColorTexture");
        Texture->Group = TEXT("AroundMe Stylized");
        Texture->SortPriority = 0;
        Texture->SetDefaultTexture();

        UMaterialExpressionComponentMask *TextureRgb =
            AddRgbMask(Material, Texture, -1000, -240);

        UMaterialExpressionVectorParameter *Tint =
            AddExpression<UMaterialExpressionVectorParameter>(Material, -1200, 40);
        Tint->ParameterName = TEXT("AlbedoTint");
        Tint->DefaultValue = FLinearColor::White;
        Tint->Group = TEXT("AroundMe Stylized");
        Tint->SortPriority = 1;

        UMaterialExpressionComponentMask *TintRgb =
            AddRgbMask(Material, Tint, -1000, 40);

        UMaterialExpressionMultiply *BaseColor =
            AddExpression<UMaterialExpressionMultiply>(Material, -900, -120);
        BaseColor->A.Connect(0, TextureRgb);
        BaseColor->B.Connect(0, TintRgb);

        UMaterialExpressionPixelNormalWS *Normal =
            AddExpression<UMaterialExpressionPixelNormalWS>(Material, -1200, 420);
        UMaterialExpressionCollectionParameter *SunDirection =
            AddCollectionParameter(Material, Collection, SunDirectionName, -1200, 620);
        UMaterialExpressionComponentMask *SunDirectionRgb =
            AddRgbMask(Material, SunDirection, -1000, 620);
        UMaterialExpressionNormalize *NormalizedSunDirection =
            AddExpression<UMaterialExpressionNormalize>(Material, -950, 620);
        NormalizedSunDirection->VectorInput.Connect(0, SunDirectionRgb);

        UMaterialExpressionDotProduct *NdotL =
            AddExpression<UMaterialExpressionDotProduct>(Material, -700, 480);
        NdotL->A.Connect(0, Normal);
        NdotL->B.Connect(0, NormalizedSunDirection);

        UMaterialExpressionSaturate *SaturatedNdotL =
            AddExpression<UMaterialExpressionSaturate>(Material, -500, 480);
        SaturatedNdotL->Input.Connect(0, NdotL);

        UMaterialExpressionCollectionParameter *BandThreshold =
            AddCollectionParameter(Material, Collection, BandThresholdName, -700, 760);
        UMaterialExpressionCollectionParameter *BandSoftness =
            AddCollectionParameter(Material, Collection, BandSoftnessName, -700, 920);

        UMaterialExpressionSubtract *BandMin =
            AddExpression<UMaterialExpressionSubtract>(Material, -420, 760);
        BandMin->A.Connect(0, BandThreshold);
        BandMin->B.Connect(0, BandSoftness);

        UMaterialExpressionAdd *BandMax =
            AddExpression<UMaterialExpressionAdd>(Material, -420, 940);
        BandMax->A.Connect(0, BandThreshold);
        BandMax->B.Connect(0, BandSoftness);

        UMaterialExpressionSmoothStep *Band =
            AddExpression<UMaterialExpressionSmoothStep>(Material, -180, 560);
        Band->Min.Connect(0, BandMin);
        Band->Max.Connect(0, BandMax);
        Band->Value.Connect(0, SaturatedNdotL);

        UMaterialExpressionCollectionParameter *ShadowColor =
            AddCollectionParameter(Material, Collection, ShadowColorName, -420, 120);
        UMaterialExpressionComponentMask *ShadowColorRgb =
            AddRgbMask(Material, ShadowColor, -180, 120);
        UMaterialExpressionCollectionParameter *LightColor =
            AddCollectionParameter(Material, Collection, LightColorName, -420, 300);
        UMaterialExpressionComponentMask *LightColorRgb =
            AddRgbMask(Material, LightColor, -180, 300);

        UMaterialExpressionLinearInterpolate *LightingBand =
            AddExpression<UMaterialExpressionLinearInterpolate>(Material, 80, 220);
        LightingBand->A.Connect(0, ShadowColorRgb);
        LightingBand->B.Connect(0, LightColorRgb);
        LightingBand->Alpha.Connect(0, Band);

        UMaterialExpressionMultiply *ShadedColor =
            AddExpression<UMaterialExpressionMultiply>(Material, 340, -40);
        ShadedColor->A.Connect(0, BaseColor);
        ShadedColor->B.Connect(0, LightingBand);

        UMaterialEditorOnlyData *EditorData = Material->GetEditorOnlyData();
        if (!EditorData)
        {
            return nullptr;
        }

        EditorData->BaseColor.Connect(0, ShadedColor);
        EditorData->Roughness.UseConstant = 1;
        EditorData->Roughness.Constant = 0.88f;
        EditorData->Metallic.UseConstant = 1;
        EditorData->Metallic.Constant = 0.0f;
        EditorData->Specular.UseConstant = 1;
        EditorData->Specular.Constant = 0.35f;

        Material->BlendMode = BLEND_Opaque;
        Material->SetShadingModel(MSM_DefaultLit);
        Material->bFullyRough = true;
        Material->bUsedWithSkeletalMesh = true;
        Material->bUsedWithInstancedStaticMeshes = true;
        Material->bUsedWithNanite = true;
        Material->PreEditChange(nullptr);
        Material->PostEditChange();
        Material->MarkPackageDirty();
        return Material;
    }

    UMaterialInstanceConstant *ConfigureDefaultInstance(
        UMaterialInstanceConstant *Instance,
        UMaterial *Parent)
    {
        Instance->Modify();
        Instance->SetParentEditorOnly(Parent, true);
        Instance->SetVectorParameterValueEditorOnly(
            FMaterialParameterInfo(TEXT("AlbedoTint")),
            FLinearColor::White);
        Instance->PostEditChange();
        Instance->MarkPackageDirty();
        return Instance;
    }
}

namespace DIYStylizedMaterialLibrary
{
    bool Generate(FString &OutMessage)
    {
        UMaterialParameterCollection *Collection = LoadOrCreateAsset<UMaterialParameterCollection>(
            CollectionPackagePath,
            TEXT("MPC_AroundMeStylized"));
        UMaterial *Material = LoadOrCreateAsset<UMaterial>(
            MaterialPackagePath,
            TEXT("M_AroundMe_Stylized"));
        UMaterialInstanceConstant *Instance = LoadOrCreateAsset<UMaterialInstanceConstant>(
            InstancePackagePath,
            TEXT("MI_AroundMe_Stylized_Default"));

        if (!Collection || !Material || !Instance)
        {
            OutMessage = TEXT("Failed to create one or more stylized rendering assets.");
            return false;
        }

        ConfigureCollection(Collection);
        if (!ConfigureMaterial(Material, Collection) || !ConfigureDefaultInstance(Instance, Material))
        {
            OutMessage = TEXT("Stylized material graph configuration failed.");
            return false;
        }

        const bool bSaved = SaveAsset(Collection) && SaveAsset(Material) && SaveAsset(Instance);
        OutMessage = bSaved
                         ? TEXT("Generated /Game/AroundMe/Rendering/MPC_AroundMeStylized, M_AroundMe_Stylized and MI_AroundMe_Stylized_Default.")
                         : TEXT("Stylized assets were created but at least one package could not be saved.");
        return bSaved;
    }
}
