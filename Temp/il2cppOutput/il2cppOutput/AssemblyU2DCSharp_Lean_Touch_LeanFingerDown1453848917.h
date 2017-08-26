#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Lean.Touch.LeanFingerDown/LeanFingerEvent
struct LeanFingerEvent_t4217027252;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerDown
struct  LeanFingerDown_t1453848917  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanFingerDown::IgnoreIfOverGui
	bool ___IgnoreIfOverGui_2;
	// Lean.Touch.LeanFingerDown/LeanFingerEvent Lean.Touch.LeanFingerDown::OnFingerDown
	LeanFingerEvent_t4217027252 * ___OnFingerDown_3;

public:
	inline static int32_t get_offset_of_IgnoreIfOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerDown_t1453848917, ___IgnoreIfOverGui_2)); }
	inline bool get_IgnoreIfOverGui_2() const { return ___IgnoreIfOverGui_2; }
	inline bool* get_address_of_IgnoreIfOverGui_2() { return &___IgnoreIfOverGui_2; }
	inline void set_IgnoreIfOverGui_2(bool value)
	{
		___IgnoreIfOverGui_2 = value;
	}

	inline static int32_t get_offset_of_OnFingerDown_3() { return static_cast<int32_t>(offsetof(LeanFingerDown_t1453848917, ___OnFingerDown_3)); }
	inline LeanFingerEvent_t4217027252 * get_OnFingerDown_3() const { return ___OnFingerDown_3; }
	inline LeanFingerEvent_t4217027252 ** get_address_of_OnFingerDown_3() { return &___OnFingerDown_3; }
	inline void set_OnFingerDown_3(LeanFingerEvent_t4217027252 * value)
	{
		___OnFingerDown_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerDown_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
