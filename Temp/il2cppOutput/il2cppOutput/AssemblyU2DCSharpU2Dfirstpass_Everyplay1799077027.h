#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Everyplay/WasClosedDelegate
struct WasClosedDelegate_t946300984;
// Everyplay/ReadyForRecordingDelegate
struct ReadyForRecordingDelegate_t1593758596;
// Everyplay/RecordingStartedDelegate
struct RecordingStartedDelegate_t5060419;
// Everyplay/RecordingStoppedDelegate
struct RecordingStoppedDelegate_t3008025639;
// Everyplay/FaceCamSessionStartedDelegate
struct FaceCamSessionStartedDelegate_t1733547424;
// Everyplay/FaceCamRecordingPermissionDelegate
struct FaceCamRecordingPermissionDelegate_t1670731619;
// Everyplay/FaceCamSessionStoppedDelegate
struct FaceCamSessionStoppedDelegate_t1894731428;
// Everyplay/ThumbnailTextureReadyDelegate
struct ThumbnailTextureReadyDelegate_t2948235259;
// Everyplay/UploadDidStartDelegate
struct UploadDidStartDelegate_t1871027361;
// Everyplay/UploadDidProgressDelegate
struct UploadDidProgressDelegate_t2069570344;
// Everyplay/UploadDidCompleteDelegate
struct UploadDidCompleteDelegate_t1564565876;
// System.String
struct String_t;
// Everyplay
struct Everyplay_t1799077027;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Everyplay
struct  Everyplay_t1799077027  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Everyplay_t1799077027_StaticFields
{
public:
	// Everyplay/WasClosedDelegate Everyplay::WasClosed
	WasClosedDelegate_t946300984 * ___WasClosed_2;
	// Everyplay/ReadyForRecordingDelegate Everyplay::ReadyForRecording
	ReadyForRecordingDelegate_t1593758596 * ___ReadyForRecording_3;
	// Everyplay/RecordingStartedDelegate Everyplay::RecordingStarted
	RecordingStartedDelegate_t5060419 * ___RecordingStarted_4;
	// Everyplay/RecordingStoppedDelegate Everyplay::RecordingStopped
	RecordingStoppedDelegate_t3008025639 * ___RecordingStopped_5;
	// Everyplay/FaceCamSessionStartedDelegate Everyplay::FaceCamSessionStarted
	FaceCamSessionStartedDelegate_t1733547424 * ___FaceCamSessionStarted_6;
	// Everyplay/FaceCamRecordingPermissionDelegate Everyplay::FaceCamRecordingPermission
	FaceCamRecordingPermissionDelegate_t1670731619 * ___FaceCamRecordingPermission_7;
	// Everyplay/FaceCamSessionStoppedDelegate Everyplay::FaceCamSessionStopped
	FaceCamSessionStoppedDelegate_t1894731428 * ___FaceCamSessionStopped_8;
	// Everyplay/ThumbnailTextureReadyDelegate Everyplay::ThumbnailTextureReady
	ThumbnailTextureReadyDelegate_t2948235259 * ___ThumbnailTextureReady_9;
	// Everyplay/UploadDidStartDelegate Everyplay::UploadDidStart
	UploadDidStartDelegate_t1871027361 * ___UploadDidStart_10;
	// Everyplay/UploadDidProgressDelegate Everyplay::UploadDidProgress
	UploadDidProgressDelegate_t2069570344 * ___UploadDidProgress_11;
	// Everyplay/UploadDidCompleteDelegate Everyplay::UploadDidComplete
	UploadDidCompleteDelegate_t1564565876 * ___UploadDidComplete_12;
	// System.String Everyplay::clientId
	String_t* ___clientId_13;
	// System.Boolean Everyplay::appIsClosing
	bool ___appIsClosing_14;
	// System.Boolean Everyplay::hasMethods
	bool ___hasMethods_15;
	// System.Boolean Everyplay::seenInitialization
	bool ___seenInitialization_16;
	// System.Boolean Everyplay::readyForRecording
	bool ___readyForRecording_17;
	// Everyplay Everyplay::everyplayInstance
	Everyplay_t1799077027 * ___everyplayInstance_19;
	// UnityEngine.Texture2D Everyplay::currentThumbnailTargetTexture
	Texture2D_t3542995729 * ___currentThumbnailTargetTexture_20;

public:
	inline static int32_t get_offset_of_WasClosed_2() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___WasClosed_2)); }
	inline WasClosedDelegate_t946300984 * get_WasClosed_2() const { return ___WasClosed_2; }
	inline WasClosedDelegate_t946300984 ** get_address_of_WasClosed_2() { return &___WasClosed_2; }
	inline void set_WasClosed_2(WasClosedDelegate_t946300984 * value)
	{
		___WasClosed_2 = value;
		Il2CppCodeGenWriteBarrier(&___WasClosed_2, value);
	}

	inline static int32_t get_offset_of_ReadyForRecording_3() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___ReadyForRecording_3)); }
	inline ReadyForRecordingDelegate_t1593758596 * get_ReadyForRecording_3() const { return ___ReadyForRecording_3; }
	inline ReadyForRecordingDelegate_t1593758596 ** get_address_of_ReadyForRecording_3() { return &___ReadyForRecording_3; }
	inline void set_ReadyForRecording_3(ReadyForRecordingDelegate_t1593758596 * value)
	{
		___ReadyForRecording_3 = value;
		Il2CppCodeGenWriteBarrier(&___ReadyForRecording_3, value);
	}

	inline static int32_t get_offset_of_RecordingStarted_4() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___RecordingStarted_4)); }
	inline RecordingStartedDelegate_t5060419 * get_RecordingStarted_4() const { return ___RecordingStarted_4; }
	inline RecordingStartedDelegate_t5060419 ** get_address_of_RecordingStarted_4() { return &___RecordingStarted_4; }
	inline void set_RecordingStarted_4(RecordingStartedDelegate_t5060419 * value)
	{
		___RecordingStarted_4 = value;
		Il2CppCodeGenWriteBarrier(&___RecordingStarted_4, value);
	}

	inline static int32_t get_offset_of_RecordingStopped_5() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___RecordingStopped_5)); }
	inline RecordingStoppedDelegate_t3008025639 * get_RecordingStopped_5() const { return ___RecordingStopped_5; }
	inline RecordingStoppedDelegate_t3008025639 ** get_address_of_RecordingStopped_5() { return &___RecordingStopped_5; }
	inline void set_RecordingStopped_5(RecordingStoppedDelegate_t3008025639 * value)
	{
		___RecordingStopped_5 = value;
		Il2CppCodeGenWriteBarrier(&___RecordingStopped_5, value);
	}

	inline static int32_t get_offset_of_FaceCamSessionStarted_6() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___FaceCamSessionStarted_6)); }
	inline FaceCamSessionStartedDelegate_t1733547424 * get_FaceCamSessionStarted_6() const { return ___FaceCamSessionStarted_6; }
	inline FaceCamSessionStartedDelegate_t1733547424 ** get_address_of_FaceCamSessionStarted_6() { return &___FaceCamSessionStarted_6; }
	inline void set_FaceCamSessionStarted_6(FaceCamSessionStartedDelegate_t1733547424 * value)
	{
		___FaceCamSessionStarted_6 = value;
		Il2CppCodeGenWriteBarrier(&___FaceCamSessionStarted_6, value);
	}

	inline static int32_t get_offset_of_FaceCamRecordingPermission_7() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___FaceCamRecordingPermission_7)); }
	inline FaceCamRecordingPermissionDelegate_t1670731619 * get_FaceCamRecordingPermission_7() const { return ___FaceCamRecordingPermission_7; }
	inline FaceCamRecordingPermissionDelegate_t1670731619 ** get_address_of_FaceCamRecordingPermission_7() { return &___FaceCamRecordingPermission_7; }
	inline void set_FaceCamRecordingPermission_7(FaceCamRecordingPermissionDelegate_t1670731619 * value)
	{
		___FaceCamRecordingPermission_7 = value;
		Il2CppCodeGenWriteBarrier(&___FaceCamRecordingPermission_7, value);
	}

	inline static int32_t get_offset_of_FaceCamSessionStopped_8() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___FaceCamSessionStopped_8)); }
	inline FaceCamSessionStoppedDelegate_t1894731428 * get_FaceCamSessionStopped_8() const { return ___FaceCamSessionStopped_8; }
	inline FaceCamSessionStoppedDelegate_t1894731428 ** get_address_of_FaceCamSessionStopped_8() { return &___FaceCamSessionStopped_8; }
	inline void set_FaceCamSessionStopped_8(FaceCamSessionStoppedDelegate_t1894731428 * value)
	{
		___FaceCamSessionStopped_8 = value;
		Il2CppCodeGenWriteBarrier(&___FaceCamSessionStopped_8, value);
	}

	inline static int32_t get_offset_of_ThumbnailTextureReady_9() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___ThumbnailTextureReady_9)); }
	inline ThumbnailTextureReadyDelegate_t2948235259 * get_ThumbnailTextureReady_9() const { return ___ThumbnailTextureReady_9; }
	inline ThumbnailTextureReadyDelegate_t2948235259 ** get_address_of_ThumbnailTextureReady_9() { return &___ThumbnailTextureReady_9; }
	inline void set_ThumbnailTextureReady_9(ThumbnailTextureReadyDelegate_t2948235259 * value)
	{
		___ThumbnailTextureReady_9 = value;
		Il2CppCodeGenWriteBarrier(&___ThumbnailTextureReady_9, value);
	}

	inline static int32_t get_offset_of_UploadDidStart_10() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___UploadDidStart_10)); }
	inline UploadDidStartDelegate_t1871027361 * get_UploadDidStart_10() const { return ___UploadDidStart_10; }
	inline UploadDidStartDelegate_t1871027361 ** get_address_of_UploadDidStart_10() { return &___UploadDidStart_10; }
	inline void set_UploadDidStart_10(UploadDidStartDelegate_t1871027361 * value)
	{
		___UploadDidStart_10 = value;
		Il2CppCodeGenWriteBarrier(&___UploadDidStart_10, value);
	}

	inline static int32_t get_offset_of_UploadDidProgress_11() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___UploadDidProgress_11)); }
	inline UploadDidProgressDelegate_t2069570344 * get_UploadDidProgress_11() const { return ___UploadDidProgress_11; }
	inline UploadDidProgressDelegate_t2069570344 ** get_address_of_UploadDidProgress_11() { return &___UploadDidProgress_11; }
	inline void set_UploadDidProgress_11(UploadDidProgressDelegate_t2069570344 * value)
	{
		___UploadDidProgress_11 = value;
		Il2CppCodeGenWriteBarrier(&___UploadDidProgress_11, value);
	}

	inline static int32_t get_offset_of_UploadDidComplete_12() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___UploadDidComplete_12)); }
	inline UploadDidCompleteDelegate_t1564565876 * get_UploadDidComplete_12() const { return ___UploadDidComplete_12; }
	inline UploadDidCompleteDelegate_t1564565876 ** get_address_of_UploadDidComplete_12() { return &___UploadDidComplete_12; }
	inline void set_UploadDidComplete_12(UploadDidCompleteDelegate_t1564565876 * value)
	{
		___UploadDidComplete_12 = value;
		Il2CppCodeGenWriteBarrier(&___UploadDidComplete_12, value);
	}

	inline static int32_t get_offset_of_clientId_13() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___clientId_13)); }
	inline String_t* get_clientId_13() const { return ___clientId_13; }
	inline String_t** get_address_of_clientId_13() { return &___clientId_13; }
	inline void set_clientId_13(String_t* value)
	{
		___clientId_13 = value;
		Il2CppCodeGenWriteBarrier(&___clientId_13, value);
	}

	inline static int32_t get_offset_of_appIsClosing_14() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___appIsClosing_14)); }
	inline bool get_appIsClosing_14() const { return ___appIsClosing_14; }
	inline bool* get_address_of_appIsClosing_14() { return &___appIsClosing_14; }
	inline void set_appIsClosing_14(bool value)
	{
		___appIsClosing_14 = value;
	}

	inline static int32_t get_offset_of_hasMethods_15() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___hasMethods_15)); }
	inline bool get_hasMethods_15() const { return ___hasMethods_15; }
	inline bool* get_address_of_hasMethods_15() { return &___hasMethods_15; }
	inline void set_hasMethods_15(bool value)
	{
		___hasMethods_15 = value;
	}

	inline static int32_t get_offset_of_seenInitialization_16() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___seenInitialization_16)); }
	inline bool get_seenInitialization_16() const { return ___seenInitialization_16; }
	inline bool* get_address_of_seenInitialization_16() { return &___seenInitialization_16; }
	inline void set_seenInitialization_16(bool value)
	{
		___seenInitialization_16 = value;
	}

	inline static int32_t get_offset_of_readyForRecording_17() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___readyForRecording_17)); }
	inline bool get_readyForRecording_17() const { return ___readyForRecording_17; }
	inline bool* get_address_of_readyForRecording_17() { return &___readyForRecording_17; }
	inline void set_readyForRecording_17(bool value)
	{
		___readyForRecording_17 = value;
	}

	inline static int32_t get_offset_of_everyplayInstance_19() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___everyplayInstance_19)); }
	inline Everyplay_t1799077027 * get_everyplayInstance_19() const { return ___everyplayInstance_19; }
	inline Everyplay_t1799077027 ** get_address_of_everyplayInstance_19() { return &___everyplayInstance_19; }
	inline void set_everyplayInstance_19(Everyplay_t1799077027 * value)
	{
		___everyplayInstance_19 = value;
		Il2CppCodeGenWriteBarrier(&___everyplayInstance_19, value);
	}

	inline static int32_t get_offset_of_currentThumbnailTargetTexture_20() { return static_cast<int32_t>(offsetof(Everyplay_t1799077027_StaticFields, ___currentThumbnailTargetTexture_20)); }
	inline Texture2D_t3542995729 * get_currentThumbnailTargetTexture_20() const { return ___currentThumbnailTargetTexture_20; }
	inline Texture2D_t3542995729 ** get_address_of_currentThumbnailTargetTexture_20() { return &___currentThumbnailTargetTexture_20; }
	inline void set_currentThumbnailTargetTexture_20(Texture2D_t3542995729 * value)
	{
		___currentThumbnailTargetTexture_20 = value;
		Il2CppCodeGenWriteBarrier(&___currentThumbnailTargetTexture_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
