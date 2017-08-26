#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// System.Collections.Generic.List`1<Lean.Touch.LeanDragTrail/Link>
struct List_1_t4055024966;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanDragTrail
struct  LeanDragTrail_t3533323662  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LineRenderer Lean.Touch.LeanDragTrail::Prefab
	LineRenderer_t849157671 * ___Prefab_2;
	// System.Single Lean.Touch.LeanDragTrail::Distance
	float ___Distance_3;
	// System.Collections.Generic.List`1<Lean.Touch.LeanDragTrail/Link> Lean.Touch.LeanDragTrail::links
	List_1_t4055024966 * ___links_4;

public:
	inline static int32_t get_offset_of_Prefab_2() { return static_cast<int32_t>(offsetof(LeanDragTrail_t3533323662, ___Prefab_2)); }
	inline LineRenderer_t849157671 * get_Prefab_2() const { return ___Prefab_2; }
	inline LineRenderer_t849157671 ** get_address_of_Prefab_2() { return &___Prefab_2; }
	inline void set_Prefab_2(LineRenderer_t849157671 * value)
	{
		___Prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_2, value);
	}

	inline static int32_t get_offset_of_Distance_3() { return static_cast<int32_t>(offsetof(LeanDragTrail_t3533323662, ___Distance_3)); }
	inline float get_Distance_3() const { return ___Distance_3; }
	inline float* get_address_of_Distance_3() { return &___Distance_3; }
	inline void set_Distance_3(float value)
	{
		___Distance_3 = value;
	}

	inline static int32_t get_offset_of_links_4() { return static_cast<int32_t>(offsetof(LeanDragTrail_t3533323662, ___links_4)); }
	inline List_1_t4055024966 * get_links_4() const { return ___links_4; }
	inline List_1_t4055024966 ** get_address_of_links_4() { return &___links_4; }
	inline void set_links_4(List_1_t4055024966 * value)
	{
		___links_4 = value;
		Il2CppCodeGenWriteBarrier(&___links_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
