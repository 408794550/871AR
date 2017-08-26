#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_LJR_Request_1_gen1829932353.h"

// System.String
struct String_t;
// System.Action`2<LJR.RequestDemo2,LJR.ResponceDemo2>
struct Action_2_t3560817943;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LJR.RequestDemo2
struct  RequestDemo2_t738950818  : public Request_1_t1829932353
{
public:
	// System.String LJR.RequestDemo2::get_value
	String_t* ___get_value_9;
	// System.String LJR.RequestDemo2::post_value
	String_t* ___post_value_10;
	// System.Action`2<LJR.RequestDemo2,LJR.ResponceDemo2> LJR.RequestDemo2::onFinish
	Action_2_t3560817943 * ___onFinish_11;

public:
	inline static int32_t get_offset_of_get_value_9() { return static_cast<int32_t>(offsetof(RequestDemo2_t738950818, ___get_value_9)); }
	inline String_t* get_get_value_9() const { return ___get_value_9; }
	inline String_t** get_address_of_get_value_9() { return &___get_value_9; }
	inline void set_get_value_9(String_t* value)
	{
		___get_value_9 = value;
		Il2CppCodeGenWriteBarrier(&___get_value_9, value);
	}

	inline static int32_t get_offset_of_post_value_10() { return static_cast<int32_t>(offsetof(RequestDemo2_t738950818, ___post_value_10)); }
	inline String_t* get_post_value_10() const { return ___post_value_10; }
	inline String_t** get_address_of_post_value_10() { return &___post_value_10; }
	inline void set_post_value_10(String_t* value)
	{
		___post_value_10 = value;
		Il2CppCodeGenWriteBarrier(&___post_value_10, value);
	}

	inline static int32_t get_offset_of_onFinish_11() { return static_cast<int32_t>(offsetof(RequestDemo2_t738950818, ___onFinish_11)); }
	inline Action_2_t3560817943 * get_onFinish_11() const { return ___onFinish_11; }
	inline Action_2_t3560817943 ** get_address_of_onFinish_11() { return &___onFinish_11; }
	inline void set_onFinish_11(Action_2_t3560817943 * value)
	{
		___onFinish_11 = value;
		Il2CppCodeGenWriteBarrier(&___onFinish_11, value);
	}
};

struct RequestDemo2_t738950818_StaticFields
{
public:
	// System.String LJR.RequestDemo2::URL
	String_t* ___URL_8;

public:
	inline static int32_t get_offset_of_URL_8() { return static_cast<int32_t>(offsetof(RequestDemo2_t738950818_StaticFields, ___URL_8)); }
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
