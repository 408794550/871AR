#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// OffCardModelManager
struct OffCardModelManager_t1897304313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OffCardModelManager
struct  OffCardModelManager_t1897304313  : public Il2CppObject
{
public:

public:
};

struct OffCardModelManager_t1897304313_StaticFields
{
public:
	// UnityEngine.Transform OffCardModelManager::offCardModelTransform
	Transform_t3275118058 * ___offCardModelTransform_0;
	// OffCardModelManager OffCardModelManager::_instance
	OffCardModelManager_t1897304313 * ____instance_1;

public:
	inline static int32_t get_offset_of_offCardModelTransform_0() { return static_cast<int32_t>(offsetof(OffCardModelManager_t1897304313_StaticFields, ___offCardModelTransform_0)); }
	inline Transform_t3275118058 * get_offCardModelTransform_0() const { return ___offCardModelTransform_0; }
	inline Transform_t3275118058 ** get_address_of_offCardModelTransform_0() { return &___offCardModelTransform_0; }
	inline void set_offCardModelTransform_0(Transform_t3275118058 * value)
	{
		___offCardModelTransform_0 = value;
		Il2CppCodeGenWriteBarrier(&___offCardModelTransform_0, value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(OffCardModelManager_t1897304313_StaticFields, ____instance_1)); }
	inline OffCardModelManager_t1897304313 * get__instance_1() const { return ____instance_1; }
	inline OffCardModelManager_t1897304313 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(OffCardModelManager_t1897304313 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier(&____instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
