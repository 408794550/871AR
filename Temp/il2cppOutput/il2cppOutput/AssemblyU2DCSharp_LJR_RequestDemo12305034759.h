#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_LJR_Request_1_gen1829932354.h"

// System.String
struct String_t;
// System.Action`2<LJR.RequestDemo1,LJR.ResponceDemo1>
struct Action_2_t3822382719;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LJR.RequestDemo1
struct  RequestDemo1_t2305034759  : public Request_1_t1829932354
{
public:
	// System.String LJR.RequestDemo1::id
	String_t* ___id_9;
	// System.Action`2<LJR.RequestDemo1,LJR.ResponceDemo1> LJR.RequestDemo1::onFinish
	Action_2_t3822382719 * ___onFinish_10;

public:
	inline static int32_t get_offset_of_id_9() { return static_cast<int32_t>(offsetof(RequestDemo1_t2305034759, ___id_9)); }
	inline String_t* get_id_9() const { return ___id_9; }
	inline String_t** get_address_of_id_9() { return &___id_9; }
	inline void set_id_9(String_t* value)
	{
		___id_9 = value;
		Il2CppCodeGenWriteBarrier(&___id_9, value);
	}

	inline static int32_t get_offset_of_onFinish_10() { return static_cast<int32_t>(offsetof(RequestDemo1_t2305034759, ___onFinish_10)); }
	inline Action_2_t3822382719 * get_onFinish_10() const { return ___onFinish_10; }
	inline Action_2_t3822382719 ** get_address_of_onFinish_10() { return &___onFinish_10; }
	inline void set_onFinish_10(Action_2_t3822382719 * value)
	{
		___onFinish_10 = value;
		Il2CppCodeGenWriteBarrier(&___onFinish_10, value);
	}
};

struct RequestDemo1_t2305034759_StaticFields
{
public:
	// System.String LJR.RequestDemo1::URL
	String_t* ___URL_8;

public:
	inline static int32_t get_offset_of_URL_8() { return static_cast<int32_t>(offsetof(RequestDemo1_t2305034759_StaticFields, ___URL_8)); }
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
