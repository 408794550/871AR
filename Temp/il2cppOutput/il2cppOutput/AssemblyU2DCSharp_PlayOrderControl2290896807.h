#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayOrderControl
struct  PlayOrderControl_t2290896807  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlayOrderControl::TheModel
	GameObject_t1756533147 * ___TheModel_2;
	// System.Single PlayOrderControl::delayTime
	float ___delayTime_3;
	// UnityEngine.ParticleSystem PlayOrderControl::particleSystem
	ParticleSystem_t3394631041 * ___particleSystem_4;

public:
	inline static int32_t get_offset_of_TheModel_2() { return static_cast<int32_t>(offsetof(PlayOrderControl_t2290896807, ___TheModel_2)); }
	inline GameObject_t1756533147 * get_TheModel_2() const { return ___TheModel_2; }
	inline GameObject_t1756533147 ** get_address_of_TheModel_2() { return &___TheModel_2; }
	inline void set_TheModel_2(GameObject_t1756533147 * value)
	{
		___TheModel_2 = value;
		Il2CppCodeGenWriteBarrier(&___TheModel_2, value);
	}

	inline static int32_t get_offset_of_delayTime_3() { return static_cast<int32_t>(offsetof(PlayOrderControl_t2290896807, ___delayTime_3)); }
	inline float get_delayTime_3() const { return ___delayTime_3; }
	inline float* get_address_of_delayTime_3() { return &___delayTime_3; }
	inline void set_delayTime_3(float value)
	{
		___delayTime_3 = value;
	}

	inline static int32_t get_offset_of_particleSystem_4() { return static_cast<int32_t>(offsetof(PlayOrderControl_t2290896807, ___particleSystem_4)); }
	inline ParticleSystem_t3394631041 * get_particleSystem_4() const { return ___particleSystem_4; }
	inline ParticleSystem_t3394631041 ** get_address_of_particleSystem_4() { return &___particleSystem_4; }
	inline void set_particleSystem_4(ParticleSystem_t3394631041 * value)
	{
		___particleSystem_4 = value;
		Il2CppCodeGenWriteBarrier(&___particleSystem_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
