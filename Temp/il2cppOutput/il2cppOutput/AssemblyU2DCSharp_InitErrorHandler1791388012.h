#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Canvas
struct Canvas_t209405766;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InitErrorHandler
struct  InitErrorHandler_t1791388012  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text InitErrorHandler::errorText
	Text_t356221433 * ___errorText_2;
	// UnityEngine.Canvas InitErrorHandler::errorCanvas
	Canvas_t209405766 * ___errorCanvas_3;
	// System.String InitErrorHandler::key
	String_t* ___key_4;

public:
	inline static int32_t get_offset_of_errorText_2() { return static_cast<int32_t>(offsetof(InitErrorHandler_t1791388012, ___errorText_2)); }
	inline Text_t356221433 * get_errorText_2() const { return ___errorText_2; }
	inline Text_t356221433 ** get_address_of_errorText_2() { return &___errorText_2; }
	inline void set_errorText_2(Text_t356221433 * value)
	{
		___errorText_2 = value;
		Il2CppCodeGenWriteBarrier(&___errorText_2, value);
	}

	inline static int32_t get_offset_of_errorCanvas_3() { return static_cast<int32_t>(offsetof(InitErrorHandler_t1791388012, ___errorCanvas_3)); }
	inline Canvas_t209405766 * get_errorCanvas_3() const { return ___errorCanvas_3; }
	inline Canvas_t209405766 ** get_address_of_errorCanvas_3() { return &___errorCanvas_3; }
	inline void set_errorCanvas_3(Canvas_t209405766 * value)
	{
		___errorCanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___errorCanvas_3, value);
	}

	inline static int32_t get_offset_of_key_4() { return static_cast<int32_t>(offsetof(InitErrorHandler_t1791388012, ___key_4)); }
	inline String_t* get_key_4() const { return ___key_4; }
	inline String_t** get_address_of_key_4() { return &___key_4; }
	inline void set_key_4(String_t* value)
	{
		___key_4 = value;
		Il2CppCodeGenWriteBarrier(&___key_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
