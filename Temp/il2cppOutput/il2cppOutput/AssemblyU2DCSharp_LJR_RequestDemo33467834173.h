#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_LJR_Request_1_gen1829932352.h"

// System.String
struct String_t;
// System.Action`2<LJR.RequestDemo3,LJR.ResponceDemo3>
struct Action_2_t3299253167;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LJR.RequestDemo3
struct  RequestDemo3_t3467834173  : public Request_1_t1829932352
{
public:
	// System.Action`2<LJR.RequestDemo3,LJR.ResponceDemo3> LJR.RequestDemo3::onFinish
	Action_2_t3299253167 * ___onFinish_9;

public:
	inline static int32_t get_offset_of_onFinish_9() { return static_cast<int32_t>(offsetof(RequestDemo3_t3467834173, ___onFinish_9)); }
	inline Action_2_t3299253167 * get_onFinish_9() const { return ___onFinish_9; }
	inline Action_2_t3299253167 ** get_address_of_onFinish_9() { return &___onFinish_9; }
	inline void set_onFinish_9(Action_2_t3299253167 * value)
	{
		___onFinish_9 = value;
		Il2CppCodeGenWriteBarrier(&___onFinish_9, value);
	}
};

struct RequestDemo3_t3467834173_StaticFields
{
public:
	// System.String LJR.RequestDemo3::URL
	String_t* ___URL_8;

public:
	inline static int32_t get_offset_of_URL_8() { return static_cast<int32_t>(offsetof(RequestDemo3_t3467834173_StaticFields, ___URL_8)); }
	inline String_t* get_URL_8() const { return ___URL_8; }
	inline String_t** get_address_of_URL_8() { return &___URL_8; }
	inline void set_URL_8(String_t* value)
	{
		___URL_8 = value;
		Il2CppCodeGenWriteBarrier(&___URL_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
