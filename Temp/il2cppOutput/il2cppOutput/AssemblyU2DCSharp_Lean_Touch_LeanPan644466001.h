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

// Lean.Touch.LeanPan
struct  LeanPan_t644466001  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanPan::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// System.Int32 Lean.Touch.LeanPan::RequiredFingerCount
	int32_t ___RequiredFingerCount_3;
	// UnityEngine.Camera Lean.Touch.LeanPan::Camera
	Camera_t189460977 * ___Camera_4;
	// System.Single Lean.Touch.LeanPan::Distance
	float ___Distance_5;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanPan_t644466001, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_3() { return static_cast<int32_t>(offsetof(LeanPan_t644466001, ___RequiredFingerCount_3)); }
	inline int32_t get_RequiredFingerCount_3() const { return ___RequiredFingerCount_3; }
	inline int32_t* get_address_of_RequiredFingerCount_3() { return &___RequiredFingerCount_3; }
	inline void set_RequiredFingerCount_3(int32_t value)
	{
		___RequiredFingerCount_3 = value;
	}

	inline static int32_t get_offset_of_Camera_4() { return static_cast<int32_t>(offsetof(LeanPan_t644466001, ___Camera_4)); }
	inline Camera_t189460977 * get_Camera_4() const { return ___Camera_4; }
	inline Camera_t189460977 ** get_address_of_Camera_4() { return &___Camera_4; }
	inline void set_Camera_4(Camera_t189460977 * value)
	{
		___Camera_4 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_4, value);
	}

	inline static int32_t get_offset_of_Distance_5() { return static_cast<int32_t>(offsetof(LeanPan_t644466001, ___Distance_5)); }
	inline float get_Distance_5() const { return ___Distance_5; }
	inline float* get_address_of_Distance_5() { return &___Distance_5; }
	inline void set_Distance_5(float value)
	{
		___Distance_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
