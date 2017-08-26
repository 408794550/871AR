#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// LJR.Inner_class
struct Inner_class_t874015059;
// LJR.Game_data[]
struct Game_dataU5BU5D_t2717562468;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LJR.Class_values
struct  Class_values_t1529492885  : public Il2CppObject
{
public:
	// System.Int32 LJR.Class_values::id
	int32_t ___id_0;
	// System.String LJR.Class_values::name
	String_t* ___name_1;
	// LJR.Inner_class LJR.Class_values::inner_class
	Inner_class_t874015059 * ___inner_class_2;
	// LJR.Game_data[] LJR.Class_values::game_data
	Game_dataU5BU5D_t2717562468* ___game_data_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Class_values_t1529492885, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Class_values_t1529492885, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_inner_class_2() { return static_cast<int32_t>(offsetof(Class_values_t1529492885, ___inner_class_2)); }
	inline Inner_class_t874015059 * get_inner_class_2() const { return ___inner_class_2; }
	inline Inner_class_t874015059 ** get_address_of_inner_class_2() { return &___inner_class_2; }
	inline void set_inner_class_2(Inner_class_t874015059 * value)
	{
		___inner_class_2 = value;
		Il2CppCodeGenWriteBarrier(&___inner_class_2, value);
	}

	inline static int32_t get_offset_of_game_data_3() { return static_cast<int32_t>(offsetof(Class_values_t1529492885, ___game_data_3)); }
	inline Game_dataU5BU5D_t2717562468* get_game_data_3() const { return ___game_data_3; }
	inline Game_dataU5BU5D_t2717562468** get_address_of_game_data_3() { return &___game_data_3; }
	inline void set_game_data_3(Game_dataU5BU5D_t2717562468* value)
	{
		___game_data_3 = value;
		Il2CppCodeGenWriteBarrier(&___game_data_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
