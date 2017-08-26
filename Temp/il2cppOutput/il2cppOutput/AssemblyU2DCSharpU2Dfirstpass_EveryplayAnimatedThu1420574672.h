#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Texture
struct Texture_t2243626319;
// EveryplayThumbnailPool
struct EveryplayThumbnailPool_t101914191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EveryplayAnimatedThumbnailOnGUI
struct  EveryplayAnimatedThumbnailOnGUI_t1420574672  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture EveryplayAnimatedThumbnailOnGUI::defaultTexture
	Texture_t2243626319 * ___defaultTexture_2;
	// UnityEngine.Rect EveryplayAnimatedThumbnailOnGUI::pixelInset
	Rect_t3681755626  ___pixelInset_3;
	// EveryplayThumbnailPool EveryplayAnimatedThumbnailOnGUI::thumbnailPool
	EveryplayThumbnailPool_t101914191 * ___thumbnailPool_4;
	// System.Int32 EveryplayAnimatedThumbnailOnGUI::currentIndex
	int32_t ___currentIndex_5;
	// System.Boolean EveryplayAnimatedThumbnailOnGUI::transitionInProgress
	bool ___transitionInProgress_6;
	// System.Single EveryplayAnimatedThumbnailOnGUI::blend
	float ___blend_7;
	// UnityEngine.Texture EveryplayAnimatedThumbnailOnGUI::bottomTexture
	Texture_t2243626319 * ___bottomTexture_8;
	// UnityEngine.Vector2 EveryplayAnimatedThumbnailOnGUI::bottomTextureScale
	Vector2_t2243707579  ___bottomTextureScale_9;
	// UnityEngine.Vector2 EveryplayAnimatedThumbnailOnGUI::topTextureScale
	Vector2_t2243707579  ___topTextureScale_10;
	// UnityEngine.Texture EveryplayAnimatedThumbnailOnGUI::topTexture
	Texture_t2243626319 * ___topTexture_11;

public:
	inline static int32_t get_offset_of_defaultTexture_2() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnailOnGUI_t1420574672, ___defaultTexture_2)); }
	inline Texture_t2243626319 * get_defaultTexture_2() const { return ___defaultTexture_2; }
	inline Texture_t2243626319 ** get_address_of_defaultTexture_2() { return &___defaultTexture_2; }
	inline void set_defaultTexture_2(Texture_t2243626319 * value)
	{
		___defaultTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___defaultTexture_2, value);
	}

	inline static int32_t get_offset_of_pixelInset_3() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnailOnGUI_t1420574672, ___pixelInset_3)); }
	inline Rect_t3681755626  get_pixelInset_3() const { return ___pixelInset_3; }
	inline Rect_t3681755626 * get_address_of_pixelInset_3() { return &___pixelInset_3; }
	inline void set_pixelInset_3(Rect_t3681755626  value)
	{
		___pixelInset_3 = value;
	}

	inline static int32_t get_offset_of_thumbnailPool_4() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnailOnGUI_t1420574672, ___thumbnailPool_4)); }
	inline EveryplayThumbnailPool_t101914191 * get_thumbnailPool_4() const { return ___thumbnailPool_4; }
	inline EveryplayThumbnailPool_t101914191 ** get_address_of_thumbnailPool_4() { return &___thumbnailPool_4; }
	inline void set_thumbnailPool_4(EveryplayThumbnailPool_t101914191 * value)
	{
		___thumbnailPool_4 = value;
		Il2CppCodeGenWriteBarrier(&___thumbnailPool_4, value);
	}

	inline static int32_t get_offset_of_currentIndex_5() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnailOnGUI_t1420574672, ___currentIndex_5)); }
	inline int32_t get_currentIndex_5() const { return ___currentIndex_5; }
	inline int32_t* get_address_of_currentIndex_5() { return &___currentIndex_5; }
	inline void set_currentIndex_5(int32_t value)
	{
		___currentIndex_5 = value;
	}

	inline static int32_t get_offset_of_transitionInProgress_6() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnailOnGUI_t1420574672, ___transitionInProgress_6)); }
	inline bool get_transitionInProgress_6() const { return ___transitionInProgress_6; }
	inline bool* get_address_of_transitionInProgress_6() { return &___transitionInProgress_6; }
	inline void set_transitionInProgress_6(bool value)
	{
		___transitionInProgress_6 = value;
	}

	inline static int32_t get_offset_of_blend_7() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnailOnGUI_t1420574672, ___blend_7)); }
	inline float get_blend_7() const { return ___blend_7; }
	inline float* get_address_of_blend_7() { return &___blend_7; }
	inline void set_blend_7(float value)
	{
		___blend_7 = value;
	}

	inline static int32_t get_offset_of_bottomTexture_8() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnailOnGUI_t1420574672, ___bottomTexture_8)); }
	inline Texture_t2243626319 * get_bottomTexture_8() const { return ___bottomTexture_8; }
	inline Texture_t2243626319 ** get_address_of_bottomTexture_8() { return &___bottomTexture_8; }
	inline void set_bottomTexture_8(Texture_t2243626319 * value)
	{
		___bottomTexture_8 = value;
		Il2CppCodeGenWriteBarrier(&___bottomTexture_8, value);
	}

	inline static int32_t get_offset_of_bottomTextureScale_9() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnailOnGUI_t1420574672, ___bottomTextureScale_9)); }
	inline Vector2_t2243707579  get_bottomTextureScale_9() const { return ___bottomTextureScale_9; }
	inline Vector2_t2243707579 * get_address_of_bottomTextureScale_9() { return &___bottomTextureScale_9; }
	inline void set_bottomTextureScale_9(Vector2_t2243707579  value)
	{
		___bottomTextureScale_9 = value;
	}

	inline static int32_t get_offset_of_topTextureScale_10() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnailOnGUI_t1420574672, ___topTextureScale_10)); }
	inline Vector2_t2243707579  get_topTextureScale_10() const { return ___topTextureScale_10; }
	inline Vector2_t2243707579 * get_address_of_topTextureScale_10() { return &___topTextureScale_10; }
	inline void set_topTextureScale_10(Vector2_t2243707579  value)
	{
		___topTextureScale_10 = value;
	}

	inline static int32_t get_offset_of_topTexture_11() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnailOnGUI_t1420574672, ___topTexture_11)); }
	inline Texture_t2243626319 * get_topTexture_11() const { return ___topTexture_11; }
	inline Texture_t2243626319 ** get_address_of_topTexture_11() { return &___topTexture_11; }
	inline void set_topTexture_11(Texture_t2243626319 * value)
	{
		___topTexture_11 = value;
		Il2CppCodeGenWriteBarrier(&___topTexture_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
