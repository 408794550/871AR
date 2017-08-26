#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanRotationControl
struct  LeanRotationControl_t4041839589  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 Lean.Touch.LeanRotationControl::startPosition
	Vector2_t2243707579  ___startPosition_2;
	// System.Boolean Lean.Touch.LeanRotationControl::isFirst
	bool ___isFirst_3;
	// System.Single Lean.Touch.LeanRotationControl::distanceX
	float ___distanceX_4;

public:
	inline static int32_t get_offset_of_startPosition_2() { return static_cast<int32_t>(offsetof(LeanRotationControl_t4041839589, ___startPosition_2)); }
	inline Vector2_t2243707579  get_startPosition_2() const { return ___startPosition_2; }
	inline Vector2_t2243707579 * get_address_of_startPosition_2() { return &___startPosition_2; }
	inline void set_startPosition_2(Vector2_t2243707579  value)
	{
		___startPosition_2 = value;
	}

	inline static int32_t get_offset_of_isFirst_3() { return static_cast<int32_t>(offsetof(LeanRotationControl_t4041839589, ___isFirst_3)); }
	inline bool get_isFirst_3() const { return ___isFirst_3; }
	inline bool* get_address_of_isFirst_3() { return &___isFirst_3; }
	inline void set_isFirst_3(bool value)
	{
		___isFirst_3 = value;
	}

	inline static int32_t get_offset_of_distanceX_4() { return static_cast<int32_t>(offsetof(LeanRotationControl_t4041839589, ___distanceX_4)); }
	inline float get_distanceX_4() const { return ___distanceX_4; }
	inline float* get_address_of_distanceX_4() { return &___distanceX_4; }
	inline void set_distanceX_4(float value)
	{
		___distanceX_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
