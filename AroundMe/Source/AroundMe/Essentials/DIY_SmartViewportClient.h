#pragma once

#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "DIY_SmartViewportClient.generated.h"

UCLASS()
class AROUNDME_API UDIY_SmartViewportClient : public UGameViewportClient
{
    GENERATED_BODY()

public:
    virtual void Draw(FViewport *ViewportIn, FCanvas *SceneCanvas) override;
};
