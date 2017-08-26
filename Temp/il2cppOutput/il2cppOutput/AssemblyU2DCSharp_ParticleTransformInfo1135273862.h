#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticleTransformInfo
struct  ParticleTransformInfo_t1135273862  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] ParticleTransformInfo::particleSystemObj
	GameObjectU5BU5D_t3057952154* ___particleSystemObj_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ParticleTransformInfo::particleSystemObjList
	List_1_t1125654279 * ___particleSystemObjList_3;

public:
	inline static int32_t get_offset_of_particleSystemObj_2() { return static_cast<int32_t>(offsetof(ParticleTransformInfo_t1135273862, ___particleSystemObj_2)); }
	inline GameObjectU5BU5D_t3057952154* get_particleSystemObj_2() const { return ___particleSystemObj_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_particleSystemObj_2() { return &___particleSystemObj_2; }
	inline void set_particleSystemObj_2(GameObjectU5BU5D_t3057952154* value)
	{
		___particleSystemObj_2 = value;
		Il2CppCodeGenWriteBarrier(&___particleSystemObj_2, value);
	}

	inline static int32_t get_offset_of_particleSystemObjList_3() { return static_cast<int32_t>(offsetof(ParticleTransformInfo_t1135273862, ___particleSystemObjList_3)); }
	inline List_1_t1125654279 * get_particleSystemObjList_3() const { return ___particleSystemObjList_3; }
	inline List_1_t1125654279 ** get_address_of_particleSystemObjList_3() { return &___particleSystemObjList_3; }
	inline void set_particleSystemObjList_3(List_1_t1125654279 * value)
	{
		___particleSystemObjList_3 = value;
		Il2CppCodeGenWriteBarrier(&___particleSystemObjList_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
