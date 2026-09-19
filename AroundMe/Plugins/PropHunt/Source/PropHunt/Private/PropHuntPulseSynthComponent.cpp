#include "PropHuntPulseSynthComponent.h"

bool UPropHuntPulseSynthComponent::Init(int32& SampleRate)
{
    SynthSampleRate = static_cast<float>(SampleRate);
    return true;
}

int32 UPropHuntPulseSynthComponent::OnGenerateAudio(float* OutAudio, int32 NumSamples)
{
    // 滴答 = 高频正弦 + 快速指数衰减。
    const float BaseFreq = 1800.0f * Pitch;
    const float DecayRate = 30.0f;

    for (int32 i = 0; i < NumSamples; ++i)
    {
        float Sample = 0.0f;

        // 滴答 = 高频正弦 + 快速指数衰减。
        if (Decay > 0.0f)
        {
            Sample += FMath::Sin(2.0f * PI * Phase) * Decay * Volume * 0.5f;

            Phase += BaseFreq / SynthSampleRate;
            if (Phase >= 1.0f)
            {
                Phase -= 1.0f;
            }
            Decay = FMath::Max(0.0f, Decay - DecayRate / SynthSampleRate);
        }

        // 白噪声（收音机杂音），NoiseVolume 控制音量。
        if (NoiseVolume > 0.0f)
        {
            Sample += (FMath::FRand() * 2.0f - 1.0f) * NoiseVolume * 0.3f;
        }

        OutAudio[i] = Sample;
    }

    return NumSamples;
}

void UPropHuntPulseSynthComponent::TriggerPulse(float InVolume, float InPitch)
{
    Volume = FMath::Clamp(InVolume, 0.0f, 1.0f);
    Pitch = InPitch;
    Phase = 0.0f;
    Decay = 1.0f;
}

void UPropHuntPulseSynthComponent::SetNoiseVolume(float InNoiseVolume)
{
    NoiseVolume = FMath::Clamp(InNoiseVolume, 0.0f, 1.0f);
}
