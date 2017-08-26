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
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.String
struct String_t;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// LitJson.JsonData
struct JsonData_t269267574;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1082256726  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Vuforia.DefaultTrackableEventHandler::isModelLoaded
	bool ___isModelLoaded_2;
	// System.UInt64 Vuforia.DefaultTrackableEventHandler::modelIndex
	uint64_t ___modelIndex_3;
	// System.String Vuforia.DefaultTrackableEventHandler::trackableName
	String_t* ___trackableName_4;
	// System.String Vuforia.DefaultTrackableEventHandler::modelSource
	String_t* ___modelSource_5;
	// System.String Vuforia.DefaultTrackableEventHandler::targetName
	String_t* ___targetName_6;
	// Vuforia.TrackableBehaviour Vuforia.DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1779888572 * ___mTrackableBehaviour_7;
	// UnityEngine.AudioSource Vuforia.DefaultTrackableEventHandler::audioSource
	AudioSource_t1135106623 * ___audioSource_8;
	// UnityEngine.Camera Vuforia.DefaultTrackableEventHandler::camera1
	Camera_t189460977 * ___camera1_9;
	// UnityEngine.Transform Vuforia.DefaultTrackableEventHandler::cameraTransform
	Transform_t3275118058 * ___cameraTransform_10;
	// System.Single Vuforia.DefaultTrackableEventHandler::zAxisDistance
	float ___zAxisDistance_11;
	// UnityEngine.Vector3 Vuforia.DefaultTrackableEventHandler::modelOriginPos
	Vector3_t2243707580  ___modelOriginPos_12;
	// UnityEngine.Quaternion Vuforia.DefaultTrackableEventHandler::modelOriginQua
	Quaternion_t4030073918  ___modelOriginQua_13;
	// UnityEngine.Vector3 Vuforia.DefaultTrackableEventHandler::modelOriginLocalPos
	Vector3_t2243707580  ___modelOriginLocalPos_14;
	// UnityEngine.Quaternion Vuforia.DefaultTrackableEventHandler::modelOriginLocalQua
	Quaternion_t4030073918  ___modelOriginLocalQua_15;
	// UnityEngine.Vector3 Vuforia.DefaultTrackableEventHandler::modelOriginScale
	Vector3_t2243707580  ___modelOriginScale_16;
	// System.Int32 Vuforia.DefaultTrackableEventHandler::lostCount
	int32_t ___lostCount_17;
	// LitJson.JsonData Vuforia.DefaultTrackableEventHandler::targetInfo
	JsonData_t269267574 * ___targetInfo_18;
	// UnityEngine.Events.UnityAction Vuforia.DefaultTrackableEventHandler::offCardListener
	UnityAction_t4025899511 * ___offCardListener_19;
	// UnityEngine.Events.UnityAction Vuforia.DefaultTrackableEventHandler::recoveryModelListener
	UnityAction_t4025899511 * ___recoveryModelListener_20;
	// System.Boolean Vuforia.DefaultTrackableEventHandler::isFirstFound
	bool ___isFirstFound_21;
	// System.Boolean Vuforia.DefaultTrackableEventHandler::modelIsOffCard
	bool ___modelIsOffCard_22;

