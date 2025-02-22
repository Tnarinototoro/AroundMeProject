#include "DIY_KagoController.h"
#include "Components/SkeletalMeshComponent.h"


UDIY_KagoController::UDIY_KagoController()
{
    PrimaryComponentTick.bCanEverTick = true;
    HandHead_Releasing_Point=CreateDefaultSubobject<USceneComponent>(TEXT("HandHead_Releasing_Point"));

    ensureMsgf(mEquipMentMesh!=nullptr,TEXT("mEquipMentMesh shall never be null"));
    HandHead_Releasing_Point->SetupAttachment(mEquipMentMesh);
    HandHead_Releasing_Point->SetRelativeLocation({0.f,0.f,0.f});

}

void UDIY_KagoController::BeginPlay()
{
    Super::BeginPlay();
}

void UDIY_KagoController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime,TickType,ThisTickFunction);

    DrawDebugSphere(GetWorld(),HandHead_Releasing_Point->GetComponentLocation(),10.f,12,FColor::Green);
}


void UDIY_KagoController::UpdateKagoStateMachine(float inDeltatime)
{
     switch (mCurrentState)
    {
        case EDIY_KagoState_Type::Idle:
        {

            if(mEnteredNewStateSign)
            {


                mEnteredNewStateSign=false;  
            }


            break;
        }
    
    default:
        break;
    }




   mCurrentStateElapsedTime+=inDeltatime;
}

void UDIY_KagoController::SwitchToNextState(EDIY_KagoState_Type inNextState)
{
    if(inNextState==mCurrentState)
    return;

    mCurrentState=inNextState;
    mEnteredNewStateSign=true;
    mCurrentStateElapsedTime=0.f;
}
