#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"

// System.Collections.Generic.List`1<Lean.Touch.LeanTouch>
struct List_1_t391202589;
// System.Collections.Generic.List`1<Lean.Touch.LeanFinger>
struct List_1_t3740150945;
// System.Action`1<Lean.Touch.LeanFinger>
struct Action_1_t4172829195;
// System.Action`1<System.Collections.Generic.List`1<Lean.Touch.LeanFinger>>
struct Action_1_t3541950327;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3685274804;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;
// Lean.Touch.LeanPressSelect
struct LeanPressSelect_t4275113321;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanTouch
struct  LeanTouch_t1022081457  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Lean.Touch.LeanTouch::TapThreshold
	float ___TapThreshold_14;
	// System.Single Lean.Touch.LeanTouch::SwipeThreshold
	float ___SwipeThreshold_15;
	// System.Single Lean.Touch.LeanTouch::HeldThreshold
	float ___HeldThreshold_16;
	// System.Int32 Lean.Touch.LeanTouch::ReferenceDpi
	int32_t ___ReferenceDpi_17;
	// UnityEngine.LayerMask Lean.Touch.LeanTouch::GuiLayers
	LayerMask_t3188175821  ___GuiLayers_18;
	// System.Boolean Lean.Touch.LeanTouch::RecordFingers
	bool ___RecordFingers_19;
	// System.Single Lean.Touch.LeanTouch::RecordThreshold
	float ___RecordThreshold_20;
	// System.Single Lean.Touch.LeanTouch::RecordLimit
	float ___RecordLimit_21;
	// System.Boolean Lean.Touch.LeanTouch::SimulateMultiFingers
	bool ___SimulateMultiFingers_22;
	// UnityEngine.KeyCode Lean.Touch.LeanTouch::PinchTwistKey
	int32_t ___PinchTwistKey_23;
	// UnityEngine.KeyCode Lean.Touch.LeanTouch::MultiDragKey
	int32_t ___MultiDragKey_24;
	// UnityEngine.Texture2D Lean.Touch.LeanTouch::FingerTexture
	Texture2D_t3542995729 * ___FingerTexture_25;
	// Lean.Touch.LeanPressSelect Lean.Touch.LeanTouch::leanPressSelect
	LeanPressSelect_t4275113321 * ___leanPressSelect_31;

