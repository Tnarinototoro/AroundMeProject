// All rights reserved to ShadowCandle Studio

#include "DIY_Utilities.h"

#include "../Player/Items/DIY_ItemManager.h"
#include "Weather/DIY_WeatherManager.h"
#include "../Area/DIY_AreaManager.h"
#include "NavigationSystem.h"   
#include "Navigation/NavLinkProxy.h"
#include "NavigationSystem.h"
#include "NavLinkCustomComponent.h"
#include "NavLinkCustomInterface.h"

// void ForceRefreshNavLink(AActor* InActor)
// {
//     if (!InActor) return;

//     UNavigationSystemV1* NavSys =
//         FNavigationSystem::GetCurrent<UNavigationSystemV1>(InActor->GetWorld());

//     if (!NavSys) return;

//     // 1. 刷新 Actor 在 NavOctree 中的数据（黑线的关键）
//     NavSys->UpdateActorInNavOctree(*InActor);

//     // 2. 如果是 NavLinkProxy，刷新 SmartLink
//     if (ANavLinkProxy* NavProxy = Cast<ANavLinkProxy>(InActor))
//     {
//         if (UNavLinkCustomComponent* SmartLink = NavProxy->GetSmartLinkComp())
//         {
//             if (const INavLinkCustomInterface* LinkInterface =
//                     Cast<INavLinkCustomInterface>(SmartLink))
//             {
//                 NavSys->UpdateCustomLink(LinkInterface);
//             }
//         }
//     }
// }


bool UDIY_Utilities::bShouldLogToGameScreen = true;
UDIY_ItemManagerSubsystem *UDIY_Utilities::DIY_GetItemManagerInstance(const UObject* WorldContextObject)
{

    if (!WorldContextObject) return nullptr;
    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    return UDIY_ItemManagerSubsystem::Get(World);
}

void UDIY_Utilities::DIY_EnableLogging(bool bEnable)
{
    UDIY_Utilities::bShouldLogToGameScreen = bEnable;
}

bool UDIY_Utilities::DIY_IsLoggingEnabled()
{

    return UDIY_Utilities::bShouldLogToGameScreen;
}

void UDIY_Utilities::DIY_PrintLogToScreen(float TimeToDisplay, const FString &DebugMessage, FColor DisplayColor)
{
    if (nullptr != GEngine && UDIY_Utilities::bShouldLogToGameScreen)
    {
        GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, DisplayColor, DebugMessage);
    }
}

void UDIY_Utilities::ForceUpdateNavProxyInOctree(AActor *inActor)
{
    if (nullptr == inActor)
        return;

    ANavLinkProxy* NavProxy = Cast<ANavLinkProxy>(inActor);
    if (nullptr == NavProxy)
        return;

    UNavigationSystemV1 *NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(inActor->GetWorld());
    if(nullptr == NavSys)
        return;
    NavSys->UpdateActorInNavOctree(*inActor);

    
    UNavLinkCustomComponent* SmartLink = NavProxy->GetSmartLinkComp();
    if (nullptr == SmartLink)
        return; 

    //We can temporarily disable and enable the smart link to force the nav system to update it    
    SmartLink->SetEnabled(false);
    SmartLink->SetEnabled(true);
   
}

UDIY_Utilities::UDIY_Utilities()
{
}
