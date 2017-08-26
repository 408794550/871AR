#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer1654543970.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraSettings
struct  CameraSettings_t3536359094  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean CameraSettings::mVuforiaStarted
	bool ___mVuforiaStarted_2;
	// System.Boolean CameraSettings::mAutofocusEnabled
	bool ___mAutofocusEnabled_3;
	// System.Boolean CameraSettings::mFlashTorchEnabled
	bool ___mFlashTorchEnabled_4;
	// Vuforia.CameraDevice/CameraDirection CameraSettings::mActiveDirection
	int32_t ___mActiveDirection_5;

public:
	inline static int32_t get_offset_of_mVuforiaStarted_2() { return static_cast<int32_t>(offsetof(CameraSettings_t3536359094, ___mVuforiaStarted_2)); }
	inline bool get_mVuforiaStarted_2() const { return ___mVuforiaStarted_2; }
	inline bool* get_address_of_mVuforiaStarted_2() { return &___mVuforiaStarted_2; }
	inline void set_mVuforiaStarted_2(bool value)
	{
		___mVuforiaStarted_2 = value;
	}

	inline static int32_t get_offset_of_mAutofocusEnabled_3() { return static_cast<int32_t>(offsetof(CameraSettings_t3536359094, ___mAutofocusEnabled_3)); }
	inline bool get_mAutofocusEnabled_3() const { return ___mAutofocusEnabled_3; }
	inline bool* get_address_of_mAutofocusEnabled_3() { return &___mAutofocusEnabled_3; }
	inline void set_mAutofocusEnabled_3(bool value)
	{
		___mAutofocusEnabled_3 = value;
	}

	inline static int32_t get_offset_of_mFlashTorchEnabled_4() { return static_cast<int32_t>(offsetof(CameraSettings_t3536359094, ___mFlashTorchEnabled_4)); }
	inline bool get_mFlashTorchEnabled_4() const { return ___mFlashTorchEnabled_4; }
	inline bool* get_address_of_mFlashTorchEnabled_4() { return &___mFlashTorchEnabled_4; }
	inline void set_mFlashTorchEnabled_4(bool value)
	{
		___mFlashTorchEnabled_4 = value;
	}

	inline static int32_t get_offset_of_mActiveDirection_5() { return static_cast<int32_t>(offsetof(CameraSettings_t3536359094, ___mActiveDirection_5)); }
	inline int32_t get_mActiveDirection_5() const { return ___mActiveDirection_5; }
	inline int32_t* get_address_of_mActiveDirection_5() { return &___mActiveDirection_5; }
	inline void set_mActiveDirection_5(int32_t value)
	{
		___mActiveDirection_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
