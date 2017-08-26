#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EveryplayHudCamera
struct  EveryplayHudCamera_t847528103  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EveryplayHudCamera::subscribed
	bool ___subscribed_3;
	// System.Boolean EveryplayHudCamera::readyForRecording
	bool ___readyForRecording_4;
	// System.IntPtr EveryplayHudCamera::renderEventPtr
	IntPtr_t ___renderEventPtr_5;
	// System.Boolean EveryplayHudCamera::isMetalDevice
	bool ___isMetalDevice_6;
	// System.Boolean EveryplayHudCamera::isAndroidDevice
	bool ___isAndroidDevice_7;

public:
	inline static int32_t get_offset_of_subscribed_3() { return static_cast<int32_t>(offsetof(EveryplayHudCamera_t847528103, ___subscribed_3)); }
	inline bool get_subscribed_3() const { return ___subscribed_3; }
	inline bool* get_address_of_subscribed_3() { return &___subscribed_3; }
	inline void set_subscribed_3(bool value)
	{
		___subscribed_3 = value;
	}

	inline static int32_t get_offset_of_readyForRecording_4() { return static_cast<int32_t>(offsetof(EveryplayHudCamera_t847528103, ___readyForRecording_4)); }
	inline bool get_readyForRecording_4() const { return ___readyForRecording_4; }
	inline bool* get_address_of_readyForRecording_4() { return &___readyForRecording_4; }
	inline void set_readyForRecording_4(bool value)
	{
		___readyForRecording_4 = value;
	}

	inline static int32_t get_offset_of_renderEventPtr_5() { return static_cast<int32_t>(offsetof(EveryplayHudCamera_t847528103, ___renderEventPtr_5)); }
	inline IntPtr_t get_renderEventPtr_5() const { return ___renderEventPtr_5; }
	inline IntPtr_t* get_address_of_renderEventPtr_5() { return &___renderEventPtr_5; }
	inline void set_renderEventPtr_5(IntPtr_t value)
	{
		___renderEventPtr_5 = value;
	}

	inline static int32_t get_offset_of_isMetalDevice_6() { return static_cast<int32_t>(offsetof(EveryplayHudCamera_t847528103, ___isMetalDevice_6)); }
	inline bool get_isMetalDevice_6() const { return ___isMetalDevice_6; }
	inline bool* get_address_of_isMetalDevice_6() { return &___isMetalDevice_6; }
	inline void set_isMetalDevice_6(bool value)
	{
		___isMetalDevice_6 = value;
	}

	inline static int32_t get_offset_of_isAndroidDevice_7() { return static_cast<int32_t>(offsetof(EveryplayHudCamera_t847528103, ___isAndroidDevice_7)); }
	inline bool get_isAndroidDevice_7() const { return ___isAndroidDevice_7; }
	inline bool* get_address_of_isAndroidDevice_7() { return &___isAndroidDevice_7; }
	inline void set_isAndroidDevice_7(bool value)
	{
		___isAndroidDevice_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
