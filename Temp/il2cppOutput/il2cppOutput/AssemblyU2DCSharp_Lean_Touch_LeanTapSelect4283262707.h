#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Lean_Touch_LeanSelect3606489640.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanTapSelect
struct  LeanTapSelect_t4283262707  : public LeanSelect_t3606489640
{
public:
	// System.Boolean Lean.Touch.LeanTapSelect::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_8;
	// System.Int32 Lean.Touch.LeanTapSelect::RequiredTapCount
	int32_t ___RequiredTapCount_9;
	// System.Int32 Lean.Touch.LeanTapSelect::RequiredTapInterval
	int32_t ___RequiredTapInterval_10;
	// UnityEngine.Camera Lean.Touch.LeanTapSelect::ARCamera
	Camera_t189460977 * ___ARCamera_11;
	// UnityEngine.Transform Lean.Touch.LeanTapSelect::walkQuadTransform
	Transform_t3275118058 * ___walkQuadTransform_12;
	// UnityEngine.Vector3 Lean.Touch.LeanTapSelect::touchPosition
	Vector3_t2243707580  ___touchPosition_13;
	// UnityEngine.Vector3 Lean.Touch.LeanTapSelect::startPos
	Vector3_t2243707580  ___startPos_14;
	// System.Single Lean.Touch.LeanTapSelect::baseLerpTime
	float ___baseLerpTime_15;
	// System.Single Lean.Touch.LeanTapSelect::lerpTime
	float ___lerpTime_16;
	// System.Single Lean.Touch.LeanTapSelect::currentLerpTime
	float ___currentLerpTime_17;
	// System.Boolean Lean.Touch.LeanTapSelect::keyHit
	bool ___keyHit_18;
	// UnityEngine.Animator Lean.Touch.LeanTapSelect::animator
	Animator_t69676727 * ___animator_19;
	// UnityEngine.Transform Lean.Touch.LeanTapSelect::currentNeedToWalkTransform
	Transform_t3275118058 * ___currentNeedToWalkTransform_20;
	// UnityEngine.Touch Lean.Touch.LeanTapSelect::touch
	Touch_t407273883  ___touch_21;
	// System.Single Lean.Touch.LeanTapSelect::zAxisDistance
	float ___zAxisDistance_22;
	// UnityEngine.GameObject Lean.Touch.LeanTapSelect::offCardQuad
	GameObject_t1756533147 * ___offCardQuad_23;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_8() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___IgnoreGuiFingers_8)); }
	inline bool get_IgnoreGuiFingers_8() const { return ___IgnoreGuiFingers_8; }
	inline bool* get_address_of_IgnoreGuiFingers_8() { return &___IgnoreGuiFingers_8; }
	inline void set_IgnoreGuiFingers_8(bool value)
	{
		___IgnoreGuiFingers_8 = value;
	}

	inline static int32_t get_offset_of_RequiredTapCount_9() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___RequiredTapCount_9)); }
	inline int32_t get_RequiredTapCount_9() const { return ___RequiredTapCount_9; }
	inline int32_t* get_address_of_RequiredTapCount_9() { return &___RequiredTapCount_9; }
	inline void set_RequiredTapCount_9(int32_t value)
	{
		___RequiredTapCount_9 = value;
	}

	inline static int32_t get_offset_of_RequiredTapInterval_10() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___RequiredTapInterval_10)); }
	inline int32_t get_RequiredTapInterval_10() const { return ___RequiredTapInterval_10; }
	inline int32_t* get_address_of_RequiredTapInterval_10() { return &___RequiredTapInterval_10; }
	inline void set_RequiredTapInterval_10(int32_t value)
	{
		___RequiredTapInterval_10 = value;
	}

	inline static int32_t get_offset_of_ARCamera_11() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___ARCamera_11)); }
	inline Camera_t189460977 * get_ARCamera_11() const { return ___ARCamera_11; }
	inline Camera_t189460977 ** get_address_of_ARCamera_11() { return &___ARCamera_11; }
	inline void set_ARCamera_11(Camera_t189460977 * value)
	{
		___ARCamera_11 = value;
		Il2CppCodeGenWriteBarrier(&___ARCamera_11, value);
	}

	inline static int32_t get_offset_of_walkQuadTransform_12() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___walkQuadTransform_12)); }
	inline Transform_t3275118058 * get_walkQuadTransform_12() const { return ___walkQuadTransform_12; }
	inline Transform_t3275118058 ** get_address_of_walkQuadTransform_12() { return &___walkQuadTransform_12; }
	inline void set_walkQuadTransform_12(Transform_t3275118058 * value)
	{
		___walkQuadTransform_12 = value;
		Il2CppCodeGenWriteBarrier(&___walkQuadTransform_12, value);
	}

	inline static int32_t get_offset_of_touchPosition_13() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___touchPosition_13)); }
	inline Vector3_t2243707580  get_touchPosition_13() const { return ___touchPosition_13; }
	inline Vector3_t2243707580 * get_address_of_touchPosition_13() { return &___touchPosition_13; }
	inline void set_touchPosition_13(Vector3_t2243707580  value)
	{
		___touchPosition_13 = value;
	}

	inline static int32_t get_offset_of_startPos_14() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___startPos_14)); }
	inline Vector3_t2243707580  get_startPos_14() const { return ___startPos_14; }
	inline Vector3_t2243707580 * get_address_of_startPos_14() { return &___startPos_14; }
	inline void set_startPos_14(Vector3_t2243707580  value)
	{
		___startPos_14 = value;
	}

	inline static int32_t get_offset_of_baseLerpTime_15() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___baseLerpTime_15)); }
	inline float get_baseLerpTime_15() const { return ___baseLerpTime_15; }
	inline float* get_address_of_baseLerpTime_15() { return &___baseLerpTime_15; }
	inline void set_baseLerpTime_15(float value)
	{
		___baseLerpTime_15 = value;
	}

	inline static int32_t get_offset_of_lerpTime_16() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___lerpTime_16)); }
	inline float get_lerpTime_16() const { return ___lerpTime_16; }
	inline float* get_address_of_lerpTime_16() { return &___lerpTime_16; }
	inline void set_lerpTime_16(float value)
	{
		___lerpTime_16 = value;
	}

	inline static int32_t get_offset_of_currentLerpTime_17() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___currentLerpTime_17)); }
	inline float get_currentLerpTime_17() const { return ___currentLerpTime_17; }
	inline float* get_address_of_currentLerpTime_17() { return &___currentLerpTime_17; }
	inline void set_currentLerpTime_17(float value)
	{
		___currentLerpTime_17 = value;
	}

	inline static int32_t get_offset_of_keyHit_18() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___keyHit_18)); }
	inline bool get_keyHit_18() const { return ___keyHit_18; }
	inline bool* get_address_of_keyHit_18() { return &___keyHit_18; }
	inline void set_keyHit_18(bool value)
	{
		___keyHit_18 = value;
	}

	inline static int32_t get_offset_of_animator_19() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___animator_19)); }
	inline Animator_t69676727 * get_animator_19() const { return ___animator_19; }
	inline Animator_t69676727 ** get_address_of_animator_19() { return &___animator_19; }
	inline void set_animator_19(Animator_t69676727 * value)
	{
		___animator_19 = value;
		Il2CppCodeGenWriteBarrier(&___animator_19, value);
	}

	inline static int32_t get_offset_of_currentNeedToWalkTransform_20() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___currentNeedToWalkTransform_20)); }
	inline Transform_t3275118058 * get_currentNeedToWalkTransform_20() const { return ___currentNeedToWalkTransform_20; }
	inline Transform_t3275118058 ** get_address_of_currentNeedToWalkTransform_20() { return &___currentNeedToWalkTransform_20; }
	inline void set_currentNeedToWalkTransform_20(Transform_t3275118058 * value)
	{
		___currentNeedToWalkTransform_20 = value;
		Il2CppCodeGenWriteBarrier(&___currentNeedToWalkTransform_20, value);
	}

	inline static int32_t get_offset_of_touch_21() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___touch_21)); }
	inline Touch_t407273883  get_touch_21() const { return ___touch_21; }
	inline Touch_t407273883 * get_address_of_touch_21() { return &___touch_21; }
	inline void set_touch_21(Touch_t407273883  value)
	{
		___touch_21 = value;
	}

	inline static int32_t get_offset_of_zAxisDistance_22() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___zAxisDistance_22)); }
	inline float get_zAxisDistance_22() const { return ___zAxisDistance_22; }
	inline float* get_address_of_zAxisDistance_22() { return &___zAxisDistance_22; }
	inline void set_zAxisDistance_22(float value)
	{
		___zAxisDistance_22 = value;
	}

	inline static int32_t get_offset_of_offCardQuad_23() { return static_cast<int32_t>(offsetof(LeanTapSelect_t4283262707, ___offCardQuad_23)); }
	inline GameObject_t1756533147 * get_offCardQuad_23() const { return ___offCardQuad_23; }
	inline GameObject_t1756533147 ** get_address_of_offCardQuad_23() { return &___offCardQuad_23; }
	inline void set_offCardQuad_23(GameObject_t1756533147 * value)
	{
		___offCardQuad_23 = value;
		Il2CppCodeGenWriteBarrier(&___offCardQuad_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
