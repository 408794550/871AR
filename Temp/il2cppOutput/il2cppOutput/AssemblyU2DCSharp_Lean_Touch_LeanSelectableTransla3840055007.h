#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Lean_Touch_LeanSelectableBehavio2782920709.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSelectableTranslateInertia3D
struct  LeanSelectableTranslateInertia3D_t3840055007  : public LeanSelectableBehaviour_t2782920709
{
public:
	// UnityEngine.Rigidbody Lean.Touch.LeanSelectableTranslateInertia3D::body
	Rigidbody_t4233889191 * ___body_3;

public:
	inline static int32_t get_offset_of_body_3() { return static_cast<int32_t>(offsetof(LeanSelectableTranslateInertia3D_t3840055007, ___body_3)); }
	inline Rigidbody_t4233889191 * get_body_3() const { return ___body_3; }
	inline Rigidbody_t4233889191 ** get_address_of_body_3() { return &___body_3; }
	inline void set_body_3(Rigidbody_t4233889191 * value)
	{
		___body_3 = value;
		Il2CppCodeGenWriteBarrier(&___body_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
