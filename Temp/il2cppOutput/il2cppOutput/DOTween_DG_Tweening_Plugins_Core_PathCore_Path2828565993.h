#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "DOTween_DG_Tweening_PathType2815988833.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Nullable_1_gen506773895.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
struct CatmullRomDecoder_t3014762178;
// DG.Tweening.Plugins.Core.PathCore.LinearDecoder
struct LinearDecoder_t2073524639;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t246481150;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t2828565993;
// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
struct ABSPathDecoder_t3294469411;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Core.PathCore.Path
struct  Path_t2828565993  : public Il2CppObject
{
public:
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::wpLengths
	SingleU5BU5D_t577127397* ___wpLengths_2;
	// DG.Tweening.PathType DG.Tweening.Plugins.Core.PathCore.Path::type
	int32_t ___type_3;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisionsXSegment
	int32_t ___subdivisionsXSegment_4;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisions
	int32_t ___subdivisions_5;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::wps
	Vector3U5BU5D_t1172311765* ___wps_6;
	// DG.Tweening.Plugins.Core.PathCore.ControlPoint[] DG.Tweening.Plugins.Core.PathCore.Path::controlPoints
	ControlPointU5BU5D_t246481150* ___controlPoints_7;
	// System.Single DG.Tweening.Plugins.Core.PathCore.Path::length
	float ___length_8;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::isFinalized
	bool ___isFinalized_9;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::timesTable
	SingleU5BU5D_t577127397* ___timesTable_10;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::lengthsTable
	SingleU5BU5D_t577127397* ___lengthsTable_11;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::linearWPIndex
	int32_t ___linearWPIndex_12;
	// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.Core.PathCore.Path::_incrementalClone
	Path_t2828565993 * ____incrementalClone_13;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::_incrementalIndex
	int32_t ____incrementalIndex_14;
	// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder DG.Tweening.Plugins.Core.PathCore.Path::_decoder
	ABSPathDecoder_t3294469411 * ____decoder_15;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::_changed
	bool ____changed_16;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::nonLinearDrawWps
	Vector3U5BU5D_t1172311765* ___nonLinearDrawWps_17;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::targetPosition
	Vector3_t2243707580  ___targetPosition_18;
	// System.Nullable`1<UnityEngine.Vector3> DG.Tweening.Plugins.Core.PathCore.Path::lookAtPosition
	Nullable_1_t506773895  ___lookAtPosition_19;
	// UnityEngine.Color DG.Tweening.Plugins.Core.PathCore.Path::gizmoColor
	Color_t2020392075  ___gizmoColor_20;

public:
	inline static int32_t get_offset_of_wpLengths_2() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___wpLengths_2)); }
	inline SingleU5BU5D_t577127397* get_wpLengths_2() const { return ___wpLengths_2; }
	inline SingleU5BU5D_t577127397** get_address_of_wpLengths_2() { return &___wpLengths_2; }
	inline void set_wpLengths_2(SingleU5BU5D_t577127397* value)
	{
		___wpLengths_2 = value;
		Il2CppCodeGenWriteBarrier(&___wpLengths_2, value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_subdivisionsXSegment_4() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___subdivisionsXSegment_4)); }
	inline int32_t get_subdivisionsXSegment_4() const { return ___subdivisionsXSegment_4; }
	inline int32_t* get_address_of_subdivisionsXSegment_4() { return &___subdivisionsXSegment_4; }
	inline void set_subdivisionsXSegment_4(int32_t value)
	{
		___subdivisionsXSegment_4 = value;
	}

	inline static int32_t get_offset_of_subdivisions_5() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___subdivisions_5)); }
	inline int32_t get_subdivisions_5() const { return ___subdivisions_5; }
	inline int32_t* get_address_of_subdivisions_5() { return &___subdivisions_5; }
	inline void set_subdivisions_5(int32_t value)
	{
		___subdivisions_5 = value;
	}

	inline static int32_t get_offset_of_wps_6() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___wps_6)); }
	inline Vector3U5BU5D_t1172311765* get_wps_6() const { return ___wps_6; }
	inline Vector3U5BU5D_t1172311765** get_address_of_wps_6() { return &___wps_6; }
	inline void set_wps_6(Vector3U5BU5D_t1172311765* value)
	{
		___wps_6 = value;
		Il2CppCodeGenWriteBarrier(&___wps_6, value);
	}

	inline static int32_t get_offset_of_controlPoints_7() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___controlPoints_7)); }
	inline ControlPointU5BU5D_t246481150* get_controlPoints_7() const { return ___controlPoints_7; }
	inline ControlPointU5BU5D_t246481150** get_address_of_controlPoints_7() { return &___controlPoints_7; }
	inline void set_controlPoints_7(ControlPointU5BU5D_t246481150* value)
	{
		___controlPoints_7 = value;
		Il2CppCodeGenWriteBarrier(&___controlPoints_7, value);
	}

	inline static int32_t get_offset_of_length_8() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___length_8)); }
	inline float get_length_8() const { return ___length_8; }
	inline float* get_address_of_length_8() { return &___length_8; }
	inline void set_length_8(float value)
	{
		___length_8 = value;
	}

	inline static int32_t get_offset_of_isFinalized_9() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___isFinalized_9)); }
	inline bool get_isFinalized_9() const { return ___isFinalized_9; }
	inline bool* get_address_of_isFinalized_9() { return &___isFinalized_9; }
	inline void set_isFinalized_9(bool value)
	{
		___isFinalized_9 = value;
	}

	inline static int32_t get_offset_of_timesTable_10() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___timesTable_10)); }
	inline SingleU5BU5D_t577127397* get_timesTable_10() const { return ___timesTable_10; }
	inline SingleU5BU5D_t577127397** get_address_of_timesTable_10() { return &___timesTable_10; }
	inline void set_timesTable_10(SingleU5BU5D_t577127397* value)
	{
		___timesTable_10 = value;
		Il2CppCodeGenWriteBarrier(&___timesTable_10, value);
	}

	inline static int32_t get_offset_of_lengthsTable_11() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___lengthsTable_11)); }
	inline SingleU5BU5D_t577127397* get_lengthsTable_11() const { return ___lengthsTable_11; }
	inline SingleU5BU5D_t577127397** get_address_of_lengthsTable_11() { return &___lengthsTable_11; }
	inline void set_lengthsTable_11(SingleU5BU5D_t577127397* value)
	{
		___lengthsTable_11 = value;
		Il2CppCodeGenWriteBarrier(&___lengthsTable_11, value);
	}

	inline static int32_t get_offset_of_linearWPIndex_12() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___linearWPIndex_12)); }
	inline int32_t get_linearWPIndex_12() const { return ___linearWPIndex_12; }
	inline int32_t* get_address_of_linearWPIndex_12() { return &___linearWPIndex_12; }
	inline void set_linearWPIndex_12(int32_t value)
	{
		___linearWPIndex_12 = value;
	}

	inline static int32_t get_offset_of__incrementalClone_13() { return static_cast<int32_t>(offsetof(Path_t2828565993, ____incrementalClone_13)); }
	inline Path_t2828565993 * get__incrementalClone_13() const { return ____incrementalClone_13; }
	inline Path_t2828565993 ** get_address_of__incrementalClone_13() { return &____incrementalClone_13; }
	inline void set__incrementalClone_13(Path_t2828565993 * value)
	{
		____incrementalClone_13 = value;
		Il2CppCodeGenWriteBarrier(&____incrementalClone_13, value);
	}

	inline static int32_t get_offset_of__incrementalIndex_14() { return static_cast<int32_t>(offsetof(Path_t2828565993, ____incrementalIndex_14)); }
	inline int32_t get__incrementalIndex_14() const { return ____incrementalIndex_14; }
	inline int32_t* get_address_of__incrementalIndex_14() { return &____incrementalIndex_14; }
	inline void set__incrementalIndex_14(int32_t value)
	{
		____incrementalIndex_14 = value;
	}

	inline static int32_t get_offset_of__decoder_15() { return static_cast<int32_t>(offsetof(Path_t2828565993, ____decoder_15)); }
	inline ABSPathDecoder_t3294469411 * get__decoder_15() const { return ____decoder_15; }
	inline ABSPathDecoder_t3294469411 ** get_address_of__decoder_15() { return &____decoder_15; }
	inline void set__decoder_15(ABSPathDecoder_t3294469411 * value)
	{
		____decoder_15 = value;
		Il2CppCodeGenWriteBarrier(&____decoder_15, value);
	}

	inline static int32_t get_offset_of__changed_16() { return static_cast<int32_t>(offsetof(Path_t2828565993, ____changed_16)); }
	inline bool get__changed_16() const { return ____changed_16; }
	inline bool* get_address_of__changed_16() { return &____changed_16; }
	inline void set__changed_16(bool value)
	{
		____changed_16 = value;
	}

	inline static int32_t get_offset_of_nonLinearDrawWps_17() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___nonLinearDrawWps_17)); }
	inline Vector3U5BU5D_t1172311765* get_nonLinearDrawWps_17() const { return ___nonLinearDrawWps_17; }
	inline Vector3U5BU5D_t1172311765** get_address_of_nonLinearDrawWps_17() { return &___nonLinearDrawWps_17; }
	inline void set_nonLinearDrawWps_17(Vector3U5BU5D_t1172311765* value)
	{
		___nonLinearDrawWps_17 = value;
		Il2CppCodeGenWriteBarrier(&___nonLinearDrawWps_17, value);
	}

	inline static int32_t get_offset_of_targetPosition_18() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___targetPosition_18)); }
	inline Vector3_t2243707580  get_targetPosition_18() const { return ___targetPosition_18; }
	inline Vector3_t2243707580 * get_address_of_targetPosition_18() { return &___targetPosition_18; }
	inline void set_targetPosition_18(Vector3_t2243707580  value)
	{
		___targetPosition_18 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_19() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___lookAtPosition_19)); }
	inline Nullable_1_t506773895  get_lookAtPosition_19() const { return ___lookAtPosition_19; }
	inline Nullable_1_t506773895 * get_address_of_lookAtPosition_19() { return &___lookAtPosition_19; }
	inline void set_lookAtPosition_19(Nullable_1_t506773895  value)
	{
		___lookAtPosition_19 = value;
	}

	inline static int32_t get_offset_of_gizmoColor_20() { return static_cast<int32_t>(offsetof(Path_t2828565993, ___gizmoColor_20)); }
	inline Color_t2020392075  get_gizmoColor_20() const { return ___gizmoColor_20; }
	inline Color_t2020392075 * get_address_of_gizmoColor_20() { return &___gizmoColor_20; }
	inline void set_gizmoColor_20(Color_t2020392075  value)
	{
		___gizmoColor_20 = value;
	}
};

