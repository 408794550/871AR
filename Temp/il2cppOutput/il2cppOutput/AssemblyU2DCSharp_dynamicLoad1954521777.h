#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// dynamicLoad
struct  dynamicLoad_t1954521777  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject dynamicLoad::augmentObject
	GameObject_t1756533147 * ___augmentObject_2;
	// UnityEngine.UI.Text dynamicLoad::logText
	Text_t356221433 * ___logText_3;
	// System.String dynamicLoad::dataSetName
	String_t* ___dataSetName_4;

public:
	inline static int32_t get_offset_of_augmentObject_2() { return static_cast<int32_t>(offsetof(dynamicLoad_t1954521777, ___augmentObject_2)); }
	inline GameObject_t1756533147 * get_augmentObject_2() const { return ___augmentObject_2; }
	inline GameObject_t1756533147 ** get_address_of_augmentObject_2() { return &___augmentObject_2; }
	inline void set_augmentObject_2(GameObject_t1756533147 * value)
	{
		___augmentObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___augmentObject_2, value);
	}

	inline static int32_t get_offset_of_logText_3() { return static_cast<int32_t>(offsetof(dynamicLoad_t1954521777, ___logText_3)); }
	inline Text_t356221433 * get_logText_3() const { return ___logText_3; }
	inline Text_t356221433 ** get_address_of_logText_3() { return &___logText_3; }
	inline void set_logText_3(Text_t356221433 * value)
	{
		___logText_3 = value;
		Il2CppCodeGenWriteBarrier(&___logText_3, value);
	}

	inline static int32_t get_offset_of_dataSetName_4() { return static_cast<int32_t>(offsetof(dynamicLoad_t1954521777, ___dataSetName_4)); }
	inline String_t* get_dataSetName_4() const { return ___dataSetName_4; }
	inline String_t** get_address_of_dataSetName_4() { return &___dataSetName_4; }
	inline void set_dataSetName_4(String_t* value)
	{
		___dataSetName_4 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetName_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
