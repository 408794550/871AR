#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RapidBlurEffect
struct  RapidBlurEffect_t2942743638  : public MonoBehaviour_t1158329972
{
public:
	// System.String RapidBlurEffect::ShaderName
	String_t* ___ShaderName_2;
	// UnityEngine.Shader RapidBlurEffect::CurShader
	Shader_t2430389951 * ___CurShader_3;
	// UnityEngine.Material RapidBlurEffect::CurMaterial
	Material_t193706927 * ___CurMaterial_4;
	// System.Int32 RapidBlurEffect::DownSampleNum
	int32_t ___DownSampleNum_8;
	// System.Single RapidBlurEffect::BlurSpreadSize
	float ___BlurSpreadSize_9;
	// System.Int32 RapidBlurEffect::BlurIterations
	int32_t ___BlurIterations_10;

public:
	inline static int32_t get_offset_of_ShaderName_2() { return static_cast<int32_t>(offsetof(RapidBlurEffect_t2942743638, ___ShaderName_2)); }
	inline String_t* get_ShaderName_2() const { return ___ShaderName_2; }
	inline String_t** get_address_of_ShaderName_2() { return &___ShaderName_2; }
	inline void set_ShaderName_2(String_t* value)
	{
		___ShaderName_2 = value;
		Il2CppCodeGenWriteBarrier(&___ShaderName_2, value);
	}

	inline static int32_t get_offset_of_CurShader_3() { return static_cast<int32_t>(offsetof(RapidBlurEffect_t2942743638, ___CurShader_3)); }
	inline Shader_t2430389951 * get_CurShader_3() const { return ___CurShader_3; }
	inline Shader_t2430389951 ** get_address_of_CurShader_3() { return &___CurShader_3; }
	inline void set_CurShader_3(Shader_t2430389951 * value)
	{
		___CurShader_3 = value;
		Il2CppCodeGenWriteBarrier(&___CurShader_3, value);
	}

	inline static int32_t get_offset_of_CurMaterial_4() { return static_cast<int32_t>(offsetof(RapidBlurEffect_t2942743638, ___CurMaterial_4)); }
	inline Material_t193706927 * get_CurMaterial_4() const { return ___CurMaterial_4; }
	inline Material_t193706927 ** get_address_of_CurMaterial_4() { return &___CurMaterial_4; }
	inline void set_CurMaterial_4(Material_t193706927 * value)
	{
		___CurMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___CurMaterial_4, value);
	}

	inline static int32_t get_offset_of_DownSampleNum_8() { return static_cast<int32_t>(offsetof(RapidBlurEffect_t2942743638, ___DownSampleNum_8)); }
	inline int32_t get_DownSampleNum_8() const { return ___DownSampleNum_8; }
	inline int32_t* get_address_of_DownSampleNum_8() { return &___DownSampleNum_8; }
	inline void set_DownSampleNum_8(int32_t value)
	{
		___DownSampleNum_8 = value;
	}

	inline static int32_t get_offset_of_BlurSpreadSize_9() { return static_cast<int32_t>(offsetof(RapidBlurEffect_t2942743638, ___BlurSpreadSize_9)); }
	inline float get_BlurSpreadSize_9() const { return ___BlurSpreadSize_9; }
	inline float* get_address_of_BlurSpreadSize_9() { return &___BlurSpreadSize_9; }
	inline void set_BlurSpreadSize_9(float value)
	{
		___BlurSpreadSize_9 = value;
	}

	inline static int32_t get_offset_of_BlurIterations_10() { return static_cast<int32_t>(offsetof(RapidBlurEffect_t2942743638, ___BlurIterations_10)); }
	inline int32_t get_BlurIterations_10() const { return ___BlurIterations_10; }
	inline int32_t* get_address_of_BlurIterations_10() { return &___BlurIterations_10; }
	inline void set_BlurIterations_10(int32_t value)
	{
		___BlurIterations_10 = value;
	}
};

struct RapidBlurEffect_t2942743638_StaticFields
{
public:
	// System.Int32 RapidBlurEffect::ChangeValue
	int32_t ___ChangeValue_5;
	// System.Single RapidBlurEffect::ChangeValue2
	float ___ChangeValue2_6;
	// System.Int32 RapidBlurEffect::ChangeValue3
	int32_t ___ChangeValue3_7;

public:
	inline static int32_t get_offset_of_ChangeValue_5() { return static_cast<int32_t>(offsetof(RapidBlurEffect_t2942743638_StaticFields, ___ChangeValue_5)); }
	inline int32_t get_ChangeValue_5() const { return ___ChangeValue_5; }
	inline int32_t* get_address_of_ChangeValue_5() { return &___ChangeValue_5; }
	inline void set_ChangeValue_5(int32_t value)
	{
		___ChangeValue_5 = value;
	}

	inline static int32_t get_offset_of_ChangeValue2_6() { return static_cast<int32_t>(offsetof(RapidBlurEffect_t2942743638_StaticFields, ___ChangeValue2_6)); }
	inline float get_ChangeValue2_6() const { return ___ChangeValue2_6; }
	inline float* get_address_of_ChangeValue2_6() { return &___ChangeValue2_6; }
	inline void set_ChangeValue2_6(float value)
	{
		___ChangeValue2_6 = value;
	}

	inline static int32_t get_offset_of_ChangeValue3_7() { return static_cast<int32_t>(offsetof(RapidBlurEffect_t2942743638_StaticFields, ___ChangeValue3_7)); }
	inline int32_t get_ChangeValue3_7() const { return ___ChangeValue3_7; }
	inline int32_t* get_address_of_ChangeValue3_7() { return &___ChangeValue3_7; }
	inline void set_ChangeValue3_7(int32_t value)
	{
		___ChangeValue3_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
