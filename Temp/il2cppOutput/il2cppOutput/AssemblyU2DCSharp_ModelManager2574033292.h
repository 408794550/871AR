#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// ModelManager
struct ModelManager_t2574033292;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// UnityEngine.Object
struct Object_t1021602117;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelManager
struct  ModelManager_t2574033292  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera ModelManager::offCardCamera
	Camera_t189460977 * ___offCardCamera_3;
	// UnityEngine.GameObject ModelManager::ARCamera
	GameObject_t1756533147 * ___ARCamera_4;
	// System.Boolean ModelManager::isOffCard
	bool ___isOffCard_5;
	// UnityEngine.Transform ModelManager::currentRotationTransform
	Transform_t3275118058 * ___currentRotationTransform_6;
	// UnityEngine.Transform ModelManager::offCardTargetTransform
	Transform_t3275118058 * ___offCardTargetTransform_7;
	// UnityEngine.Transform ModelManager::offCardModelTransform
	Transform_t3275118058 * ___offCardModelTransform_8;
	// System.Int32 ModelManager::modelCount
	int32_t ___modelCount_9;
	// System.Boolean ModelManager::currentModelisMoving
	bool ___currentModelisMoving_10;
	// System.Boolean ModelManager::offCardModelIsMoving
	bool ___offCardModelIsMoving_11;
	// System.Single ModelManager::zAxisDis
	float ___zAxisDis_12;
	// UnityEngine.AudioSource ModelManager::audioSource
	AudioSource_t1135106623 * ___audioSource_13;
	// UnityEngine.GameObject ModelManager::offCardQuad
	GameObject_t1756533147 * ___offCardQuad_14;
	// UnityEngine.Events.UnityAction ModelManager::offCardListener
	UnityAction_t4025899511 * ___offCardListener_15;
	// UnityEngine.Events.UnityAction ModelManager::recoveryModelListener
	UnityAction_t4025899511 * ___recoveryModelListener_16;
	// System.Boolean ModelManager::isFirst
	bool ___isFirst_17;

