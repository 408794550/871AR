#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t3671312409;
// AssMemoryManager
struct AssMemoryManager_t1052331973;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssMemoryManager
struct  AssMemoryManager_t1052331973  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> AssMemoryManager::goDictionary
	Dictionary_2_t3671312409 * ___goDictionary_3;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> AssMemoryManager::cameraARModelDic
	Dictionary_2_t3671312409 * ___cameraARModelDic_4;

public:
	inline static int32_t get_offset_of_goDictionary_3() { return static_cast<int32_t>(offsetof(AssMemoryManager_t1052331973, ___goDictionary_3)); }
	inline Dictionary_2_t3671312409 * get_goDictionary_3() const { return ___goDictionary_3; }
	inline Dictionary_2_t3671312409 ** get_address_of_goDictionary_3() { return &___goDictionary_3; }
	inline void set_goDictionary_3(Dictionary_2_t3671312409 * value)
	{
		___goDictionary_3 = value;
		Il2CppCodeGenWriteBarrier(&___goDictionary_3, value);
	}

	inline static int32_t get_offset_of_cameraARModelDic_4() { return static_cast<int32_t>(offsetof(AssMemoryManager_t1052331973, ___cameraARModelDic_4)); }
	inline Dictionary_2_t3671312409 * get_cameraARModelDic_4() const { return ___cameraARModelDic_4; }
	inline Dictionary_2_t3671312409 ** get_address_of_cameraARModelDic_4() { return &___cameraARModelDic_4; }
	inline void set_cameraARModelDic_4(Dictionary_2_t3671312409 * value)
	{
		___cameraARModelDic_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraARModelDic_4, value);
	}
};

struct AssMemoryManager_t1052331973_StaticFields
{
public:
	// System.UInt64 AssMemoryManager::currentModelIndex
	uint64_t ___currentModelIndex_2;
	// AssMemoryManager AssMemoryManager::memoryManager
	AssMemoryManager_t1052331973 * ___memoryManager_5;

public:
	inline static int32_t get_offset_of_currentModelIndex_2() { return static_cast<int32_t>(offsetof(AssMemoryManager_t1052331973_StaticFields, ___currentModelIndex_2)); }
	inline uint64_t get_currentModelIndex_2() const { return ___currentModelIndex_2; }
	inline uint64_t* get_address_of_currentModelIndex_2() { return &___currentModelIndex_2; }
	inline void set_currentModelIndex_2(uint64_t value)
	{
		___currentModelIndex_2 = value;
	}

	inline static int32_t get_offset_of_memoryManager_5() { return static_cast<int32_t>(offsetof(AssMemoryManager_t1052331973_StaticFields, ___memoryManager_5)); }
	inline AssMemoryManager_t1052331973 * get_memoryManager_5() const { return ___memoryManager_5; }
	inline AssMemoryManager_t1052331973 ** get_address_of_memoryManager_5() { return &___memoryManager_5; }
	inline void set_memoryManager_5(AssMemoryManager_t1052331973 * value)
	{
		___memoryManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___memoryManager_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