struct Path_t2828565993_StaticFields
{
public:
	// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder DG.Tweening.Plugins.Core.PathCore.Path::_catmullRomDecoder
	CatmullRomDecoder_t3014762178 * ____catmullRomDecoder_0;
	// DG.Tweening.Plugins.Core.PathCore.LinearDecoder DG.Tweening.Plugins.Core.PathCore.Path::_linearDecoder
	LinearDecoder_t2073524639 * ____linearDecoder_1;

public:
	inline static int32_t get_offset_of__catmullRomDecoder_0() { return static_cast<int32_t>(offsetof(Path_t2828565993_StaticFields, ____catmullRomDecoder_0)); }
	inline CatmullRomDecoder_t3014762178 * get__catmullRomDecoder_0() const { return ____catmullRomDecoder_0; }
	inline CatmullRomDecoder_t3014762178 ** get_address_of__catmullRomDecoder_0() { return &____catmullRomDecoder_0; }
	inline void set__catmullRomDecoder_0(CatmullRomDecoder_t3014762178 * value)
	{
		____catmullRomDecoder_0 = value;
		Il2CppCodeGenWriteBarrier(&____catmullRomDecoder_0, value);
	}

	inline static int32_t get_offset_of__linearDecoder_1() { return static_cast<int32_t>(offsetof(Path_t2828565993_StaticFields, ____linearDecoder_1)); }
	inline LinearDecoder_t2073524639 * get__linearDecoder_1() const { return ____linearDecoder_1; }
	inline LinearDecoder_t2073524639 ** get_address_of__linearDecoder_1() { return &____linearDecoder_1; }
	inline void set__linearDecoder_1(LinearDecoder_t2073524639 * value)
	{
		____linearDecoder_1 = value;
		Il2CppCodeGenWriteBarrier(&____linearDecoder_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
