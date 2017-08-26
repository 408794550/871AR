#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_EveryplayRecButtons_B591708518.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// EveryplayRecButtons/TextureAtlasSrc
struct TextureAtlasSrc_t2048635151;
// EveryplayRecButtons/Button
struct Button_t3262243951;
// EveryplayRecButtons/ToggleButton
struct ToggleButton_t2881484729;
// System.Collections.Generic.List`1<EveryplayRecButtons/Button>
struct List_1_t2631365083;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EveryplayRecButtons
struct  EveryplayRecButtons_t2003903990  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D EveryplayRecButtons::atlasTexture
	Texture2D_t3542995729 * ___atlasTexture_2;
	// EveryplayRecButtons/ButtonsOrigin EveryplayRecButtons::origin
	int32_t ___origin_3;
	// UnityEngine.Vector2 EveryplayRecButtons::containerMargin
	Vector2_t2243707579  ___containerMargin_4;
	// UnityEngine.Vector2 EveryplayRecButtons::containerOffset
	Vector2_t2243707579  ___containerOffset_5;
	// System.Single EveryplayRecButtons::containerScaling
	float ___containerScaling_6;
	// System.Int32 EveryplayRecButtons::buttonTitleHorizontalMargin
	int32_t ___buttonTitleHorizontalMargin_10;
	// System.Int32 EveryplayRecButtons::buttonTitleVerticalMargin
	int32_t ___buttonTitleVerticalMargin_11;
	// System.Int32 EveryplayRecButtons::buttonMargin
	int32_t ___buttonMargin_12;
	// System.Boolean EveryplayRecButtons::faceCamPermissionGranted
	bool ___faceCamPermissionGranted_13;
	// System.Boolean EveryplayRecButtons::startFaceCamWhenPermissionGranted
	bool ___startFaceCamWhenPermissionGranted_14;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::editVideoAtlasSrc
	TextureAtlasSrc_t2048635151 * ___editVideoAtlasSrc_15;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::faceCamAtlasSrc
	TextureAtlasSrc_t2048635151 * ___faceCamAtlasSrc_16;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::openEveryplayAtlasSrc
	TextureAtlasSrc_t2048635151 * ___openEveryplayAtlasSrc_17;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::shareVideoAtlasSrc
	TextureAtlasSrc_t2048635151 * ___shareVideoAtlasSrc_18;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::startRecordingAtlasSrc
	TextureAtlasSrc_t2048635151 * ___startRecordingAtlasSrc_19;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::stopRecordingAtlasSrc
	TextureAtlasSrc_t2048635151 * ___stopRecordingAtlasSrc_20;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::facecamToggleOnAtlasSrc
	TextureAtlasSrc_t2048635151 * ___facecamToggleOnAtlasSrc_21;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::facecamToggleOffAtlasSrc
	TextureAtlasSrc_t2048635151 * ___facecamToggleOffAtlasSrc_22;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::bgHeaderAtlasSrc
	TextureAtlasSrc_t2048635151 * ___bgHeaderAtlasSrc_23;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::bgFooterAtlasSrc
	TextureAtlasSrc_t2048635151 * ___bgFooterAtlasSrc_24;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::bgAtlasSrc
	TextureAtlasSrc_t2048635151 * ___bgAtlasSrc_25;
	// EveryplayRecButtons/TextureAtlasSrc EveryplayRecButtons::buttonAtlasSrc
	TextureAtlasSrc_t2048635151 * ___buttonAtlasSrc_26;
	// EveryplayRecButtons/Button EveryplayRecButtons::shareVideoButton
	Button_t3262243951 * ___shareVideoButton_27;
	// EveryplayRecButtons/Button EveryplayRecButtons::editVideoButton
	Button_t3262243951 * ___editVideoButton_28;
	// EveryplayRecButtons/Button EveryplayRecButtons::openEveryplayButton
	Button_t3262243951 * ___openEveryplayButton_29;
	// EveryplayRecButtons/Button EveryplayRecButtons::startRecordingButton
	Button_t3262243951 * ___startRecordingButton_30;
	// EveryplayRecButtons/Button EveryplayRecButtons::stopRecordingButton
	Button_t3262243951 * ___stopRecordingButton_31;
	// EveryplayRecButtons/ToggleButton EveryplayRecButtons::faceCamToggleButton
	ToggleButton_t2881484729 * ___faceCamToggleButton_32;
	// EveryplayRecButtons/Button EveryplayRecButtons::tappedButton
	Button_t3262243951 * ___tappedButton_33;
	// System.Collections.Generic.List`1<EveryplayRecButtons/Button> EveryplayRecButtons::visibleButtons
	List_1_t2631365083 * ___visibleButtons_34;

