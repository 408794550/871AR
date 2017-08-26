#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Lean_Touch_LeanSelect3606489640.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HandleLeanTapEvent
struct  HandleLeanTapEvent_t173129583  : public LeanSelect_t3606489640
{
public:
	// System.Boolean HandleLeanTapEvent::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_8;
	// System.Single HandleLeanTapEvent::pressTime
	float ___pressTime_9;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_8() { return static_cast<int32_t>(offsetof(HandleLeanTapEvent_t173129583, ___IgnoreGuiFingers_8)); }
	inline bool get_IgnoreGuiFingers_8() const { return ___IgnoreGuiFingers_8; }
	inline bool* get_address_of_IgnoreGuiFingers_8() { return &___IgnoreGuiFingers_8; }
	inline void set_IgnoreGuiFingers_8(bool value)
	{
		___IgnoreGuiFingers_8 = value;
	}

	inline static int32_t get_offset_of_pressTime_9() { return static_cast<int32_t>(offsetof(HandleLeanTapEvent_t173129583, ___pressTime_9)); }
	inline float get_pressTime_9() const { return ___pressTime_9; }
	inline float* get_address_of_pressTime_9() { return &___pressTime_9; }
	inline void set_pressTime_9(float value)
	{
		___pressTime_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
