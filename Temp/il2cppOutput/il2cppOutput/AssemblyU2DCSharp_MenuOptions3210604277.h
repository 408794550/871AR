#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// CameraSettings
struct CameraSettings_t3536359094;
// TrackableSettings
struct TrackableSettings_t4265251850;
// MenuAnimator
struct MenuAnimator_t2049002970;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuOptions
struct  MenuOptions_t3210604277  : public MonoBehaviour_t1158329972
{
public:
	// CameraSettings MenuOptions::mCamSettings
	CameraSettings_t3536359094 * ___mCamSettings_2;
	// TrackableSettings MenuOptions::mTrackableSettings
	TrackableSettings_t4265251850 * ___mTrackableSettings_3;
	// MenuAnimator MenuOptions::mMenuAnim
	MenuAnimator_t2049002970 * ___mMenuAnim_4;

public:
	inline static int32_t get_offset_of_mCamSettings_2() { return static_cast<int32_t>(offsetof(MenuOptions_t3210604277, ___mCamSettings_2)); }
	inline CameraSettings_t3536359094 * get_mCamSettings_2() const { return ___mCamSettings_2; }
	inline CameraSettings_t3536359094 ** get_address_of_mCamSettings_2() { return &___mCamSettings_2; }
	inline void set_mCamSettings_2(CameraSettings_t3536359094 * value)
	{
		___mCamSettings_2 = value;
		Il2CppCodeGenWriteBarrier(&___mCamSettings_2, value);
	}

	inline static int32_t get_offset_of_mTrackableSettings_3() { return static_cast<int32_t>(offsetof(MenuOptions_t3210604277, ___mTrackableSettings_3)); }
	inline TrackableSettings_t4265251850 * get_mTrackableSettings_3() const { return ___mTrackableSettings_3; }
	inline TrackableSettings_t4265251850 ** get_address_of_mTrackableSettings_3() { return &___mTrackableSettings_3; }
	inline void set_mTrackableSettings_3(TrackableSettings_t4265251850 * value)
	{
		___mTrackableSettings_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableSettings_3, value);
	}

	inline static int32_t get_offset_of_mMenuAnim_4() { return static_cast<int32_t>(offsetof(MenuOptions_t3210604277, ___mMenuAnim_4)); }
	inline MenuAnimator_t2049002970 * get_mMenuAnim_4() const { return ___mMenuAnim_4; }
	inline MenuAnimator_t2049002970 ** get_address_of_mMenuAnim_4() { return &___mMenuAnim_4; }
	inline void set_mMenuAnim_4(MenuAnimator_t2049002970 * value)
	{
		___mMenuAnim_4 = value;
		Il2CppCodeGenWriteBarrier(&___mMenuAnim_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
