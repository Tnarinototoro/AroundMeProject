// Copyright Sun BoHeng 2022
#include "RuntimeVertexPainterBPLibrary.h"
#include "RenderResource.h"
#include "StaticMeshComponentLODInfo.h"
#include "Kismet/KismetMathLibrary.h"
#include "Rendering/SkeletalMeshLODRenderData.h"
#include "Rendering/SkeletalMeshRenderData.h"

#include "Engine/SkeletalMesh.h"
#include "Engine/StaticMesh.h"
#include "Curves/CurveFloat.h"
#include "Components/SkeletalMeshComponent.h"

#include "Logging/TokenizedMessage.h"
#include "Logging/MessageLog.h"
#include "Misc/UObjectToken.h"

URuntimeVertexPainterBPLibrary::URuntimeVertexPainterBPLibrary(const FObjectInitializer &ObjectInitializer)
    : Super(ObjectInitializer)
{
}

bool URuntimeVertexPainterBPLibrary::BeginPaintVertexColor_SM(UStaticMeshComponent *StaticMeshComponent,
                                                              FRVPContext &OutContext, EPaintChannel PaintChannel, bool bPaintInSingleLOD, int32 LODIndex)
{

    // Firstly,we need to ensure all information we need is valid
    if (!StaticMeshComponent || !StaticMeshComponent->GetStaticMesh())
    {
        UE_LOG(LogTemp, Warning, TEXT("No Mesh Found"));
        return false;
    }
    const int32 NumMeshLODs = StaticMeshComponent->GetStaticMesh()->GetNumLODs();
    StaticMeshComponent->SetLODDataCount(NumMeshLODs, NumMeshLODs);

    if (bPaintInSingleLOD)
    {
        if (!StaticMeshComponent->LODData.IsValidIndex(LODIndex))
        {
            UE_LOG(LogTemp, Warning, TEXT("Invalid LOD,LOD index should be 0 to %d"),
                   StaticMeshComponent->LODData.Num() - 1);
            return false;
        }
        FStaticMeshComponentLODInfo &MeshLODInfo = StaticMeshComponent->LODData[LODIndex];

        FVertexColorsArray VertexColors;
        VertexColors.VertexColors = GetVertexColorsInLOD(StaticMeshComponent, LODIndex);

        // If paint in single LOD,LODIndex = the LOD needs to paint,and  VertexColorsArray has only one element
        // So that when we use for(){} to traverse VertexColorsArray,only LOD(LODIndex) will be paint
        OutContext.VertexColorsArray.Init(VertexColors, 1);
        OutContext.LODIndex = LODIndex;
    }

    else
    {
        // If paint in single LOD,LODIndex = 0,and  VertexColorsArray.Num()=LODNum
        // So that when we use for(){} to traverse VertexColorsArray,all LODs will be paint
        OutContext.VertexColorsArray = GetVertexColorsInAllLOD(StaticMeshComponent);
        OutContext.LODIndex = 0;
    }

    // Staging all info we need into context
    OutContext.StaticMeshComponent = StaticMeshComponent;
    OutContext.bSingleLOD = bPaintInSingleLOD;
    OutContext.Channel = PaintChannel;

    return true;
}

void URuntimeVertexPainterBPLibrary::EndPaintVertexColor_SM(FRVPContext Context)
{
    if (!Context.StaticMeshComponent || !Context.StaticMeshComponent->GetStaticMesh())
    {
        return;
    }

    // Traverse VertexColorsArray to override vertex colors in LOD
    // If paint in single LOD,int32 LODIndex = Context.LODIndex will tell us the LOD which need to be painted
    int32 LODIndex = Context.LODIndex;
    for (FVertexColorsArray VertexColorsArray : Context.VertexColorsArray)
    {
        TArray<FColor> VertexColors = VertexColorsArray.VertexColors;
        FStaticMeshComponentLODInfo &LODInfo = Context.StaticMeshComponent->LODData[LODIndex];

        LODInfo.OverrideVertexColors = new FColorVertexBuffer;
        LODInfo.OverrideVertexColors->InitFromColorArray(VertexColors);

        BeginInitResource(LODInfo.OverrideVertexColors);

        LODIndex++;
    }

    Context.StaticMeshComponent->MarkRenderStateDirty();
    Context.StaticMeshComponent->bDisallowMeshPaintPerInstance = true;
    return;
}

