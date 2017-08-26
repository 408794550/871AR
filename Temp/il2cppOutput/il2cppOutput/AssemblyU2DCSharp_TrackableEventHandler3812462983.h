#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// LitJson.JsonData
struct JsonData_t269267574;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackableEventHandler
struct  TrackableEventHandler_t3812462983  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean TrackableEventHandler::isModelLoaded
	bool ___isModelLoaded_2;
	// System.UInt64 TrackableEventHandler::modelIndex
	uint64_t ___modelIndex_3;
	// System.String TrackableEventHandler::trackableName
	String_t* ___trackableName_4;
	// System.String TrackableEventHandler::modelSource
	String_t* ___modelSource_5;
	// System.String TrackableEventHandler::targetName
	String_t* ___targetName_6;
	// Vuforia.TrackableBehaviour TrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1779888572 * ___mTrackableBehaviour_7;
	// UnityEngine.AudioSource TrackableEventHandler::audioSource
	AudioSource_t1135106623 * ___audioSource_8;
	// System.Int32 TrackableEventHandler::lostCount
	int32_t ___lostCount_9;
	// LitJson.JsonData TrackableEventHandler::targetInfo
	JsonData_t269267574 * ___targetInfo_10;
	// UnityEngine.Events.UnityAction TrackableEventHandler::offCardListener
	UnityAction_t4025899511 * ___offCardListener_11;
	// UnityEngine.Events.UnityAction TrackableEventHandler::recoveryModelListener
	UnityAction_t4025899511 * ___recoveryModelListener_12;
	// System.Boolean TrackableEventHandler::isFirstFound
	bool ___isFirstFound_13;

public:
	inline static int32_t get_offset_of_isModelLoaded_2() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___isModelLoaded_2)); }
	inline bool get_isModelLoaded_2() const { return ___isModelLoaded_2; }
	inline bool* get_address_of_isModelLoaded_2() { return &___isModelLoaded_2; }
	inline void set_isModelLoaded_2(bool value)
	{
		___isModelLoaded_2 = value;
	}

	inline static int32_t get_offset_of_modelIndex_3() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___modelIndex_3)); }
	inline uint64_t get_modelIndex_3() const { return ___modelIndex_3; }
	inline uint64_t* get_address_of_modelIndex_3() { return &___modelIndex_3; }
	inline void set_modelIndex_3(uint64_t value)
	{
		___modelIndex_3 = value;
	}

	inline static int32_t get_offset_of_trackableName_4() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___trackableName_4)); }
	inline String_t* get_trackableName_4() const { return ___trackableName_4; }
	inline String_t** get_address_of_trackableName_4() { return &___trackableName_4; }
	inline void set_trackableName_4(String_t* value)
	{
		___trackableName_4 = value;
		Il2CppCodeGenWriteBarrier(&___trackableName_4, value);
	}

	inline static int32_t get_offset_of_modelSource_5() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___modelSource_5)); }
	inline String_t* get_modelSource_5() const { return ___modelSource_5; }
	inline String_t** get_address_of_modelSource_5() { return &___modelSource_5; }
	inline void set_modelSource_5(String_t* value)
	{
		___modelSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___modelSource_5, value);
	}

	inline static int32_t get_offset_of_targetName_6() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___targetName_6)); }
	inline String_t* get_targetName_6() const { return ___targetName_6; }
	inline String_t** get_address_of_targetName_6() { return &___targetName_6; }
	inline void set_targetName_6(String_t* value)
	{
		___targetName_6 = value;
		Il2CppCodeGenWriteBarrier(&___targetName_6, value);
	}

	inline static int32_t get_offset_of_mTrackableBehaviour_7() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mTrackableBehaviour_7)); }
	inline TrackableBehaviour_t1779888572 * get_mTrackableBehaviour_7() const { return ___mTrackableBehaviour_7; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mTrackableBehaviour_7() { return &___mTrackableBehaviour_7; }
	inline void set_mTrackableBehaviour_7(TrackableBehaviour_t1779888572 * value)
	{
		___mTrackableBehaviour_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_7, value);
	}

	inline static int32_t get_offset_of_audioSource_8() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___audioSource_8)); }
	inline AudioSource_t1135106623 * get_audioSource_8() const { return ___audioSource_8; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_8() { return &___audioSource_8; }
	inline void set_audioSource_8(AudioSource_t1135106623 * value)
	{
		___audioSource_8 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_8, value);
	}

	inline static int32_t get_offset_of_lostCount_9() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___lostCount_9)); }
	inline int32_t get_lostCount_9() const { return ___lostCount_9; }
	inline int32_t* get_address_of_lostCount_9() { return &___lostCount_9; }
	inline void set_lostCount_9(int32_t value)
	{
		___lostCount_9 = value;
	}

	inline static int32_t get_offset_of_targetInfo_10() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___targetInfo_10)); }
	inline JsonData_t269267574 * get_targetInfo_10() const { return ___targetInfo_10; }
	inline JsonData_t269267574 ** get_address_of_targetInfo_10() { return &___targetInfo_10; }
	inline void set_targetInfo_10(JsonData_t269267574 * value)
	{
		___targetInfo_10 = value;
		Il2CppCodeGenWriteBarrier(&___targetInfo_10, value);
	}

	inline static int32_t get_offset_of_offCardListener_11() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___offCardListener_11)); }
	inline UnityAction_t4025899511 * get_offCardListener_11() const { return ___offCardListener_11; }
	inline UnityAction_t4025899511 ** get_address_of_offCardListener_11() { return &___offCardListener_11; }
	inline void set_offCardListener_11(UnityAction_t4025899511 * value)
	{
		___offCardListener_11 = value;
		Il2CppCodeGenWriteBarrier(&___offCardListener_11, value);
	}

	inline static int32_t get_offset_of_recoveryModelListener_12() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___recoveryModelListener_12)); }
	inline UnityAction_t4025899511 * get_recoveryModelListener_12() const { return ___recoveryModelListener_12; }
	inline UnityAction_t4025899511 ** get_address_of_recoveryModelListener_12() { return &___recoveryModelListener_12; }
	inline void set_recoveryModelListener_12(UnityAction_t4025899511 * value)
	{
		___recoveryModelListener_12 = value;
		Il2CppCodeGenWriteBarrier(&___recoveryModelListener_12, value);
	}

	inline static int32_t get_offset_of_isFirstFound_13() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___isFirstFound_13)); }
	inline bool get_isFirstFound_13() const { return ___isFirstFound_13; }
	inline bool* get_address_of_isFirstFound_13() { return &___isFirstFound_13; }
	inline void set_isFirstFound_13(bool value)
	{
		___isFirstFound_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
