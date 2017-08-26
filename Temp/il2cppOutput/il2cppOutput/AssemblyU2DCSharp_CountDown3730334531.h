#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// CountDown
struct CountDown_t3730334531;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CountDown
struct  CountDown_t3730334531  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 CountDown::time
	int32_t ___time_2;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(CountDown_t3730334531, ___time_2)); }
	inline int32_t get_time_2() const { return ___time_2; }
	inline int32_t* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(int32_t value)
	{
		___time_2 = value;
	}
};

struct CountDown_t3730334531_StaticFields
{
public:
	// CountDown CountDown::_instance
	CountDown_t3730334531 * ____instance_3;

public:
	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(CountDown_t3730334531_StaticFields, ____instance_3)); }
	inline CountDown_t3730334531 * get__instance_3() const { return ____instance_3; }
	inline CountDown_t3730334531 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(CountDown_t3730334531 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier(&____instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
