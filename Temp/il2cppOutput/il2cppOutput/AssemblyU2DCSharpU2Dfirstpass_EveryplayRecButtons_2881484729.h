#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_EveryplayRecButtons_3262243951.h"

// EveryplayRecButtons/TextureAtlasSrc
struct TextureAtlasSrc_t2048635151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EveryplayRecButtons/ToggleButton
struct  ToggleButton_t2881484729  : public Button_t3262243951
{
public:
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons/ToggleButton::toggleOn
	TextureAtlasSrc_t2048635151 * ___toggleOn_5;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons/ToggleButton::toggleOff
	TextureAtlasSrc_t2048635151 * ___toggleOff_6;
	// System.Boolean EveryplayRecButtons/ToggleButton::toggled
	bool ___toggled_7;

public:
	inline static int32_t get_offset_of_toggleOn_5() { return static_cast<int32_t>(offsetof(ToggleButton_t2881484729, ___toggleOn_5)); }
	inline TextureAtlasSrc_t2048635151 * get_toggleOn_5() const { return ___toggleOn_5; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_toggleOn_5() { return &___toggleOn_5; }
	inline void set_toggleOn_5(TextureAtlasSrc_t2048635151 * value)
	{
		___toggleOn_5 = value;
		Il2CppCodeGenWriteBarrier(&___toggleOn_5, value);
	}

	inline static int32_t get_offset_of_toggleOff_6() { return static_cast<int32_t>(offsetof(ToggleButton_t2881484729, ___toggleOff_6)); }
	inline TextureAtlasSrc_t2048635151 * get_toggleOff_6() const { return ___toggleOff_6; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_toggleOff_6() { return &___toggleOff_6; }
	inline void set_toggleOff_6(TextureAtlasSrc_t2048635151 * value)
	{
		___toggleOff_6 = value;
		Il2CppCodeGenWriteBarrier(&___toggleOff_6, value);
	}

	inline static int32_t get_offset_of_toggled_7() { return static_cast<int32_t>(offsetof(ToggleButton_t2881484729, ___toggled_7)); }
	inline bool get_toggled_7() const { return ___toggled_7; }
	inline bool* get_address_of_toggled_7() { return &___toggled_7; }
	inline void set_toggled_7(bool value)
	{
		___toggled_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
