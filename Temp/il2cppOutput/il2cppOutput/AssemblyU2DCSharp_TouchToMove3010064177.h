#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchToMove
struct  TouchToMove_t3010064177  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 TouchToMove::touchPosition
	Vector3_t2243707580  ___touchPosition_2;
	// UnityEngine.Vector3 TouchToMove::startPos
	Vector3_t2243707580  ___startPos_3;
	// UnityEngine.Touch TouchToMove::touch
	Touch_t407273883  ___touch_4;
	// System.Single TouchToMove::baseLerpTime
	float ___baseLerpTime_5;
	// System.Single TouchToMove::lerpTime
	float ___lerpTime_6;
	// System.Single TouchToMove::currentLerpTime
	float ___currentLerpTime_7;
	// System.Boolean TouchToMove::keyHit
	bool ___keyHit_8;

public:
	inline static int32_t get_offset_of_touchPosition_2() { return static_cast<int32_t>(offsetof(TouchToMove_t3010064177, ___touchPosition_2)); }
	inline Vector3_t2243707580  get_touchPosition_2() const { return ___touchPosition_2; }
	inline Vector3_t2243707580 * get_address_of_touchPosition_2() { return &___touchPosition_2; }
	inline void set_touchPosition_2(Vector3_t2243707580  value)
	{
		___touchPosition_2 = value;
	}

	inline static int32_t get_offset_of_startPos_3() { return static_cast<int32_t>(offsetof(TouchToMove_t3010064177, ___startPos_3)); }
	inline Vector3_t2243707580  get_startPos_3() const { return ___startPos_3; }
	inline Vector3_t2243707580 * get_address_of_startPos_3() { return &___startPos_3; }
	inline void set_startPos_3(Vector3_t2243707580  value)
	{
		___startPos_3 = value;
	}

	inline static int32_t get_offset_of_touch_4() { return static_cast<int32_t>(offsetof(TouchToMove_t3010064177, ___touch_4)); }
	inline Touch_t407273883  get_touch_4() const { return ___touch_4; }
	inline Touch_t407273883 * get_address_of_touch_4() { return &___touch_4; }
	inline void set_touch_4(Touch_t407273883  value)
	{
		___touch_4 = value;
	}

	inline static int32_t get_offset_of_baseLerpTime_5() { return static_cast<int32_t>(offsetof(TouchToMove_t3010064177, ___baseLerpTime_5)); }
	inline float get_baseLerpTime_5() const { return ___baseLerpTime_5; }
	inline float* get_address_of_baseLerpTime_5() { return &___baseLerpTime_5; }
	inline void set_baseLerpTime_5(float value)
	{
		___baseLerpTime_5 = value;
	}

	inline static int32_t get_offset_of_lerpTime_6() { return static_cast<int32_t>(offsetof(TouchToMove_t3010064177, ___lerpTime_6)); }
	inline float get_lerpTime_6() const { return ___lerpTime_6; }
	inline float* get_address_of_lerpTime_6() { return &___lerpTime_6; }
	inline void set_lerpTime_6(float value)
	{
		___lerpTime_6 = value;
	}

	inline static int32_t get_offset_of_currentLerpTime_7() { return static_cast<int32_t>(offsetof(TouchToMove_t3010064177, ___currentLerpTime_7)); }
	inline float get_currentLerpTime_7() const { return ___currentLerpTime_7; }
	inline float* get_address_of_currentLerpTime_7() { return &___currentLerpTime_7; }
	inline void set_currentLerpTime_7(float value)
	{
		___currentLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_keyHit_8() { return static_cast<int32_t>(offsetof(TouchToMove_t3010064177, ___keyHit_8)); }
	inline bool get_keyHit_8() const { return ___keyHit_8; }
	inline bool* get_address_of_keyHit_8() { return &___keyHit_8; }
	inline void set_keyHit_8(bool value)
	{
		___keyHit_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