public:
	inline static int32_t get_offset_of_offCardCamera_3() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___offCardCamera_3)); }
	inline Camera_t189460977 * get_offCardCamera_3() const { return ___offCardCamera_3; }
	inline Camera_t189460977 ** get_address_of_offCardCamera_3() { return &___offCardCamera_3; }
	inline void set_offCardCamera_3(Camera_t189460977 * value)
	{
		___offCardCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___offCardCamera_3, value);
	}

	inline static int32_t get_offset_of_ARCamera_4() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___ARCamera_4)); }
	inline GameObject_t1756533147 * get_ARCamera_4() const { return ___ARCamera_4; }
	inline GameObject_t1756533147 ** get_address_of_ARCamera_4() { return &___ARCamera_4; }
	inline void set_ARCamera_4(GameObject_t1756533147 * value)
	{
		___ARCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___ARCamera_4, value);
	}

	inline static int32_t get_offset_of_isOffCard_5() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___isOffCard_5)); }
	inline bool get_isOffCard_5() const { return ___isOffCard_5; }
	inline bool* get_address_of_isOffCard_5() { return &___isOffCard_5; }
	inline void set_isOffCard_5(bool value)
	{
		___isOffCard_5 = value;
	}

	inline static int32_t get_offset_of_currentRotationTransform_6() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___currentRotationTransform_6)); }
	inline Transform_t3275118058 * get_currentRotationTransform_6() const { return ___currentRotationTransform_6; }
	inline Transform_t3275118058 ** get_address_of_currentRotationTransform_6() { return &___currentRotationTransform_6; }
	inline void set_currentRotationTransform_6(Transform_t3275118058 * value)
	{
		___currentRotationTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentRotationTransform_6, value);
	}

	inline static int32_t get_offset_of_offCardTargetTransform_7() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___offCardTargetTransform_7)); }
	inline Transform_t3275118058 * get_offCardTargetTransform_7() const { return ___offCardTargetTransform_7; }
	inline Transform_t3275118058 ** get_address_of_offCardTargetTransform_7() { return &___offCardTargetTransform_7; }
	inline void set_offCardTargetTransform_7(Transform_t3275118058 * value)
	{
		___offCardTargetTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___offCardTargetTransform_7, value);
	}

	inline static int32_t get_offset_of_offCardModelTransform_8() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___offCardModelTransform_8)); }
	inline Transform_t3275118058 * get_offCardModelTransform_8() const { return ___offCardModelTransform_8; }
	inline Transform_t3275118058 ** get_address_of_offCardModelTransform_8() { return &___offCardModelTransform_8; }
	inline void set_offCardModelTransform_8(Transform_t3275118058 * value)
	{
		___offCardModelTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___offCardModelTransform_8, value);
	}

	inline static int32_t get_offset_of_modelCount_9() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___modelCount_9)); }
	inline int32_t get_modelCount_9() const { return ___modelCount_9; }
	inline int32_t* get_address_of_modelCount_9() { return &___modelCount_9; }
	inline void set_modelCount_9(int32_t value)
	{
		___modelCount_9 = value;
	}

	inline static int32_t get_offset_of_currentModelisMoving_10() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___currentModelisMoving_10)); }
	inline bool get_currentModelisMoving_10() const { return ___currentModelisMoving_10; }
	inline bool* get_address_of_currentModelisMoving_10() { return &___currentModelisMoving_10; }
	inline void set_currentModelisMoving_10(bool value)
	{
		___currentModelisMoving_10 = value;
	}

	inline static int32_t get_offset_of_offCardModelIsMoving_11() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___offCardModelIsMoving_11)); }
	inline bool get_offCardModelIsMoving_11() const { return ___offCardModelIsMoving_11; }
	inline bool* get_address_of_offCardModelIsMoving_11() { return &___offCardModelIsMoving_11; }
	inline void set_offCardModelIsMoving_11(bool value)
	{
		___offCardModelIsMoving_11 = value;
	}

	inline static int32_t get_offset_of_zAxisDis_12() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___zAxisDis_12)); }
	inline float get_zAxisDis_12() const { return ___zAxisDis_12; }
	inline float* get_address_of_zAxisDis_12() { return &___zAxisDis_12; }
	inline void set_zAxisDis_12(float value)
	{
		___zAxisDis_12 = value;
	}

	inline static int32_t get_offset_of_audioSource_13() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___audioSource_13)); }
	inline AudioSource_t1135106623 * get_audioSource_13() const { return ___audioSource_13; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_13() { return &___audioSource_13; }
	inline void set_audioSource_13(AudioSource_t1135106623 * value)
	{
		___audioSource_13 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_13, value);
	}

	inline static int32_t get_offset_of_offCardQuad_14() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___offCardQuad_14)); }
	inline GameObject_t1756533147 * get_offCardQuad_14() const { return ___offCardQuad_14; }
	inline GameObject_t1756533147 ** get_address_of_offCardQuad_14() { return &___offCardQuad_14; }
	inline void set_offCardQuad_14(GameObject_t1756533147 * value)
	{
		___offCardQuad_14 = value;
		Il2CppCodeGenWriteBarrier(&___offCardQuad_14, value);
	}

	inline static int32_t get_offset_of_offCardListener_15() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___offCardListener_15)); }
	inline UnityAction_t4025899511 * get_offCardListener_15() const { return ___offCardListener_15; }
	inline UnityAction_t4025899511 ** get_address_of_offCardListener_15() { return &___offCardListener_15; }
	inline void set_offCardListener_15(UnityAction_t4025899511 * value)
	{
		___offCardListener_15 = value;
		Il2CppCodeGenWriteBarrier(&___offCardListener_15, value);
	}

	inline static int32_t get_offset_of_recoveryModelListener_16() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___recoveryModelListener_16)); }
	inline UnityAction_t4025899511 * get_recoveryModelListener_16() const { return ___recoveryModelListener_16; }
	inline UnityAction_t4025899511 ** get_address_of_recoveryModelListener_16() { return &___recoveryModelListener_16; }
	inline void set_recoveryModelListener_16(UnityAction_t4025899511 * value)
	{
		___recoveryModelListener_16 = value;
		Il2CppCodeGenWriteBarrier(&___recoveryModelListener_16, value);
	}

	inline static int32_t get_offset_of_isFirst_17() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292, ___isFirst_17)); }
	inline bool get_isFirst_17() const { return ___isFirst_17; }
	inline bool* get_address_of_isFirst_17() { return &___isFirst_17; }
	inline void set_isFirst_17(bool value)
	{
		___isFirst_17 = value;
	}
};

struct ModelManager_t2574033292_StaticFields
{
public:
	// ModelManager ModelManager::_instance
	ModelManager_t2574033292 * ____instance_2;
	// UnityEngine.Object ModelManager::lockObj
	Object_t1021602117 * ___lockObj_18;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292_StaticFields, ____instance_2)); }
	inline ModelManager_t2574033292 * get__instance_2() const { return ____instance_2; }
	inline ModelManager_t2574033292 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(ModelManager_t2574033292 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of_lockObj_18() { return static_cast<int32_t>(offsetof(ModelManager_t2574033292_StaticFields, ___lockObj_18)); }
	inline Object_t1021602117 * get_lockObj_18() const { return ___lockObj_18; }
	inline Object_t1021602117 ** get_address_of_lockObj_18() { return &___lockObj_18; }
	inline void set_lockObj_18(Object_t1021602117 * value)
	{
		___lockObj_18 = value;
		Il2CppCodeGenWriteBarrier(&___lockObj_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
