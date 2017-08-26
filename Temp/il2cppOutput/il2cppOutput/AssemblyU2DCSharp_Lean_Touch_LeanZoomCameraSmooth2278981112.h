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

// Lean.Touch.LeanZoomCameraSmooth
struct  LeanZoomCameraSmooth_t2278981112  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanZoomCameraSmooth::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// System.Int32 Lean.Touch.LeanZoomCameraSmooth::RequiredFingerCount
	int32_t ___RequiredFingerCount_3;
	// System.Single Lean.Touch.LeanZoomCameraSmooth::WheelSensitivity
	float ___WheelSensitivity_4;
	// UnityEngine.Camera Lean.Touch.LeanZoomCameraSmooth::Camera
	Camera_t189460977 * ___Camera_5;
	// System.Single Lean.Touch.LeanZoomCameraSmooth::Target
	float ___Target_6;
	// System.Single Lean.Touch.LeanZoomCameraSmooth::Minimum
	float ___Minimum_7;
	// System.Single Lean.Touch.LeanZoomCameraSmooth::Maximum
	float ___Maximum_8;
	// System.Single Lean.Touch.LeanZoomCameraSmooth::Dampening
	float ___Dampening_9;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanZoomCameraSmooth_t2278981112, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_3() { return static_cast<int32_t>(offsetof(LeanZoomCameraSmooth_t2278981112, ___RequiredFingerCount_3)); }
	inline int32_t get_RequiredFingerCount_3() const { return ___RequiredFingerCount_3; }
	inline int32_t* get_address_of_RequiredFingerCount_3() { return &___RequiredFingerCount_3; }
	inline void set_RequiredFingerCount_3(int32_t value)
	{
		___RequiredFingerCount_3 = value;
	}

	inline static int32_t get_offset_of_WheelSensitivity_4() { return static_cast<int32_t>(offsetof(LeanZoomCameraSmooth_t2278981112, ___WheelSensitivity_4)); }
	inline float get_WheelSensitivity_4() const { return ___WheelSensitivity_4; }
	inline float* get_address_of_WheelSensitivity_4() { return &___WheelSensitivity_4; }
	inline void set_WheelSensitivity_4(float value)
	{
		___WheelSensitivity_4 = value;
	}

	inline static int32_t get_offset_of_Camera_5() { return static_cast<int32_t>(offsetof(LeanZoomCameraSmooth_t2278981112, ___Camera_5)); }
	inline Camera_t189460977 * get_Camera_5() const { return ___Camera_5; }
	inline Camera_t189460977 ** get_address_of_Camera_5() { return &___Camera_5; }
	inline void set_Camera_5(Camera_t189460977 * value)
	{
		___Camera_5 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_5, value);
	}

	inline static int32_t get_offset_of_Target_6() { return static_cast<int32_t>(offsetof(LeanZoomCameraSmooth_t2278981112, ___Target_6)); }
	inline float get_Target_6() const { return ___Target_6; }
	inline float* get_address_of_Target_6() { return &___Target_6; }
	inline void set_Target_6(float value)
	{
		___Target_6 = value;
	}

	inline static int32_t get_offset_of_Minimum_7() { return static_cast<int32_t>(offsetof(LeanZoomCameraSmooth_t2278981112, ___Minimum_7)); }
	inline float get_Minimum_7() const { return ___Minimum_7; }
	inline float* get_address_of_Minimum_7() { return &___Minimum_7; }
	inline void set_Minimum_7(float value)
	{
		___Minimum_7 = value;
	}

	inline static int32_t get_offset_of_Maximum_8() { return static_cast<int32_t>(offsetof(LeanZoomCameraSmooth_t2278981112, ___Maximum_8)); }
	inline float get_Maximum_8() const { return ___Maximum_8; }
	inline float* get_address_of_Maximum_8() { return &___Maximum_8; }
	inline void set_Maximum_8(float value)
	{
		___Maximum_8 = value;
	}

	inline static int32_t get_offset_of_Dampening_9() { return static_cast<int32_t>(offsetof(LeanZoomCameraSmooth_t2278981112, ___Dampening_9)); }
	inline float get_Dampening_9() const { return ___Dampening_9; }
	inline float* get_address_of_Dampening_9() { return &___Dampening_9; }
	inline void set_Dampening_9(float value)
	{
		___Dampening_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
