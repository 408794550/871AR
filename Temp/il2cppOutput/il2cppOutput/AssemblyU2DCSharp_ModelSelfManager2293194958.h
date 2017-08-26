#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ModelOffCardHeightEnum1627800870.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Animator
struct Animator_t69676727;
// System.Collections.Generic.List`1<UnityEngine.AudioSource>
struct List_1_t504227755;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t2763752173;
// ParticleTransformInfo
struct ParticleTransformInfo_t1135273862;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelSelfManager
struct  ModelSelfManager_t2293194958  : public MonoBehaviour_t1158329972
{
public:
	// ModelOffCardHeightEnum ModelSelfManager::modelOnScreenHeight
	int32_t ___modelOnScreenHeight_2;
	// UnityEngine.Animator ModelSelfManager::animator
	Animator_t69676727 * ___animator_3;
	// System.Collections.Generic.List`1<UnityEngine.AudioSource> ModelSelfManager::foundAudioSourceList
	List_1_t504227755 * ___foundAudioSourceList_4;
	// System.Collections.Generic.List`1<UnityEngine.AudioSource> ModelSelfManager::tapAudioSourceList
	List_1_t504227755 * ___tapAudioSourceList_5;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> ModelSelfManager::foundPSList
	List_1_t2763752173 * ___foundPSList_6;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> ModelSelfManager::tapPSList
	List_1_t2763752173 * ___tapPSList_7;
	// UnityEngine.Vector3 ModelSelfManager::touchPosition
	Vector3_t2243707580  ___touchPosition_8;
	// UnityEngine.Vector3 ModelSelfManager::startPos
	Vector3_t2243707580  ___startPos_9;
	// System.Single ModelSelfManager::baseLerpTime
	float ___baseLerpTime_10;
	// System.Single ModelSelfManager::lerpTime
	float ___lerpTime_11;
	// System.Single ModelSelfManager::currentLerpTime
	float ___currentLerpTime_12;
	// System.Boolean ModelSelfManager::keyHit
	bool ___keyHit_13;
	// System.Boolean ModelSelfManager::isFirst
	bool ___isFirst_14;
	// UnityEngine.Vector3 ModelSelfManager::modelOriginLocalPos
	Vector3_t2243707580  ___modelOriginLocalPos_15;
	// UnityEngine.Quaternion ModelSelfManager::modelOriginLocalQua
	Quaternion_t4030073918  ___modelOriginLocalQua_16;
	// UnityEngine.Vector3 ModelSelfManager::modelOriginScale
	Vector3_t2243707580  ___modelOriginScale_17;
	// ParticleTransformInfo ModelSelfManager::particleTransformInfo
	ParticleTransformInfo_t1135273862 * ___particleTransformInfo_18;
	// UnityEngine.Events.UnityAction ModelSelfManager::foundListener
	UnityAction_t4025899511 * ___foundListener_19;

public:
	inline static int32_t get_offset_of_modelOnScreenHeight_2() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___modelOnScreenHeight_2)); }
	inline int32_t get_modelOnScreenHeight_2() const { return ___modelOnScreenHeight_2; }
	inline int32_t* get_address_of_modelOnScreenHeight_2() { return &___modelOnScreenHeight_2; }
	inline void set_modelOnScreenHeight_2(int32_t value)
	{
		___modelOnScreenHeight_2 = value;
	}

	inline static int32_t get_offset_of_animator_3() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___animator_3)); }
	inline Animator_t69676727 * get_animator_3() const { return ___animator_3; }
	inline Animator_t69676727 ** get_address_of_animator_3() { return &___animator_3; }
	inline void set_animator_3(Animator_t69676727 * value)
	{
		___animator_3 = value;
		Il2CppCodeGenWriteBarrier(&___animator_3, value);
	}

	inline static int32_t get_offset_of_foundAudioSourceList_4() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___foundAudioSourceList_4)); }
	inline List_1_t504227755 * get_foundAudioSourceList_4() const { return ___foundAudioSourceList_4; }
	inline List_1_t504227755 ** get_address_of_foundAudioSourceList_4() { return &___foundAudioSourceList_4; }
	inline void set_foundAudioSourceList_4(List_1_t504227755 * value)
	{
		___foundAudioSourceList_4 = value;
		Il2CppCodeGenWriteBarrier(&___foundAudioSourceList_4, value);
	}

	inline static int32_t get_offset_of_tapAudioSourceList_5() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___tapAudioSourceList_5)); }
	inline List_1_t504227755 * get_tapAudioSourceList_5() const { return ___tapAudioSourceList_5; }
	inline List_1_t504227755 ** get_address_of_tapAudioSourceList_5() { return &___tapAudioSourceList_5; }
	inline void set_tapAudioSourceList_5(List_1_t504227755 * value)
	{
		___tapAudioSourceList_5 = value;
		Il2CppCodeGenWriteBarrier(&___tapAudioSourceList_5, value);
	}

	inline static int32_t get_offset_of_foundPSList_6() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___foundPSList_6)); }
	inline List_1_t2763752173 * get_foundPSList_6() const { return ___foundPSList_6; }
	inline List_1_t2763752173 ** get_address_of_foundPSList_6() { return &___foundPSList_6; }
	inline void set_foundPSList_6(List_1_t2763752173 * value)
	{
		___foundPSList_6 = value;
		Il2CppCodeGenWriteBarrier(&___foundPSList_6, value);
	}

	inline static int32_t get_offset_of_tapPSList_7() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___tapPSList_7)); }
	inline List_1_t2763752173 * get_tapPSList_7() const { return ___tapPSList_7; }
	inline List_1_t2763752173 ** get_address_of_tapPSList_7() { return &___tapPSList_7; }
	inline void set_tapPSList_7(List_1_t2763752173 * value)
	{
		___tapPSList_7 = value;
		Il2CppCodeGenWriteBarrier(&___tapPSList_7, value);
	}

	inline static int32_t get_offset_of_touchPosition_8() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___touchPosition_8)); }
	inline Vector3_t2243707580  get_touchPosition_8() const { return ___touchPosition_8; }
	inline Vector3_t2243707580 * get_address_of_touchPosition_8() { return &___touchPosition_8; }
	inline void set_touchPosition_8(Vector3_t2243707580  value)
	{
		___touchPosition_8 = value;
	}

	inline static int32_t get_offset_of_startPos_9() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___startPos_9)); }
	inline Vector3_t2243707580  get_startPos_9() const { return ___startPos_9; }
	inline Vector3_t2243707580 * get_address_of_startPos_9() { return &___startPos_9; }
	inline void set_startPos_9(Vector3_t2243707580  value)
	{
		___startPos_9 = value;
	}

	inline static int32_t get_offset_of_baseLerpTime_10() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___baseLerpTime_10)); }
	inline float get_baseLerpTime_10() const { return ___baseLerpTime_10; }
	inline float* get_address_of_baseLerpTime_10() { return &___baseLerpTime_10; }
	inline void set_baseLerpTime_10(float value)
	{
		___baseLerpTime_10 = value;
	}

	inline static int32_t get_offset_of_lerpTime_11() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___lerpTime_11)); }
	inline float get_lerpTime_11() const { return ___lerpTime_11; }
	inline float* get_address_of_lerpTime_11() { return &___lerpTime_11; }
	inline void set_lerpTime_11(float value)
	{
		___lerpTime_11 = value;
	}

	inline static int32_t get_offset_of_currentLerpTime_12() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___currentLerpTime_12)); }
	inline float get_currentLerpTime_12() const { return ___currentLerpTime_12; }
	inline float* get_address_of_currentLerpTime_12() { return &___currentLerpTime_12; }
	inline void set_currentLerpTime_12(float value)
	{
		___currentLerpTime_12 = value;
	}

	inline static int32_t get_offset_of_keyHit_13() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___keyHit_13)); }
	inline bool get_keyHit_13() const { return ___keyHit_13; }
	inline bool* get_address_of_keyHit_13() { return &___keyHit_13; }
	inline void set_keyHit_13(bool value)
	{
		___keyHit_13 = value;
	}

	inline static int32_t get_offset_of_isFirst_14() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___isFirst_14)); }
	inline bool get_isFirst_14() const { return ___isFirst_14; }
	inline bool* get_address_of_isFirst_14() { return &___isFirst_14; }
	inline void set_isFirst_14(bool value)
	{
		___isFirst_14 = value;
	}

	inline static int32_t get_offset_of_modelOriginLocalPos_15() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___modelOriginLocalPos_15)); }
	inline Vector3_t2243707580  get_modelOriginLocalPos_15() const { return ___modelOriginLocalPos_15; }
	inline Vector3_t2243707580 * get_address_of_modelOriginLocalPos_15() { return &___modelOriginLocalPos_15; }
	inline void set_modelOriginLocalPos_15(Vector3_t2243707580  value)
	{
		___modelOriginLocalPos_15 = value;
	}

	inline static int32_t get_offset_of_modelOriginLocalQua_16() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___modelOriginLocalQua_16)); }
	inline Quaternion_t4030073918  get_modelOriginLocalQua_16() const { return ___modelOriginLocalQua_16; }
	inline Quaternion_t4030073918 * get_address_of_modelOriginLocalQua_16() { return &___modelOriginLocalQua_16; }
	inline void set_modelOriginLocalQua_16(Quaternion_t4030073918  value)
	{
		___modelOriginLocalQua_16 = value;
	}

	inline static int32_t get_offset_of_modelOriginScale_17() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___modelOriginScale_17)); }
	inline Vector3_t2243707580  get_modelOriginScale_17() const { return ___modelOriginScale_17; }
	inline Vector3_t2243707580 * get_address_of_modelOriginScale_17() { return &___modelOriginScale_17; }
	inline void set_modelOriginScale_17(Vector3_t2243707580  value)
	{
		___modelOriginScale_17 = value;
	}

	inline static int32_t get_offset_of_particleTransformInfo_18() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___particleTransformInfo_18)); }
	inline ParticleTransformInfo_t1135273862 * get_particleTransformInfo_18() const { return ___particleTransformInfo_18; }
	inline ParticleTransformInfo_t1135273862 ** get_address_of_particleTransformInfo_18() { return &___particleTransformInfo_18; }
	inline void set_particleTransformInfo_18(ParticleTransformInfo_t1135273862 * value)
	{
		___particleTransformInfo_18 = value;
		Il2CppCodeGenWriteBarrier(&___particleTransformInfo_18, value);
	}

	inline static int32_t get_offset_of_foundListener_19() { return static_cast<int32_t>(offsetof(ModelSelfManager_t2293194958, ___foundListener_19)); }
	inline UnityAction_t4025899511 * get_foundListener_19() const { return ___foundListener_19; }
	inline UnityAction_t4025899511 ** get_address_of_foundListener_19() { return &___foundListener_19; }
	inline void set_foundListener_19(UnityAction_t4025899511 * value)
	{
		___foundListener_19 = value;
		Il2CppCodeGenWriteBarrier(&___foundListener_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
