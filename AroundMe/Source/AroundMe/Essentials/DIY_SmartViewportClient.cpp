#include "DIY_SmartViewportClient.h"
#include "Engine/Engine.h"
#include "CanvasItem.h"
#include "Engine/Canvas.h"
#include "../GameUtilities/Logs/DIY_LogHelper.h"
#include "Engine/GameViewportClient.h"
#include "Slate/SceneViewport.h"

void UDIY_SmartViewportClient::Draw(FViewport *ViewportIn, FCanvas *SceneCanvas)
{
    Super::Draw(Viewport, SceneCanvas);
}
