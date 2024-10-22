#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DIY_DynamicMeshPaintDefines.h"
#include "RuntimeVertexPainterBPLibrary.h"
#include "DIY_DynamicPaintLibrary.generated.h"

UCLASS()
class UDIY_DynamicPaintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "QuickPaintStainTypeAtWorldPosition"),
              Category = "DIY_DynamicPaintLibrary")
    static bool QuickPaintStainTypeAtWorldPosition(UMeshComponent *MeshComponent,
                                                   EDIY_StainType PaintStainType, EPaintShape PaintShape, EPaintMode PaintMode, FVector WorldPosition, FVector Radius_Extent, float PaintPower);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "QuickPaintAllStainType"),
              Category = "DIY_DynamicPaintLibrary")
    static bool QuickPaintAllStainType(UMeshComponent *MeshComponent, EDIY_StainType PaintStainType, EPaintMode PaintMode, float PaintPower);

    UFUNCTION(BlueprintCallable, meta = (DisplayName = "QuickClearAllStain"),
              Category = "DIY_DynamicPaintLibrary")
    static bool QuickClearAllStain(UMeshComponent *MeshComponent, EDIY_StainType inStainType);

private:
    static FLinearColor RetrieveColorFromStainTypePower(EDIY_StainType PaintStainType, EPaintMode inMode, float inPower);
};
