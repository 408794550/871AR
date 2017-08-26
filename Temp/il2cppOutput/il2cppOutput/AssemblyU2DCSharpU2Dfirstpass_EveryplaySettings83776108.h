#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EveryplaySettings
struct  EveryplaySettings_t83776108  : public ScriptableObject_t1975622470
{
public:
	// System.String EveryplaySettings::clientId
	String_t* ___clientId_2;
	// System.String EveryplaySettings::clientSecret
	String_t* ___clientSecret_3;
	// System.String EveryplaySettings::redirectURI
	String_t* ___redirectURI_4;
	// System.Boolean EveryplaySettings::iosSupportEnabled
	bool ___iosSupportEnabled_5;
	// System.Boolean EveryplaySettings::tvosSupportEnabled
	bool ___tvosSupportEnabled_6;
	// System.Boolean EveryplaySettings::androidSupportEnabled
	bool ___androidSupportEnabled_7;
	// System.Boolean EveryplaySettings::standaloneSupportEnabled
	bool ___standaloneSupportEnabled_8;
	// System.Boolean EveryplaySettings::testButtonsEnabled
	bool ___testButtonsEnabled_9;
	// System.Boolean EveryplaySettings::earlyInitializerEnabled
	bool ___earlyInitializerEnabled_10;

public:
	inline static int32_t get_offset_of_clientId_2() { return static_cast<int32_t>(offsetof(EveryplaySettings_t83776108, ___clientId_2)); }
	inline String_t* get_clientId_2() const { return ___clientId_2; }
	inline String_t** get_address_of_clientId_2() { return &___clientId_2; }
	inline void set_clientId_2(String_t* value)
	{
		___clientId_2 = value;
		Il2CppCodeGenWriteBarrier(&___clientId_2, value);
	}

	inline static int32_t get_offset_of_clientSecret_3() { return static_cast<int32_t>(offsetof(EveryplaySettings_t83776108, ___clientSecret_3)); }
	inline String_t* get_clientSecret_3() const { return ___clientSecret_3; }
	inline String_t** get_address_of_clientSecret_3() { return &___clientSecret_3; }
	inline void set_clientSecret_3(String_t* value)
	{
		___clientSecret_3 = value;
		Il2CppCodeGenWriteBarrier(&___clientSecret_3, value);
	}

	inline static int32_t get_offset_of_redirectURI_4() { return static_cast<int32_t>(offsetof(EveryplaySettings_t83776108, ___redirectURI_4)); }
	inline String_t* get_redirectURI_4() const { return ___redirectURI_4; }
	inline String_t** get_address_of_redirectURI_4() { return &___redirectURI_4; }
	inline void set_redirectURI_4(String_t* value)
	{
		___redirectURI_4 = value;
		Il2CppCodeGenWriteBarrier(&___redirectURI_4, value);
	}

	inline static int32_t get_offset_of_iosSupportEnabled_5() { return static_cast<int32_t>(offsetof(EveryplaySettings_t83776108, ___iosSupportEnabled_5)); }
	inline bool get_iosSupportEnabled_5() const { return ___iosSupportEnabled_5; }
	inline bool* get_address_of_iosSupportEnabled_5() { return &___iosSupportEnabled_5; }
	inline void set_iosSupportEnabled_5(bool value)
	{
		___iosSupportEnabled_5 = value;
	}

	inline static int32_t get_offset_of_tvosSupportEnabled_6() { return static_cast<int32_t>(offsetof(EveryplaySettings_t83776108, ___tvosSupportEnabled_6)); }
	inline bool get_tvosSupportEnabled_6() const { return ___tvosSupportEnabled_6; }
	inline bool* get_address_of_tvosSupportEnabled_6() { return &___tvosSupportEnabled_6; }
	inline void set_tvosSupportEnabled_6(bool value)
	{
		___tvosSupportEnabled_6 = value;
	}

	inline static int32_t get_offset_of_androidSupportEnabled_7() { return static_cast<int32_t>(offsetof(EveryplaySettings_t83776108, ___androidSupportEnabled_7)); }
	inline bool get_androidSupportEnabled_7() const { return ___androidSupportEnabled_7; }
	inline bool* get_address_of_androidSupportEnabled_7() { return &___androidSupportEnabled_7; }
	inline void set_androidSupportEnabled_7(bool value)
	{
		___androidSupportEnabled_7 = value;
	}

	inline static int32_t get_offset_of_standaloneSupportEnabled_8() { return static_cast<int32_t>(offsetof(EveryplaySettings_t83776108, ___standaloneSupportEnabled_8)); }
	inline bool get_standaloneSupportEnabled_8() const { return ___standaloneSupportEnabled_8; }
	inline bool* get_address_of_standaloneSupportEnabled_8() { return &___standaloneSupportEnabled_8; }
	inline void set_standaloneSupportEnabled_8(bool value)
	{
		___standaloneSupportEnabled_8 = value;
	}

	inline static int32_t get_offset_of_testButtonsEnabled_9() { return static_cast<int32_t>(offsetof(EveryplaySettings_t83776108, ___testButtonsEnabled_9)); }
	inline bool get_testButtonsEnabled_9() const { return ___testButtonsEnabled_9; }
	inline bool* get_address_of_testButtonsEnabled_9() { return &___testButtonsEnabled_9; }
	inline void set_testButtonsEnabled_9(bool value)
	{
		___testButtonsEnabled_9 = value;
	}

	inline static int32_t get_offset_of_earlyInitializerEnabled_10() { return static_cast<int32_t>(offsetof(EveryplaySettings_t83776108, ___earlyInitializerEnabled_10)); }
	inline bool get_earlyInitializerEnabled_10() const { return ___earlyInitializerEnabled_10; }
	inline bool* get_address_of_earlyInitializerEnabled_10() { return &___earlyInitializerEnabled_10; }
	inline void set_earlyInitializerEnabled_10(bool value)
	{
		___earlyInitializerEnabled_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
