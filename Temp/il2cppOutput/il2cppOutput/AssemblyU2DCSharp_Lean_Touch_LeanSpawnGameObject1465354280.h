#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSpawnGameObject
struct  LeanSpawnGameObject_t1465354280  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Lean.Touch.LeanSpawnGameObject::Prefab
	GameObject_t1756533147 * ___Prefab_2;
	// System.Single Lean.Touch.LeanSpawnGameObject::FingerDistance
	float ___FingerDistance_3;

public:
	inline static int32_t get_offset_of_Prefab_2() { return static_cast<int32_t>(offsetof(LeanSpawnGameObject_t1465354280, ___Prefab_2)); }
	inline GameObject_t1756533147 * get_Prefab_2() const { return ___Prefab_2; }
	inline GameObject_t1756533147 ** get_address_of_Prefab_2() { return &___Prefab_2; }
	inline void set_Prefab_2(GameObject_t1756533147 * value)
	{
		___Prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_2, value);
	}

	inline static int32_t get_offset_of_FingerDistance_3() { return static_cast<int32_t>(offsetof(LeanSpawnGameObject_t1465354280, ___FingerDistance_3)); }
	inline float get_FingerDistance_3() const { return ___FingerDistance_3; }
	inline float* get_address_of_FingerDistance_3() { return &___FingerDistance_3; }
	inline void set_FingerDistance_3(float value)
	{
		___FingerDistance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
