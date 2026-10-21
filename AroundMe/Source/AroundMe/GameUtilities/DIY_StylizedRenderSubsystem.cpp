#include "DIY_StylizedRenderSubsystem.h"

#include "DIY_StylizedRenderDirector.h"
#include "DIY_StylizedRenderSettings.h"
#include "Engine/World.h"

void UDIY_StylizedRenderSubsystem::OnWorldBeginPlay(UWorld &InWorld)
{
    Super::OnWorldBeginPlay(InWorld);

    if (!InWorld.IsGameWorld())
    {
        return;
    }

    const UDIY_StylizedRenderSettings *Settings = UDIY_StylizedRenderSettings::Get();
    if (!Settings || !Settings->bEnable)
    {
        return;
    }

    if (Director)
    {
        Director->ApplyStyle();
        return;
    }

    FActorSpawnParameters SpawnParameters;
    SpawnParameters.Name = TEXT("DIY_StylizedRenderDirector");
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    SpawnParameters.ObjectFlags |= RF_Transient;

    Director = InWorld.SpawnActor<ADIY_StylizedRenderDirector>(
        ADIY_StylizedRenderDirector::StaticClass(),
        FVector::ZeroVector,
        FRotator::ZeroRotator,
        SpawnParameters);
}

void UDIY_StylizedRenderSubsystem::Deinitialize()
{
    if (Director && !Director->IsActorBeingDestroyed())
    {
        Director->Destroy();
    }

    Director = nullptr;
    Super::Deinitialize();
}

void UDIY_StylizedRenderSubsystem::ReapplyStyle()
{
    if (Director)
    {
        Director->ApplyStyle();
    }
}

ADIY_StylizedRenderDirector *UDIY_StylizedRenderSubsystem::GetDirector() const
{
    return Director;
}