public:
	inline static int32_t get_offset_of_TapThreshold_14() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___TapThreshold_14)); }
	inline float get_TapThreshold_14() const { return ___TapThreshold_14; }
	inline float* get_address_of_TapThreshold_14() { return &___TapThreshold_14; }
	inline void set_TapThreshold_14(float value)
	{
		___TapThreshold_14 = value;
	}

	inline static int32_t get_offset_of_SwipeThreshold_15() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___SwipeThreshold_15)); }
	inline float get_SwipeThreshold_15() const { return ___SwipeThreshold_15; }
	inline float* get_address_of_SwipeThreshold_15() { return &___SwipeThreshold_15; }
	inline void set_SwipeThreshold_15(float value)
	{
		___SwipeThreshold_15 = value;
	}

	inline static int32_t get_offset_of_HeldThreshold_16() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___HeldThreshold_16)); }
	inline float get_HeldThreshold_16() const { return ___HeldThreshold_16; }
	inline float* get_address_of_HeldThreshold_16() { return &___HeldThreshold_16; }
	inline void set_HeldThreshold_16(float value)
	{
		___HeldThreshold_16 = value;
	}

	inline static int32_t get_offset_of_ReferenceDpi_17() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___ReferenceDpi_17)); }
	inline int32_t get_ReferenceDpi_17() const { return ___ReferenceDpi_17; }
	inline int32_t* get_address_of_ReferenceDpi_17() { return &___ReferenceDpi_17; }
	inline void set_ReferenceDpi_17(int32_t value)
	{
		___ReferenceDpi_17 = value;
	}

	inline static int32_t get_offset_of_GuiLayers_18() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___GuiLayers_18)); }
	inline LayerMask_t3188175821  get_GuiLayers_18() const { return ___GuiLayers_18; }
	inline LayerMask_t3188175821 * get_address_of_GuiLayers_18() { return &___GuiLayers_18; }
	inline void set_GuiLayers_18(LayerMask_t3188175821  value)
	{
		___GuiLayers_18 = value;
	}

	inline static int32_t get_offset_of_RecordFingers_19() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___RecordFingers_19)); }
	inline bool get_RecordFingers_19() const { return ___RecordFingers_19; }
	inline bool* get_address_of_RecordFingers_19() { return &___RecordFingers_19; }
	inline void set_RecordFingers_19(bool value)
	{
		___RecordFingers_19 = value;
	}

	inline static int32_t get_offset_of_RecordThreshold_20() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___RecordThreshold_20)); }
	inline float get_RecordThreshold_20() const { return ___RecordThreshold_20; }
	inline float* get_address_of_RecordThreshold_20() { return &___RecordThreshold_20; }
	inline void set_RecordThreshold_20(float value)
	{
		___RecordThreshold_20 = value;
	}

	inline static int32_t get_offset_of_RecordLimit_21() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___RecordLimit_21)); }
	inline float get_RecordLimit_21() const { return ___RecordLimit_21; }
	inline float* get_address_of_RecordLimit_21() { return &___RecordLimit_21; }
	inline void set_RecordLimit_21(float value)
	{
		___RecordLimit_21 = value;
	}

	inline static int32_t get_offset_of_SimulateMultiFingers_22() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___SimulateMultiFingers_22)); }
	inline bool get_SimulateMultiFingers_22() const { return ___SimulateMultiFingers_22; }
	inline bool* get_address_of_SimulateMultiFingers_22() { return &___SimulateMultiFingers_22; }
	inline void set_SimulateMultiFingers_22(bool value)
	{
		___SimulateMultiFingers_22 = value;
	}

	inline static int32_t get_offset_of_PinchTwistKey_23() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___PinchTwistKey_23)); }
	inline int32_t get_PinchTwistKey_23() const { return ___PinchTwistKey_23; }
	inline int32_t* get_address_of_PinchTwistKey_23() { return &___PinchTwistKey_23; }
	inline void set_PinchTwistKey_23(int32_t value)
	{
		___PinchTwistKey_23 = value;
	}

	inline static int32_t get_offset_of_MultiDragKey_24() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___MultiDragKey_24)); }
	inline int32_t get_MultiDragKey_24() const { return ___MultiDragKey_24; }
	inline int32_t* get_address_of_MultiDragKey_24() { return &___MultiDragKey_24; }
	inline void set_MultiDragKey_24(int32_t value)
	{
		___MultiDragKey_24 = value;
	}

	inline static int32_t get_offset_of_FingerTexture_25() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___FingerTexture_25)); }
	inline Texture2D_t3542995729 * get_FingerTexture_25() const { return ___FingerTexture_25; }
	inline Texture2D_t3542995729 ** get_address_of_FingerTexture_25() { return &___FingerTexture_25; }
	inline void set_FingerTexture_25(Texture2D_t3542995729 * value)
	{
		___FingerTexture_25 = value;
		Il2CppCodeGenWriteBarrier(&___FingerTexture_25, value);
	}

	inline static int32_t get_offset_of_leanPressSelect_31() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457, ___leanPressSelect_31)); }
	inline LeanPressSelect_t4275113321 * get_leanPressSelect_31() const { return ___leanPressSelect_31; }
	inline LeanPressSelect_t4275113321 ** get_address_of_leanPressSelect_31() { return &___leanPressSelect_31; }
	inline void set_leanPressSelect_31(LeanPressSelect_t4275113321 * value)
	{
		___leanPressSelect_31 = value;
		Il2CppCodeGenWriteBarrier(&___leanPressSelect_31, value);
	}
};

