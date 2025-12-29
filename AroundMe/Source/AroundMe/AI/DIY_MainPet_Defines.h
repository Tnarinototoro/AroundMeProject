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
    // --- 基础维度 (Base Dimensions) ---
    None = 0,
    E_Mask = 1 << 0, // Extraversion (位0: 1=E, 0=I)
    N_Mask = 1 << 1, // Intuition    (位1: 1=N, 0=S)
    F_Mask = 1 << 2, // Feeling      (位2: 1=F, 0=T)
    P_Mask = 1 << 3, // Perceiving   (位3: 1=P, 0=J)

    // --- 16种人格穷举 (16 Types) ---
    // 逻辑：字母存在即加 Mask，不存在即为 0
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
