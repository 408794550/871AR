#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "DOTween_DG_Tweening_UpdateType3357224513.h"

// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// DG.Tweening.Tween
struct Tween_t278478013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.ABSAnimationComponent
struct  ABSAnimationComponent_t2205594551  : public MonoBehaviour_t1158329972
{
public:
	// DG.Tweening.UpdateType DG.Tweening.Core.ABSAnimationComponent::updateType
	int32_t ___updateType_2;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::isSpeedBased
	bool ___isSpeedBased_3;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStart
	bool ___hasOnStart_4;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnPlay
	bool ___hasOnPlay_5;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnUpdate
	bool ___hasOnUpdate_6;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStepComplete
	bool ___hasOnStepComplete_7;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnComplete
	bool ___hasOnComplete_8;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnTweenCreated
	bool ___hasOnTweenCreated_9;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStart
	UnityEvent_t408735097 * ___onStart_10;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onPlay
	UnityEvent_t408735097 * ___onPlay_11;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onUpdate
	UnityEvent_t408735097 * ___onUpdate_12;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStepComplete
	UnityEvent_t408735097 * ___onStepComplete_13;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onComplete
	UnityEvent_t408735097 * ___onComplete_14;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onTweenCreated
	UnityEvent_t408735097 * ___onTweenCreated_15;
	// DG.Tweening.Tween DG.Tweening.Core.ABSAnimationComponent::tween
	Tween_t278478013 * ___tween_16;

public:
	inline static int32_t get_offset_of_updateType_2() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___updateType_2)); }
	inline int32_t get_updateType_2() const { return ___updateType_2; }
	inline int32_t* get_address_of_updateType_2() { return &___updateType_2; }
	inline void set_updateType_2(int32_t value)
	{
		___updateType_2 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_3() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___isSpeedBased_3)); }
	inline bool get_isSpeedBased_3() const { return ___isSpeedBased_3; }
	inline bool* get_address_of_isSpeedBased_3() { return &___isSpeedBased_3; }
	inline void set_isSpeedBased_3(bool value)
	{
		___isSpeedBased_3 = value;
	}

	inline static int32_t get_offset_of_hasOnStart_4() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___hasOnStart_4)); }
	inline bool get_hasOnStart_4() const { return ___hasOnStart_4; }
	inline bool* get_address_of_hasOnStart_4() { return &___hasOnStart_4; }
	inline void set_hasOnStart_4(bool value)
	{
		___hasOnStart_4 = value;
	}

	inline static int32_t get_offset_of_hasOnPlay_5() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___hasOnPlay_5)); }
	inline bool get_hasOnPlay_5() const { return ___hasOnPlay_5; }
	inline bool* get_address_of_hasOnPlay_5() { return &___hasOnPlay_5; }
	inline void set_hasOnPlay_5(bool value)
	{
		___hasOnPlay_5 = value;
	}

	inline static int32_t get_offset_of_hasOnUpdate_6() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___hasOnUpdate_6)); }
	inline bool get_hasOnUpdate_6() const { return ___hasOnUpdate_6; }
	inline bool* get_address_of_hasOnUpdate_6() { return &___hasOnUpdate_6; }
	inline void set_hasOnUpdate_6(bool value)
	{
		___hasOnUpdate_6 = value;
	}

	inline static int32_t get_offset_of_hasOnStepComplete_7() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___hasOnStepComplete_7)); }
	inline bool get_hasOnStepComplete_7() const { return ___hasOnStepComplete_7; }
	inline bool* get_address_of_hasOnStepComplete_7() { return &___hasOnStepComplete_7; }
	inline void set_hasOnStepComplete_7(bool value)
	{
		___hasOnStepComplete_7 = value;
	}

	inline static int32_t get_offset_of_hasOnComplete_8() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___hasOnComplete_8)); }
	inline bool get_hasOnComplete_8() const { return ___hasOnComplete_8; }
	inline bool* get_address_of_hasOnComplete_8() { return &___hasOnComplete_8; }
	inline void set_hasOnComplete_8(bool value)
	{
		___hasOnComplete_8 = value;
	}

	inline static int32_t get_offset_of_hasOnTweenCreated_9() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___hasOnTweenCreated_9)); }
	inline bool get_hasOnTweenCreated_9() const { return ___hasOnTweenCreated_9; }
	inline bool* get_address_of_hasOnTweenCreated_9() { return &___hasOnTweenCreated_9; }
	inline void set_hasOnTweenCreated_9(bool value)
	{
		___hasOnTweenCreated_9 = value;
	}

	inline static int32_t get_offset_of_onStart_10() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___onStart_10)); }
	inline UnityEvent_t408735097 * get_onStart_10() const { return ___onStart_10; }
	inline UnityEvent_t408735097 ** get_address_of_onStart_10() { return &___onStart_10; }
	inline void set_onStart_10(UnityEvent_t408735097 * value)
	{
		___onStart_10 = value;
		Il2CppCodeGenWriteBarrier(&___onStart_10, value);
	}

	inline static int32_t get_offset_of_onPlay_11() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___onPlay_11)); }
	inline UnityEvent_t408735097 * get_onPlay_11() const { return ___onPlay_11; }
	inline UnityEvent_t408735097 ** get_address_of_onPlay_11() { return &___onPlay_11; }
	inline void set_onPlay_11(UnityEvent_t408735097 * value)
	{
		___onPlay_11 = value;
		Il2CppCodeGenWriteBarrier(&___onPlay_11, value);
	}

	inline static int32_t get_offset_of_onUpdate_12() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___onUpdate_12)); }
	inline UnityEvent_t408735097 * get_onUpdate_12() const { return ___onUpdate_12; }
	inline UnityEvent_t408735097 ** get_address_of_onUpdate_12() { return &___onUpdate_12; }
	inline void set_onUpdate_12(UnityEvent_t408735097 * value)
	{
		___onUpdate_12 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdate_12, value);
	}

	inline static int32_t get_offset_of_onStepComplete_13() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___onStepComplete_13)); }
	inline UnityEvent_t408735097 * get_onStepComplete_13() const { return ___onStepComplete_13; }
	inline UnityEvent_t408735097 ** get_address_of_onStepComplete_13() { return &___onStepComplete_13; }
	inline void set_onStepComplete_13(UnityEvent_t408735097 * value)
	{
		___onStepComplete_13 = value;
		Il2CppCodeGenWriteBarrier(&___onStepComplete_13, value);
	}

	inline static int32_t get_offset_of_onComplete_14() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___onComplete_14)); }
	inline UnityEvent_t408735097 * get_onComplete_14() const { return ___onComplete_14; }
	inline UnityEvent_t408735097 ** get_address_of_onComplete_14() { return &___onComplete_14; }
	inline void set_onComplete_14(UnityEvent_t408735097 * value)
	{
		___onComplete_14 = value;
		Il2CppCodeGenWriteBarrier(&___onComplete_14, value);
	}

	inline static int32_t get_offset_of_onTweenCreated_15() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___onTweenCreated_15)); }
	inline UnityEvent_t408735097 * get_onTweenCreated_15() const { return ___onTweenCreated_15; }
	inline UnityEvent_t408735097 ** get_address_of_onTweenCreated_15() { return &___onTweenCreated_15; }
	inline void set_onTweenCreated_15(UnityEvent_t408735097 * value)
	{
		___onTweenCreated_15 = value;
		Il2CppCodeGenWriteBarrier(&___onTweenCreated_15, value);
	}

	inline static int32_t get_offset_of_tween_16() { return static_cast<int32_t>(offsetof(ABSAnimationComponent_t2205594551, ___tween_16)); }
	inline Tween_t278478013 * get_tween_16() const { return ___tween_16; }
	inline Tween_t278478013 ** get_address_of_tween_16() { return &___tween_16; }
	inline void set_tween_16(Tween_t278478013 * value)
	{
		___tween_16 = value;
		Il2CppCodeGenWriteBarrier(&___tween_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
