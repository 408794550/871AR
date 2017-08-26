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

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanPanSmooth
struct  LeanPanSmooth_t2363787483  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanPanSmooth::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// System.Int32 Lean.Touch.LeanPanSmooth::RequiredFingerCount
	int32_t ___RequiredFingerCount_3;
	// UnityEngine.Camera Lean.Touch.LeanPanSmooth::Camera
	Camera_t189460977 * ___Camera_4;
	// System.Single Lean.Touch.LeanPanSmooth::Distance
	float ___Distance_5;
	// System.Single Lean.Touch.LeanPanSmooth::Dampening
	float ___Dampening_6;
	// UnityEngine.Vector3 Lean.Touch.LeanPanSmooth::RemainingDelta
	Vector3_t2243707580  ___RemainingDelta_7;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanPanSmooth_t2363787483, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_3() { return static_cast<int32_t>(offsetof(LeanPanSmooth_t2363787483, ___RequiredFingerCount_3)); }
	inline int32_t get_RequiredFingerCount_3() const { return ___RequiredFingerCount_3; }
	inline int32_t* get_address_of_RequiredFingerCount_3() { return &___RequiredFingerCount_3; }
	inline void set_RequiredFingerCount_3(int32_t value)
	{
		___RequiredFingerCount_3 = value;
	}

	inline static int32_t get_offset_of_Camera_4() { return static_cast<int32_t>(offsetof(LeanPanSmooth_t2363787483, ___Camera_4)); }
	inline Camera_t189460977 * get_Camera_4() const { return ___Camera_4; }
	inline Camera_t189460977 ** get_address_of_Camera_4() { return &___Camera_4; }
	inline void set_Camera_4(Camera_t189460977 * value)
	{
		___Camera_4 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_4, value);
	}

	inline static int32_t get_offset_of_Distance_5() { return static_cast<int32_t>(offsetof(LeanPanSmooth_t2363787483, ___Distance_5)); }
	inline float get_Distance_5() const { return ___Distance_5; }
	inline float* get_address_of_Distance_5() { return &___Distance_5; }
	inline void set_Distance_5(float value)
	{
		___Distance_5 = value;
	}

	inline static int32_t get_offset_of_Dampening_6() { return static_cast<int32_t>(offsetof(LeanPanSmooth_t2363787483, ___Dampening_6)); }
	inline float get_Dampening_6() const { return ___Dampening_6; }
	inline float* get_address_of_Dampening_6() { return &___Dampening_6; }
	inline void set_Dampening_6(float value)
	{
		___Dampening_6 = value;
	}

	inline static int32_t get_offset_of_RemainingDelta_7() { return static_cast<int32_t>(offsetof(LeanPanSmooth_t2363787483, ___RemainingDelta_7)); }
	inline Vector3_t2243707580  get_RemainingDelta_7() const { return ___RemainingDelta_7; }
	inline Vector3_t2243707580 * get_address_of_RemainingDelta_7() { return &___RemainingDelta_7; }
	inline void set_RemainingDelta_7(Vector3_t2243707580  value)
	{
		___RemainingDelta_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
