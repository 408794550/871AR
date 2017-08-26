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
#include "UnityEngine_UnityEngine_AnimatorStateInfo2577870592.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"

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

// Lean.Touch.LeanPressSelect
struct  LeanPressSelect_t4275113321  : public LeanSelect_t3606489640
{
public:
	// System.Boolean Lean.Touch.LeanPressSelect::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_8;
	// System.Single Lean.Touch.LeanPressSelect::pressTime
	float ___pressTime_9;
	// UnityEngine.Transform Lean.Touch.LeanPressSelect::walkQuadTransform
	Transform_t3275118058 * ___walkQuadTransform_10;
	// UnityEngine.Vector3 Lean.Touch.LeanPressSelect::touchPosition
	Vector3_t2243707580  ___touchPosition_11;
	// UnityEngine.Vector3 Lean.Touch.LeanPressSelect::startPos
	Vector3_t2243707580  ___startPos_12;
	// System.Single Lean.Touch.LeanPressSelect::baseLerpTime
	float ___baseLerpTime_13;
	// System.Single Lean.Touch.LeanPressSelect::lerpTime
	float ___lerpTime_14;
	// System.Single Lean.Touch.LeanPressSelect::currentLerpTime
	float ___currentLerpTime_15;
	// System.Boolean Lean.Touch.LeanPressSelect::keyHit
	bool ___keyHit_16;
	// UnityEngine.Animator Lean.Touch.LeanPressSelect::animator
	Animator_t69676727 * ___animator_17;
	// UnityEngine.AnimatorStateInfo Lean.Touch.LeanPressSelect::animatorStateInfo
	AnimatorStateInfo_t2577870592  ___animatorStateInfo_18;
	// UnityEngine.Transform Lean.Touch.LeanPressSelect::currentNeedToWalkTransform
	Transform_t3275118058 * ___currentNeedToWalkTransform_19;
	// UnityEngine.Touch Lean.Touch.LeanPressSelect::touch
	Touch_t407273883  ___touch_20;
	// UnityEngine.GameObject Lean.Touch.LeanPressSelect::offCardQuad
	GameObject_t1756533147 * ___offCardQuad_21;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_8() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___IgnoreGuiFingers_8)); }
	inline bool get_IgnoreGuiFingers_8() const { return ___IgnoreGuiFingers_8; }
	inline bool* get_address_of_IgnoreGuiFingers_8() { return &___IgnoreGuiFingers_8; }
	inline void set_IgnoreGuiFingers_8(bool value)
	{
		___IgnoreGuiFingers_8 = value;
	}

	inline static int32_t get_offset_of_pressTime_9() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___pressTime_9)); }
	inline float get_pressTime_9() const { return ___pressTime_9; }
	inline float* get_address_of_pressTime_9() { return &___pressTime_9; }
	inline void set_pressTime_9(float value)
	{
		___pressTime_9 = value;
	}

	inline static int32_t get_offset_of_walkQuadTransform_10() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___walkQuadTransform_10)); }
	inline Transform_t3275118058 * get_walkQuadTransform_10() const { return ___walkQuadTransform_10; }
	inline Transform_t3275118058 ** get_address_of_walkQuadTransform_10() { return &___walkQuadTransform_10; }
	inline void set_walkQuadTransform_10(Transform_t3275118058 * value)
	{
		___walkQuadTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___walkQuadTransform_10, value);
	}

	inline static int32_t get_offset_of_touchPosition_11() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___touchPosition_11)); }
	inline Vector3_t2243707580  get_touchPosition_11() const { return ___touchPosition_11; }
	inline Vector3_t2243707580 * get_address_of_touchPosition_11() { return &___touchPosition_11; }
	inline void set_touchPosition_11(Vector3_t2243707580  value)
	{
		___touchPosition_11 = value;
	}

	inline static int32_t get_offset_of_startPos_12() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___startPos_12)); }
	inline Vector3_t2243707580  get_startPos_12() const { return ___startPos_12; }
	inline Vector3_t2243707580 * get_address_of_startPos_12() { return &___startPos_12; }
	inline void set_startPos_12(Vector3_t2243707580  value)
	{
		___startPos_12 = value;
	}

	inline static int32_t get_offset_of_baseLerpTime_13() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___baseLerpTime_13)); }
	inline float get_baseLerpTime_13() const { return ___baseLerpTime_13; }
	inline float* get_address_of_baseLerpTime_13() { return &___baseLerpTime_13; }
	inline void set_baseLerpTime_13(float value)
	{
		___baseLerpTime_13 = value;
	}

	inline static int32_t get_offset_of_lerpTime_14() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___lerpTime_14)); }
	inline float get_lerpTime_14() const { return ___lerpTime_14; }
	inline float* get_address_of_lerpTime_14() { return &___lerpTime_14; }
	inline void set_lerpTime_14(float value)
	{
		___lerpTime_14 = value;
	}

	inline static int32_t get_offset_of_currentLerpTime_15() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___currentLerpTime_15)); }
	inline float get_currentLerpTime_15() const { return ___currentLerpTime_15; }
	inline float* get_address_of_currentLerpTime_15() { return &___currentLerpTime_15; }
	inline void set_currentLerpTime_15(float value)
	{
		___currentLerpTime_15 = value;
	}

	inline static int32_t get_offset_of_keyHit_16() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___keyHit_16)); }
	inline bool get_keyHit_16() const { return ___keyHit_16; }
	inline bool* get_address_of_keyHit_16() { return &___keyHit_16; }
	inline void set_keyHit_16(bool value)
	{
		___keyHit_16 = value;
	}

	inline static int32_t get_offset_of_animator_17() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___animator_17)); }
	inline Animator_t69676727 * get_animator_17() const { return ___animator_17; }
	inline Animator_t69676727 ** get_address_of_animator_17() { return &___animator_17; }
	inline void set_animator_17(Animator_t69676727 * value)
	{
		___animator_17 = value;
		Il2CppCodeGenWriteBarrier(&___animator_17, value);
	}

	inline static int32_t get_offset_of_animatorStateInfo_18() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___animatorStateInfo_18)); }
	inline AnimatorStateInfo_t2577870592  get_animatorStateInfo_18() const { return ___animatorStateInfo_18; }
	inline AnimatorStateInfo_t2577870592 * get_address_of_animatorStateInfo_18() { return &___animatorStateInfo_18; }
	inline void set_animatorStateInfo_18(AnimatorStateInfo_t2577870592  value)
	{
		___animatorStateInfo_18 = value;
	}

	inline static int32_t get_offset_of_currentNeedToWalkTransform_19() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___currentNeedToWalkTransform_19)); }
	inline Transform_t3275118058 * get_currentNeedToWalkTransform_19() const { return ___currentNeedToWalkTransform_19; }
	inline Transform_t3275118058 ** get_address_of_currentNeedToWalkTransform_19() { return &___currentNeedToWalkTransform_19; }
	inline void set_currentNeedToWalkTransform_19(Transform_t3275118058 * value)
	{
		___currentNeedToWalkTransform_19 = value;
		Il2CppCodeGenWriteBarrier(&___currentNeedToWalkTransform_19, value);
	}

	inline static int32_t get_offset_of_touch_20() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___touch_20)); }
	inline Touch_t407273883  get_touch_20() const { return ___touch_20; }
	inline Touch_t407273883 * get_address_of_touch_20() { return &___touch_20; }
	inline void set_touch_20(Touch_t407273883  value)
	{
		___touch_20 = value;
	}

	inline static int32_t get_offset_of_offCardQuad_21() { return static_cast<int32_t>(offsetof(LeanPressSelect_t4275113321, ___offCardQuad_21)); }
	inline GameObject_t1756533147 * get_offCardQuad_21() const { return ___offCardQuad_21; }
	inline GameObject_t1756533147 ** get_address_of_offCardQuad_21() { return &___offCardQuad_21; }
	inline void set_offCardQuad_21(GameObject_t1756533147 * value)
	{
		___offCardQuad_21 = value;
		Il2CppCodeGenWriteBarrier(&___offCardQuad_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
