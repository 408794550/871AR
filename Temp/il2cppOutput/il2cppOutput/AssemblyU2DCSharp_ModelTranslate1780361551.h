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
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelTranslate
struct  ModelTranslate_t1780361551  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ModelTranslate::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_2;
	// System.Int32 ModelTranslate::RequiredFingerCount
	int32_t ___RequiredFingerCount_3;
	// Lean.Touch.LeanSelectable ModelTranslate::RequiredSelectable
	LeanSelectable_t3692576450 * ___RequiredSelectable_4;
	// UnityEngine.Camera ModelTranslate::Camera
	Camera_t189460977 * ___Camera_5;
	// UnityEngine.GameObject ModelTranslate::modelCenter
	GameObject_t1756533147 * ___modelCenter_6;

public:
	inline static int32_t get_offset_of_IgnoreGuiFingers_2() { return static_cast<int32_t>(offsetof(ModelTranslate_t1780361551, ___IgnoreGuiFingers_2)); }
	inline bool get_IgnoreGuiFingers_2() const { return ___IgnoreGuiFingers_2; }
	inline bool* get_address_of_IgnoreGuiFingers_2() { return &___IgnoreGuiFingers_2; }
	inline void set_IgnoreGuiFingers_2(bool value)
	{
		___IgnoreGuiFingers_2 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_3() { return static_cast<int32_t>(offsetof(ModelTranslate_t1780361551, ___RequiredFingerCount_3)); }
	inline int32_t get_RequiredFingerCount_3() const { return ___RequiredFingerCount_3; }
	inline int32_t* get_address_of_RequiredFingerCount_3() { return &___RequiredFingerCount_3; }
	inline void set_RequiredFingerCount_3(int32_t value)
	{
		___RequiredFingerCount_3 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_4() { return static_cast<int32_t>(offsetof(ModelTranslate_t1780361551, ___RequiredSelectable_4)); }
	inline LeanSelectable_t3692576450 * get_RequiredSelectable_4() const { return ___RequiredSelectable_4; }
	inline LeanSelectable_t3692576450 ** get_address_of_RequiredSelectable_4() { return &___RequiredSelectable_4; }
	inline void set_RequiredSelectable_4(LeanSelectable_t3692576450 * value)
	{
		___RequiredSelectable_4 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_4, value);
	}

	inline static int32_t get_offset_of_Camera_5() { return static_cast<int32_t>(offsetof(ModelTranslate_t1780361551, ___Camera_5)); }
	inline Camera_t189460977 * get_Camera_5() const { return ___Camera_5; }
	inline Camera_t189460977 ** get_address_of_Camera_5() { return &___Camera_5; }
	inline void set_Camera_5(Camera_t189460977 * value)
	{
		___Camera_5 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_5, value);
	}

	inline static int32_t get_offset_of_modelCenter_6() { return static_cast<int32_t>(offsetof(ModelTranslate_t1780361551, ___modelCenter_6)); }
	inline GameObject_t1756533147 * get_modelCenter_6() const { return ___modelCenter_6; }
	inline GameObject_t1756533147 ** get_address_of_modelCenter_6() { return &___modelCenter_6; }
	inline void set_modelCenter_6(GameObject_t1756533147 * value)
	{
		___modelCenter_6 = value;
		Il2CppCodeGenWriteBarrier(&___modelCenter_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
