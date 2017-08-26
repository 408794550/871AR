#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Lean.Touch.LeanMultiTap/IntEvent
struct IntEvent_t18007207;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanMultiTap
struct  LeanMultiTap_t2693737624  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanMultiTap::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// System.Boolean Lean.Touch.LeanMultiTap::MultiTap
	bool ___MultiTap_3;
	// System.Int32 Lean.Touch.LeanMultiTap::MultiTapCount
	int32_t ___MultiTapCount_4;
	// System.Int32 Lean.Touch.LeanMultiTap::HighestFingerCount
	int32_t ___HighestFingerCount_5;
	// Lean.Touch.LeanMultiTap/IntEvent Lean.Touch.LeanMultiTap::OnMultiTap
	IntEvent_t18007207 * ___OnMultiTap_6;
	// System.Single Lean.Touch.LeanMultiTap::age
	float ___age_7;
	// System.Int32 Lean.Touch.LeanMultiTap::lastFingerCount
	int32_t ___lastFingerCount_8;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanMultiTap_t2693737624, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_MultiTap_3() { return static_cast<int32_t>(offsetof(LeanMultiTap_t2693737624, ___MultiTap_3)); }
	inline bool get_MultiTap_3() const { return ___MultiTap_3; }
	inline bool* get_address_of_MultiTap_3() { return &___MultiTap_3; }
	inline void set_MultiTap_3(bool value)
	{
		___MultiTap_3 = value;
	}

	inline static int32_t get_offset_of_MultiTapCount_4() { return static_cast<int32_t>(offsetof(LeanMultiTap_t2693737624, ___MultiTapCount_4)); }
	inline int32_t get_MultiTapCount_4() const { return ___MultiTapCount_4; }
	inline int32_t* get_address_of_MultiTapCount_4() { return &___MultiTapCount_4; }
	inline void set_MultiTapCount_4(int32_t value)
	{
		___MultiTapCount_4 = value;
	}

	inline static int32_t get_offset_of_HighestFingerCount_5() { return static_cast<int32_t>(offsetof(LeanMultiTap_t2693737624, ___HighestFingerCount_5)); }
	inline int32_t get_HighestFingerCount_5() const { return ___HighestFingerCount_5; }
	inline int32_t* get_address_of_HighestFingerCount_5() { return &___HighestFingerCount_5; }
	inline void set_HighestFingerCount_5(int32_t value)
	{
		___HighestFingerCount_5 = value;
	}

	inline static int32_t get_offset_of_OnMultiTap_6() { return static_cast<int32_t>(offsetof(LeanMultiTap_t2693737624, ___OnMultiTap_6)); }
	inline IntEvent_t18007207 * get_OnMultiTap_6() const { return ___OnMultiTap_6; }
	inline IntEvent_t18007207 ** get_address_of_OnMultiTap_6() { return &___OnMultiTap_6; }
	inline void set_OnMultiTap_6(IntEvent_t18007207 * value)
	{
		___OnMultiTap_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnMultiTap_6, value);
	}

	inline static int32_t get_offset_of_age_7() { return static_cast<int32_t>(offsetof(LeanMultiTap_t2693737624, ___age_7)); }
	inline float get_age_7() const { return ___age_7; }
	inline float* get_address_of_age_7() { return &___age_7; }
	inline void set_age_7(float value)
	{
		___age_7 = value;
	}

	inline static int32_t get_offset_of_lastFingerCount_8() { return static_cast<int32_t>(offsetof(LeanMultiTap_t2693737624, ___lastFingerCount_8)); }
	inline int32_t get_lastFingerCount_8() const { return ___lastFingerCount_8; }
	inline int32_t* get_address_of_lastFingerCount_8() { return &___lastFingerCount_8; }
	inline void set_lastFingerCount_8(int32_t value)
	{
		___lastFingerCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
