// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DIY_MainPlayerController.generated.h"

/**
 *
 */
UCLASS()
class AROUNDME_API ADIY_MainPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "DIY_MainPlayerController")
	bool GetHitResultUnderCursorWithIgnore(ECollisionChannel TraceChannel, const TArray<AActor *> &IgnoreActors, FHitResult &OutHit);

    UFUNCTION(BlueprintCallable, Category = "DIY_MainPlayerController", meta = (AdvancedDisplay = "bTraceComplex, bIgnoreSelf"))
    bool DIY_GetHitResultUnderCursor(
        ECollisionChannel TraceChannel,
        bool bTraceComplex,
        const TArray<AActor*>& IgnoreActors,
        FHitResult& OutHitResult,
        bool bIgnoreSelf = true);

    UFUNCTION(BlueprintCallable, Category = "DIY_MainPlayerController", meta = (AdvancedDisplay = "bTraceComplex, bIgnoreSelf"))
    bool DIY_GetHitResultUnderFinger(
        ETouchIndex::Type FingerIndex,
        ECollisionChannel TraceChannel,
        bool bTraceComplex,
        const TArray<AActor*>& IgnoreActors,
        FHitResult& OutHitResult,
        bool bIgnoreSelf = true);

    
    //Auto detect platform£ºidentify Touch or Mouse
    UFUNCTION(BlueprintCallable, Category = "DIY_MainPlayerController", meta = (AdvancedDisplay = "bTraceComplex, bIgnoreSelf"))
    bool DIY_GetHitResultUnderInput(
        ECollisionChannel TraceChannel,
        bool bTraceComplex,
        const TArray<AActor*>& IgnoreActors,
        FHitResult& OutHitResult,
        ETouchIndex::Type FingerIndex = ETouchIndex::Touch1,
        bool bIgnoreSelf = true);
};
