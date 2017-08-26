#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_Behaviour955675639.h"

// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t2685920451;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t3983973519;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t2353988013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_t10059812  : public Behaviour_t955675639
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t2685920451 * ___prepareCompleted_2;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t2685920451 * ___loopPointReached_3;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t2685920451 * ___started_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t2685920451 * ___frameDropped_5;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t3983973519 * ___errorReceived_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t2685920451 * ___seekCompleted_7;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t2353988013 * ___frameReady_8;

public:
	inline static int32_t get_offset_of_prepareCompleted_2() { return static_cast<int32_t>(offsetof(VideoPlayer_t10059812, ___prepareCompleted_2)); }
	inline EventHandler_t2685920451 * get_prepareCompleted_2() const { return ___prepareCompleted_2; }
	inline EventHandler_t2685920451 ** get_address_of_prepareCompleted_2() { return &___prepareCompleted_2; }
	inline void set_prepareCompleted_2(EventHandler_t2685920451 * value)
	{
		___prepareCompleted_2 = value;
		Il2CppCodeGenWriteBarrier(&___prepareCompleted_2, value);
	}

	inline static int32_t get_offset_of_loopPointReached_3() { return static_cast<int32_t>(offsetof(VideoPlayer_t10059812, ___loopPointReached_3)); }
	inline EventHandler_t2685920451 * get_loopPointReached_3() const { return ___loopPointReached_3; }
	inline EventHandler_t2685920451 ** get_address_of_loopPointReached_3() { return &___loopPointReached_3; }
	inline void set_loopPointReached_3(EventHandler_t2685920451 * value)
	{
		___loopPointReached_3 = value;
		Il2CppCodeGenWriteBarrier(&___loopPointReached_3, value);
	}

	inline static int32_t get_offset_of_started_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t10059812, ___started_4)); }
	inline EventHandler_t2685920451 * get_started_4() const { return ___started_4; }
	inline EventHandler_t2685920451 ** get_address_of_started_4() { return &___started_4; }
	inline void set_started_4(EventHandler_t2685920451 * value)
	{
		___started_4 = value;
		Il2CppCodeGenWriteBarrier(&___started_4, value);
	}

	inline static int32_t get_offset_of_frameDropped_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t10059812, ___frameDropped_5)); }
	inline EventHandler_t2685920451 * get_frameDropped_5() const { return ___frameDropped_5; }
	inline EventHandler_t2685920451 ** get_address_of_frameDropped_5() { return &___frameDropped_5; }
	inline void set_frameDropped_5(EventHandler_t2685920451 * value)
	{
		___frameDropped_5 = value;
		Il2CppCodeGenWriteBarrier(&___frameDropped_5, value);
	}

	inline static int32_t get_offset_of_errorReceived_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t10059812, ___errorReceived_6)); }
	inline ErrorEventHandler_t3983973519 * get_errorReceived_6() const { return ___errorReceived_6; }
	inline ErrorEventHandler_t3983973519 ** get_address_of_errorReceived_6() { return &___errorReceived_6; }
	inline void set_errorReceived_6(ErrorEventHandler_t3983973519 * value)
	{
		___errorReceived_6 = value;
		Il2CppCodeGenWriteBarrier(&___errorReceived_6, value);
	}

	inline static int32_t get_offset_of_seekCompleted_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t10059812, ___seekCompleted_7)); }
	inline EventHandler_t2685920451 * get_seekCompleted_7() const { return ___seekCompleted_7; }
	inline EventHandler_t2685920451 ** get_address_of_seekCompleted_7() { return &___seekCompleted_7; }
	inline void set_seekCompleted_7(EventHandler_t2685920451 * value)
	{
		___seekCompleted_7 = value;
		Il2CppCodeGenWriteBarrier(&___seekCompleted_7, value);
	}

	inline static int32_t get_offset_of_frameReady_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t10059812, ___frameReady_8)); }
	inline FrameReadyEventHandler_t2353988013 * get_frameReady_8() const { return ___frameReady_8; }
	inline FrameReadyEventHandler_t2353988013 ** get_address_of_frameReady_8() { return &___frameReady_8; }
	inline void set_frameReady_8(FrameReadyEventHandler_t2353988013 * value)
	{
		___frameReady_8 = value;
		Il2CppCodeGenWriteBarrier(&___frameReady_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
