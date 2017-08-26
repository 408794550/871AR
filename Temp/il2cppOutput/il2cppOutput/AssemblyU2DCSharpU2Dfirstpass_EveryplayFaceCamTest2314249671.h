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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EveryplayFaceCamTest
struct  EveryplayFaceCamTest_t2314249671  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EveryplayFaceCamTest::recordingPermissionGranted
	bool ___recordingPermissionGranted_2;
	// UnityEngine.GameObject EveryplayFaceCamTest::debugMessage
	GameObject_t1756533147 * ___debugMessage_3;

public:
	inline static int32_t get_offset_of_recordingPermissionGranted_2() { return static_cast<int32_t>(offsetof(EveryplayFaceCamTest_t2314249671, ___recordingPermissionGranted_2)); }
	inline bool get_recordingPermissionGranted_2() const { return ___recordingPermissionGranted_2; }
	inline bool* get_address_of_recordingPermissionGranted_2() { return &___recordingPermissionGranted_2; }
	inline void set_recordingPermissionGranted_2(bool value)
	{
		___recordingPermissionGranted_2 = value;
	}

	inline static int32_t get_offset_of_debugMessage_3() { return static_cast<int32_t>(offsetof(EveryplayFaceCamTest_t2314249671, ___debugMessage_3)); }
	inline GameObject_t1756533147 * get_debugMessage_3() const { return ___debugMessage_3; }
	inline GameObject_t1756533147 ** get_address_of_debugMessage_3() { return &___debugMessage_3; }
	inline void set_debugMessage_3(GameObject_t1756533147 * value)
	{
		___debugMessage_3 = value;
		Il2CppCodeGenWriteBarrier(&___debugMessage_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
