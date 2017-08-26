#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "DOTweenPro_DG_Tweening_Core_ABSAnimationComponent2205594551.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"
#include "DOTween_DG_Tweening_LoopType2249218064.h"
#include "DOTween_DG_Tweening_Plugins_Options_OrientType1755667719.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "DOTween_DG_Tweening_PathMode1545785466.h"
#include "DOTween_DG_Tweening_AxisConstraint1244566668.h"
#include "DOTweenPro_DG_Tweening_DOTweenInspectorMode2739551672.h"
#include "DOTween_DG_Tweening_PathType2815988833.h"
#include "DOTweenPro_DG_Tweening_HandlesType3201532857.h"
#include "DOTweenPro_DG_Tweening_HandlesDrawMode3273484032.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t2828565993;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.DOTweenPath
struct  DOTweenPath_t1397145371  : public ABSAnimationComponent_t2205594551
{
public:
	// System.Single DG.Tweening.DOTweenPath::delay
	float ___delay_17;
	// System.Single DG.Tweening.DOTweenPath::duration
	float ___duration_18;
	// DG.Tweening.Ease DG.Tweening.DOTweenPath::easeType
	int32_t ___easeType_19;
	// UnityEngine.AnimationCurve DG.Tweening.DOTweenPath::easeCurve
	AnimationCurve_t3306541151 * ___easeCurve_20;
	// System.Int32 DG.Tweening.DOTweenPath::loops
	int32_t ___loops_21;
	// System.String DG.Tweening.DOTweenPath::id
	String_t* ___id_22;
	// DG.Tweening.LoopType DG.Tweening.DOTweenPath::loopType
	int32_t ___loopType_23;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.DOTweenPath::orientType
	int32_t ___orientType_24;
	// UnityEngine.Transform DG.Tweening.DOTweenPath::lookAtTransform
	Transform_t3275118058 * ___lookAtTransform_25;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::lookAtPosition
	Vector3_t2243707580  ___lookAtPosition_26;
	// System.Single DG.Tweening.DOTweenPath::lookAhead
	float ___lookAhead_27;
	// System.Boolean DG.Tweening.DOTweenPath::autoPlay
	bool ___autoPlay_28;
	// System.Boolean DG.Tweening.DOTweenPath::autoKill
	bool ___autoKill_29;
	// System.Boolean DG.Tweening.DOTweenPath::relative
	bool ___relative_30;
	// System.Boolean DG.Tweening.DOTweenPath::isLocal
	bool ___isLocal_31;
	// System.Boolean DG.Tweening.DOTweenPath::isClosedPath
	bool ___isClosedPath_32;
	// System.Int32 DG.Tweening.DOTweenPath::pathResolution
	int32_t ___pathResolution_33;
	// DG.Tweening.PathMode DG.Tweening.DOTweenPath::pathMode
	int32_t ___pathMode_34;
	// DG.Tweening.AxisConstraint DG.Tweening.DOTweenPath::lockRotation
	int32_t ___lockRotation_35;
	// System.Boolean DG.Tweening.DOTweenPath::assignForwardAndUp
	bool ___assignForwardAndUp_36;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::forwardDirection
	Vector3_t2243707580  ___forwardDirection_37;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::upDirection
	Vector3_t2243707580  ___upDirection_38;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> DG.Tweening.DOTweenPath::wps
	List_1_t1612828712 * ___wps_39;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> DG.Tweening.DOTweenPath::fullWps
	List_1_t1612828712 * ___fullWps_40;
	// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.DOTweenPath::path
	Path_t2828565993 * ___path_41;
	// DG.Tweening.DOTweenInspectorMode DG.Tweening.DOTweenPath::inspectorMode
	int32_t ___inspectorMode_42;
	// DG.Tweening.PathType DG.Tweening.DOTweenPath::pathType
	int32_t ___pathType_43;
	// DG.Tweening.HandlesType DG.Tweening.DOTweenPath::handlesType
	int32_t ___handlesType_44;
	// System.Boolean DG.Tweening.DOTweenPath::livePreview
	bool ___livePreview_45;
	// DG.Tweening.HandlesDrawMode DG.Tweening.DOTweenPath::handlesDrawMode
	int32_t ___handlesDrawMode_46;
	// System.Single DG.Tweening.DOTweenPath::perspectiveHandleSize
	float ___perspectiveHandleSize_47;
	// System.Boolean DG.Tweening.DOTweenPath::showIndexes
	bool ___showIndexes_48;
	// System.Boolean DG.Tweening.DOTweenPath::showWpLength
	bool ___showWpLength_49;
	// UnityEngine.Color DG.Tweening.DOTweenPath::pathColor
	Color_t2020392075  ___pathColor_50;
	// UnityEngine.Vector3 DG.Tweening.DOTweenPath::lastSrcPosition
	Vector3_t2243707580  ___lastSrcPosition_51;
	// System.Boolean DG.Tweening.DOTweenPath::wpsDropdown
	bool ___wpsDropdown_52;

public:
	inline static int32_t get_offset_of_delay_17() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___delay_17)); }
	inline float get_delay_17() const { return ___delay_17; }
	inline float* get_address_of_delay_17() { return &___delay_17; }
	inline void set_delay_17(float value)
	{
		___delay_17 = value;
	}

	inline static int32_t get_offset_of_duration_18() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___duration_18)); }
	inline float get_duration_18() const { return ___duration_18; }
	inline float* get_address_of_duration_18() { return &___duration_18; }
	inline void set_duration_18(float value)
	{
		___duration_18 = value;
	}

	inline static int32_t get_offset_of_easeType_19() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___easeType_19)); }
	inline int32_t get_easeType_19() const { return ___easeType_19; }
	inline int32_t* get_address_of_easeType_19() { return &___easeType_19; }
	inline void set_easeType_19(int32_t value)
	{
		___easeType_19 = value;
	}

	inline static int32_t get_offset_of_easeCurve_20() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___easeCurve_20)); }
	inline AnimationCurve_t3306541151 * get_easeCurve_20() const { return ___easeCurve_20; }
	inline AnimationCurve_t3306541151 ** get_address_of_easeCurve_20() { return &___easeCurve_20; }
	inline void set_easeCurve_20(AnimationCurve_t3306541151 * value)
	{
		___easeCurve_20 = value;
		Il2CppCodeGenWriteBarrier(&___easeCurve_20, value);
	}

	inline static int32_t get_offset_of_loops_21() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___loops_21)); }
	inline int32_t get_loops_21() const { return ___loops_21; }
	inline int32_t* get_address_of_loops_21() { return &___loops_21; }
	inline void set_loops_21(int32_t value)
	{
		___loops_21 = value;
	}

	inline static int32_t get_offset_of_id_22() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___id_22)); }
	inline String_t* get_id_22() const { return ___id_22; }
	inline String_t** get_address_of_id_22() { return &___id_22; }
	inline void set_id_22(String_t* value)
	{
		___id_22 = value;
		Il2CppCodeGenWriteBarrier(&___id_22, value);
	}

	inline static int32_t get_offset_of_loopType_23() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___loopType_23)); }
	inline int32_t get_loopType_23() const { return ___loopType_23; }
	inline int32_t* get_address_of_loopType_23() { return &___loopType_23; }
	inline void set_loopType_23(int32_t value)
	{
		___loopType_23 = value;
	}

	inline static int32_t get_offset_of_orientType_24() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___orientType_24)); }
	inline int32_t get_orientType_24() const { return ___orientType_24; }
	inline int32_t* get_address_of_orientType_24() { return &___orientType_24; }
	inline void set_orientType_24(int32_t value)
	{
		___orientType_24 = value;
	}

	inline static int32_t get_offset_of_lookAtTransform_25() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___lookAtTransform_25)); }
	inline Transform_t3275118058 * get_lookAtTransform_25() const { return ___lookAtTransform_25; }
	inline Transform_t3275118058 ** get_address_of_lookAtTransform_25() { return &___lookAtTransform_25; }
	inline void set_lookAtTransform_25(Transform_t3275118058 * value)
	{
		___lookAtTransform_25 = value;
		Il2CppCodeGenWriteBarrier(&___lookAtTransform_25, value);
	}

	inline static int32_t get_offset_of_lookAtPosition_26() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___lookAtPosition_26)); }
	inline Vector3_t2243707580  get_lookAtPosition_26() const { return ___lookAtPosition_26; }
	inline Vector3_t2243707580 * get_address_of_lookAtPosition_26() { return &___lookAtPosition_26; }
	inline void set_lookAtPosition_26(Vector3_t2243707580  value)
	{
		___lookAtPosition_26 = value;
	}

	inline static int32_t get_offset_of_lookAhead_27() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___lookAhead_27)); }
	inline float get_lookAhead_27() const { return ___lookAhead_27; }
	inline float* get_address_of_lookAhead_27() { return &___lookAhead_27; }
	inline void set_lookAhead_27(float value)
	{
		___lookAhead_27 = value;
	}

	inline static int32_t get_offset_of_autoPlay_28() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___autoPlay_28)); }
	inline bool get_autoPlay_28() const { return ___autoPlay_28; }
	inline bool* get_address_of_autoPlay_28() { return &___autoPlay_28; }
	inline void set_autoPlay_28(bool value)
	{
		___autoPlay_28 = value;
	}

	inline static int32_t get_offset_of_autoKill_29() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___autoKill_29)); }
	inline bool get_autoKill_29() const { return ___autoKill_29; }
	inline bool* get_address_of_autoKill_29() { return &___autoKill_29; }
	inline void set_autoKill_29(bool value)
	{
		___autoKill_29 = value;
	}

	inline static int32_t get_offset_of_relative_30() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___relative_30)); }
	inline bool get_relative_30() const { return ___relative_30; }
	inline bool* get_address_of_relative_30() { return &___relative_30; }
	inline void set_relative_30(bool value)
	{
		___relative_30 = value;
	}

	inline static int32_t get_offset_of_isLocal_31() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___isLocal_31)); }
	inline bool get_isLocal_31() const { return ___isLocal_31; }
	inline bool* get_address_of_isLocal_31() { return &___isLocal_31; }
	inline void set_isLocal_31(bool value)
	{
		___isLocal_31 = value;
	}

	inline static int32_t get_offset_of_isClosedPath_32() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___isClosedPath_32)); }
	inline bool get_isClosedPath_32() const { return ___isClosedPath_32; }
	inline bool* get_address_of_isClosedPath_32() { return &___isClosedPath_32; }
	inline void set_isClosedPath_32(bool value)
	{
		___isClosedPath_32 = value;
	}

	inline static int32_t get_offset_of_pathResolution_33() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___pathResolution_33)); }
	inline int32_t get_pathResolution_33() const { return ___pathResolution_33; }
	inline int32_t* get_address_of_pathResolution_33() { return &___pathResolution_33; }
	inline void set_pathResolution_33(int32_t value)
	{
		___pathResolution_33 = value;
	}

	inline static int32_t get_offset_of_pathMode_34() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___pathMode_34)); }
	inline int32_t get_pathMode_34() const { return ___pathMode_34; }
	inline int32_t* get_address_of_pathMode_34() { return &___pathMode_34; }
	inline void set_pathMode_34(int32_t value)
	{
		___pathMode_34 = value;
	}

	inline static int32_t get_offset_of_lockRotation_35() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___lockRotation_35)); }
	inline int32_t get_lockRotation_35() const { return ___lockRotation_35; }
	inline int32_t* get_address_of_lockRotation_35() { return &___lockRotation_35; }
	inline void set_lockRotation_35(int32_t value)
	{
		___lockRotation_35 = value;
	}

	inline static int32_t get_offset_of_assignForwardAndUp_36() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___assignForwardAndUp_36)); }
	inline bool get_assignForwardAndUp_36() const { return ___assignForwardAndUp_36; }
	inline bool* get_address_of_assignForwardAndUp_36() { return &___assignForwardAndUp_36; }
	inline void set_assignForwardAndUp_36(bool value)
	{
		___assignForwardAndUp_36 = value;
	}

	inline static int32_t get_offset_of_forwardDirection_37() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___forwardDirection_37)); }
	inline Vector3_t2243707580  get_forwardDirection_37() const { return ___forwardDirection_37; }
	inline Vector3_t2243707580 * get_address_of_forwardDirection_37() { return &___forwardDirection_37; }
	inline void set_forwardDirection_37(Vector3_t2243707580  value)
	{
		___forwardDirection_37 = value;
	}

	inline static int32_t get_offset_of_upDirection_38() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___upDirection_38)); }
	inline Vector3_t2243707580  get_upDirection_38() const { return ___upDirection_38; }
	inline Vector3_t2243707580 * get_address_of_upDirection_38() { return &___upDirection_38; }
	inline void set_upDirection_38(Vector3_t2243707580  value)
	{
		___upDirection_38 = value;
	}

	inline static int32_t get_offset_of_wps_39() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___wps_39)); }
	inline List_1_t1612828712 * get_wps_39() const { return ___wps_39; }
	inline List_1_t1612828712 ** get_address_of_wps_39() { return &___wps_39; }
	inline void set_wps_39(List_1_t1612828712 * value)
	{
		___wps_39 = value;
		Il2CppCodeGenWriteBarrier(&___wps_39, value);
	}

	inline static int32_t get_offset_of_fullWps_40() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___fullWps_40)); }
	inline List_1_t1612828712 * get_fullWps_40() const { return ___fullWps_40; }
	inline List_1_t1612828712 ** get_address_of_fullWps_40() { return &___fullWps_40; }
	inline void set_fullWps_40(List_1_t1612828712 * value)
	{
		___fullWps_40 = value;
		Il2CppCodeGenWriteBarrier(&___fullWps_40, value);
	}

	inline static int32_t get_offset_of_path_41() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___path_41)); }
	inline Path_t2828565993 * get_path_41() const { return ___path_41; }
	inline Path_t2828565993 ** get_address_of_path_41() { return &___path_41; }
	inline void set_path_41(Path_t2828565993 * value)
	{
		___path_41 = value;
		Il2CppCodeGenWriteBarrier(&___path_41, value);
	}

	inline static int32_t get_offset_of_inspectorMode_42() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___inspectorMode_42)); }
	inline int32_t get_inspectorMode_42() const { return ___inspectorMode_42; }
	inline int32_t* get_address_of_inspectorMode_42() { return &___inspectorMode_42; }
	inline void set_inspectorMode_42(int32_t value)
	{
		___inspectorMode_42 = value;
	}

	inline static int32_t get_offset_of_pathType_43() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___pathType_43)); }
	inline int32_t get_pathType_43() const { return ___pathType_43; }
	inline int32_t* get_address_of_pathType_43() { return &___pathType_43; }
	inline void set_pathType_43(int32_t value)
	{
		___pathType_43 = value;
	}

	inline static int32_t get_offset_of_handlesType_44() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___handlesType_44)); }
	inline int32_t get_handlesType_44() const { return ___handlesType_44; }
	inline int32_t* get_address_of_handlesType_44() { return &___handlesType_44; }
	inline void set_handlesType_44(int32_t value)
	{
		___handlesType_44 = value;
	}

	inline static int32_t get_offset_of_livePreview_45() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___livePreview_45)); }
	inline bool get_livePreview_45() const { return ___livePreview_45; }
	inline bool* get_address_of_livePreview_45() { return &___livePreview_45; }
	inline void set_livePreview_45(bool value)
	{
		___livePreview_45 = value;
	}

	inline static int32_t get_offset_of_handlesDrawMode_46() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___handlesDrawMode_46)); }
	inline int32_t get_handlesDrawMode_46() const { return ___handlesDrawMode_46; }
	inline int32_t* get_address_of_handlesDrawMode_46() { return &___handlesDrawMode_46; }
	inline void set_handlesDrawMode_46(int32_t value)
	{
		___handlesDrawMode_46 = value;
	}

	inline static int32_t get_offset_of_perspectiveHandleSize_47() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___perspectiveHandleSize_47)); }
	inline float get_perspectiveHandleSize_47() const { return ___perspectiveHandleSize_47; }
	inline float* get_address_of_perspectiveHandleSize_47() { return &___perspectiveHandleSize_47; }
	inline void set_perspectiveHandleSize_47(float value)
	{
		___perspectiveHandleSize_47 = value;
	}

	inline static int32_t get_offset_of_showIndexes_48() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___showIndexes_48)); }
	inline bool get_showIndexes_48() const { return ___showIndexes_48; }
	inline bool* get_address_of_showIndexes_48() { return &___showIndexes_48; }
	inline void set_showIndexes_48(bool value)
	{
		___showIndexes_48 = value;
	}

	inline static int32_t get_offset_of_showWpLength_49() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___showWpLength_49)); }
	inline bool get_showWpLength_49() const { return ___showWpLength_49; }
	inline bool* get_address_of_showWpLength_49() { return &___showWpLength_49; }
	inline void set_showWpLength_49(bool value)
	{
		___showWpLength_49 = value;
	}

	inline static int32_t get_offset_of_pathColor_50() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___pathColor_50)); }
	inline Color_t2020392075  get_pathColor_50() const { return ___pathColor_50; }
	inline Color_t2020392075 * get_address_of_pathColor_50() { return &___pathColor_50; }
	inline void set_pathColor_50(Color_t2020392075  value)
	{
		___pathColor_50 = value;
	}

	inline static int32_t get_offset_of_lastSrcPosition_51() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___lastSrcPosition_51)); }
	inline Vector3_t2243707580  get_lastSrcPosition_51() const { return ___lastSrcPosition_51; }
	inline Vector3_t2243707580 * get_address_of_lastSrcPosition_51() { return &___lastSrcPosition_51; }
	inline void set_lastSrcPosition_51(Vector3_t2243707580  value)
	{
		___lastSrcPosition_51 = value;
	}

	inline static int32_t get_offset_of_wpsDropdown_52() { return static_cast<int32_t>(offsetof(DOTweenPath_t1397145371, ___wpsDropdown_52)); }
	inline bool get_wpsDropdown_52() const { return ___wpsDropdown_52; }
	inline bool* get_address_of_wpsDropdown_52() { return &___wpsDropdown_52; }
	inline void set_wpsDropdown_52(bool value)
	{
		___wpsDropdown_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
