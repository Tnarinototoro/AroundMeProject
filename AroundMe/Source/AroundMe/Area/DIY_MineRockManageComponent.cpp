#include "DIY_MineRockManageComponent.h"
#include "../GameUtilities/DIY_Utilities.h"
#include "../Player/Items/DIY_ItemManager.h"
#include "../GameUtilities/Logs/DIY_LogHelper.h"
UDIY_MineRockManageComponent::UDIY_MineRockManageComponent()
{
    PrimaryComponentTick.bCanEverTick = false;

    MineralRocks.Init(nullptr, MineralRockArray_Dimension_X * MineralRockArray_Dimension_Y);
}

AActor *UDIY_MineRockManageComponent::GetMineralRock(int32 pos_x, int32 pos_y)
{
    if (pos_x < 0 || pos_x >= MineralRockArray_Dimension_X)
        return nullptr;

    if (pos_y < 0 || pos_y >= MineralRockArray_Dimension_Y)
        return nullptr;

    return MineralRocks[pos_y * MineralRockArray_Dimension_X + pos_x];
}

void UDIY_MineRockManageComponent::BeginPlay()
{
    Super::BeginPlay();

    GenerateMineralRocks();
}

void UDIY_MineRockManageComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    ClearAllMineralRocks();
}

void UDIY_MineRockManageComponent::GenerateMineralRocks()
{
    ensureAlwaysMsgf(MineralRocks.Num() < MineralRockArray_Dimension_X * MineralRockArray_Dimension_Y, TEXT("MineralRockArray is not inited correctly!"));
    for (int32 x = 0; x < MineralRockArray_Dimension_X; x++)
    {
        for (int32 y = 0; y < MineralRockArray_Dimension_Y; y++)
        {
            if (FMath::RandBool())
            {
                float _pos_X = (x + FMath::FRandRange(0.f, MineralRockArray_Grid_Random_Offset_Percent.X)) * MineralRockArray_Grid_Size;
                float _pos_Y = (y + FMath::FRandRange(0.f, MineralRockArray_Grid_Random_Offset_Percent.Y)) * MineralRockArray_Grid_Size;
                FVector cur_rock_pos = GetComponentLocation() + GetForwardVector() * _pos_X + GetRightVector() * _pos_Y;
                cur_rock_pos.Z = GetComponentLocation().Z;

                // EASY_LOG_MAINPLAYER("PPPPPPPPPPPPPPPPPOSX %f Y %f Forwardvecroe %s right vector %s", _pos_X, _pos_Y, *GetForwardVector().ToString(), *GetRightVector().ToString());
                UDIY_Utilities::DIY_GetItemManagerInstance()->RequestSpawnItem(EItemID::EItemID_MineralRock, cur_rock_pos, FRotator{0.f, 0.f, 0.f});
            }
        }
    }
}

void UDIY_MineRockManageComponent::ClearAllMineralRocks()
{
    for (int32 i = 0; i < MineralRocks.Num(); i++)
    {

        if (nullptr != MineralRocks[i] && IsValid(MineralRocks[i]))
        {
            MineralRocks[i]->Destroy();
            MineralRocks[i] = nullptr;
        }
    }
}

void UDIY_MineRockManageComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
