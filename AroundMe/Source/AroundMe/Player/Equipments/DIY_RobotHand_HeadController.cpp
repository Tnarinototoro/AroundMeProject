#include "DIY_RobotHand_HeadController.h"

UDIY_RobotHand_HeadController::UDIY_RobotHand_HeadController()
{
}


void UDIY_RobotHand_HeadController::BeginPlay()
{
}

void UDIY_RobotHand_HeadController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
}

void UDIY_RobotHand_HeadController::UpdateHandHeadStateMachine(float inDeltatime)
{
    switch (mCurrentState)
    {
        case EDIY_RobotHand_Head_State_Type::Idle:
        {

            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;

                
            }


            break;
        }
         case EDIY_RobotHand_Head_State_Type::Turning_On:
        {


            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;
            }

            break;
        }
         case EDIY_RobotHand_Head_State_Type::Running:
        {

            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;
            }



            break;
        }
         case EDIY_RobotHand_Head_State_Type::Turning_Off:
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

void UDIY_RobotHand_HeadController::SwitchToNextState(EDIY_RobotHand_Head_State_Type inNextState)
{
    if(inNextState==mCurrentState)
    return;

    mCurrentState=inNextState;
    mEnteredNewStateSign=true;
    mCurrentStateElapsedTime=0.f;
}