void URuntimeVertexPainterBPLibrary::ContextPaintVertexColorInShape_SM(
    UPARAM(ref) FRVPContext &Context, FVector Position, FVector Radius, FRotator Rotation, EPaintShape PaintShape, FLinearColor Color, EPaintMode inMode, float Opacity,
    UCurveFloat *FallOff, bool bConvertToSRGB)
{

    if (!Context.StaticMeshComponent || !Context.StaticMeshComponent->GetStaticMesh())
    {
        return;
    }
    UStaticMesh *InMesh = Context.StaticMeshComponent->GetStaticMesh();

    if (!InMesh->bAllowCPUAccess)
    {
        FMessageLog("PIE").Warning()->AddToken(FTextToken::Create(FText::FromString(FString(TEXT("Try to read mesh")))))->AddToken(FUObjectToken::Create(InMesh))->AddToken(FTextToken::Create(FText::FromString(FString(TEXT("but 'Allow CPU Access' is not enabled. This is required for paint vertex color in shape when packed")))));
        FMessageLog("PIE").Warning()->AddToken(FTextToken::Create(FText::FromString(FString(TEXT("To fix it,you should find this:")))))->AddToken(FUObjectToken::Create(InMesh))->AddToken(FTextToken::Create(FText::FromString(FString(TEXT("and search 'Allow CPU Access' in detail panel,make it ture")))));

        return;
    }

    // Calculate a FMatrix to transform vertices form local space to brush Shape
    const FTransform LocalToWorld = Context.StaticMeshComponent->GetComponentTransform();
    const FTransform WorldToShape = UKismetMathLibrary::MakeTransform(Position, Rotation, FVector::OneVector).Inverse();
    const FMatrix LocalToShape = UKismetMathLibrary::Multiply_MatrixMatrix(LocalToWorld.ToMatrixWithScale(), WorldToShape.ToMatrixWithScale());

    // Traverse VertexColorsArray to calculate new vertex colors in LOD
    // If paint in single LOD,int32 LODIndex = Context.LODIndex will tell us the LOD which need to be painted
    int32 LODIndex = Context.LODIndex;
    for (FVertexColorsArray &VertexColorsArray : Context.VertexColorsArray)
    {
        // Get vertices position information
        const FPositionVertexBuffer &PositionVertexBuffer = Context.StaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[LODIndex].VertexBuffers.PositionVertexBuffer;
        const uint32 NumVertices = PositionVertexBuffer.GetNumVertices();

        // Traverse all vertices
        for (uint32 VertexIndex = 0; VertexIndex < NumVertices; VertexIndex++)
        {

            const FVector3f &VertexPosition = PositionVertexBuffer.VertexPosition(VertexIndex);
            // This is a normalized distance
            float distance;
            const FVector LocalPosition = UKismetMathLibrary::Matrix_TransformPosition(LocalToShape, Vector3fToVector(VertexPosition)) / Radius;
            switch (PaintShape)
            {
                // If sphere,this is distance to sphere center
            case EPaintShape::Sphere:
                distance = UKismetMathLibrary::Vector_Distance(LocalPosition, FVector::ZeroVector);
                break;
                // If Bos,use max axis value
            case EPaintShape::Box:
                distance = LocalPosition.GetAbsMax();
                break;
            default:
                distance = 2;
            }

            // If distance <= 1 means vertex is in shape range,so it needs painting
            if (distance <= 1)
            {
                // Use Opacity and FallOff Curve to calculate final paint alpha value
                float alpha;
                if (FallOff)
                {
                    alpha = FallOff->GetFloatValue(distance) * Opacity;
                }
                else
                {
                    alpha = Opacity;
                }

                FLinearColor BaseColor = VertexColorsArray.VertexColors[VertexIndex];

                FLinearColor FinalColor;

                // Switch PaintChannel,different PaintChannel value needs different ways to mix color
                switch (static_cast<int32>(Context.Channel))
                {
                case 0:
                    FinalColor = UKismetMathLibrary::LinearColorLerp(FLinearColor::Black, Color, Opacity);
                    break;

                case 1:
                    FinalColor = UKismetMathLibrary::MakeColor(UKismetMathLibrary::Lerp(0, Color.R, Opacity), 0, 0, 0);
                    break;

                case 2:
                    FinalColor = UKismetMathLibrary::MakeColor(0, UKismetMathLibrary::Lerp(0, Color.G, Opacity), 0, 0);
                    break;

                case 3:
                    FinalColor = UKismetMathLibrary::MakeColor(0, 0, UKismetMathLibrary::Lerp(0, Color.B, Opacity), 0);
                    break;

                case 4:
                    FinalColor = UKismetMathLibrary::MakeColor(0, 0, 0, UKismetMathLibrary::Lerp(0, Color.A, Opacity));
                    break;

                default:
                    checkf(false, TEXT("Invalid channel choice given"));
                    FinalColor = FLinearColor::Black;
                }

                {
                    int32 Final_R = VertexColorsArray.VertexColors[VertexIndex].R;
                    int32 Final_G = VertexColorsArray.VertexColors[VertexIndex].G;
                    int32 Final_B = VertexColorsArray.VertexColors[VertexIndex].B;
                    int32 Final_A = VertexColorsArray.VertexColors[VertexIndex].A;
                    switch (inMode)
                    {
                    case EPaintMode::EPM_SET:
                    {

                        Final_R = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).R, 0, 255);
                        Final_G = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).G, 0, 255);
                        Final_B = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).B, 0, 255);
                        Final_A = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).A, 0, 255);

                        break;
                    }
                    case EPaintMode::EPM_ADD:
                    {
                        Final_R = FMath::Clamp(Final_R + (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                        Final_G = FMath::Clamp(Final_G + (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                        Final_B = FMath::Clamp(Final_B + (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                        Final_A = FMath::Clamp(Final_A + (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);

                        break;
                    }

                    case EPaintMode::EPM_SUB:
                    {
                        Final_R = FMath::Clamp(Final_R - (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                        Final_G = FMath::Clamp(Final_G - (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                        Final_B = FMath::Clamp(Final_B - (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                        Final_A = FMath::Clamp(Final_A - (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);

                        break;
                    }
                    case EPaintMode::EPM_MUL:
                    {
                        Final_R = FMath::Clamp(Final_R * (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                        Final_G = FMath::Clamp(Final_G * (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                        Final_B = FMath::Clamp(Final_B * (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                        Final_A = FMath::Clamp(Final_A * (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);
                        break;
                    }
                    default:
                    {
                        checkf(false, TEXT("invalid paint mode given"));
                        break;
                    }
                    }

                    VertexColorsArray.VertexColors[VertexIndex].R = Final_R;
                    VertexColorsArray.VertexColors[VertexIndex].G = Final_G;
                    VertexColorsArray.VertexColors[VertexIndex].B = Final_B;
                    VertexColorsArray.VertexColors[VertexIndex].A = Final_A;
                }
            }
        }
        LODIndex++;
    }

    return;
}

void URuntimeVertexPainterBPLibrary::ContextPaintAllVerticesColor_SM(FRVPContext &Context, FLinearColor Color, EPaintMode inMode, float Opacity, bool bConvertToSRGB)
{
    if (!Context.StaticMeshComponent || !Context.StaticMeshComponent->GetStaticMesh())
    {
        return;
    }

    // Traverse VertexColorsArray to calculate new vertex colors in LOD
    // If paint in single LOD,int32 LODIndex = Context.LODIndex will tell us the LOD which need to be painted
    int32 LODIndex = Context.LODIndex;
    for (FVertexColorsArray &VertexColorsArray : Context.VertexColorsArray)
    {

        const uint32 NumVertices = GetVerticesNum(Context.StaticMeshComponent->GetStaticMesh(), LODIndex);

        // Traverse all vertices
        for (uint32 VertexIndex = 0; VertexIndex < NumVertices; VertexIndex++)
        {

            FLinearColor BaseColor = VertexColorsArray.VertexColors[VertexIndex];

            FLinearColor FinalColor;

            // Switch PaintChannel,different PaintChannel value needs different ways to mix color
            switch (static_cast<int32>(Context.Channel))
            {
            case 0:
                FinalColor = UKismetMathLibrary::LinearColorLerp(FLinearColor::Black, Color, Opacity);
                break;

            case 1:
                FinalColor = UKismetMathLibrary::MakeColor(UKismetMathLibrary::Lerp(0, Color.R, Opacity), 0, 0, 0);
                break;

            case 2:
                FinalColor = UKismetMathLibrary::MakeColor(0, UKismetMathLibrary::Lerp(0, Color.G, Opacity), 0, 0);
                break;

            case 3:
                FinalColor = UKismetMathLibrary::MakeColor(0, 0, UKismetMathLibrary::Lerp(0, Color.B, Opacity), 0);
                break;

            case 4:
                FinalColor = UKismetMathLibrary::MakeColor(0, 0, 0, UKismetMathLibrary::Lerp(0, Color.A, Opacity));
                break;

            default:
                checkf(false, TEXT("Invalid channel choice given"));
                FinalColor = FLinearColor::Black;
            }

            {
                int32 Final_R = VertexColorsArray.VertexColors[VertexIndex].R;
                int32 Final_G = VertexColorsArray.VertexColors[VertexIndex].G;
                int32 Final_B = VertexColorsArray.VertexColors[VertexIndex].B;
                int32 Final_A = VertexColorsArray.VertexColors[VertexIndex].A;
                switch (inMode)
                {
                case EPaintMode::EPM_SET:
                {

                    Final_R = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).R, 0, 255);
                    Final_G = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).G, 0, 255);
                    Final_B = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).B, 0, 255);
                    Final_A = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).A, 0, 255);

                    break;
                }
                case EPaintMode::EPM_ADD:
                {
                    Final_R = FMath::Clamp(Final_R + (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                    Final_G = FMath::Clamp(Final_G + (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                    Final_B = FMath::Clamp(Final_B + (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                    Final_A = FMath::Clamp(Final_A + (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);

                    break;
                }

                case EPaintMode::EPM_SUB:
                {
                    Final_R = FMath::Clamp(Final_R - (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                    Final_G = FMath::Clamp(Final_G - (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                    Final_B = FMath::Clamp(Final_B - (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                    Final_A = FMath::Clamp(Final_A - (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);

                    break;
                }
                case EPaintMode::EPM_MUL:
                {
                    Final_R = FMath::Clamp(Final_R * (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                    Final_G = FMath::Clamp(Final_G * (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                    Final_B = FMath::Clamp(Final_B * (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                    Final_A = FMath::Clamp(Final_A * (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);
                    break;
                }
                default:
                {
                    checkf(false, TEXT("invalid paint mode given"));
                    break;
                }
                }

                VertexColorsArray.VertexColors[VertexIndex].R = Final_R;
                VertexColorsArray.VertexColors[VertexIndex].G = Final_G;
                VertexColorsArray.VertexColors[VertexIndex].B = Final_B;
                VertexColorsArray.VertexColors[VertexIndex].A = Final_A;
            }
        }
        LODIndex++;
    }

    return;
}

bool URuntimeVertexPainterBPLibrary::BeginPaintVertexColor_SKM(USkeletalMeshComponent *SkeletalMeshComponent,
                                                               FRVPContextSK &ContextSK, EPaintChannel PaintChannel, bool bPaintInSingleLOD, int32 LODIndex)
{

    // Firstly,we need to ensure all information we need is valid
    if (!SkeletalMeshComponent || !SkeletalMeshComponent->GetSkeletalMeshAsset())
    {
        UE_LOG(LogTemp, Warning, TEXT("No Skeletal Mesh Found"));
        return false;
    }

    SkeletalMeshComponent->InitLODInfos();

    if (bPaintInSingleLOD)
    {
        FVertexColorsArray VertexColors;
        VertexColors.VertexColors = SkeletalMeshGetVertexColorsInLOD(SkeletalMeshComponent, LODIndex);

        // If paint in single LOD,LODIndex = the LOD needs to paint,and  VertexColorsArray has only one element
        // So that when we use for(){} to traverse VertexColorsArray,only LOD(LODIndex) will be paint
        ContextSK.VertexColorsArray.Init(VertexColors, 1);
        ContextSK.LODIndex = LODIndex;
    }
    else
    {
        // If paint in single LOD,LODIndex = 0,and  VertexColorsArray.Num()=LODNum
        // So that when we use for(){} to traverse VertexColorsArray,all LODs will be paint
        ContextSK.VertexColorsArray = SkeletalMeshGetVertexColorsInAllLOD(SkeletalMeshComponent);
        ContextSK.LODIndex = 0;
    }

    // Staging all info we need into context
    ContextSK.SkeletalMeshComponent = SkeletalMeshComponent;
    ContextSK.bSingleLOD = bPaintInSingleLOD;
    ContextSK.Channel = PaintChannel;

    return true;
}

void URuntimeVertexPainterBPLibrary::EndPaintVertexColor_SKM(FRVPContextSK ContextSK)
{
    if (!ContextSK.SkeletalMeshComponent || !ContextSK.SkeletalMeshComponent->GetSkeletalMeshAsset())
    {
        UE_LOG(LogTemp, Warning, TEXT("No Skeletal Mesh Found"));
        return;
    }

    // Traverse VertexColorsArray to override vertex colors in LOD
    // If paint in single LOD,int32 LODIndex = Context.LODIndex will tell us the LOD which need to be painted
    int32 LODIndex = ContextSK.LODIndex;
    for (FVertexColorsArray VertexColorsArray : ContextSK.VertexColorsArray)
    {
        TArray<FColor> VertexColors = VertexColorsArray.VertexColors;
        FSkelMeshComponentLODInfo &MeshLODInfo = ContextSK.SkeletalMeshComponent->LODInfo[LODIndex];
        MeshLODInfo.OverrideVertexColors = new FColorVertexBuffer;
        MeshLODInfo.OverrideVertexColors->InitFromColorArray(VertexColors);

        BeginInitResource(MeshLODInfo.OverrideVertexColors);

        LODIndex++;
    }
    ContextSK.SkeletalMeshComponent->MarkRenderStateDirty();
    return;
}

void URuntimeVertexPainterBPLibrary::ContextPaintVertexColorInShape_SKM(
    FRVPContextSK &ContextSK, FVector Position, FVector Radius, FRotator Rotation, EPaintShape PaintShape, FLinearColor Color, EPaintMode inMode, float Opacity, UCurveFloat *FallOff,
    bool bConvertToSRGB)
{
    if (!ContextSK.SkeletalMeshComponent || !ContextSK.SkeletalMeshComponent->GetSkeletalMeshAsset())
    {
        UE_LOG(LogTemp, Warning, TEXT("No Skeletal Mesh Found"));
        return;
    }

    // Calculate a FMatrix to transform vertices form local space to brush Shape
    const FTransform LocalToWorld = ContextSK.SkeletalMeshComponent->GetComponentTransform();
    const FTransform WorldToShape = UKismetMathLibrary::MakeTransform(Position, Rotation, FVector::OneVector).Inverse();
    const FMatrix LocalToShape = UKismetMathLibrary::Multiply_MatrixMatrix(LocalToWorld.ToMatrixWithScale(), WorldToShape.ToMatrixWithScale());

    // Traverse VertexColorsArray to calculate new vertex colors in LOD
    // If paint in single LOD,int32 LODIndex = Context.LODIndex will tell us the LOD which need to be painted
    int32 LODIndex = ContextSK.LODIndex;
    for (FVertexColorsArray &VertexColorsArray : ContextSK.VertexColorsArray)
    {
        // Get vertices position information
        FSkeletalMeshLODRenderData &LODRenderData = ContextSK.SkeletalMeshComponent->GetSkeletalMeshAsset()->GetResourceForRendering()->LODRenderData[LODIndex];
        FSkinWeightVertexBuffer &SkinWeightVertexBuffer = LODRenderData.SkinWeightVertexBuffer;

        FPositionVertexBuffer &PositionVertexBuffer = LODRenderData.StaticVertexBuffers.PositionVertexBuffer;
        uint32 NumVertices = PositionVertexBuffer.GetNumVertices();

        for (uint32 VertexIndex = 0; VertexIndex < NumVertices; VertexIndex++)
        {
            const FVector3f &VertexPosition = USkeletalMeshComponent::GetSkinnedVertexPosition(
                ContextSK.SkeletalMeshComponent, VertexIndex, LODRenderData, SkinWeightVertexBuffer);

            // This is a normalized distance
            float distance;
            const FVector LocalPosition = UKismetMathLibrary::Matrix_TransformPosition(LocalToShape, Vector3fToVector(VertexPosition)) / Radius;

            switch (PaintShape)
            {
                // If sphere,this is distance to sphere center
            case EPaintShape::Sphere:
                distance = UKismetMathLibrary::Vector_Distance(LocalPosition, FVector::ZeroVector);
                break;
                // If Bos,use max axis value
            case EPaintShape::Box:
                distance = LocalPosition.GetAbsMax();
                break;
            default:
                distance = 2;
            }

            // If distance <= 1 means vertex is in shape range,so it needs painting
            if (distance <= 1)
            {
                float alpha;
                if (FallOff)
                {
                    alpha = FallOff->GetFloatValue(distance) * Opacity;
                }
                else
                {
                    alpha = Opacity;
                }

                FLinearColor BaseColor = VertexColorsArray.VertexColors[VertexIndex];

                FLinearColor FinalColor;

                // Switch PaintChannel,different PaintChannel value needs different ways to mix color
                switch (static_cast<int32>(ContextSK.Channel))
                {
                case 0:
                    FinalColor = UKismetMathLibrary::LinearColorLerp(FLinearColor::Black, Color, Opacity);
                    break;

                case 1:
                    FinalColor = UKismetMathLibrary::MakeColor(UKismetMathLibrary::Lerp(0, Color.R, Opacity), 0, 0, 0);
                    break;

                case 2:
                    FinalColor = UKismetMathLibrary::MakeColor(0, UKismetMathLibrary::Lerp(0, Color.G, Opacity), 0, 0);
                    break;

                case 3:
                    FinalColor = UKismetMathLibrary::MakeColor(0, 0, UKismetMathLibrary::Lerp(0, Color.B, Opacity), 0);
                    break;

                case 4:
                    FinalColor = UKismetMathLibrary::MakeColor(0, 0, 0, UKismetMathLibrary::Lerp(0, Color.A, Opacity));
                    break;

                default:
                    checkf(false, TEXT("Invalid channel choice given"));
                    FinalColor = FLinearColor::Black;
                }

                {
                    int32 Final_R = VertexColorsArray.VertexColors[VertexIndex].R;
                    int32 Final_G = VertexColorsArray.VertexColors[VertexIndex].G;
                    int32 Final_B = VertexColorsArray.VertexColors[VertexIndex].B;
                    int32 Final_A = VertexColorsArray.VertexColors[VertexIndex].A;
                    switch (inMode)
                    {
                    case EPaintMode::EPM_SET:
                    {

                        Final_R = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).R, 0, 255);
                        Final_G = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).G, 0, 255);
                        Final_B = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).B, 0, 255);
                        Final_A = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).A, 0, 255);

                        break;
                    }
                    case EPaintMode::EPM_ADD:
                    {
                        Final_R = FMath::Clamp(Final_R + (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                        Final_G = FMath::Clamp(Final_G + (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                        Final_B = FMath::Clamp(Final_B + (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                        Final_A = FMath::Clamp(Final_A + (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);

                        break;
                    }

                    case EPaintMode::EPM_SUB:
                    {
                        Final_R = FMath::Clamp(Final_R - (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                        Final_G = FMath::Clamp(Final_G - (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                        Final_B = FMath::Clamp(Final_B - (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                        Final_A = FMath::Clamp(Final_A - (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);

                        break;
                    }
                    case EPaintMode::EPM_MUL:
                    {
                        Final_R = FMath::Clamp(Final_R * (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                        Final_G = FMath::Clamp(Final_G * (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                        Final_B = FMath::Clamp(Final_B * (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                        Final_A = FMath::Clamp(Final_A * (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);
                        break;
                    }
                    default:
                    {
                        checkf(false, TEXT("invalid paint mode given"));
                        break;
                    }
                    }

                    VertexColorsArray.VertexColors[VertexIndex].R = Final_R;
                    VertexColorsArray.VertexColors[VertexIndex].G = Final_G;
                    VertexColorsArray.VertexColors[VertexIndex].B = Final_B;
                    VertexColorsArray.VertexColors[VertexIndex].A = Final_A;
                }
            }
        }
        LODIndex++;
    }
    return;
}

void URuntimeVertexPainterBPLibrary::ContextPaintAllVerticesColor_SKM(FRVPContextSK &ContextSK, FLinearColor Color, EPaintMode inMode, float Opacity, bool bConvertToSRGB)
{
    if (!ContextSK.SkeletalMeshComponent || !ContextSK.SkeletalMeshComponent->GetSkeletalMeshAsset())
    {
        return;
    }

    // Traverse VertexColorsArray to calculate new vertex colors in LOD
    // If paint in single LOD,int32 LODIndex = Context.LODIndex will tell us the LOD which need to be painted
    int32 LODIndex = ContextSK.LODIndex;
    for (FVertexColorsArray &VertexColorsArray : ContextSK.VertexColorsArray)
    {

        const uint32 NumVertices = GetSkeletalMeshVerticesNum(ContextSK.SkeletalMeshComponent->GetSkeletalMeshAsset(), LODIndex);

        // Traverse all vertices
        for (uint32 VertexIndex = 0; VertexIndex < NumVertices; VertexIndex++)
        {

            FLinearColor BaseColor = VertexColorsArray.VertexColors[VertexIndex];

            FLinearColor FinalColor;

            // Switch PaintChannel,different PaintChannel value needs different ways to mix color
            switch (static_cast<int32>(ContextSK.Channel))
            {
            case 0:
                FinalColor = UKismetMathLibrary::LinearColorLerp(FLinearColor::Black, Color, Opacity);
                break;

            case 1:
                FinalColor = UKismetMathLibrary::MakeColor(UKismetMathLibrary::Lerp(0, Color.R, Opacity), 0, 0, 0);
                break;

            case 2:
                FinalColor = UKismetMathLibrary::MakeColor(0, UKismetMathLibrary::Lerp(0, Color.G, Opacity), 0, 0);
                break;

            case 3:
                FinalColor = UKismetMathLibrary::MakeColor(0, 0, UKismetMathLibrary::Lerp(0, Color.B, Opacity), 0);
                break;

            case 4:
                FinalColor = UKismetMathLibrary::MakeColor(0, 0, 0, UKismetMathLibrary::Lerp(0, Color.A, Opacity));
                break;

            default:
                checkf(false, TEXT("Invalid channel choice given"));
                FinalColor = FLinearColor::Black;
            }

            {
                int32 Final_R = VertexColorsArray.VertexColors[VertexIndex].R;
                int32 Final_G = VertexColorsArray.VertexColors[VertexIndex].G;
                int32 Final_B = VertexColorsArray.VertexColors[VertexIndex].B;
                int32 Final_A = VertexColorsArray.VertexColors[VertexIndex].A;
                switch (inMode)
                {
                case EPaintMode::EPM_SET:
                {

                    Final_R = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).R, 0, 255);
                    Final_G = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).G, 0, 255);
                    Final_B = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).B, 0, 255);
                    Final_A = FMath::Clamp(FinalColor.ToFColor(bConvertToSRGB).A, 0, 255);

                    break;
                }
                case EPaintMode::EPM_ADD:
                {
                    Final_R = FMath::Clamp(Final_R + (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                    Final_G = FMath::Clamp(Final_G + (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                    Final_B = FMath::Clamp(Final_B + (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                    Final_A = FMath::Clamp(Final_A + (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);

                    break;
                }

                case EPaintMode::EPM_SUB:
                {
                    Final_R = FMath::Clamp(Final_R - (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                    Final_G = FMath::Clamp(Final_G - (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                    Final_B = FMath::Clamp(Final_B - (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                    Final_A = FMath::Clamp(Final_A - (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);

                    break;
                }
                case EPaintMode::EPM_MUL:
                {
                    Final_R = FMath::Clamp(Final_R * (FinalColor.ToFColor(bConvertToSRGB)).R, 0, 255);
                    Final_G = FMath::Clamp(Final_G * (FinalColor.ToFColor(bConvertToSRGB)).G, 0, 255);
                    Final_B = FMath::Clamp(Final_B * (FinalColor.ToFColor(bConvertToSRGB)).B, 0, 255);
                    Final_A = FMath::Clamp(Final_A * (FinalColor.ToFColor(bConvertToSRGB)).A, 0, 255);
                    break;
                }
                default:
                {
                    checkf(false, TEXT("invalid paint mode given"));
                    break;
                }
                }

                VertexColorsArray.VertexColors[VertexIndex].R = Final_R;
                VertexColorsArray.VertexColors[VertexIndex].G = Final_G;
                VertexColorsArray.VertexColors[VertexIndex].B = Final_B;
                VertexColorsArray.VertexColors[VertexIndex].A = Final_A;
            }
        }
        LODIndex++;
    }

    return;
}

TArray<FColor> URuntimeVertexPainterBPLibrary::GetVertexColorsInLOD(UStaticMeshComponent *StaticMeshComponent,
                                                                    int32 LODIndex)
{
    // make sure is valid mesh
    TArray<FColor> VertexColors;
    if (!StaticMeshComponent || !StaticMeshComponent->GetStaticMesh())
    {
        UE_LOG(LogTemp, Warning, TEXT("No mesh found"));
        return VertexColors;
    }

    // Is valid LOD
    int32 LODNun = StaticMeshComponent->GetStaticMesh()->GetNumLODs();
    if (LODIndex < 0 || LODIndex >= LODNun)
    {
        return VertexColors;
    }

    const int32 VerticesNum = StaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[LODIndex].GetNumVertices();
    if (StaticMeshComponent->LODData.IsValidIndex(LODIndex))
    {
        FStaticMeshComponentLODInfo &LODInfo = StaticMeshComponent->LODData[LODIndex];

        // If OverrideVertexColors,return that
        if (LODInfo.OverrideVertexColors)
        {
            LODInfo.OverrideVertexColors->GetVertexColors(VertexColors);

            // Make sure VertexColors number is suitable
            if (VertexColors.Num() == VerticesNum)
            {
                return VertexColors;
            }
        }
    }

    // OverrideVertexColors is not valid,tru to read vertex colors in mess
    if (StaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[LODIndex].bHasColorVertexData)
    {
        StaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[LODIndex].VertexBuffers.ColorVertexBuffer.GetVertexColors(VertexColors);
    }
    // No valid vertex color we can find,so return white as default
    else
    {
        VertexColors.Init(FColor::White, VerticesNum);
    }

    // Make sure VertexColors number is suitable
    VertexColors.SetNum(VerticesNum);
    return VertexColors;
}

TArray<FColor> URuntimeVertexPainterBPLibrary::SkeletalMeshGetVertexColorsInLOD(
    USkeletalMeshComponent *SkeletalMeshComponent, int32 LODIndex)
{
    TArray<FColor> VertexColors;

    // Is valid testing
    if (!SkeletalMeshComponent || !SkeletalMeshComponent->GetSkeletalMeshAsset())
    {
        UE_LOG(LogTemp, Warning, TEXT("No mesh found"));
        return VertexColors;
    }
    int32 LODNun = SkeletalMeshComponent->GetSkeletalMeshAsset()->GetLODNum();
    if (!SkeletalMeshComponent->GetSkeletalMeshAsset()->GetResourceForRendering()->LODRenderData.IsValidIndex(LODIndex))
    {
        return VertexColors;
    }

    const FSkeletalMeshLODRenderData &MeshLODResources = SkeletalMeshComponent->GetSkeletalMeshAsset()->GetResourceForRendering()->LODRenderData[LODIndex];

    if (SkeletalMeshComponent->LODInfo.IsValidIndex(LODIndex))
    {
        FSkelMeshComponentLODInfo &LODInfo = SkeletalMeshComponent->LODInfo[LODIndex];

        // If OverrideVertexColors,return that
        if (LODInfo.OverrideVertexColors)
        {
            LODInfo.OverrideVertexColors->GetVertexColors(VertexColors);

            ////Make sure VertexColors number is suitable
            if (VertexColors.Num() == MeshLODResources.GetNumVertices())
            {
                return VertexColors;
            }
        }
    }

    // OverrideVertexColors is not valid,so try to read vertex colors in mesh
    MeshLODResources.StaticVertexBuffers.ColorVertexBuffer.GetVertexColors(VertexColors);

    // Make sure VertexColors number is suitable
    if (VertexColors.Num() != MeshLODResources.GetNumVertices())
    {
        VertexColors.Init(FColor::White, MeshLODResources.GetNumVertices());
    }

    return VertexColors;
}

TArray<FVertexColorsArray> URuntimeVertexPainterBPLibrary::GetVertexColorsInAllLOD(UStaticMeshComponent *StaticMeshComponent)
{
    TArray<FVertexColorsArray> VertexColorsArray;

    if (!StaticMeshComponent || !StaticMeshComponent->GetStaticMesh())
    {
        UE_LOG(LogTemp, Warning, TEXT("No mesh found"));
        return VertexColorsArray;
    }

    int32 NumLODs = StaticMeshComponent->GetStaticMesh()->GetNumLODs();
    FVertexColorsArray VertexColors;
    for (int32 LODindex = 0; LODindex < NumLODs; LODindex++)
    {
        VertexColors.VertexColors = GetVertexColorsInLOD(StaticMeshComponent, LODindex);
        VertexColorsArray.Add(VertexColors);
    }
    return VertexColorsArray;
}

TArray<FVertexColorsArray> URuntimeVertexPainterBPLibrary::SkeletalMeshGetVertexColorsInAllLOD(USkeletalMeshComponent *SkeletalMeshComponent)
{
    TArray<FVertexColorsArray> VertexColorsArray;
    if (!SkeletalMeshComponent || !SkeletalMeshComponent->GetSkeletalMeshAsset())
    {
        UE_LOG(LogTemp, Warning, TEXT("No mesh found"));
        return VertexColorsArray;
    }

    int32 NumLODs = SkeletalMeshComponent->GetSkeletalMeshAsset()->GetLODNum();
    FVertexColorsArray VertexColors;
    for (int32 LODindex = 0; LODindex < NumLODs; LODindex++)
    {
        VertexColors.VertexColors = SkeletalMeshGetVertexColorsInLOD(SkeletalMeshComponent, LODindex);
        VertexColorsArray.Add(VertexColors);
    }
    return VertexColorsArray;
}

int32 URuntimeVertexPainterBPLibrary::GetVerticesNum(UStaticMesh *StaticMesh, int32 LODIndex)
{
    if (!StaticMesh)
    {
        return -1;
    }
    if (StaticMesh->GetNumLODs() <= LODIndex || LODIndex < 0)
    {
        return -1;
    }
    return StaticMesh->GetRenderData()->LODResources[LODIndex].GetNumVertices();
}

int32 URuntimeVertexPainterBPLibrary::GetSkeletalMeshVerticesNum(USkeletalMesh *SkeletalMesh, int32 LODIndex)
{
    if (!SkeletalMesh)
    {
        return -1;
    }
    if (SkeletalMesh->GetLODNum() <= LODIndex || LODIndex < 0)
    {
        return -1;
    }
    return SkeletalMesh->GetResourceForRendering()->LODRenderData[LODIndex].GetNumVertices();
}

void URuntimeVertexPainterBPLibrary::OverrideVertexColors(UStaticMeshComponent *StaticMeshComponent, int32 LODIndex, TArray<FColor> VertexColors)
{
    if (!StaticMeshComponent || !StaticMeshComponent->GetStaticMesh())
    {
        UE_LOG(LogTemp, Warning, TEXT("No Mesh Found"));
        return;
    }
    const int32 NumMeshLODs = StaticMeshComponent->GetStaticMesh()->GetNumLODs();
    StaticMeshComponent->SetLODDataCount(NumMeshLODs, NumMeshLODs);
    if (!StaticMeshComponent->LODData.IsValidIndex(LODIndex))
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid LOD,LOD index should be in 0 to %d"),
               StaticMeshComponent->LODData.Num() - 1);
        return;
    }
    FStaticMeshComponentLODInfo &LODInfo = StaticMeshComponent->LODData[LODIndex];

    uint32 NumVertices = StaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[LODIndex].GetNumVertices();
    VertexColors.SetNum(NumVertices);

    LODInfo.OverrideVertexColors = new FColorVertexBuffer;
    LODInfo.OverrideVertexColors->InitFromColorArray(VertexColors);

    BeginInitResource(LODInfo.OverrideVertexColors);

    StaticMeshComponent->MarkRenderStateDirty();
    StaticMeshComponent->bDisallowMeshPaintPerInstance = true;
}

void URuntimeVertexPainterBPLibrary::SkeletalMeshOverrideVertexColors(USkeletalMeshComponent *SkeletalMeshComponent, int32 LODIndex, TArray<FColor> VertexColors)
{
    SkeletalMeshComponent->SetVertexColorOverride(LODIndex, VertexColors);
}
