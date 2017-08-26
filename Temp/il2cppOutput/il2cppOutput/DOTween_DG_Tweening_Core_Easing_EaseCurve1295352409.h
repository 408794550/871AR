#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.Easing.EaseCurve
struct  EaseCurve_t1295352409  : public Il2CppObject
{
public:
	// UnityEngine.AnimationCurve DG.Tweening.Core.Easing.EaseCurve::_animCurve
	AnimationCurve_t3306541151 * ____animCurve_0;

public:
	inline static int32_t get_offset_of__animCurve_0() { return static_cast<int32_t>(offsetof(EaseCurve_t1295352409, ____animCurve_0)); }
	inline AnimationCurve_t3306541151 * get__animCurve_0() const { return ____animCurve_0; }
	inline AnimationCurve_t3306541151 ** get_address_of__animCurve_0() { return &____animCurve_0; }
	inline void set__animCurve_0(AnimationCurve_t3306541151 * value)
	{
		____animCurve_0 = value;
		Il2CppCodeGenWriteBarrier(&____animCurve_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
