#include "DIY_DynamicPaintLibrary.h"

bool UDIY_DynamicPaintLibrary::QuickPaintStainTypeAtWorldPosition(
    UMeshComponent *MeshComponent,
    EDIY_StainType PaintStainType,
    EPaintShape PaintShape,
    EPaintMode PaintMode,
    FVector WorldPosition,
    FVector Radius_Extent,
    float PaintPower)
{

    if (PaintStainType > EDIY_StainType::Metals_Rust)
        return false;

    uint8 stain_type = (uint8)PaintStainType + 1;

    FLinearColor color = UDIY_DynamicPaintLibrary::RetrieveColorFromStainTypePower(PaintStainType, PaintMode, PaintPower);
    // static mesh processing
    {
        UStaticMeshComponent *Current_SM = Cast<UStaticMeshComponent>(MeshComponent);
        if (nullptr != Current_SM)
        {
            FRVPContext Context_SM;
            if (URuntimeVertexPainterBPLibrary::BeginPaintVertexColor_SM(Current_SM, Context_SM, (EPaintChannel)stain_type))
            {
                URuntimeVertexPainterBPLibrary::ContextPaintVertexColorInShape_SM(Context_SM,
                                                                                  WorldPosition,
                                                                                  Radius_Extent,
                                                                                  FRotator::ZeroRotator,
                                                                                  PaintShape,
                                                                                  color, PaintMode, 1.0f);

                URuntimeVertexPainterBPLibrary::EndPaintVertexColor_SM(Context_SM);

                return true;
            }
        }
    }

    // skeleton mesh processing
    {
        USkeletalMeshComponent *Current_SKM = Cast<USkeletalMeshComponent>(MeshComponent);

        if (nullptr != Current_SKM)
        {
            FRVPContextSK Context_SKM;
            if (URuntimeVertexPainterBPLibrary::BeginPaintVertexColor_SKM(Current_SKM, Context_SKM, (EPaintChannel)stain_type))
            {
                URuntimeVertexPainterBPLibrary::ContextPaintVertexColorInShape_SKM(Context_SKM,
                                                                                   WorldPosition,
                                                                                   Radius_Extent,
                                                                                   FRotator::ZeroRotator,
                                                                                   PaintShape,
                                                                                   color, PaintMode, 1.0f);

                URuntimeVertexPainterBPLibrary::EndPaintVertexColor_SKM(Context_SKM);
                return true;
            }
        }
    }

    return false;
}

bool UDIY_DynamicPaintLibrary::QuickPaintAllStainType(UMeshComponent *MeshComponent, EDIY_StainType PaintStainType, EPaintMode PaintMode, float PaintPower)
{

    if (PaintStainType > EDIY_StainType::Metals_Rust)
        return false;

    uint8 stain_type = (uint8)PaintStainType + 1;
    FLinearColor color = UDIY_DynamicPaintLibrary::RetrieveColorFromStainTypePower(PaintStainType, PaintMode, PaintPower);
    // static mesh processing
    {
        UStaticMeshComponent *Current_SM = Cast<UStaticMeshComponent>(MeshComponent);
        if (nullptr != Current_SM)
        {
            FRVPContext Context_SM;
            if (URuntimeVertexPainterBPLibrary::BeginPaintVertexColor_SM(Current_SM, Context_SM, (EPaintChannel)stain_type))
            {
                URuntimeVertexPainterBPLibrary::ContextPaintAllVerticesColor_SM(Context_SM,
                                                                                color, PaintMode, 1.0f);

                URuntimeVertexPainterBPLibrary::EndPaintVertexColor_SM(Context_SM);

                return true;
            }
        }
    }

    // skeleton mesh processing
    {
        USkeletalMeshComponent *Current_SKM = Cast<USkeletalMeshComponent>(MeshComponent);

        if (nullptr != Current_SKM)
        {
            FRVPContextSK Context_SKM;
            if (URuntimeVertexPainterBPLibrary::BeginPaintVertexColor_SKM(Current_SKM, Context_SKM, (EPaintChannel)stain_type))
            {
                URuntimeVertexPainterBPLibrary::ContextPaintAllVerticesColor_SKM(Context_SKM,
                                                                                 color, PaintMode, 1.0f);

                URuntimeVertexPainterBPLibrary::EndPaintVertexColor_SKM(Context_SKM);
                return true;
            }
        }
    }

    return false;
}

bool UDIY_DynamicPaintLibrary::QuickClearAllStain(UMeshComponent *MeshComponent, EDIY_StainType inStainType)
{
    return UDIY_DynamicPaintLibrary::QuickPaintAllStainType(MeshComponent, inStainType, EPaintMode::EPM_MUL, 0.0f);
}

FLinearColor UDIY_DynamicPaintLibrary::RetrieveColorFromStainTypePower(EDIY_StainType PaintStainType, EPaintMode inMode, float inPower)
{
    FLinearColor outColor = FLinearColor::Black;

    if (EPaintMode::EPM_MUL == inMode)
    {
        outColor = FLinearColor::White;
    }

    *(&outColor.R + (uint8)PaintStainType) = inPower;

    return outColor;
}
