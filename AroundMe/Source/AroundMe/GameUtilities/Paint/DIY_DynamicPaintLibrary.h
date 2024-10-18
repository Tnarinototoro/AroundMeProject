#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RuntimeVertexPainterBPLibrary.h"
#include "DIY_DynamicMeshPaintDefines.h"
#include "DIY_DynamicPaintLibrary.generated.h"


UCLASS()
class UDIY_DynamicPaintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

       
        UFUNCTION(BlueprintCallable, meta = (DisplayName = "QuickPaintStainTypeAtWorldPosition"),
            Category = "DIY_DynamicPaintLibrary")
        static bool QuickPaintStainTypeAtWorldPosition(UMeshComponent* MeshComponent,
            EDIY_StainType PaintStainType,FVector WorldPosition,float Radius_Extent,float PaintPower);


    UFUNCTION(BlueprintCallable, meta = (DisplayName = "QuickClearAllStain"),
        Category = "DIY_DynamicPaintLibrary")
        static bool QuickClearAllStain(UMeshComponent* MeshComponent);




    
};
