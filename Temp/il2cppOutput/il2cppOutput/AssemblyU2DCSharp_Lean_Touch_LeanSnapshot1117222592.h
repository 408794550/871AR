#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Collections.Generic.List`1<Lean.Touch.LeanSnapshot>
struct List_1_t486343724;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSnapshot
struct  LeanSnapshot_t1117222592  : public Il2CppObject
{
public:
	// System.Single Lean.Touch.LeanSnapshot::Age
	float ___Age_0;
	// UnityEngine.Vector2 Lean.Touch.LeanSnapshot::ScreenPosition
	Vector2_t2243707579  ___ScreenPosition_1;

public:
	inline static int32_t get_offset_of_Age_0() { return static_cast<int32_t>(offsetof(LeanSnapshot_t1117222592, ___Age_0)); }
	inline float get_Age_0() const { return ___Age_0; }
	inline float* get_address_of_Age_0() { return &___Age_0; }
	inline void set_Age_0(float value)
	{
		___Age_0 = value;
	}

	inline static int32_t get_offset_of_ScreenPosition_1() { return static_cast<int32_t>(offsetof(LeanSnapshot_t1117222592, ___ScreenPosition_1)); }
	inline Vector2_t2243707579  get_ScreenPosition_1() const { return ___ScreenPosition_1; }
	inline Vector2_t2243707579 * get_address_of_ScreenPosition_1() { return &___ScreenPosition_1; }
	inline void set_ScreenPosition_1(Vector2_t2243707579  value)
	{
		___ScreenPosition_1 = value;
	}
};

struct LeanSnapshot_t1117222592_StaticFields
{
public:
	// System.Collections.Generic.List`1<Lean.Touch.LeanSnapshot> Lean.Touch.LeanSnapshot::InactiveSnapshots
	List_1_t486343724 * ___InactiveSnapshots_2;

public:
	inline static int32_t get_offset_of_InactiveSnapshots_2() { return static_cast<int32_t>(offsetof(LeanSnapshot_t1117222592_StaticFields, ___InactiveSnapshots_2)); }
	inline List_1_t486343724 * get_InactiveSnapshots_2() const { return ___InactiveSnapshots_2; }
	inline List_1_t486343724 ** get_address_of_InactiveSnapshots_2() { return &___InactiveSnapshots_2; }
	inline void set_InactiveSnapshots_2(List_1_t486343724 * value)
	{
		___InactiveSnapshots_2 = value;
		Il2CppCodeGenWriteBarrier(&___InactiveSnapshots_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
