#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// FunctionModeleManager
struct FunctionModeleManager_t605421381;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FunctionModeleManager
struct  FunctionModeleManager_t605421381  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean FunctionModeleManager::offCard
	bool ___offCard_2;
	// System.Boolean FunctionModeleManager::rotation
	bool ___rotation_3;
	// System.Boolean FunctionModeleManager::tapWalk
	bool ___tapWalk_4;

public:
	inline static int32_t get_offset_of_offCard_2() { return static_cast<int32_t>(offsetof(FunctionModeleManager_t605421381, ___offCard_2)); }
	inline bool get_offCard_2() const { return ___offCard_2; }
	inline bool* get_address_of_offCard_2() { return &___offCard_2; }
	inline void set_offCard_2(bool value)
	{
		___offCard_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(FunctionModeleManager_t605421381, ___rotation_3)); }
	inline bool get_rotation_3() const { return ___rotation_3; }
	inline bool* get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(bool value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_tapWalk_4() { return static_cast<int32_t>(offsetof(FunctionModeleManager_t605421381, ___tapWalk_4)); }
	inline bool get_tapWalk_4() const { return ___tapWalk_4; }
	inline bool* get_address_of_tapWalk_4() { return &___tapWalk_4; }
	inline void set_tapWalk_4(bool value)
	{
		___tapWalk_4 = value;
	}
};

struct FunctionModeleManager_t605421381_StaticFields
{
public:
	// FunctionModeleManager FunctionModeleManager::_instance
	FunctionModeleManager_t605421381 * ____instance_5;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(FunctionModeleManager_t605421381_StaticFields, ____instance_5)); }
	inline FunctionModeleManager_t605421381 * get__instance_5() const { return ____instance_5; }
	inline FunctionModeleManager_t605421381 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(FunctionModeleManager_t605421381 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier(&____instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
