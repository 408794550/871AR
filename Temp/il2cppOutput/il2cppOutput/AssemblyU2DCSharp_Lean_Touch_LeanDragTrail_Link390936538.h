#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Lean.Touch.LeanFinger
struct LeanFinger_t76062517;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanDragTrail/Link
struct  Link_t390936538  : public Il2CppObject
{
public:
	// Lean.Touch.LeanFinger Lean.Touch.LeanDragTrail/Link::Finger
	LeanFinger_t76062517 * ___Finger_0;
	// UnityEngine.LineRenderer Lean.Touch.LeanDragTrail/Link::Line
	LineRenderer_t849157671 * ___Line_1;

public:
	inline static int32_t get_offset_of_Finger_0() { return static_cast<int32_t>(offsetof(Link_t390936538, ___Finger_0)); }
	inline LeanFinger_t76062517 * get_Finger_0() const { return ___Finger_0; }
	inline LeanFinger_t76062517 ** get_address_of_Finger_0() { return &___Finger_0; }
	inline void set_Finger_0(LeanFinger_t76062517 * value)
	{
		___Finger_0 = value;
		Il2CppCodeGenWriteBarrier(&___Finger_0, value);
	}

	inline static int32_t get_offset_of_Line_1() { return static_cast<int32_t>(offsetof(Link_t390936538, ___Line_1)); }
	inline LineRenderer_t849157671 * get_Line_1() const { return ___Line_1; }
	inline LineRenderer_t849157671 ** get_address_of_Line_1() { return &___Line_1; }
	inline void set_Line_1(LineRenderer_t849157671 * value)
	{
		___Line_1 = value;
		Il2CppCodeGenWriteBarrier(&___Line_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
