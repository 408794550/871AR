#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "DOTweenPro_DG_Tweening_Core_VisualManagerPreset4087939440.h"
#include "DOTweenPro_DG_Tweening_Core_OnEnableBehaviour285142911.h"
#include "DOTweenPro_DG_Tweening_Core_OnDisableBehaviour125315118.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.DOTweenVisualManager
struct  DOTweenVisualManager_t2945673405  : public MonoBehaviour_t1158329972
{
public:
	// DG.Tweening.Core.VisualManagerPreset DG.Tweening.DOTweenVisualManager::preset
	int32_t ___preset_2;
	// DG.Tweening.Core.OnEnableBehaviour DG.Tweening.DOTweenVisualManager::onEnableBehaviour
	int32_t ___onEnableBehaviour_3;
	// DG.Tweening.Core.OnDisableBehaviour DG.Tweening.DOTweenVisualManager::onDisableBehaviour
	int32_t ___onDisableBehaviour_4;
	// System.Boolean DG.Tweening.DOTweenVisualManager::_requiresRestartFromSpawnPoint
	bool ____requiresRestartFromSpawnPoint_5;

public:
	inline static int32_t get_offset_of_preset_2() { return static_cast<int32_t>(offsetof(DOTweenVisualManager_t2945673405, ___preset_2)); }
	inline int32_t get_preset_2() const { return ___preset_2; }
	inline int32_t* get_address_of_preset_2() { return &___preset_2; }
	inline void set_preset_2(int32_t value)
	{
		___preset_2 = value;
	}

	inline static int32_t get_offset_of_onEnableBehaviour_3() { return static_cast<int32_t>(offsetof(DOTweenVisualManager_t2945673405, ___onEnableBehaviour_3)); }
	inline int32_t get_onEnableBehaviour_3() const { return ___onEnableBehaviour_3; }
	inline int32_t* get_address_of_onEnableBehaviour_3() { return &___onEnableBehaviour_3; }
	inline void set_onEnableBehaviour_3(int32_t value)
	{
		___onEnableBehaviour_3 = value;
	}

	inline static int32_t get_offset_of_onDisableBehaviour_4() { return static_cast<int32_t>(offsetof(DOTweenVisualManager_t2945673405, ___onDisableBehaviour_4)); }
	inline int32_t get_onDisableBehaviour_4() const { return ___onDisableBehaviour_4; }
	inline int32_t* get_address_of_onDisableBehaviour_4() { return &___onDisableBehaviour_4; }
	inline void set_onDisableBehaviour_4(int32_t value)
	{
		___onDisableBehaviour_4 = value;
	}

	inline static int32_t get_offset_of__requiresRestartFromSpawnPoint_5() { return static_cast<int32_t>(offsetof(DOTweenVisualManager_t2945673405, ____requiresRestartFromSpawnPoint_5)); }
	inline bool get__requiresRestartFromSpawnPoint_5() const { return ____requiresRestartFromSpawnPoint_5; }
	inline bool* get_address_of__requiresRestartFromSpawnPoint_5() { return &____requiresRestartFromSpawnPoint_5; }
	inline void set__requiresRestartFromSpawnPoint_5(bool value)
	{
		____requiresRestartFromSpawnPoint_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
