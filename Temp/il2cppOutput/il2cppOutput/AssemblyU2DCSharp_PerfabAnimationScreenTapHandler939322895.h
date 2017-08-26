#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PerfabAnimationScreenTapHandler
struct  PerfabAnimationScreenTapHandler_t939322895  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PerfabAnimationScreenTapHandler::mTimeSinceLastTap
	float ___mTimeSinceLastTap_3;
	// UnityEngine.Animator PerfabAnimationScreenTapHandler::animator
	Animator_t69676727 * ___animator_4;
	// System.Boolean PerfabAnimationScreenTapHandler::isAnimatorLoaded
	bool ___isAnimatorLoaded_5;
	// System.Int32 PerfabAnimationScreenTapHandler::mTapCount
	int32_t ___mTapCount_6;

public:
	inline static int32_t get_offset_of_mTimeSinceLastTap_3() { return static_cast<int32_t>(offsetof(PerfabAnimationScreenTapHandler_t939322895, ___mTimeSinceLastTap_3)); }
	inline float get_mTimeSinceLastTap_3() const { return ___mTimeSinceLastTap_3; }
	inline float* get_address_of_mTimeSinceLastTap_3() { return &___mTimeSinceLastTap_3; }
	inline void set_mTimeSinceLastTap_3(float value)
	{
		___mTimeSinceLastTap_3 = value;
	}

	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(PerfabAnimationScreenTapHandler_t939322895, ___animator_4)); }
	inline Animator_t69676727 * get_animator_4() const { return ___animator_4; }
	inline Animator_t69676727 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t69676727 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier(&___animator_4, value);
	}

	inline static int32_t get_offset_of_isAnimatorLoaded_5() { return static_cast<int32_t>(offsetof(PerfabAnimationScreenTapHandler_t939322895, ___isAnimatorLoaded_5)); }
	inline bool get_isAnimatorLoaded_5() const { return ___isAnimatorLoaded_5; }
	inline bool* get_address_of_isAnimatorLoaded_5() { return &___isAnimatorLoaded_5; }
	inline void set_isAnimatorLoaded_5(bool value)
	{
		___isAnimatorLoaded_5 = value;
	}

	inline static int32_t get_offset_of_mTapCount_6() { return static_cast<int32_t>(offsetof(PerfabAnimationScreenTapHandler_t939322895, ___mTapCount_6)); }
	inline int32_t get_mTapCount_6() const { return ___mTapCount_6; }
	inline int32_t* get_address_of_mTapCount_6() { return &___mTapCount_6; }
	inline void set_mTapCount_6(int32_t value)
	{
		___mTapCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
