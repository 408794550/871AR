#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_LJR_Responce3156977683.h"

// System.String
struct String_t;
// LJR.Game_data
struct Game_data_t2374638873;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LJR.ResponceDemo1
struct  ResponceDemo1_t1552168153  : public Responce_t3156977683
{
public:
	// System.Int32 LJR.ResponceDemo1::user_id
	int32_t ___user_id_0;
	// System.String LJR.ResponceDemo1::user_name
	String_t* ___user_name_1;
	// System.Single LJR.ResponceDemo1::power_ratio
	float ___power_ratio_2;
	// LJR.Game_data LJR.ResponceDemo1::game_data
	Game_data_t2374638873 * ___game_data_3;

public:
	inline static int32_t get_offset_of_user_id_0() { return static_cast<int32_t>(offsetof(ResponceDemo1_t1552168153, ___user_id_0)); }
	inline int32_t get_user_id_0() const { return ___user_id_0; }
	inline int32_t* get_address_of_user_id_0() { return &___user_id_0; }
	inline void set_user_id_0(int32_t value)
	{
		___user_id_0 = value;
	}

	inline static int32_t get_offset_of_user_name_1() { return static_cast<int32_t>(offsetof(ResponceDemo1_t1552168153, ___user_name_1)); }
	inline String_t* get_user_name_1() const { return ___user_name_1; }
	inline String_t** get_address_of_user_name_1() { return &___user_name_1; }
	inline void set_user_name_1(String_t* value)
	{
		___user_name_1 = value;
		Il2CppCodeGenWriteBarrier(&___user_name_1, value);
	}

	inline static int32_t get_offset_of_power_ratio_2() { return static_cast<int32_t>(offsetof(ResponceDemo1_t1552168153, ___power_ratio_2)); }
	inline float get_power_ratio_2() const { return ___power_ratio_2; }
	inline float* get_address_of_power_ratio_2() { return &___power_ratio_2; }
	inline void set_power_ratio_2(float value)
	{
		___power_ratio_2 = value;
	}

	inline static int32_t get_offset_of_game_data_3() { return static_cast<int32_t>(offsetof(ResponceDemo1_t1552168153, ___game_data_3)); }
	inline Game_data_t2374638873 * get_game_data_3() const { return ___game_data_3; }
	inline Game_data_t2374638873 ** get_address_of_game_data_3() { return &___game_data_3; }
	inline void set_game_data_3(Game_data_t2374638873 * value)
	{
		___game_data_3 = value;
		Il2CppCodeGenWriteBarrier(&___game_data_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
