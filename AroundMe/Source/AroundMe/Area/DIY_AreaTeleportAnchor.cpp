#include "DIY_AreaTeleportAnchor.h"
#include "DIY_AreaManager.h"
void ADIY_AreaTeleportAnchor::BeginPlay()
{
    Super::BeginPlay();


    UDIY_AreaManager::Get(this)->RegisterArea(AssignedAreaID,this);

}

void ADIY_AreaTeleportAnchor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    UDIY_AreaManager::Get(this)->UnregisterArea(AssignedAreaID);

}

ADIY_AreaTeleportAnchor::ADIY_AreaTeleportAnchor()
{

}

ADIY_AreaTeleportAnchor::~ADIY_AreaTeleportAnchor()
{

}
