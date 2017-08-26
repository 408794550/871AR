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
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PerfabAnimationTapHandler
struct  PerfabAnimationTapHandler_t441730483  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PerfabAnimationTapHandler::mTimeSinceLastTap
	float ___mTimeSinceLastTap_3;
	// UnityEngine.ParticleSystem PerfabAnimationTapHandler::particle
	ParticleSystem_t3394631041 * ___particle_4;
	// UnityEngine.Animator PerfabAnimationTapHandler::animator
	Animator_t69676727 * ___animator_5;
	// System.Boolean PerfabAnimationTapHandler::isAnimatorLoaded
	bool ___isAnimatorLoaded_6;
	// System.Int32 PerfabAnimationTapHandler::mTapCount
	int32_t ___mTapCount_7;
	// UnityEngine.GameObject PerfabAnimationTapHandler::nextARObject
	GameObject_t1756533147 * ___nextARObject_8;
	// System.String PerfabAnimationTapHandler::modelType
	String_t* ___modelType_9;
	// System.Boolean PerfabAnimationTapHandler::hasMask
	bool ___hasMask_10;

public:
	inline static int32_t get_offset_of_mTimeSinceLastTap_3() { return static_cast<int32_t>(offsetof(PerfabAnimationTapHandler_t441730483, ___mTimeSinceLastTap_3)); }
	inline float get_mTimeSinceLastTap_3() const { return ___mTimeSinceLastTap_3; }
	inline float* get_address_of_mTimeSinceLastTap_3() { return &___mTimeSinceLastTap_3; }
	inline void set_mTimeSinceLastTap_3(float value)
	{
		___mTimeSinceLastTap_3 = value;
	}

	inline static int32_t get_offset_of_particle_4() { return static_cast<int32_t>(offsetof(PerfabAnimationTapHandler_t441730483, ___particle_4)); }
	inline ParticleSystem_t3394631041 * get_particle_4() const { return ___particle_4; }
	inline ParticleSystem_t3394631041 ** get_address_of_particle_4() { return &___particle_4; }
	inline void set_particle_4(ParticleSystem_t3394631041 * value)
	{
		___particle_4 = value;
		Il2CppCodeGenWriteBarrier(&___particle_4, value);
	}

	inline static int32_t get_offset_of_animator_5() { return static_cast<int32_t>(offsetof(PerfabAnimationTapHandler_t441730483, ___animator_5)); }
	inline Animator_t69676727 * get_animator_5() const { return ___animator_5; }
	inline Animator_t69676727 ** get_address_of_animator_5() { return &___animator_5; }
	inline void set_animator_5(Animator_t69676727 * value)
	{
		___animator_5 = value;
		Il2CppCodeGenWriteBarrier(&___animator_5, value);
	}

	inline static int32_t get_offset_of_isAnimatorLoaded_6() { return static_cast<int32_t>(offsetof(PerfabAnimationTapHandler_t441730483, ___isAnimatorLoaded_6)); }
	inline bool get_isAnimatorLoaded_6() const { return ___isAnimatorLoaded_6; }
	inline bool* get_address_of_isAnimatorLoaded_6() { return &___isAnimatorLoaded_6; }
	inline void set_isAnimatorLoaded_6(bool value)
	{
		___isAnimatorLoaded_6 = value;
	}

	inline static int32_t get_offset_of_mTapCount_7() { return static_cast<int32_t>(offsetof(PerfabAnimationTapHandler_t441730483, ___mTapCount_7)); }
	inline int32_t get_mTapCount_7() const { return ___mTapCount_7; }
	inline int32_t* get_address_of_mTapCount_7() { return &___mTapCount_7; }
	inline void set_mTapCount_7(int32_t value)
	{
		___mTapCount_7 = value;
	}

	inline static int32_t get_offset_of_nextARObject_8() { return static_cast<int32_t>(offsetof(PerfabAnimationTapHandler_t441730483, ___nextARObject_8)); }
	inline GameObject_t1756533147 * get_nextARObject_8() const { return ___nextARObject_8; }
	inline GameObject_t1756533147 ** get_address_of_nextARObject_8() { return &___nextARObject_8; }
	inline void set_nextARObject_8(GameObject_t1756533147 * value)
	{
		___nextARObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___nextARObject_8, value);
	}

	inline static int32_t get_offset_of_modelType_9() { return static_cast<int32_t>(offsetof(PerfabAnimationTapHandler_t441730483, ___modelType_9)); }
	inline String_t* get_modelType_9() const { return ___modelType_9; }
	inline String_t** get_address_of_modelType_9() { return &___modelType_9; }
	inline void set_modelType_9(String_t* value)
	{
		___modelType_9 = value;
		Il2CppCodeGenWriteBarrier(&___modelType_9, value);
	}

	inline static int32_t get_offset_of_hasMask_10() { return static_cast<int32_t>(offsetof(PerfabAnimationTapHandler_t441730483, ___hasMask_10)); }
	inline bool get_hasMask_10() const { return ___hasMask_10; }
	inline bool* get_address_of_hasMask_10() { return &___hasMask_10; }
	inline void set_hasMask_10(bool value)
	{
		___hasMask_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
