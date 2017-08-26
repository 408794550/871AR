#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// EveryplayThumbnailPool
struct EveryplayThumbnailPool_t101914191;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Texture
struct Texture_t2243626319;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EveryplayAnimatedThumbnail
struct  EveryplayAnimatedThumbnail_t3478222492  : public MonoBehaviour_t1158329972
{
public:
	// EveryplayThumbnailPool EveryplayAnimatedThumbnail::thumbnailPool
	EveryplayThumbnailPool_t101914191 * ___thumbnailPool_2;
	// UnityEngine.Renderer EveryplayAnimatedThumbnail::mainRenderer
	Renderer_t257310565 * ___mainRenderer_3;
	// UnityEngine.Texture EveryplayAnimatedThumbnail::defaultTexture
	Texture_t2243626319 * ___defaultTexture_4;
	// System.Int32 EveryplayAnimatedThumbnail::currentIndex
	int32_t ___currentIndex_5;
	// System.Boolean EveryplayAnimatedThumbnail::transitionInProgress
	bool ___transitionInProgress_6;
	// System.Single EveryplayAnimatedThumbnail::blend
	float ___blend_7;

public:
	inline static int32_t get_offset_of_thumbnailPool_2() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnail_t3478222492, ___thumbnailPool_2)); }
	inline EveryplayThumbnailPool_t101914191 * get_thumbnailPool_2() const { return ___thumbnailPool_2; }
	inline EveryplayThumbnailPool_t101914191 ** get_address_of_thumbnailPool_2() { return &___thumbnailPool_2; }
	inline void set_thumbnailPool_2(EveryplayThumbnailPool_t101914191 * value)
	{
		___thumbnailPool_2 = value;
		Il2CppCodeGenWriteBarrier(&___thumbnailPool_2, value);
	}

	inline static int32_t get_offset_of_mainRenderer_3() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnail_t3478222492, ___mainRenderer_3)); }
	inline Renderer_t257310565 * get_mainRenderer_3() const { return ___mainRenderer_3; }
	inline Renderer_t257310565 ** get_address_of_mainRenderer_3() { return &___mainRenderer_3; }
	inline void set_mainRenderer_3(Renderer_t257310565 * value)
	{
		___mainRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainRenderer_3, value);
	}

	inline static int32_t get_offset_of_defaultTexture_4() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnail_t3478222492, ___defaultTexture_4)); }
	inline Texture_t2243626319 * get_defaultTexture_4() const { return ___defaultTexture_4; }
	inline Texture_t2243626319 ** get_address_of_defaultTexture_4() { return &___defaultTexture_4; }
	inline void set_defaultTexture_4(Texture_t2243626319 * value)
	{
		___defaultTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultTexture_4, value);
	}

	inline static int32_t get_offset_of_currentIndex_5() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnail_t3478222492, ___currentIndex_5)); }
	inline int32_t get_currentIndex_5() const { return ___currentIndex_5; }
	inline int32_t* get_address_of_currentIndex_5() { return &___currentIndex_5; }
	inline void set_currentIndex_5(int32_t value)
	{
		___currentIndex_5 = value;
	}

	inline static int32_t get_offset_of_transitionInProgress_6() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnail_t3478222492, ___transitionInProgress_6)); }
	inline bool get_transitionInProgress_6() const { return ___transitionInProgress_6; }
	inline bool* get_address_of_transitionInProgress_6() { return &___transitionInProgress_6; }
	inline void set_transitionInProgress_6(bool value)
	{
		___transitionInProgress_6 = value;
	}

	inline static int32_t get_offset_of_blend_7() { return static_cast<int32_t>(offsetof(EveryplayAnimatedThumbnail_t3478222492, ___blend_7)); }
	inline float get_blend_7() const { return ___blend_7; }
	inline float* get_address_of_blend_7() { return &___blend_7; }
	inline void set_blend_7(float value)
	{
		___blend_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
