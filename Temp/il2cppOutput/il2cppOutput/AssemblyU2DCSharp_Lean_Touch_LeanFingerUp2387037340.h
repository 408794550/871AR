#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Lean.Touch.LeanFingerUp/LeanFingerEvent
struct LeanFingerEvent_t2500729307;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerUp
struct  LeanFingerUp_t2387037340  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanFingerUp::IgnoreIfOverGui
	bool ___IgnoreIfOverGui_2;
	// System.Boolean Lean.Touch.LeanFingerUp::IgnoreIfStartedOverGui
	bool ___IgnoreIfStartedOverGui_3;
	// Lean.Touch.LeanFingerUp/LeanFingerEvent Lean.Touch.LeanFingerUp::OnFingerUp
	LeanFingerEvent_t2500729307 * ___OnFingerUp_4;

public:
	inline static int32_t get_offset_of_IgnoreIfOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerUp_t2387037340, ___IgnoreIfOverGui_2)); }
	inline bool get_IgnoreIfOverGui_2() const { return ___IgnoreIfOverGui_2; }
	inline bool* get_address_of_IgnoreIfOverGui_2() { return &___IgnoreIfOverGui_2; }
	inline void set_IgnoreIfOverGui_2(bool value)
	{
		___IgnoreIfOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIfStartedOverGui_3() { return static_cast<int32_t>(offsetof(LeanFingerUp_t2387037340, ___IgnoreIfStartedOverGui_3)); }
	inline bool get_IgnoreIfStartedOverGui_3() const { return ___IgnoreIfStartedOverGui_3; }
	inline bool* get_address_of_IgnoreIfStartedOverGui_3() { return &___IgnoreIfStartedOverGui_3; }
	inline void set_IgnoreIfStartedOverGui_3(bool value)
	{
		___IgnoreIfStartedOverGui_3 = value;
	}

	inline static int32_t get_offset_of_OnFingerUp_4() { return static_cast<int32_t>(offsetof(LeanFingerUp_t2387037340, ___OnFingerUp_4)); }
	inline LeanFingerEvent_t2500729307 * get_OnFingerUp_4() const { return ___OnFingerUp_4; }
	inline LeanFingerEvent_t2500729307 ** get_address_of_OnFingerUp_4() { return &___OnFingerUp_4; }
	inline void set_OnFingerUp_4(LeanFingerEvent_t2500729307 * value)
	{
		___OnFingerUp_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerUp_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
