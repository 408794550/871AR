#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t1593819722;
// LitJson.FsmContext
struct FsmContext_t1296252303;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.Lexer
struct  Lexer_t186508296  : public Il2CppObject
{
public:
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t1296252303 * ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_t1561828458 * ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t1221177846 * ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;

public:
	inline static int32_t get_offset_of_allow_comments_2() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___allow_comments_2)); }
	inline bool get_allow_comments_2() const { return ___allow_comments_2; }
	inline bool* get_address_of_allow_comments_2() { return &___allow_comments_2; }
	inline void set_allow_comments_2(bool value)
	{
		___allow_comments_2 = value;
	}

	inline static int32_t get_offset_of_allow_single_quoted_strings_3() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___allow_single_quoted_strings_3)); }
	inline bool get_allow_single_quoted_strings_3() const { return ___allow_single_quoted_strings_3; }
	inline bool* get_address_of_allow_single_quoted_strings_3() { return &___allow_single_quoted_strings_3; }
	inline void set_allow_single_quoted_strings_3(bool value)
	{
		___allow_single_quoted_strings_3 = value;
	}

	inline static int32_t get_offset_of_end_of_input_4() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___end_of_input_4)); }
	inline bool get_end_of_input_4() const { return ___end_of_input_4; }
	inline bool* get_address_of_end_of_input_4() { return &___end_of_input_4; }
	inline void set_end_of_input_4(bool value)
	{
		___end_of_input_4 = value;
	}

	inline static int32_t get_offset_of_fsm_context_5() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___fsm_context_5)); }
	inline FsmContext_t1296252303 * get_fsm_context_5() const { return ___fsm_context_5; }
	inline FsmContext_t1296252303 ** get_address_of_fsm_context_5() { return &___fsm_context_5; }
	inline void set_fsm_context_5(FsmContext_t1296252303 * value)
	{
		___fsm_context_5 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_context_5, value);
	}

	inline static int32_t get_offset_of_input_buffer_6() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___input_buffer_6)); }
	inline int32_t get_input_buffer_6() const { return ___input_buffer_6; }
	inline int32_t* get_address_of_input_buffer_6() { return &___input_buffer_6; }
	inline void set_input_buffer_6(int32_t value)
	{
		___input_buffer_6 = value;
	}

	inline static int32_t get_offset_of_input_char_7() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___input_char_7)); }
	inline int32_t get_input_char_7() const { return ___input_char_7; }
	inline int32_t* get_address_of_input_char_7() { return &___input_char_7; }
	inline void set_input_char_7(int32_t value)
	{
		___input_char_7 = value;
	}

	inline static int32_t get_offset_of_reader_8() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___reader_8)); }
	inline TextReader_t1561828458 * get_reader_8() const { return ___reader_8; }
	inline TextReader_t1561828458 ** get_address_of_reader_8() { return &___reader_8; }
	inline void set_reader_8(TextReader_t1561828458 * value)
	{
		___reader_8 = value;
		Il2CppCodeGenWriteBarrier(&___reader_8, value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_string_buffer_10() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___string_buffer_10)); }
	inline StringBuilder_t1221177846 * get_string_buffer_10() const { return ___string_buffer_10; }
	inline StringBuilder_t1221177846 ** get_address_of_string_buffer_10() { return &___string_buffer_10; }
	inline void set_string_buffer_10(StringBuilder_t1221177846 * value)
	{
		___string_buffer_10 = value;
		Il2CppCodeGenWriteBarrier(&___string_buffer_10, value);
	}

	inline static int32_t get_offset_of_string_value_11() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___string_value_11)); }
	inline String_t* get_string_value_11() const { return ___string_value_11; }
	inline String_t** get_address_of_string_value_11() { return &___string_value_11; }
	inline void set_string_value_11(String_t* value)
	{
		___string_value_11 = value;
		Il2CppCodeGenWriteBarrier(&___string_value_11, value);
	}

	inline static int32_t get_offset_of_token_12() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___token_12)); }
	inline int32_t get_token_12() const { return ___token_12; }
	inline int32_t* get_address_of_token_12() { return &___token_12; }
	inline void set_token_12(int32_t value)
	{
		___token_12 = value;
	}

	inline static int32_t get_offset_of_unichar_13() { return static_cast<int32_t>(offsetof(Lexer_t186508296, ___unichar_13)); }
	inline int32_t get_unichar_13() const { return ___unichar_13; }
	inline int32_t* get_address_of_unichar_13() { return &___unichar_13; }
	inline void set_unichar_13(int32_t value)
	{
		___unichar_13 = value;
	}
};

struct Lexer_t186508296_StaticFields
{
public:
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t3030399641* ___fsm_return_table_0;
	// LitJson.Lexer/StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_t1593819722* ___fsm_handler_table_1;

public:
	inline static int32_t get_offset_of_fsm_return_table_0() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___fsm_return_table_0)); }
	inline Int32U5BU5D_t3030399641* get_fsm_return_table_0() const { return ___fsm_return_table_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_fsm_return_table_0() { return &___fsm_return_table_0; }
	inline void set_fsm_return_table_0(Int32U5BU5D_t3030399641* value)
	{
		___fsm_return_table_0 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_return_table_0, value);
	}

	inline static int32_t get_offset_of_fsm_handler_table_1() { return static_cast<int32_t>(offsetof(Lexer_t186508296_StaticFields, ___fsm_handler_table_1)); }
	inline StateHandlerU5BU5D_t1593819722* get_fsm_handler_table_1() const { return ___fsm_handler_table_1; }
	inline StateHandlerU5BU5D_t1593819722** get_address_of_fsm_handler_table_1() { return &___fsm_handler_table_1; }
	inline void set_fsm_handler_table_1(StateHandlerU5BU5D_t1593819722* value)
	{
		___fsm_handler_table_1 = value;
		Il2CppCodeGenWriteBarrier(&___fsm_handler_table_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
