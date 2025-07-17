#include "DIY_AreaTeleportAnchor.h"
#include "DIY_AreaManager.h"
void ADIY_AreaTeleportAnchor::BeginPlay()
{
    Super::BeginPlay();

    ADIY_AreaManager::GetManager()->RegisterArea(AssignedAreaID,this);

}

void ADIY_AreaTeleportAnchor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    ADIY_AreaManager::GetManager()->UnregisterArea(AssignedAreaID);

}

ADIY_AreaTeleportAnchor::ADIY_AreaTeleportAnchor()
{

}

ADIY_AreaTeleportAnchor::~ADIY_AreaTeleportAnchor()
{

}