public:
	inline static int32_t get_offset_of_atlasTexture_2() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___atlasTexture_2)); }
	inline Texture2D_t3542995729 * get_atlasTexture_2() const { return ___atlasTexture_2; }
	inline Texture2D_t3542995729 ** get_address_of_atlasTexture_2() { return &___atlasTexture_2; }
	inline void set_atlasTexture_2(Texture2D_t3542995729 * value)
	{
		___atlasTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___atlasTexture_2, value);
	}

	inline static int32_t get_offset_of_origin_3() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___origin_3)); }
	inline int32_t get_origin_3() const { return ___origin_3; }
	inline int32_t* get_address_of_origin_3() { return &___origin_3; }
	inline void set_origin_3(int32_t value)
	{
		___origin_3 = value;
	}

	inline static int32_t get_offset_of_containerMargin_4() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___containerMargin_4)); }
	inline Vector2_t2243707579  get_containerMargin_4() const { return ___containerMargin_4; }
	inline Vector2_t2243707579 * get_address_of_containerMargin_4() { return &___containerMargin_4; }
	inline void set_containerMargin_4(Vector2_t2243707579  value)
	{
		___containerMargin_4 = value;
	}

	inline static int32_t get_offset_of_containerOffset_5() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___containerOffset_5)); }
	inline Vector2_t2243707579  get_containerOffset_5() const { return ___containerOffset_5; }
	inline Vector2_t2243707579 * get_address_of_containerOffset_5() { return &___containerOffset_5; }
	inline void set_containerOffset_5(Vector2_t2243707579  value)
	{
		___containerOffset_5 = value;
	}

	inline static int32_t get_offset_of_containerScaling_6() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___containerScaling_6)); }
	inline float get_containerScaling_6() const { return ___containerScaling_6; }
	inline float* get_address_of_containerScaling_6() { return &___containerScaling_6; }
	inline void set_containerScaling_6(float value)
	{
		___containerScaling_6 = value;
	}

	inline static int32_t get_offset_of_buttonTitleHorizontalMargin_10() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___buttonTitleHorizontalMargin_10)); }
	inline int32_t get_buttonTitleHorizontalMargin_10() const { return ___buttonTitleHorizontalMargin_10; }
	inline int32_t* get_address_of_buttonTitleHorizontalMargin_10() { return &___buttonTitleHorizontalMargin_10; }
	inline void set_buttonTitleHorizontalMargin_10(int32_t value)
	{
		___buttonTitleHorizontalMargin_10 = value;
	}

	inline static int32_t get_offset_of_buttonTitleVerticalMargin_11() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___buttonTitleVerticalMargin_11)); }
	inline int32_t get_buttonTitleVerticalMargin_11() const { return ___buttonTitleVerticalMargin_11; }
	inline int32_t* get_address_of_buttonTitleVerticalMargin_11() { return &___buttonTitleVerticalMargin_11; }
	inline void set_buttonTitleVerticalMargin_11(int32_t value)
	{
		___buttonTitleVerticalMargin_11 = value;
	}

	inline static int32_t get_offset_of_buttonMargin_12() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___buttonMargin_12)); }
	inline int32_t get_buttonMargin_12() const { return ___buttonMargin_12; }
	inline int32_t* get_address_of_buttonMargin_12() { return &___buttonMargin_12; }
	inline void set_buttonMargin_12(int32_t value)
	{
		___buttonMargin_12 = value;
	}

	inline static int32_t get_offset_of_faceCamPermissionGranted_13() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___faceCamPermissionGranted_13)); }
	inline bool get_faceCamPermissionGranted_13() const { return ___faceCamPermissionGranted_13; }
	inline bool* get_address_of_faceCamPermissionGranted_13() { return &___faceCamPermissionGranted_13; }
	inline void set_faceCamPermissionGranted_13(bool value)
	{
		___faceCamPermissionGranted_13 = value;
	}

	inline static int32_t get_offset_of_startFaceCamWhenPermissionGranted_14() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___startFaceCamWhenPermissionGranted_14)); }
	inline bool get_startFaceCamWhenPermissionGranted_14() const { return ___startFaceCamWhenPermissionGranted_14; }
	inline bool* get_address_of_startFaceCamWhenPermissionGranted_14() { return &___startFaceCamWhenPermissionGranted_14; }
	inline void set_startFaceCamWhenPermissionGranted_14(bool value)
	{
		___startFaceCamWhenPermissionGranted_14 = value;
	}

	inline static int32_t get_offset_of_editVideoAtlasSrc_15() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___editVideoAtlasSrc_15)); }
	inline TextureAtlasSrc_t2048635151 * get_editVideoAtlasSrc_15() const { return ___editVideoAtlasSrc_15; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_editVideoAtlasSrc_15() { return &___editVideoAtlasSrc_15; }
	inline void set_editVideoAtlasSrc_15(TextureAtlasSrc_t2048635151 * value)
	{
		___editVideoAtlasSrc_15 = value;
		Il2CppCodeGenWriteBarrier(&___editVideoAtlasSrc_15, value);
	}

	inline static int32_t get_offset_of_faceCamAtlasSrc_16() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___faceCamAtlasSrc_16)); }
	inline TextureAtlasSrc_t2048635151 * get_faceCamAtlasSrc_16() const { return ___faceCamAtlasSrc_16; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_faceCamAtlasSrc_16() { return &___faceCamAtlasSrc_16; }
	inline void set_faceCamAtlasSrc_16(TextureAtlasSrc_t2048635151 * value)
	{
		___faceCamAtlasSrc_16 = value;
		Il2CppCodeGenWriteBarrier(&___faceCamAtlasSrc_16, value);
	}

	inline static int32_t get_offset_of_openEveryplayAtlasSrc_17() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___openEveryplayAtlasSrc_17)); }
	inline TextureAtlasSrc_t2048635151 * get_openEveryplayAtlasSrc_17() const { return ___openEveryplayAtlasSrc_17; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_openEveryplayAtlasSrc_17() { return &___openEveryplayAtlasSrc_17; }
	inline void set_openEveryplayAtlasSrc_17(TextureAtlasSrc_t2048635151 * value)
	{
		___openEveryplayAtlasSrc_17 = value;
		Il2CppCodeGenWriteBarrier(&___openEveryplayAtlasSrc_17, value);
	}

	inline static int32_t get_offset_of_shareVideoAtlasSrc_18() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___shareVideoAtlasSrc_18)); }
	inline TextureAtlasSrc_t2048635151 * get_shareVideoAtlasSrc_18() const { return ___shareVideoAtlasSrc_18; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_shareVideoAtlasSrc_18() { return &___shareVideoAtlasSrc_18; }
	inline void set_shareVideoAtlasSrc_18(TextureAtlasSrc_t2048635151 * value)
	{
		___shareVideoAtlasSrc_18 = value;
		Il2CppCodeGenWriteBarrier(&___shareVideoAtlasSrc_18, value);
	}

	inline static int32_t get_offset_of_startRecordingAtlasSrc_19() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___startRecordingAtlasSrc_19)); }
	inline TextureAtlasSrc_t2048635151 * get_startRecordingAtlasSrc_19() const { return ___startRecordingAtlasSrc_19; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_startRecordingAtlasSrc_19() { return &___startRecordingAtlasSrc_19; }
	inline void set_startRecordingAtlasSrc_19(TextureAtlasSrc_t2048635151 * value)
	{
		___startRecordingAtlasSrc_19 = value;
		Il2CppCodeGenWriteBarrier(&___startRecordingAtlasSrc_19, value);
	}

	inline static int32_t get_offset_of_stopRecordingAtlasSrc_20() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___stopRecordingAtlasSrc_20)); }
	inline TextureAtlasSrc_t2048635151 * get_stopRecordingAtlasSrc_20() const { return ___stopRecordingAtlasSrc_20; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_stopRecordingAtlasSrc_20() { return &___stopRecordingAtlasSrc_20; }
	inline void set_stopRecordingAtlasSrc_20(TextureAtlasSrc_t2048635151 * value)
	{
		___stopRecordingAtlasSrc_20 = value;
		Il2CppCodeGenWriteBarrier(&___stopRecordingAtlasSrc_20, value);
	}

	inline static int32_t get_offset_of_facecamToggleOnAtlasSrc_21() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___facecamToggleOnAtlasSrc_21)); }
	inline TextureAtlasSrc_t2048635151 * get_facecamToggleOnAtlasSrc_21() const { return ___facecamToggleOnAtlasSrc_21; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_facecamToggleOnAtlasSrc_21() { return &___facecamToggleOnAtlasSrc_21; }
	inline void set_facecamToggleOnAtlasSrc_21(TextureAtlasSrc_t2048635151 * value)
	{
		___facecamToggleOnAtlasSrc_21 = value;
		Il2CppCodeGenWriteBarrier(&___facecamToggleOnAtlasSrc_21, value);
	}

	inline static int32_t get_offset_of_facecamToggleOffAtlasSrc_22() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___facecamToggleOffAtlasSrc_22)); }
	inline TextureAtlasSrc_t2048635151 * get_facecamToggleOffAtlasSrc_22() const { return ___facecamToggleOffAtlasSrc_22; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_facecamToggleOffAtlasSrc_22() { return &___facecamToggleOffAtlasSrc_22; }
	inline void set_facecamToggleOffAtlasSrc_22(TextureAtlasSrc_t2048635151 * value)
	{
		___facecamToggleOffAtlasSrc_22 = value;
		Il2CppCodeGenWriteBarrier(&___facecamToggleOffAtlasSrc_22, value);
	}

	inline static int32_t get_offset_of_bgHeaderAtlasSrc_23() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___bgHeaderAtlasSrc_23)); }
	inline TextureAtlasSrc_t2048635151 * get_bgHeaderAtlasSrc_23() const { return ___bgHeaderAtlasSrc_23; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_bgHeaderAtlasSrc_23() { return &___bgHeaderAtlasSrc_23; }
	inline void set_bgHeaderAtlasSrc_23(TextureAtlasSrc_t2048635151 * value)
	{
		___bgHeaderAtlasSrc_23 = value;
		Il2CppCodeGenWriteBarrier(&___bgHeaderAtlasSrc_23, value);
	}

	inline static int32_t get_offset_of_bgFooterAtlasSrc_24() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___bgFooterAtlasSrc_24)); }
	inline TextureAtlasSrc_t2048635151 * get_bgFooterAtlasSrc_24() const { return ___bgFooterAtlasSrc_24; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_bgFooterAtlasSrc_24() { return &___bgFooterAtlasSrc_24; }
	inline void set_bgFooterAtlasSrc_24(TextureAtlasSrc_t2048635151 * value)
	{
		___bgFooterAtlasSrc_24 = value;
		Il2CppCodeGenWriteBarrier(&___bgFooterAtlasSrc_24, value);
	}

	inline static int32_t get_offset_of_bgAtlasSrc_25() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___bgAtlasSrc_25)); }
	inline TextureAtlasSrc_t2048635151 * get_bgAtlasSrc_25() const { return ___bgAtlasSrc_25; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_bgAtlasSrc_25() { return &___bgAtlasSrc_25; }
	inline void set_bgAtlasSrc_25(TextureAtlasSrc_t2048635151 * value)
	{
		___bgAtlasSrc_25 = value;
		Il2CppCodeGenWriteBarrier(&___bgAtlasSrc_25, value);
	}

	inline static int32_t get_offset_of_buttonAtlasSrc_26() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___buttonAtlasSrc_26)); }
	inline TextureAtlasSrc_t2048635151 * get_buttonAtlasSrc_26() const { return ___buttonAtlasSrc_26; }
	inline TextureAtlasSrc_t2048635151 ** get_address_of_buttonAtlasSrc_26() { return &___buttonAtlasSrc_26; }
	inline void set_buttonAtlasSrc_26(TextureAtlasSrc_t2048635151 * value)
	{
		___buttonAtlasSrc_26 = value;
		Il2CppCodeGenWriteBarrier(&___buttonAtlasSrc_26, value);
	}

	inline static int32_t get_offset_of_shareVideoButton_27() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___shareVideoButton_27)); }
	inline Button_t3262243951 * get_shareVideoButton_27() const { return ___shareVideoButton_27; }
	inline Button_t3262243951 ** get_address_of_shareVideoButton_27() { return &___shareVideoButton_27; }
	inline void set_shareVideoButton_27(Button_t3262243951 * value)
	{
		___shareVideoButton_27 = value;
		Il2CppCodeGenWriteBarrier(&___shareVideoButton_27, value);
	}

	inline static int32_t get_offset_of_editVideoButton_28() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___editVideoButton_28)); }
	inline Button_t3262243951 * get_editVideoButton_28() const { return ___editVideoButton_28; }
	inline Button_t3262243951 ** get_address_of_editVideoButton_28() { return &___editVideoButton_28; }
	inline void set_editVideoButton_28(Button_t3262243951 * value)
	{
		___editVideoButton_28 = value;
		Il2CppCodeGenWriteBarrier(&___editVideoButton_28, value);
	}

	inline static int32_t get_offset_of_openEveryplayButton_29() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___openEveryplayButton_29)); }
	inline Button_t3262243951 * get_openEveryplayButton_29() const { return ___openEveryplayButton_29; }
	inline Button_t3262243951 ** get_address_of_openEveryplayButton_29() { return &___openEveryplayButton_29; }
	inline void set_openEveryplayButton_29(Button_t3262243951 * value)
	{
		___openEveryplayButton_29 = value;
		Il2CppCodeGenWriteBarrier(&___openEveryplayButton_29, value);
	}

	inline static int32_t get_offset_of_startRecordingButton_30() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___startRecordingButton_30)); }
	inline Button_t3262243951 * get_startRecordingButton_30() const { return ___startRecordingButton_30; }
	inline Button_t3262243951 ** get_address_of_startRecordingButton_30() { return &___startRecordingButton_30; }
	inline void set_startRecordingButton_30(Button_t3262243951 * value)
	{
		___startRecordingButton_30 = value;
		Il2CppCodeGenWriteBarrier(&___startRecordingButton_30, value);
	}

	inline static int32_t get_offset_of_stopRecordingButton_31() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___stopRecordingButton_31)); }
	inline Button_t3262243951 * get_stopRecordingButton_31() const { return ___stopRecordingButton_31; }
	inline Button_t3262243951 ** get_address_of_stopRecordingButton_31() { return &___stopRecordingButton_31; }
	inline void set_stopRecordingButton_31(Button_t3262243951 * value)
	{
		___stopRecordingButton_31 = value;
		Il2CppCodeGenWriteBarrier(&___stopRecordingButton_31, value);
	}

	inline static int32_t get_offset_of_faceCamToggleButton_32() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___faceCamToggleButton_32)); }
	inline ToggleButton_t2881484729 * get_faceCamToggleButton_32() const { return ___faceCamToggleButton_32; }
	inline ToggleButton_t2881484729 ** get_address_of_faceCamToggleButton_32() { return &___faceCamToggleButton_32; }
	inline void set_faceCamToggleButton_32(ToggleButton_t2881484729 * value)
	{
		___faceCamToggleButton_32 = value;
		Il2CppCodeGenWriteBarrier(&___faceCamToggleButton_32, value);
	}

	inline static int32_t get_offset_of_tappedButton_33() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___tappedButton_33)); }
	inline Button_t3262243951 * get_tappedButton_33() const { return ___tappedButton_33; }
	inline Button_t3262243951 ** get_address_of_tappedButton_33() { return &___tappedButton_33; }
	inline void set_tappedButton_33(Button_t3262243951 * value)
	{
		___tappedButton_33 = value;
		Il2CppCodeGenWriteBarrier(&___tappedButton_33, value);
	}

	inline static int32_t get_offset_of_visibleButtons_34() { return static_cast<int32_t>(offsetof(EveryplayRecButtons_t2003903990, ___visibleButtons_34)); }
	inline List_1_t2631365083 * get_visibleButtons_34() const { return ___visibleButtons_34; }
	inline List_1_t2631365083 ** get_address_of_visibleButtons_34() { return &___visibleButtons_34; }
	inline void set_visibleButtons_34(List_1_t2631365083 * value)
	{
		___visibleButtons_34 = value;
		Il2CppCodeGenWriteBarrier(&___visibleButtons_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
