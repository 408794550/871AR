#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// Lean.Touch.LeanFinger
struct LeanFinger_t76062517;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSwipeRigidbody3DNoRelease
struct  LeanSwipeRigidbody3DNoRelease_t3590775226  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LayerMask Lean.Touch.LeanSwipeRigidbody3DNoRelease::LayerMask
	LayerMask_t3188175821  ___LayerMask_2;
	// System.Single Lean.Touch.LeanSwipeRigidbody3DNoRelease::ImpulseForce
	float ___ImpulseForce_3;
	// Lean.Touch.LeanFinger Lean.Touch.LeanSwipeRigidbody3DNoRelease::swipingFinger
	LeanFinger_t76062517 * ___swipingFinger_4;

public:
	inline static int32_t get_offset_of_LayerMask_2() { return static_cast<int32_t>(offsetof(LeanSwipeRigidbody3DNoRelease_t3590775226, ___LayerMask_2)); }
	inline LayerMask_t3188175821  get_LayerMask_2() const { return ___LayerMask_2; }
	inline LayerMask_t3188175821 * get_address_of_LayerMask_2() { return &___LayerMask_2; }
	inline void set_LayerMask_2(LayerMask_t3188175821  value)
	{
		___LayerMask_2 = value;
	}

	inline static int32_t get_offset_of_ImpulseForce_3() { return static_cast<int32_t>(offsetof(LeanSwipeRigidbody3DNoRelease_t3590775226, ___ImpulseForce_3)); }
	inline float get_ImpulseForce_3() const { return ___ImpulseForce_3; }
	inline float* get_address_of_ImpulseForce_3() { return &___ImpulseForce_3; }
	inline void set_ImpulseForce_3(float value)
	{
		___ImpulseForce_3 = value;
	}

	inline static int32_t get_offset_of_swipingFinger_4() { return static_cast<int32_t>(offsetof(LeanSwipeRigidbody3DNoRelease_t3590775226, ___swipingFinger_4)); }
	inline LeanFinger_t76062517 * get_swipingFinger_4() const { return ___swipingFinger_4; }
	inline LeanFinger_t76062517 ** get_address_of_swipingFinger_4() { return &___swipingFinger_4; }
	inline void set_swipingFinger_4(LeanFinger_t76062517 * value)
	{
		___swipingFinger_4 = value;
		Il2CppCodeGenWriteBarrier(&___swipingFinger_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