struct LeanTouch_t1022081457_StaticFields
{
public:
	// System.Collections.Generic.List`1<Lean.Touch.LeanTouch> Lean.Touch.LeanTouch::Instances
	List_1_t391202589 * ___Instances_2;
	// System.Collections.Generic.List`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::Fingers
	List_1_t3740150945 * ___Fingers_3;
	// System.Collections.Generic.List`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::InactiveFingers
	List_1_t3740150945 * ___InactiveFingers_4;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::OnFingerDown
	Action_1_t4172829195 * ___OnFingerDown_5;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::OnFingerSet
	Action_1_t4172829195 * ___OnFingerSet_6;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::OnFingerUp
	Action_1_t4172829195 * ___OnFingerUp_7;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::OnFingerTap
	Action_1_t4172829195 * ___OnFingerTap_8;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::OnFingerSwipe
	Action_1_t4172829195 * ___OnFingerSwipe_9;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::OnFingerHeldDown
	Action_1_t4172829195 * ___OnFingerHeldDown_10;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::OnFingerHeldSet
	Action_1_t4172829195 * ___OnFingerHeldSet_11;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::OnFingerHeldUp
	Action_1_t4172829195 * ___OnFingerHeldUp_12;
	// System.Action`1<System.Collections.Generic.List`1<Lean.Touch.LeanFinger>> Lean.Touch.LeanTouch::OnGesture
	Action_1_t3541950327 * ___OnGesture_13;
	// System.Int32 Lean.Touch.LeanTouch::highestMouseButton
	int32_t ___highestMouseButton_26;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> Lean.Touch.LeanTouch::tempRaycastResults
	List_1_t3685274804 * ___tempRaycastResults_27;
	// System.Collections.Generic.List`1<Lean.Touch.LeanFinger> Lean.Touch.LeanTouch::filteredFingers
	List_1_t3740150945 * ___filteredFingers_28;
	// UnityEngine.EventSystems.PointerEventData Lean.Touch.LeanTouch::tempPointerEventData
	PointerEventData_t1599784723 * ___tempPointerEventData_29;
	// UnityEngine.EventSystems.EventSystem Lean.Touch.LeanTouch::tempEventSystem
	EventSystem_t3466835263 * ___tempEventSystem_30;

public:
	inline static int32_t get_offset_of_Instances_2() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___Instances_2)); }
	inline List_1_t391202589 * get_Instances_2() const { return ___Instances_2; }
	inline List_1_t391202589 ** get_address_of_Instances_2() { return &___Instances_2; }
	inline void set_Instances_2(List_1_t391202589 * value)
	{
		___Instances_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instances_2, value);
	}

	inline static int32_t get_offset_of_Fingers_3() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___Fingers_3)); }
	inline List_1_t3740150945 * get_Fingers_3() const { return ___Fingers_3; }
	inline List_1_t3740150945 ** get_address_of_Fingers_3() { return &___Fingers_3; }
	inline void set_Fingers_3(List_1_t3740150945 * value)
	{
		___Fingers_3 = value;
		Il2CppCodeGenWriteBarrier(&___Fingers_3, value);
	}

	inline static int32_t get_offset_of_InactiveFingers_4() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___InactiveFingers_4)); }
	inline List_1_t3740150945 * get_InactiveFingers_4() const { return ___InactiveFingers_4; }
	inline List_1_t3740150945 ** get_address_of_InactiveFingers_4() { return &___InactiveFingers_4; }
	inline void set_InactiveFingers_4(List_1_t3740150945 * value)
	{
		___InactiveFingers_4 = value;
		Il2CppCodeGenWriteBarrier(&___InactiveFingers_4, value);
	}

	inline static int32_t get_offset_of_OnFingerDown_5() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___OnFingerDown_5)); }
	inline Action_1_t4172829195 * get_OnFingerDown_5() const { return ___OnFingerDown_5; }
	inline Action_1_t4172829195 ** get_address_of_OnFingerDown_5() { return &___OnFingerDown_5; }
	inline void set_OnFingerDown_5(Action_1_t4172829195 * value)
	{
		___OnFingerDown_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerDown_5, value);
	}

	inline static int32_t get_offset_of_OnFingerSet_6() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___OnFingerSet_6)); }
	inline Action_1_t4172829195 * get_OnFingerSet_6() const { return ___OnFingerSet_6; }
	inline Action_1_t4172829195 ** get_address_of_OnFingerSet_6() { return &___OnFingerSet_6; }
	inline void set_OnFingerSet_6(Action_1_t4172829195 * value)
	{
		___OnFingerSet_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerSet_6, value);
	}

	inline static int32_t get_offset_of_OnFingerUp_7() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___OnFingerUp_7)); }
	inline Action_1_t4172829195 * get_OnFingerUp_7() const { return ___OnFingerUp_7; }
	inline Action_1_t4172829195 ** get_address_of_OnFingerUp_7() { return &___OnFingerUp_7; }
	inline void set_OnFingerUp_7(Action_1_t4172829195 * value)
	{
		___OnFingerUp_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerUp_7, value);
	}

	inline static int32_t get_offset_of_OnFingerTap_8() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___OnFingerTap_8)); }
	inline Action_1_t4172829195 * get_OnFingerTap_8() const { return ___OnFingerTap_8; }
	inline Action_1_t4172829195 ** get_address_of_OnFingerTap_8() { return &___OnFingerTap_8; }
	inline void set_OnFingerTap_8(Action_1_t4172829195 * value)
	{
		___OnFingerTap_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerTap_8, value);
	}

	inline static int32_t get_offset_of_OnFingerSwipe_9() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___OnFingerSwipe_9)); }
	inline Action_1_t4172829195 * get_OnFingerSwipe_9() const { return ___OnFingerSwipe_9; }
	inline Action_1_t4172829195 ** get_address_of_OnFingerSwipe_9() { return &___OnFingerSwipe_9; }
	inline void set_OnFingerSwipe_9(Action_1_t4172829195 * value)
	{
		___OnFingerSwipe_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerSwipe_9, value);
	}

	inline static int32_t get_offset_of_OnFingerHeldDown_10() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___OnFingerHeldDown_10)); }
	inline Action_1_t4172829195 * get_OnFingerHeldDown_10() const { return ___OnFingerHeldDown_10; }
	inline Action_1_t4172829195 ** get_address_of_OnFingerHeldDown_10() { return &___OnFingerHeldDown_10; }
	inline void set_OnFingerHeldDown_10(Action_1_t4172829195 * value)
	{
		___OnFingerHeldDown_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerHeldDown_10, value);
	}

	inline static int32_t get_offset_of_OnFingerHeldSet_11() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___OnFingerHeldSet_11)); }
	inline Action_1_t4172829195 * get_OnFingerHeldSet_11() const { return ___OnFingerHeldSet_11; }
	inline Action_1_t4172829195 ** get_address_of_OnFingerHeldSet_11() { return &___OnFingerHeldSet_11; }
	inline void set_OnFingerHeldSet_11(Action_1_t4172829195 * value)
	{
		___OnFingerHeldSet_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerHeldSet_11, value);
	}

	inline static int32_t get_offset_of_OnFingerHeldUp_12() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___OnFingerHeldUp_12)); }
	inline Action_1_t4172829195 * get_OnFingerHeldUp_12() const { return ___OnFingerHeldUp_12; }
	inline Action_1_t4172829195 ** get_address_of_OnFingerHeldUp_12() { return &___OnFingerHeldUp_12; }
	inline void set_OnFingerHeldUp_12(Action_1_t4172829195 * value)
	{
		___OnFingerHeldUp_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnFingerHeldUp_12, value);
	}

	inline static int32_t get_offset_of_OnGesture_13() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___OnGesture_13)); }
	inline Action_1_t3541950327 * get_OnGesture_13() const { return ___OnGesture_13; }
	inline Action_1_t3541950327 ** get_address_of_OnGesture_13() { return &___OnGesture_13; }
	inline void set_OnGesture_13(Action_1_t3541950327 * value)
	{
		___OnGesture_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnGesture_13, value);
	}

	inline static int32_t get_offset_of_highestMouseButton_26() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___highestMouseButton_26)); }
	inline int32_t get_highestMouseButton_26() const { return ___highestMouseButton_26; }
	inline int32_t* get_address_of_highestMouseButton_26() { return &___highestMouseButton_26; }
	inline void set_highestMouseButton_26(int32_t value)
	{
		___highestMouseButton_26 = value;
	}

	inline static int32_t get_offset_of_tempRaycastResults_27() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___tempRaycastResults_27)); }
	inline List_1_t3685274804 * get_tempRaycastResults_27() const { return ___tempRaycastResults_27; }
	inline List_1_t3685274804 ** get_address_of_tempRaycastResults_27() { return &___tempRaycastResults_27; }
	inline void set_tempRaycastResults_27(List_1_t3685274804 * value)
	{
		___tempRaycastResults_27 = value;
		Il2CppCodeGenWriteBarrier(&___tempRaycastResults_27, value);
	}

	inline static int32_t get_offset_of_filteredFingers_28() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___filteredFingers_28)); }
	inline List_1_t3740150945 * get_filteredFingers_28() const { return ___filteredFingers_28; }
	inline List_1_t3740150945 ** get_address_of_filteredFingers_28() { return &___filteredFingers_28; }
	inline void set_filteredFingers_28(List_1_t3740150945 * value)
	{
		___filteredFingers_28 = value;
		Il2CppCodeGenWriteBarrier(&___filteredFingers_28, value);
	}

	inline static int32_t get_offset_of_tempPointerEventData_29() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___tempPointerEventData_29)); }
	inline PointerEventData_t1599784723 * get_tempPointerEventData_29() const { return ___tempPointerEventData_29; }
	inline PointerEventData_t1599784723 ** get_address_of_tempPointerEventData_29() { return &___tempPointerEventData_29; }
	inline void set_tempPointerEventData_29(PointerEventData_t1599784723 * value)
	{
		___tempPointerEventData_29 = value;
		Il2CppCodeGenWriteBarrier(&___tempPointerEventData_29, value);
	}

	inline static int32_t get_offset_of_tempEventSystem_30() { return static_cast<int32_t>(offsetof(LeanTouch_t1022081457_StaticFields, ___tempEventSystem_30)); }
	inline EventSystem_t3466835263 * get_tempEventSystem_30() const { return ___tempEventSystem_30; }
	inline EventSystem_t3466835263 ** get_address_of_tempEventSystem_30() { return &___tempEventSystem_30; }
	inline void set_tempEventSystem_30(EventSystem_t3466835263 * value)
	{
		___tempEventSystem_30 = value;
		Il2CppCodeGenWriteBarrier(&___tempEventSystem_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
