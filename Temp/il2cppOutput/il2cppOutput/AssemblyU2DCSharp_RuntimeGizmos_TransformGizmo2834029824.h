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

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RuntimeGizmos.TransformGizmo
struct  TransformGizmo_t2834029824  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RuntimeGizmos.TransformGizmo::allRotateSpeedMultiplier
	float ___allRotateSpeedMultiplier_2;
	// UnityEngine.Transform RuntimeGizmos.TransformGizmo::target1
	Transform_t3275118058 * ___target1_3;
	// UnityEngine.Transform RuntimeGizmos.TransformGizmo::target
	Transform_t3275118058 * ___target_4;
	// UnityEngine.Camera RuntimeGizmos.TransformGizmo::myCamera
	Camera_t189460977 * ___myCamera_5;
	// UnityEngine.Vector3 RuntimeGizmos.TransformGizmo::touchPosition
	Vector3_t2243707580  ___touchPosition_7;
	// UnityEngine.Vector3 RuntimeGizmos.TransformGizmo::startPos
	Vector3_t2243707580  ___startPos_8;
	// UnityEngine.Touch RuntimeGizmos.TransformGizmo::touch
	Touch_t407273883  ___touch_9;
	// System.Single RuntimeGizmos.TransformGizmo::baseLerpTime
	float ___baseLerpTime_10;
	// System.Single RuntimeGizmos.TransformGizmo::lerpTime
	float ___lerpTime_11;
	// System.Single RuntimeGizmos.TransformGizmo::currentLerpTime
	float ___currentLerpTime_12;
	// System.Single RuntimeGizmos.TransformGizmo::yRot
	float ___yRot_13;

public:
	inline static int32_t get_offset_of_allRotateSpeedMultiplier_2() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824, ___allRotateSpeedMultiplier_2)); }
	inline float get_allRotateSpeedMultiplier_2() const { return ___allRotateSpeedMultiplier_2; }
	inline float* get_address_of_allRotateSpeedMultiplier_2() { return &___allRotateSpeedMultiplier_2; }
	inline void set_allRotateSpeedMultiplier_2(float value)
	{
		___allRotateSpeedMultiplier_2 = value;
	}

	inline static int32_t get_offset_of_target1_3() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824, ___target1_3)); }
	inline Transform_t3275118058 * get_target1_3() const { return ___target1_3; }
	inline Transform_t3275118058 ** get_address_of_target1_3() { return &___target1_3; }
	inline void set_target1_3(Transform_t3275118058 * value)
	{
		___target1_3 = value;
		Il2CppCodeGenWriteBarrier(&___target1_3, value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824, ___target_4)); }
	inline Transform_t3275118058 * get_target_4() const { return ___target_4; }
	inline Transform_t3275118058 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t3275118058 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_myCamera_5() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824, ___myCamera_5)); }
	inline Camera_t189460977 * get_myCamera_5() const { return ___myCamera_5; }
	inline Camera_t189460977 ** get_address_of_myCamera_5() { return &___myCamera_5; }
	inline void set_myCamera_5(Camera_t189460977 * value)
	{
		___myCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___myCamera_5, value);
	}

	inline static int32_t get_offset_of_touchPosition_7() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824, ___touchPosition_7)); }
	inline Vector3_t2243707580  get_touchPosition_7() const { return ___touchPosition_7; }
	inline Vector3_t2243707580 * get_address_of_touchPosition_7() { return &___touchPosition_7; }
	inline void set_touchPosition_7(Vector3_t2243707580  value)
	{
		___touchPosition_7 = value;
	}

	inline static int32_t get_offset_of_startPos_8() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824, ___startPos_8)); }
	inline Vector3_t2243707580  get_startPos_8() const { return ___startPos_8; }
	inline Vector3_t2243707580 * get_address_of_startPos_8() { return &___startPos_8; }
	inline void set_startPos_8(Vector3_t2243707580  value)
	{
		___startPos_8 = value;
	}

	inline static int32_t get_offset_of_touch_9() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824, ___touch_9)); }
	inline Touch_t407273883  get_touch_9() const { return ___touch_9; }
	inline Touch_t407273883 * get_address_of_touch_9() { return &___touch_9; }
	inline void set_touch_9(Touch_t407273883  value)
	{
		___touch_9 = value;
	}

	inline static int32_t get_offset_of_baseLerpTime_10() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824, ___baseLerpTime_10)); }
	inline float get_baseLerpTime_10() const { return ___baseLerpTime_10; }
	inline float* get_address_of_baseLerpTime_10() { return &___baseLerpTime_10; }
	inline void set_baseLerpTime_10(float value)
	{
		___baseLerpTime_10 = value;
	}

	inline static int32_t get_offset_of_lerpTime_11() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824, ___lerpTime_11)); }
	inline float get_lerpTime_11() const { return ___lerpTime_11; }
	inline float* get_address_of_lerpTime_11() { return &___lerpTime_11; }
	inline void set_lerpTime_11(float value)
	{
		___lerpTime_11 = value;
	}

	inline static int32_t get_offset_of_currentLerpTime_12() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824, ___currentLerpTime_12)); }
	inline float get_currentLerpTime_12() const { return ___currentLerpTime_12; }
	inline float* get_address_of_currentLerpTime_12() { return &___currentLerpTime_12; }
	inline void set_currentLerpTime_12(float value)
	{
		___currentLerpTime_12 = value;
	}

	inline static int32_t get_offset_of_yRot_13() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824, ___yRot_13)); }
	inline float get_yRot_13() const { return ___yRot_13; }
	inline float* get_address_of_yRot_13() { return &___yRot_13; }
	inline void set_yRot_13(float value)
	{
		___yRot_13 = value;
	}
};

struct TransformGizmo_t2834029824_StaticFields
{
public:
	// UnityEngine.Material RuntimeGizmos.TransformGizmo::lineMaterial
	Material_t193706927 * ___lineMaterial_6;

public:
	inline static int32_t get_offset_of_lineMaterial_6() { return static_cast<int32_t>(offsetof(TransformGizmo_t2834029824_StaticFields, ___lineMaterial_6)); }
	inline Material_t193706927 * get_lineMaterial_6() const { return ___lineMaterial_6; }
	inline Material_t193706927 ** get_address_of_lineMaterial_6() { return &___lineMaterial_6; }
	inline void set_lineMaterial_6(Material_t193706927 * value)
	{
		___lineMaterial_6 = value;
		Il2CppCodeGenWriteBarrier(&___lineMaterial_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
