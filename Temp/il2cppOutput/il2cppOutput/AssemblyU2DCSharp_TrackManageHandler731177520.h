#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t269267574;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackManageHandler
struct  TrackManageHandler_t731177520  : public MonoBehaviour_t1158329972
{
public:
	// System.String TrackManageHandler::targetName
	String_t* ___targetName_2;
	// LitJson.JsonData TrackManageHandler::dataSetList
	JsonData_t269267574 * ___dataSetList_3;

public:
	inline static int32_t get_offset_of_targetName_2() { return static_cast<int32_t>(offsetof(TrackManageHandler_t731177520, ___targetName_2)); }
	inline String_t* get_targetName_2() const { return ___targetName_2; }
	inline String_t** get_address_of_targetName_2() { return &___targetName_2; }
	inline void set_targetName_2(String_t* value)
	{
		___targetName_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetName_2, value);
	}

	inline static int32_t get_offset_of_dataSetList_3() { return static_cast<int32_t>(offsetof(TrackManageHandler_t731177520, ___dataSetList_3)); }
	inline JsonData_t269267574 * get_dataSetList_3() const { return ___dataSetList_3; }
	inline JsonData_t269267574 ** get_address_of_dataSetList_3() { return &___dataSetList_3; }
	inline void set_dataSetList_3(JsonData_t269267574 * value)
	{
		___dataSetList_3 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetList_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