public:
	inline static int32_t get_offset_of_isModelLoaded_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___isModelLoaded_2)); }
	inline bool get_isModelLoaded_2() const { return ___isModelLoaded_2; }
	inline bool* get_address_of_isModelLoaded_2() { return &___isModelLoaded_2; }
	inline void set_isModelLoaded_2(bool value)
	{
		___isModelLoaded_2 = value;
	}

	inline static int32_t get_offset_of_modelIndex_3() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___modelIndex_3)); }
	inline uint64_t get_modelIndex_3() const { return ___modelIndex_3; }
	inline uint64_t* get_address_of_modelIndex_3() { return &___modelIndex_3; }
	inline void set_modelIndex_3(uint64_t value)
	{
		___modelIndex_3 = value;
	}

	inline static int32_t get_offset_of_trackableName_4() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___trackableName_4)); }
	inline String_t* get_trackableName_4() const { return ___trackableName_4; }
	inline String_t** get_address_of_trackableName_4() { return &___trackableName_4; }
	inline void set_trackableName_4(String_t* value)
	{
		___trackableName_4 = value;
		Il2CppCodeGenWriteBarrier(&___trackableName_4, value);
	}

	inline static int32_t get_offset_of_modelSource_5() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___modelSource_5)); }
	inline String_t* get_modelSource_5() const { return ___modelSource_5; }
	inline String_t** get_address_of_modelSource_5() { return &___modelSource_5; }
	inline void set_modelSource_5(String_t* value)
	{
		___modelSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___modelSource_5, value);
	}

	inline static int32_t get_offset_of_targetName_6() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___targetName_6)); }
	inline String_t* get_targetName_6() const { return ___targetName_6; }
	inline String_t** get_address_of_targetName_6() { return &___targetName_6; }
	inline void set_targetName_6(String_t* value)
	{
		___targetName_6 = value;
		Il2CppCodeGenWriteBarrier(&___targetName_6, value);
	}

	inline static int32_t get_offset_of_mTrackableBehaviour_7() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___mTrackableBehaviour_7)); }
	inline TrackableBehaviour_t1779888572 * get_mTrackableBehaviour_7() const { return ___mTrackableBehaviour_7; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mTrackableBehaviour_7() { return &___mTrackableBehaviour_7; }
	inline void set_mTrackableBehaviour_7(TrackableBehaviour_t1779888572 * value)
	{
		___mTrackableBehaviour_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_7, value);
	}

	inline static int32_t get_offset_of_audioSource_8() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___audioSource_8)); }
	inline AudioSource_t1135106623 * get_audioSource_8() const { return ___audioSource_8; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_8() { return &___audioSource_8; }
	inline void set_audioSource_8(AudioSource_t1135106623 * value)
	{
		___audioSource_8 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_8, value);
	}

	inline static int32_t get_offset_of_camera1_9() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___camera1_9)); }
	inline Camera_t189460977 * get_camera1_9() const { return ___camera1_9; }
	inline Camera_t189460977 ** get_address_of_camera1_9() { return &___camera1_9; }
	inline void set_camera1_9(Camera_t189460977 * value)
	{
		___camera1_9 = value;
		Il2CppCodeGenWriteBarrier(&___camera1_9, value);
	}

	inline static int32_t get_offset_of_cameraTransform_10() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___cameraTransform_10)); }
	inline Transform_t3275118058 * get_cameraTransform_10() const { return ___cameraTransform_10; }
	inline Transform_t3275118058 ** get_address_of_cameraTransform_10() { return &___cameraTransform_10; }
	inline void set_cameraTransform_10(Transform_t3275118058 * value)
	{
		___cameraTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_10, value);
	}

	inline static int32_t get_offset_of_zAxisDistance_11() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___zAxisDistance_11)); }
	inline float get_zAxisDistance_11() const { return ___zAxisDistance_11; }
	inline float* get_address_of_zAxisDistance_11() { return &___zAxisDistance_11; }
	inline void set_zAxisDistance_11(float value)
	{
		___zAxisDistance_11 = value;
	}

	inline static int32_t get_offset_of_modelOriginPos_12() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___modelOriginPos_12)); }
	inline Vector3_t2243707580  get_modelOriginPos_12() const { return ___modelOriginPos_12; }
	inline Vector3_t2243707580 * get_address_of_modelOriginPos_12() { return &___modelOriginPos_12; }
	inline void set_modelOriginPos_12(Vector3_t2243707580  value)
	{
		___modelOriginPos_12 = value;
	}

	inline static int32_t get_offset_of_modelOriginQua_13() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___modelOriginQua_13)); }
	inline Quaternion_t4030073918  get_modelOriginQua_13() const { return ___modelOriginQua_13; }
	inline Quaternion_t4030073918 * get_address_of_modelOriginQua_13() { return &___modelOriginQua_13; }
	inline void set_modelOriginQua_13(Quaternion_t4030073918  value)
	{
		___modelOriginQua_13 = value;
	}

	inline static int32_t get_offset_of_modelOriginLocalPos_14() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___modelOriginLocalPos_14)); }
	inline Vector3_t2243707580  get_modelOriginLocalPos_14() const { return ___modelOriginLocalPos_14; }
	inline Vector3_t2243707580 * get_address_of_modelOriginLocalPos_14() { return &___modelOriginLocalPos_14; }
	inline void set_modelOriginLocalPos_14(Vector3_t2243707580  value)
	{
		___modelOriginLocalPos_14 = value;
	}

	inline static int32_t get_offset_of_modelOriginLocalQua_15() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___modelOriginLocalQua_15)); }
	inline Quaternion_t4030073918  get_modelOriginLocalQua_15() const { return ___modelOriginLocalQua_15; }
	inline Quaternion_t4030073918 * get_address_of_modelOriginLocalQua_15() { return &___modelOriginLocalQua_15; }
	inline void set_modelOriginLocalQua_15(Quaternion_t4030073918  value)
	{
		___modelOriginLocalQua_15 = value;
	}

	inline static int32_t get_offset_of_modelOriginScale_16() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___modelOriginScale_16)); }
	inline Vector3_t2243707580  get_modelOriginScale_16() const { return ___modelOriginScale_16; }
	inline Vector3_t2243707580 * get_address_of_modelOriginScale_16() { return &___modelOriginScale_16; }
	inline void set_modelOriginScale_16(Vector3_t2243707580  value)
	{
		___modelOriginScale_16 = value;
	}

	inline static int32_t get_offset_of_lostCount_17() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___lostCount_17)); }
	inline int32_t get_lostCount_17() const { return ___lostCount_17; }
	inline int32_t* get_address_of_lostCount_17() { return &___lostCount_17; }
	inline void set_lostCount_17(int32_t value)
	{
		___lostCount_17 = value;
	}

	inline static int32_t get_offset_of_targetInfo_18() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___targetInfo_18)); }
	inline JsonData_t269267574 * get_targetInfo_18() const { return ___targetInfo_18; }
	inline JsonData_t269267574 ** get_address_of_targetInfo_18() { return &___targetInfo_18; }
	inline void set_targetInfo_18(JsonData_t269267574 * value)
	{
		___targetInfo_18 = value;
		Il2CppCodeGenWriteBarrier(&___targetInfo_18, value);
	}

	inline static int32_t get_offset_of_offCardListener_19() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___offCardListener_19)); }
	inline UnityAction_t4025899511 * get_offCardListener_19() const { return ___offCardListener_19; }
	inline UnityAction_t4025899511 ** get_address_of_offCardListener_19() { return &___offCardListener_19; }
	inline void set_offCardListener_19(UnityAction_t4025899511 * value)
	{
		___offCardListener_19 = value;
		Il2CppCodeGenWriteBarrier(&___offCardListener_19, value);
	}

	inline static int32_t get_offset_of_recoveryModelListener_20() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___recoveryModelListener_20)); }
	inline UnityAction_t4025899511 * get_recoveryModelListener_20() const { return ___recoveryModelListener_20; }
	inline UnityAction_t4025899511 ** get_address_of_recoveryModelListener_20() { return &___recoveryModelListener_20; }
	inline void set_recoveryModelListener_20(UnityAction_t4025899511 * value)
	{
		___recoveryModelListener_20 = value;
		Il2CppCodeGenWriteBarrier(&___recoveryModelListener_20, value);
	}

	inline static int32_t get_offset_of_isFirstFound_21() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___isFirstFound_21)); }
	inline bool get_isFirstFound_21() const { return ___isFirstFound_21; }
	inline bool* get_address_of_isFirstFound_21() { return &___isFirstFound_21; }
	inline void set_isFirstFound_21(bool value)
	{
		___isFirstFound_21 = value;
	}

	inline static int32_t get_offset_of_modelIsOffCard_22() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___modelIsOffCard_22)); }
	inline bool get_modelIsOffCard_22() const { return ___modelIsOffCard_22; }
	inline bool* get_address_of_modelIsOffCard_22() { return &___modelIsOffCard_22; }
	inline void set_modelIsOffCard_22(bool value)
	{
		___modelIsOffCard_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
