#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass76_0
struct  U3CU3Ec__DisplayClass76_0_t3293303416  : public Il2CppObject
{
public:
	// UnityEngine.Quaternion DG.Tweening.ShortcutExtensions/<>c__DisplayClass76_0::to
	Quaternion_t4030073918  ___to_0;
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions/<>c__DisplayClass76_0::target
	Transform_t3275118058 * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t3293303416, ___to_0)); }
	inline Quaternion_t4030073918  get_to_0() const { return ___to_0; }
	inline Quaternion_t4030073918 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Quaternion_t4030073918  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t3293303416, ___target_1)); }
	inline Transform_t3275118058 * get_target_1() const { return ___target_1; }
	inline Transform_t3275118058 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_t3275118058 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
