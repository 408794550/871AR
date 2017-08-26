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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSwipeRigidbody2D
struct  LeanSwipeRigidbody2D_t1364749039  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LayerMask Lean.Touch.LeanSwipeRigidbody2D::LayerMask
	LayerMask_t3188175821  ___LayerMask_2;
	// System.Single Lean.Touch.LeanSwipeRigidbody2D::ForceMultiplier
	float ___ForceMultiplier_3;

public:
	inline static int32_t get_offset_of_LayerMask_2() { return static_cast<int32_t>(offsetof(LeanSwipeRigidbody2D_t1364749039, ___LayerMask_2)); }
	inline LayerMask_t3188175821  get_LayerMask_2() const { return ___LayerMask_2; }
	inline LayerMask_t3188175821 * get_address_of_LayerMask_2() { return &___LayerMask_2; }
	inline void set_LayerMask_2(LayerMask_t3188175821  value)
	{
		___LayerMask_2 = value;
	}

	inline static int32_t get_offset_of_ForceMultiplier_3() { return static_cast<int32_t>(offsetof(LeanSwipeRigidbody2D_t1364749039, ___ForceMultiplier_3)); }
	inline float get_ForceMultiplier_3() const { return ___ForceMultiplier_3; }
	inline float* get_address_of_ForceMultiplier_3() { return &___ForceMultiplier_3; }
	inline void set_ForceMultiplier_3(float value)
	{
		___ForceMultiplier_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
