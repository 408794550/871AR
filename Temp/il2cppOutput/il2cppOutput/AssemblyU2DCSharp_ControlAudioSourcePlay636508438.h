#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ControlAudioSourcePlay
struct  ControlAudioSourcePlay_t636508438  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ControlAudioSourcePlay::delayTime
	float ___delayTime_2;
	// System.Single ControlAudioSourcePlay::particleSystemStartDelay
	float ___particleSystemStartDelay_3;
	// UnityEngine.ParticleSystem ControlAudioSourcePlay::particleSystem
	ParticleSystem_t3394631041 * ___particleSystem_4;
	// UnityEngine.AudioSource ControlAudioSourcePlay::audioSource
	AudioSource_t1135106623 * ___audioSource_5;

public:
	inline static int32_t get_offset_of_delayTime_2() { return static_cast<int32_t>(offsetof(ControlAudioSourcePlay_t636508438, ___delayTime_2)); }
	inline float get_delayTime_2() const { return ___delayTime_2; }
	inline float* get_address_of_delayTime_2() { return &___delayTime_2; }
	inline void set_delayTime_2(float value)
	{
		___delayTime_2 = value;
	}

	inline static int32_t get_offset_of_particleSystemStartDelay_3() { return static_cast<int32_t>(offsetof(ControlAudioSourcePlay_t636508438, ___particleSystemStartDelay_3)); }
	inline float get_particleSystemStartDelay_3() const { return ___particleSystemStartDelay_3; }
	inline float* get_address_of_particleSystemStartDelay_3() { return &___particleSystemStartDelay_3; }
	inline void set_particleSystemStartDelay_3(float value)
	{
		___particleSystemStartDelay_3 = value;
	}

	inline static int32_t get_offset_of_particleSystem_4() { return static_cast<int32_t>(offsetof(ControlAudioSourcePlay_t636508438, ___particleSystem_4)); }
	inline ParticleSystem_t3394631041 * get_particleSystem_4() const { return ___particleSystem_4; }
	inline ParticleSystem_t3394631041 ** get_address_of_particleSystem_4() { return &___particleSystem_4; }
	inline void set_particleSystem_4(ParticleSystem_t3394631041 * value)
	{
		___particleSystem_4 = value;
		Il2CppCodeGenWriteBarrier(&___particleSystem_4, value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(ControlAudioSourcePlay_t636508438, ___audioSource_5)); }
	inline AudioSource_t1135106623 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t1135106623 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
