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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LJR.Game_data
struct  Game_data_t2374638873  : public Il2CppObject
{
public:
	// System.Int32 LJR.Game_data::game_version
	int32_t ___game_version_0;
	// System.Int32[] LJR.Game_data::parameter
	Int32U5BU5D_t3030399641* ___parameter_1;

public:
	inline static int32_t get_offset_of_game_version_0() { return static_cast<int32_t>(offsetof(Game_data_t2374638873, ___game_version_0)); }
	inline int32_t get_game_version_0() const { return ___game_version_0; }
	inline int32_t* get_address_of_game_version_0() { return &___game_version_0; }
	inline void set_game_version_0(int32_t value)
	{
		___game_version_0 = value;
	}

	inline static int32_t get_offset_of_parameter_1() { return static_cast<int32_t>(offsetof(Game_data_t2374638873, ___parameter_1)); }
	inline Int32U5BU5D_t3030399641* get_parameter_1() const { return ___parameter_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_parameter_1() { return &___parameter_1; }
	inline void set_parameter_1(Int32U5BU5D_t3030399641* value)
	{
		___parameter_1 = value;
		Il2CppCodeGenWriteBarrier(&___parameter_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
