#include "DIY_RobotHandController.h"

UDIY_RobotHandController::UDIY_RobotHandController()
{
}

void UDIY_RobotHandController::BeginPlay()
{
}

void UDIY_RobotHandController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    
}


void UDIY_RobotHandController::UpdateHandHeadStateMachine(float inDeltatime)
{
     switch (mCurrentState)
    {
        case EDIY_RobotHand_State_Type::Idle:
        {

            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;

                
            }


            break;
        }
         case EDIY_RobotHand_State_Type::Lerping_To_RunTask:
        {


            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;
            }

            break;
        }
         case EDIY_RobotHand_State_Type::Running_Task:
        {

            if(mEnteredNewStateSign)
            {

                
                mEnteredNewStateSign=false;
            }



            break;
        }
         case EDIY_RobotHand_State_Type::Lerping_To_Idle:
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

void UDIY_RobotHandController::SwitchToNextState(EDIY_RobotHand_State_Type inNextState)
{
    if(inNextState==mCurrentState)
    return;

    mCurrentState=inNextState;
    mEnteredNewStateSign=true;
    mCurrentStateElapsedTime=0.f;
}
