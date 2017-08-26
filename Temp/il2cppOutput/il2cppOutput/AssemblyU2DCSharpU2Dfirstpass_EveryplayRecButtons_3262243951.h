#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// EveryplayRecButtons/TextureAtlasSrc
struct TextureAtlasSrc_t2048635151;
// EveryplayRecButtons/ButtonTapped
struct ButtonTapped_t3122824015;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EveryplayRecButtons/Button
struct  Button_t3262243951  : public Il2CppObject
{
public:
	// System.Boolean EveryplayRecButtons/Button::enabled
	bool ___enabled_0;
	// UnityEngine.Rect EveryplayRecButtons/Button::screenRect
	Rect_t3681755626  ___screenRect_1;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons/Button::bg
	TextureAtlasSrc_t2048635151 * ___bg_2;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons/Button::title
	TextureAtlasSrc_t2048635151 * ___title_3;
	// EveryplayRecButtons/ButtonTapped EveryplayRecButtons/Button::onTap
	ButtonTapped_t3122824015 * ___onTap_4;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(Button_t3262243951, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_screenRect_1() { return static_cast<int32_t>(offsetof(Button_t3262243951, ___screenRect_1)); }
	inline Rect_t3681755626  get_screenRect_1() const { return ___screenRect_1; }
	inline Rect_t3681755626 * get_address_of_screenRect_1() { return &___screenRect_1; }
	inline void set_screenRect_1(Rect_t3681755626  value)
	{
		___screenRect_1 = value;
	}

	inline static int32_t get_offset_of_bg_2() { return static_cast<int32_t>(offsetof(Button_t3262243951, ___bg_2)); }
	inline TextureAtlasSrc_t2048635151 * get_bg_2() const { return ___bg_2; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_bg_2() { return &___bg_2; }
	inline void set_bg_2(TextureAtlasSrc_t2048635151 * value)
	{
		___bg_2 = value;
		Il2CppCodeGenWriteBarrier(&___bg_2, value);
	}

	inline static int32_t get_offset_of_title_3() { return static_cast<int32_t>(offsetof(Button_t3262243951, ___title_3)); }
	inline TextureAtlasSrc_t2048635151 * get_title_3() const { return ___title_3; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_title_3() { return &___title_3; }
	inline void set_title_3(TextureAtlasSrc_t2048635151 * value)
	{
		___title_3 = value;
		Il2CppCodeGenWriteBarrier(&___title_3, value);
	}

	inline static int32_t get_offset_of_onTap_4() { return static_cast<int32_t>(offsetof(Button_t3262243951, ___onTap_4)); }
	inline ButtonTapped_t3122824015 * get_onTap_4() const { return ___onTap_4; }
	inline ButtonTapped_t3122824015 ** get_address_of_onTap_4() { return &___onTap_4; }
	inline void set_onTap_4(ButtonTapped_t3122824015 * value)
	{
		___onTap_4 = value;
		Il2CppCodeGenWriteBarrier(&___onTap_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
