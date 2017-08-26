#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct Dictionary_2_t2323514359;
// EventManager
struct EventManager_t2792515701;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventManager
struct  EventManager_t2792515701  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent> EventManager::eventDictionary
	Dictionary_2_t2323514359 * ___eventDictionary_2;

public:
	inline static int32_t get_offset_of_eventDictionary_2() { return static_cast<int32_t>(offsetof(EventManager_t2792515701, ___eventDictionary_2)); }
	inline Dictionary_2_t2323514359 * get_eventDictionary_2() const { return ___eventDictionary_2; }
	inline Dictionary_2_t2323514359 ** get_address_of_eventDictionary_2() { return &___eventDictionary_2; }
	inline void set_eventDictionary_2(Dictionary_2_t2323514359 * value)
	{
		___eventDictionary_2 = value;
		Il2CppCodeGenWriteBarrier(&___eventDictionary_2, value);
	}
};

struct EventManager_t2792515701_StaticFields
{
public:
	// EventManager EventManager::eventManager
	EventManager_t2792515701 * ___eventManager_3;

public:
	inline static int32_t get_offset_of_eventManager_3() { return static_cast<int32_t>(offsetof(EventManager_t2792515701_StaticFields, ___eventManager_3)); }
	inline EventManager_t2792515701 * get_eventManager_3() const { return ___eventManager_3; }
	inline EventManager_t2792515701 ** get_address_of_eventManager_3() { return &___eventManager_3; }
	inline void set_eventManager_3(EventManager_t2792515701 * value)
	{
		___eventManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___eventManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
