#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_TextureFormat1386130234.h"
#include "UnityEngine_UnityEngine_TextureWrapMode3683976566.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EveryplayInGameFaceCam
struct  EveryplayInGameFaceCam_t1834897128  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material EveryplayInGameFaceCam::targetMaterial
	Material_t193706927 * ___targetMaterial_2;
	// System.Int32 EveryplayInGameFaceCam::textureSideWidth
	int32_t ___textureSideWidth_3;
	// UnityEngine.TextureFormat EveryplayInGameFaceCam::textureFormat
	int32_t ___textureFormat_4;
	// UnityEngine.TextureWrapMode EveryplayInGameFaceCam::textureWrapMode
	int32_t ___textureWrapMode_5;
	// UnityEngine.Texture EveryplayInGameFaceCam::defaultTexture
	Texture_t2243626319 * ___defaultTexture_6;
	// UnityEngine.Texture2D EveryplayInGameFaceCam::targetTexture
	Texture2D_t3542995729 * ___targetTexture_7;

public:
	inline static int32_t get_offset_of_targetMaterial_2() { return static_cast<int32_t>(offsetof(EveryplayInGameFaceCam_t1834897128, ___targetMaterial_2)); }
	inline Material_t193706927 * get_targetMaterial_2() const { return ___targetMaterial_2; }
	inline Material_t193706927 ** get_address_of_targetMaterial_2() { return &___targetMaterial_2; }
	inline void set_targetMaterial_2(Material_t193706927 * value)
	{
		___targetMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetMaterial_2, value);
	}

	inline static int32_t get_offset_of_textureSideWidth_3() { return static_cast<int32_t>(offsetof(EveryplayInGameFaceCam_t1834897128, ___textureSideWidth_3)); }
	inline int32_t get_textureSideWidth_3() const { return ___textureSideWidth_3; }
	inline int32_t* get_address_of_textureSideWidth_3() { return &___textureSideWidth_3; }
	inline void set_textureSideWidth_3(int32_t value)
	{
		___textureSideWidth_3 = value;
	}

	inline static int32_t get_offset_of_textureFormat_4() { return static_cast<int32_t>(offsetof(EveryplayInGameFaceCam_t1834897128, ___textureFormat_4)); }
	inline int32_t get_textureFormat_4() const { return ___textureFormat_4; }
	inline int32_t* get_address_of_textureFormat_4() { return &___textureFormat_4; }
	inline void set_textureFormat_4(int32_t value)
	{
		___textureFormat_4 = value;
	}

	inline static int32_t get_offset_of_textureWrapMode_5() { return static_cast<int32_t>(offsetof(EveryplayInGameFaceCam_t1834897128, ___textureWrapMode_5)); }
	inline int32_t get_textureWrapMode_5() const { return ___textureWrapMode_5; }
	inline int32_t* get_address_of_textureWrapMode_5() { return &___textureWrapMode_5; }
	inline void set_textureWrapMode_5(int32_t value)
	{
		___textureWrapMode_5 = value;
	}

	inline static int32_t get_offset_of_defaultTexture_6() { return static_cast<int32_t>(offsetof(EveryplayInGameFaceCam_t1834897128, ___defaultTexture_6)); }
	inline Texture_t2243626319 * get_defaultTexture_6() const { return ___defaultTexture_6; }
	inline Texture_t2243626319 ** get_address_of_defaultTexture_6() { return &___defaultTexture_6; }
	inline void set_defaultTexture_6(Texture_t2243626319 * value)
	{
		___defaultTexture_6 = value;
		Il2CppCodeGenWriteBarrier(&___defaultTexture_6, value);
	}

	inline static int32_t get_offset_of_targetTexture_7() { return static_cast<int32_t>(offsetof(EveryplayInGameFaceCam_t1834897128, ___targetTexture_7)); }
	inline Texture2D_t3542995729 * get_targetTexture_7() const { return ___targetTexture_7; }
	inline Texture2D_t3542995729 ** get_address_of_targetTexture_7() { return &___targetTexture_7; }
	inline void set_targetTexture_7(Texture2D_t3542995729 * value)
	{
		___targetTexture_7 = value;
		Il2CppCodeGenWriteBarrier(&___targetTexture_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
