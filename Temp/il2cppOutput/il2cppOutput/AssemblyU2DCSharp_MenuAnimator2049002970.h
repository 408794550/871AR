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

// UnityEngine.Canvas
struct Canvas_t209405766;
// MenuOptions
struct MenuOptions_t3210604277;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuAnimator
struct  MenuAnimator_t2049002970  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 MenuAnimator::mVisiblePos
	Vector3_t2243707580  ___mVisiblePos_2;
	// UnityEngine.Vector3 MenuAnimator::mInvisiblePos
	Vector3_t2243707580  ___mInvisiblePos_3;
	// System.Single MenuAnimator::mVisibility
	float ___mVisibility_4;
	// System.Boolean MenuAnimator::mVisible
	bool ___mVisible_5;
	// UnityEngine.Canvas MenuAnimator::mCanvas
	Canvas_t209405766 * ___mCanvas_6;
	// MenuOptions MenuAnimator::mMenuOptions
	MenuOptions_t3210604277 * ___mMenuOptions_7;
	// System.Single MenuAnimator::SlidingTime
	float ___SlidingTime_8;

public:
	inline static int32_t get_offset_of_mVisiblePos_2() { return static_cast<int32_t>(offsetof(MenuAnimator_t2049002970, ___mVisiblePos_2)); }
	inline Vector3_t2243707580  get_mVisiblePos_2() const { return ___mVisiblePos_2; }
	inline Vector3_t2243707580 * get_address_of_mVisiblePos_2() { return &___mVisiblePos_2; }
	inline void set_mVisiblePos_2(Vector3_t2243707580  value)
	{
		___mVisiblePos_2 = value;
	}

	inline static int32_t get_offset_of_mInvisiblePos_3() { return static_cast<int32_t>(offsetof(MenuAnimator_t2049002970, ___mInvisiblePos_3)); }
	inline Vector3_t2243707580  get_mInvisiblePos_3() const { return ___mInvisiblePos_3; }
	inline Vector3_t2243707580 * get_address_of_mInvisiblePos_3() { return &___mInvisiblePos_3; }
	inline void set_mInvisiblePos_3(Vector3_t2243707580  value)
	{
		___mInvisiblePos_3 = value;
	}

	inline static int32_t get_offset_of_mVisibility_4() { return static_cast<int32_t>(offsetof(MenuAnimator_t2049002970, ___mVisibility_4)); }
	inline float get_mVisibility_4() const { return ___mVisibility_4; }
	inline float* get_address_of_mVisibility_4() { return &___mVisibility_4; }
	inline void set_mVisibility_4(float value)
	{
		___mVisibility_4 = value;
	}

	inline static int32_t get_offset_of_mVisible_5() { return static_cast<int32_t>(offsetof(MenuAnimator_t2049002970, ___mVisible_5)); }
	inline bool get_mVisible_5() const { return ___mVisible_5; }
	inline bool* get_address_of_mVisible_5() { return &___mVisible_5; }
	inline void set_mVisible_5(bool value)
	{
		___mVisible_5 = value;
	}

	inline static int32_t get_offset_of_mCanvas_6() { return static_cast<int32_t>(offsetof(MenuAnimator_t2049002970, ___mCanvas_6)); }
	inline Canvas_t209405766 * get_mCanvas_6() const { return ___mCanvas_6; }
	inline Canvas_t209405766 ** get_address_of_mCanvas_6() { return &___mCanvas_6; }
	inline void set_mCanvas_6(Canvas_t209405766 * value)
	{
		___mCanvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___mCanvas_6, value);
	}

	inline static int32_t get_offset_of_mMenuOptions_7() { return static_cast<int32_t>(offsetof(MenuAnimator_t2049002970, ___mMenuOptions_7)); }
	inline MenuOptions_t3210604277 * get_mMenuOptions_7() const { return ___mMenuOptions_7; }
	inline MenuOptions_t3210604277 ** get_address_of_mMenuOptions_7() { return &___mMenuOptions_7; }
	inline void set_mMenuOptions_7(MenuOptions_t3210604277 * value)
	{
		___mMenuOptions_7 = value;
		Il2CppCodeGenWriteBarrier(&___mMenuOptions_7, value);
	}

	inline static int32_t get_offset_of_SlidingTime_8() { return static_cast<int32_t>(offsetof(MenuAnimator_t2049002970, ___SlidingTime_8)); }
	inline float get_SlidingTime_8() const { return ___SlidingTime_8; }
	inline float* get_address_of_SlidingTime_8() { return &___SlidingTime_8; }
	inline void set_SlidingTime_8(float value)
	{
		___SlidingTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
