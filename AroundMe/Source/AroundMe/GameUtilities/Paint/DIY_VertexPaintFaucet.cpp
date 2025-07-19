#include "DIY_VertexPaintFaucet.h"

UDIY_VertexPaintFaucet::UDIY_VertexPaintFaucet()
{

    FaucetModel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FaucetModel"));
    FaucetModel->SetupAttachment(this);
    
    
}
