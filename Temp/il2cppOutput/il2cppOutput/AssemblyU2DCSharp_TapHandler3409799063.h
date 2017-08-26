#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapHandler
struct  TapHandler_t3409799063  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image TapHandler::image
	Image_t2042527209 * ___image_2;
	// System.Boolean TapHandler::IgnoreGuiFingers
	bool ___IgnoreGuiFingers_3;
	// System.Int32 TapHandler::RequiredTapCount
	int32_t ___RequiredTapCount_4;
	// System.Int32 TapHandler::RequiredTapInterval
	int32_t ___RequiredTapInterval_5;

public:
	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(TapHandler_t3409799063, ___image_2)); }
	inline Image_t2042527209 * get_image_2() const { return ___image_2; }
	inline Image_t2042527209 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(Image_t2042527209 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier(&___image_2, value);
	}

	inline static int32_t get_offset_of_IgnoreGuiFingers_3() { return static_cast<int32_t>(offsetof(TapHandler_t3409799063, ___IgnoreGuiFingers_3)); }
	inline bool get_IgnoreGuiFingers_3() const { return ___IgnoreGuiFingers_3; }
	inline bool* get_address_of_IgnoreGuiFingers_3() { return &___IgnoreGuiFingers_3; }
	inline void set_IgnoreGuiFingers_3(bool value)
	{
		___IgnoreGuiFingers_3 = value;
	}

	inline static int32_t get_offset_of_RequiredTapCount_4() { return static_cast<int32_t>(offsetof(TapHandler_t3409799063, ___RequiredTapCount_4)); }
	inline int32_t get_RequiredTapCount_4() const { return ___RequiredTapCount_4; }
	inline int32_t* get_address_of_RequiredTapCount_4() { return &___RequiredTapCount_4; }
	inline void set_RequiredTapCount_4(int32_t value)
	{
		___RequiredTapCount_4 = value;
	}

	inline static int32_t get_offset_of_RequiredTapInterval_5() { return static_cast<int32_t>(offsetof(TapHandler_t3409799063, ___RequiredTapInterval_5)); }
	inline int32_t get_RequiredTapInterval_5() const { return ___RequiredTapInterval_5; }
	inline int32_t* get_address_of_RequiredTapInterval_5() { return &___RequiredTapInterval_5; }
	inline void set_RequiredTapInterval_5(int32_t value)
	{
		___RequiredTapInterval_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
