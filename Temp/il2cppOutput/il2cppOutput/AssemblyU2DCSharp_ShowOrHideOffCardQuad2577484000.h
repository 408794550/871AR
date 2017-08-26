#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// UnityEngine.Collider
struct Collider_t3497673348;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowOrHideOffCardQuad
struct  ShowOrHideOffCardQuad_t2577484000  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Events.UnityAction ShowOrHideOffCardQuad::offCardListener
	UnityAction_t4025899511 * ___offCardListener_2;
	// UnityEngine.Events.UnityAction ShowOrHideOffCardQuad::recoveryModelListener
	UnityAction_t4025899511 * ___recoveryModelListener_3;
	// UnityEngine.Collider ShowOrHideOffCardQuad::quadCollider
	Collider_t3497673348 * ___quadCollider_4;

public:
	inline static int32_t get_offset_of_offCardListener_2() { return static_cast<int32_t>(offsetof(ShowOrHideOffCardQuad_t2577484000, ___offCardListener_2)); }
	inline UnityAction_t4025899511 * get_offCardListener_2() const { return ___offCardListener_2; }
	inline UnityAction_t4025899511 ** get_address_of_offCardListener_2() { return &___offCardListener_2; }
	inline void set_offCardListener_2(UnityAction_t4025899511 * value)
	{
		___offCardListener_2 = value;
		Il2CppCodeGenWriteBarrier(&___offCardListener_2, value);
	}

	inline static int32_t get_offset_of_recoveryModelListener_3() { return static_cast<int32_t>(offsetof(ShowOrHideOffCardQuad_t2577484000, ___recoveryModelListener_3)); }
	inline UnityAction_t4025899511 * get_recoveryModelListener_3() const { return ___recoveryModelListener_3; }
	inline UnityAction_t4025899511 ** get_address_of_recoveryModelListener_3() { return &___recoveryModelListener_3; }
	inline void set_recoveryModelListener_3(UnityAction_t4025899511 * value)
	{
		___recoveryModelListener_3 = value;
		Il2CppCodeGenWriteBarrier(&___recoveryModelListener_3, value);
	}

	inline static int32_t get_offset_of_quadCollider_4() { return static_cast<int32_t>(offsetof(ShowOrHideOffCardQuad_t2577484000, ___quadCollider_4)); }
	inline Collider_t3497673348 * get_quadCollider_4() const { return ___quadCollider_4; }
	inline Collider_t3497673348 ** get_address_of_quadCollider_4() { return &___quadCollider_4; }
	inline void set_quadCollider_4(Collider_t3497673348 * value)
	{
		___quadCollider_4 = value;
		Il2CppCodeGenWriteBarrier(&___quadCollider_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
