// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_MainPet_Defines.generated.h"


UENUM(BlueprintType)
enum class EDIY_MainPetBehavior_MainMode : uint8
{
    Root,
    Patrol,
    TryDoSomething,
    MainMode_Count

};


UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EDIY_BornNature : uint8
{
    
    None = 0,
    E_Mask = 1 << 0, // Extraversion 
    N_Mask = 1 << 1, // Intuition   
    F_Mask = 1 << 2, // Feeling      
    P_Mask = 1 << 3, // Perceiving   


    
    ISTJ = 0,
    ISFJ = F_Mask,
    INFJ = N_Mask | F_Mask,
    INTJ = N_Mask,

    ISTP = P_Mask,
    ISFP = F_Mask | P_Mask,
    INFP = N_Mask | F_Mask | P_Mask,
    INTP = N_Mask | P_Mask,

    ESTP = E_Mask | P_Mask,
    ESFP = E_Mask | F_Mask | P_Mask,
    ENFP = E_Mask | N_Mask | F_Mask | P_Mask,
    ENTP = E_Mask | N_Mask | P_Mask,

    ESTJ = E_Mask,
    ESFJ = E_Mask | F_Mask,
    ENFJ = E_Mask | N_Mask | F_Mask,
    ENTJ = E_Mask | N_Mask
};
