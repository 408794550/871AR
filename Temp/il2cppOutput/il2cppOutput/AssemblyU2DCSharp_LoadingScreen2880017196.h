#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.RawImage
struct RawImage_t2749640213;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingScreen
struct  LoadingScreen_t2880017196  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean LoadingScreen::mChangeLevel
	bool ___mChangeLevel_2;
	// UnityEngine.UI.RawImage LoadingScreen::mUISpinner
	RawImage_t2749640213 * ___mUISpinner_3;

public:
	inline static int32_t get_offset_of_mChangeLevel_2() { return static_cast<int32_t>(offsetof(LoadingScreen_t2880017196, ___mChangeLevel_2)); }
	inline bool get_mChangeLevel_2() const { return ___mChangeLevel_2; }
	inline bool* get_address_of_mChangeLevel_2() { return &___mChangeLevel_2; }
	inline void set_mChangeLevel_2(bool value)
	{
		___mChangeLevel_2 = value;
	}

	inline static int32_t get_offset_of_mUISpinner_3() { return static_cast<int32_t>(offsetof(LoadingScreen_t2880017196, ___mUISpinner_3)); }
	inline RawImage_t2749640213 * get_mUISpinner_3() const { return ___mUISpinner_3; }
	inline RawImage_t2749640213 ** get_address_of_mUISpinner_3() { return &___mUISpinner_3; }
	inline void set_mUISpinner_3(RawImage_t2749640213 * value)
	{
		___mUISpinner_3 = value;
		Il2CppCodeGenWriteBarrier(&___mUISpinner_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
