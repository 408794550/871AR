#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GUIText
struct GUIText_t2411476300;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EveryplayTest
struct  EveryplayTest_t137848885  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EveryplayTest::showUploadStatus
	bool ___showUploadStatus_2;
	// System.Boolean EveryplayTest::isRecording
	bool ___isRecording_3;
	// System.Boolean EveryplayTest::isPaused
	bool ___isPaused_4;
	// System.Boolean EveryplayTest::isRecordingFinished
	bool ___isRecordingFinished_5;
	// UnityEngine.GUIText EveryplayTest::uploadStatusLabel
	GUIText_t2411476300 * ___uploadStatusLabel_6;

public:
	inline static int32_t get_offset_of_showUploadStatus_2() { return static_cast<int32_t>(offsetof(EveryplayTest_t137848885, ___showUploadStatus_2)); }
	inline bool get_showUploadStatus_2() const { return ___showUploadStatus_2; }
	inline bool* get_address_of_showUploadStatus_2() { return &___showUploadStatus_2; }
	inline void set_showUploadStatus_2(bool value)
	{
		___showUploadStatus_2 = value;
	}

	inline static int32_t get_offset_of_isRecording_3() { return static_cast<int32_t>(offsetof(EveryplayTest_t137848885, ___isRecording_3)); }
	inline bool get_isRecording_3() const { return ___isRecording_3; }
	inline bool* get_address_of_isRecording_3() { return &___isRecording_3; }
	inline void set_isRecording_3(bool value)
	{
		___isRecording_3 = value;
	}

	inline static int32_t get_offset_of_isPaused_4() { return static_cast<int32_t>(offsetof(EveryplayTest_t137848885, ___isPaused_4)); }
	inline bool get_isPaused_4() const { return ___isPaused_4; }
	inline bool* get_address_of_isPaused_4() { return &___isPaused_4; }
	inline void set_isPaused_4(bool value)
	{
		___isPaused_4 = value;
	}

	inline static int32_t get_offset_of_isRecordingFinished_5() { return static_cast<int32_t>(offsetof(EveryplayTest_t137848885, ___isRecordingFinished_5)); }
	inline bool get_isRecordingFinished_5() const { return ___isRecordingFinished_5; }
	inline bool* get_address_of_isRecordingFinished_5() { return &___isRecordingFinished_5; }
	inline void set_isRecordingFinished_5(bool value)
	{
		___isRecordingFinished_5 = value;
	}

	inline static int32_t get_offset_of_uploadStatusLabel_6() { return static_cast<int32_t>(offsetof(EveryplayTest_t137848885, ___uploadStatusLabel_6)); }
	inline GUIText_t2411476300 * get_uploadStatusLabel_6() const { return ___uploadStatusLabel_6; }
	inline GUIText_t2411476300 ** get_address_of_uploadStatusLabel_6() { return &___uploadStatusLabel_6; }
	inline void set_uploadStatusLabel_6(GUIText_t2411476300 * value)
	{
		___uploadStatusLabel_6 = value;
		Il2CppCodeGenWriteBarrier(&___uploadStatusLabel_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
