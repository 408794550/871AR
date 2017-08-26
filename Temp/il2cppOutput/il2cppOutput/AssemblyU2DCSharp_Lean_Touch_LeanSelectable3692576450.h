#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Lean.Touch.LeanFinger
struct LeanFinger_t76062517;
// Lean.Touch.LeanSelectable/LeanFingerEvent
struct LeanFingerEvent_t2546124889;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSelectable
struct  LeanSelectable_t3692576450  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanSelectable::IsSelected
	bool ___IsSelected_2;
	// Lean.Touch.LeanFinger Lean.Touch.LeanSelectable::SelectingFinger
	LeanFinger_t76062517 * ___SelectingFinger_3;
	// Lean.Touch.LeanSelectable/LeanFingerEvent Lean.Touch.LeanSelectable::OnSelect
	LeanFingerEvent_t2546124889 * ___OnSelect_4;
	// Lean.Touch.LeanSelectable/LeanFingerEvent Lean.Touch.LeanSelectable::OnSelectUp
	LeanFingerEvent_t2546124889 * ___OnSelectUp_5;
	// UnityEngine.Events.UnityEvent Lean.Touch.LeanSelectable::OnDeselect
	UnityEvent_t408735097 * ___OnDeselect_6;

public:
	inline static int32_t get_offset_of_IsSelected_2() { return static_cast<int32_t>(offsetof(LeanSelectable_t3692576450, ___IsSelected_2)); }
	inline bool get_IsSelected_2() const { return ___IsSelected_2; }
	inline bool* get_address_of_IsSelected_2() { return &___IsSelected_2; }
	inline void set_IsSelected_2(bool value)
	{
		___IsSelected_2 = value;
	}

	inline static int32_t get_offset_of_SelectingFinger_3() { return static_cast<int32_t>(offsetof(LeanSelectable_t3692576450, ___SelectingFinger_3)); }
	inline LeanFinger_t76062517 * get_SelectingFinger_3() const { return ___SelectingFinger_3; }
	inline LeanFinger_t76062517 ** get_address_of_SelectingFinger_3() { return &___SelectingFinger_3; }
	inline void set_SelectingFinger_3(LeanFinger_t76062517 * value)
	{
		___SelectingFinger_3 = value;
		Il2CppCodeGenWriteBarrier(&___SelectingFinger_3, value);
	}

	inline static int32_t get_offset_of_OnSelect_4() { return static_cast<int32_t>(offsetof(LeanSelectable_t3692576450, ___OnSelect_4)); }
	inline LeanFingerEvent_t2546124889 * get_OnSelect_4() const { return ___OnSelect_4; }
	inline LeanFingerEvent_t2546124889 ** get_address_of_OnSelect_4() { return &___OnSelect_4; }
	inline void set_OnSelect_4(LeanFingerEvent_t2546124889 * value)
	{
		___OnSelect_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnSelect_4, value);
	}

	inline static int32_t get_offset_of_OnSelectUp_5() { return static_cast<int32_t>(offsetof(LeanSelectable_t3692576450, ___OnSelectUp_5)); }
	inline LeanFingerEvent_t2546124889 * get_OnSelectUp_5() const { return ___OnSelectUp_5; }
	inline LeanFingerEvent_t2546124889 ** get_address_of_OnSelectUp_5() { return &___OnSelectUp_5; }
	inline void set_OnSelectUp_5(LeanFingerEvent_t2546124889 * value)
	{
		___OnSelectUp_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnSelectUp_5, value);
	}

	inline static int32_t get_offset_of_OnDeselect_6() { return static_cast<int32_t>(offsetof(LeanSelectable_t3692576450, ___OnDeselect_6)); }
	inline UnityEvent_t408735097 * get_OnDeselect_6() const { return ___OnDeselect_6; }
	inline UnityEvent_t408735097 ** get_address_of_OnDeselect_6() { return &___OnDeselect_6; }
	inline void set_OnDeselect_6(UnityEvent_t408735097 * value)
	{
		___OnDeselect_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeselect_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
