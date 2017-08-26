#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanZoomCamera
struct  LeanZoomCamera_t246347926  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanZoomCamera::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// System.Int32 Lean.Touch.LeanZoomCamera::RequiredFingerCount
	int32_t ___RequiredFingerCount_3;
	// System.Single Lean.Touch.LeanZoomCamera::WheelSensitivity
	float ___WheelSensitivity_4;
	// UnityEngine.Camera Lean.Touch.LeanZoomCamera::Camera
	Camera_t189460977 * ___Camera_5;
	// System.Single Lean.Touch.LeanZoomCamera::Minimum
	float ___Minimum_6;
	// System.Single Lean.Touch.LeanZoomCamera::Maximum
	float ___Maximum_7;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanZoomCamera_t246347926, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_3() { return static_cast<int32_t>(offsetof(LeanZoomCamera_t246347926, ___RequiredFingerCount_3)); }
	inline int32_t get_RequiredFingerCount_3() const { return ___RequiredFingerCount_3; }
	inline int32_t* get_address_of_RequiredFingerCount_3() { return &___RequiredFingerCount_3; }
	inline void set_RequiredFingerCount_3(int32_t value)
	{
		___RequiredFingerCount_3 = value;
	}

	inline static int32_t get_offset_of_WheelSensitivity_4() { return static_cast<int32_t>(offsetof(LeanZoomCamera_t246347926, ___WheelSensitivity_4)); }
	inline float get_WheelSensitivity_4() const { return ___WheelSensitivity_4; }
	inline float* get_address_of_WheelSensitivity_4() { return &___WheelSensitivity_4; }
	inline void set_WheelSensitivity_4(float value)
	{
		___WheelSensitivity_4 = value;
	}

	inline static int32_t get_offset_of_Camera_5() { return static_cast<int32_t>(offsetof(LeanZoomCamera_t246347926, ___Camera_5)); }
	inline Camera_t189460977 * get_Camera_5() const { return ___Camera_5; }
	inline Camera_t189460977 ** get_address_of_Camera_5() { return &___Camera_5; }
	inline void set_Camera_5(Camera_t189460977 * value)
	{
		___Camera_5 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_5, value);
	}

	inline static int32_t get_offset_of_Minimum_6() { return static_cast<int32_t>(offsetof(LeanZoomCamera_t246347926, ___Minimum_6)); }
	inline float get_Minimum_6() const { return ___Minimum_6; }
	inline float* get_address_of_Minimum_6() { return &___Minimum_6; }
	inline void set_Minimum_6(float value)
	{
		___Minimum_6 = value;
	}

	inline static int32_t get_offset_of_Maximum_7() { return static_cast<int32_t>(offsetof(LeanZoomCamera_t246347926, ___Maximum_7)); }
	inline float get_Maximum_7() const { return ___Maximum_7; }
	inline float* get_address_of_Maximum_7() { return &___Maximum_7; }
	inline void set_Maximum_7(float value)
	{
		___Maximum_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
