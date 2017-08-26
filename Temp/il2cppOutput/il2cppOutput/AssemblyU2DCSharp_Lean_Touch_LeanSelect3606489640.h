#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanSelect_SelectType2074988034.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanSelect_SearchType3831610778.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanSelect_ReselectTyp399732767.h"

// Lean.Touch.LeanSelectable
struct LeanSelectable_t3692576450;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSelect
struct  LeanSelect_t3606489640  : public MonoBehaviour_t1158329972
{
public:
	// Lean.Touch.LeanSelect/SelectType Lean.Touch.LeanSelect::SelectUsing
	int32_t ___SelectUsing_2;
	// UnityEngine.LayerMask Lean.Touch.LeanSelect::LayerMask
	LayerMask_t3188175821  ___LayerMask_3;
	// Lean.Touch.LeanSelect/SearchType Lean.Touch.LeanSelect::Search
	int32_t ___Search_4;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanSelect::CurrentSelectable
	LeanSelectable_t3692576450 * ___CurrentSelectable_5;
	// Lean.Touch.LeanSelect/ReselectType Lean.Touch.LeanSelect::Reselect
	int32_t ___Reselect_6;
	// System.Boolean Lean.Touch.LeanSelect::AutoDeselect
	bool ___AutoDeselect_7;

public:
	inline static int32_t get_offset_of_SelectUsing_2() { return static_cast<int32_t>(offsetof(LeanSelect_t3606489640, ___SelectUsing_2)); }
	inline int32_t get_SelectUsing_2() const { return ___SelectUsing_2; }
	inline int32_t* get_address_of_SelectUsing_2() { return &___SelectUsing_2; }
	inline void set_SelectUsing_2(int32_t value)
	{
		___SelectUsing_2 = value;
	}

	inline static int32_t get_offset_of_LayerMask_3() { return static_cast<int32_t>(offsetof(LeanSelect_t3606489640, ___LayerMask_3)); }
	inline LayerMask_t3188175821  get_LayerMask_3() const { return ___LayerMask_3; }
	inline LayerMask_t3188175821 * get_address_of_LayerMask_3() { return &___LayerMask_3; }
	inline void set_LayerMask_3(LayerMask_t3188175821  value)
	{
		___LayerMask_3 = value;
	}

	inline static int32_t get_offset_of_Search_4() { return static_cast<int32_t>(offsetof(LeanSelect_t3606489640, ___Search_4)); }
	inline int32_t get_Search_4() const { return ___Search_4; }
	inline int32_t* get_address_of_Search_4() { return &___Search_4; }
	inline void set_Search_4(int32_t value)
	{
		___Search_4 = value;
	}

	inline static int32_t get_offset_of_CurrentSelectable_5() { return static_cast<int32_t>(offsetof(LeanSelect_t3606489640, ___CurrentSelectable_5)); }
	inline LeanSelectable_t3692576450 * get_CurrentSelectable_5() const { return ___CurrentSelectable_5; }
	inline LeanSelectable_t3692576450 ** get_address_of_CurrentSelectable_5() { return &___CurrentSelectable_5; }
	inline void set_CurrentSelectable_5(LeanSelectable_t3692576450 * value)
	{
		___CurrentSelectable_5 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentSelectable_5, value);
	}

	inline static int32_t get_offset_of_Reselect_6() { return static_cast<int32_t>(offsetof(LeanSelect_t3606489640, ___Reselect_6)); }
	inline int32_t get_Reselect_6() const { return ___Reselect_6; }
	inline int32_t* get_address_of_Reselect_6() { return &___Reselect_6; }
	inline void set_Reselect_6(int32_t value)
	{
		___Reselect_6 = value;
	}

	inline static int32_t get_offset_of_AutoDeselect_7() { return static_cast<int32_t>(offsetof(LeanSelect_t3606489640, ___AutoDeselect_7)); }
	inline bool get_AutoDeselect_7() const { return ___AutoDeselect_7; }
	inline bool* get_address_of_AutoDeselect_7() { return &___AutoDeselect_7; }
	inline void set_AutoDeselect_7(bool value)
	{
		___AutoDeselect_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
