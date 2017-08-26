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

// Lean.Touch.LeanSelectable
struct LeanSelectable_t3692576450;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanRotate
struct  LeanRotate_t827445339  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanRotate::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// System.Int32 Lean.Touch.LeanRotate::RequiredFingerCount
	int32_t ___RequiredFingerCount_3;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanRotate::RequiredSelectable
	LeanSelectable_t3692576450 * ___RequiredSelectable_4;
	// UnityEngine.Camera Lean.Touch.LeanRotate::Camera
	Camera_t189460977 * ___Camera_5;
	// UnityEngine.Vector3 Lean.Touch.LeanRotate::RotateAxis
	Vector3_t2243707580  ___RotateAxis_6;
	// System.Boolean Lean.Touch.LeanRotate::Relative
	bool ___Relative_7;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanRotate_t827445339, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_3() { return static_cast<int32_t>(offsetof(LeanRotate_t827445339, ___RequiredFingerCount_3)); }
	inline int32_t get_RequiredFingerCount_3() const { return ___RequiredFingerCount_3; }
	inline int32_t* get_address_of_RequiredFingerCount_3() { return &___RequiredFingerCount_3; }
	inline void set_RequiredFingerCount_3(int32_t value)
	{
		___RequiredFingerCount_3 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_4() { return static_cast<int32_t>(offsetof(LeanRotate_t827445339, ___RequiredSelectable_4)); }
	inline LeanSelectable_t3692576450 * get_RequiredSelectable_4() const { return ___RequiredSelectable_4; }
	inline LeanSelectable_t3692576450 ** get_address_of_RequiredSelectable_4() { return &___RequiredSelectable_4; }
	inline void set_RequiredSelectable_4(LeanSelectable_t3692576450 * value)
	{
		___RequiredSelectable_4 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_4, value);
	}

	inline static int32_t get_offset_of_Camera_5() { return static_cast<int32_t>(offsetof(LeanRotate_t827445339, ___Camera_5)); }
	inline Camera_t189460977 * get_Camera_5() const { return ___Camera_5; }
	inline Camera_t189460977 ** get_address_of_Camera_5() { return &___Camera_5; }
	inline void set_Camera_5(Camera_t189460977 * value)
	{
		___Camera_5 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_5, value);
	}

	inline static int32_t get_offset_of_RotateAxis_6() { return static_cast<int32_t>(offsetof(LeanRotate_t827445339, ___RotateAxis_6)); }
	inline Vector3_t2243707580  get_RotateAxis_6() const { return ___RotateAxis_6; }
	inline Vector3_t2243707580 * get_address_of_RotateAxis_6() { return &___RotateAxis_6; }
	inline void set_RotateAxis_6(Vector3_t2243707580  value)
	{
		___RotateAxis_6 = value;
	}

	inline static int32_t get_offset_of_Relative_7() { return static_cast<int32_t>(offsetof(LeanRotate_t827445339, ___Relative_7)); }
	inline bool get_Relative_7() const { return ___Relative_7; }
	inline bool* get_address_of_Relative_7() { return &___Relative_7; }
	inline void set_Relative_7(bool value)
	{
		___Relative_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
