#pragma once

#include "CoreMinimal.h"
#include "Components/SynthComponent.h"
#include "PropHuntPulseSynthComponent.generated.h"

// 程序化合成的"滴答"脉冲音（盖革计数器式），用于 Hunter 的脉冲信号提示。
UCLASS()
class PROPHUNT_API UPropHuntPulseSynthComponent : public USynthComponent
{
    GENERATED_BODY()

public:
    // 触发一次滴答。InVolume 0~1，InPitch 音调（>1 更高频）。
    void TriggerPulse(float InVolume, float InPitch);

    // 设置白噪声音量（0~1），极其近时叠加收音机杂音。
    void SetNoiseVolume(float InNoiseVolume);

protected:
    virtual bool Init(int32& SampleRate) override;
    virtual int32 OnGenerateAudio(float* OutAudio, int32 NumSamples) override;

    float SynthSampleRate{44100.0f};
    float Phase{0.0f};
    float Decay{0.0f};
    float Volume{1.0f};
    float Pitch{1.0f};
    float NoiseVolume{0.0f};
};
