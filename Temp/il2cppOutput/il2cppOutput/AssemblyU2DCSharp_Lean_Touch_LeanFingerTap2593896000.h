#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Lean.Touch.LeanSelectable
struct LeanSelectable_t3692576450;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerTap
struct  LeanFingerTap_t2593896000  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Lean.Touch.LeanFingerTap::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// System.Int32 Lean.Touch.LeanFingerTap::RequiredTapCount
	int32_t ___RequiredTapCount_3;
	// System.Int32 Lean.Touch.LeanFingerTap::RequiredTapInterval
	int32_t ___RequiredTapInterval_4;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanFingerTap::RequiredSelectable
	LeanSelectable_t3692576450 * ___RequiredSelectable_5;
	// UnityEngine.Animator Lean.Touch.LeanFingerTap::animator
	Animator_t69676727 * ___animator_6;
	// System.Boolean Lean.Touch.LeanFingerTap::isAnimatorLoaded
	bool ___isAnimatorLoaded_7;
	// UnityEngine.GameObject Lean.Touch.LeanFingerTap::nextARObject
	GameObject_t1756533147 * ___nextARObject_8;
	// System.String Lean.Touch.LeanFingerTap::modelType
	String_t* ___modelType_9;
	// System.Boolean Lean.Touch.LeanFingerTap::hasMask
	bool ___hasMask_10;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_RequiredTapCount_3() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___RequiredTapCount_3)); }
	inline int32_t get_RequiredTapCount_3() const { return ___RequiredTapCount_3; }
	inline int32_t* get_address_of_RequiredTapCount_3() { return &___RequiredTapCount_3; }
	inline void set_RequiredTapCount_3(int32_t value)
	{
		___RequiredTapCount_3 = value;
	}

	inline static int32_t get_offset_of_RequiredTapInterval_4() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___RequiredTapInterval_4)); }
	inline int32_t get_RequiredTapInterval_4() const { return ___RequiredTapInterval_4; }
	inline int32_t* get_address_of_RequiredTapInterval_4() { return &___RequiredTapInterval_4; }
	inline void set_RequiredTapInterval_4(int32_t value)
	{
		___RequiredTapInterval_4 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_5() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___RequiredSelectable_5)); }
	inline LeanSelectable_t3692576450 * get_RequiredSelectable_5() const { return ___RequiredSelectable_5; }
	inline LeanSelectable_t3692576450 ** get_address_of_RequiredSelectable_5() { return &___RequiredSelectable_5; }
	inline void set_RequiredSelectable_5(LeanSelectable_t3692576450 * value)
	{
		___RequiredSelectable_5 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_5, value);
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___animator_6)); }
	inline Animator_t69676727 * get_animator_6() const { return ___animator_6; }
	inline Animator_t69676727 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t69676727 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier(&___animator_6, value);
	}

	inline static int32_t get_offset_of_isAnimatorLoaded_7() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___isAnimatorLoaded_7)); }
	inline bool get_isAnimatorLoaded_7() const { return ___isAnimatorLoaded_7; }
	inline bool* get_address_of_isAnimatorLoaded_7() { return &___isAnimatorLoaded_7; }
	inline void set_isAnimatorLoaded_7(bool value)
	{
		___isAnimatorLoaded_7 = value;
	}

	inline static int32_t get_offset_of_nextARObject_8() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___nextARObject_8)); }
	inline GameObject_t1756533147 * get_nextARObject_8() const { return ___nextARObject_8; }
	inline GameObject_t1756533147 ** get_address_of_nextARObject_8() { return &___nextARObject_8; }
	inline void set_nextARObject_8(GameObject_t1756533147 * value)
	{
		___nextARObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___nextARObject_8, value);
	}

	inline static int32_t get_offset_of_modelType_9() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___modelType_9)); }
	inline String_t* get_modelType_9() const { return ___modelType_9; }
	inline String_t** get_address_of_modelType_9() { return &___modelType_9; }
	inline void set_modelType_9(String_t* value)
	{
		___modelType_9 = value;
		Il2CppCodeGenWriteBarrier(&___modelType_9, value);
	}

	inline static int32_t get_offset_of_hasMask_10() { return static_cast<int32_t>(offsetof(LeanFingerTap_t2593896000, ___hasMask_10)); }
	inline bool get_hasMask_10() const { return ___hasMask_10; }
	inline bool* get_address_of_hasMask_10() { return &___hasMask_10; }
	inline void set_hasMask_10(bool value)
	{
		___hasMask_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
