#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects2763871917.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct  ScreenSpaceAmbientOcclusion_t1300254689  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Radius
	float ___m_Radius_2;
	// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SampleCount
	int32_t ___m_SampleCount_3;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_OcclusionIntensity
	float ___m_OcclusionIntensity_4;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Blur
	int32_t ___m_Blur_5;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Downsampling
	int32_t ___m_Downsampling_6;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_OcclusionAttenuation
	float ___m_OcclusionAttenuation_7;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_MinZ
	float ___m_MinZ_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SSAOShader
	Shader_t3191267369 * ___m_SSAOShader_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_SSAOMaterial
	Material_t3870600107 * ___m_SSAOMaterial_10;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_RandomTexture
	Texture2D_t3884108195 * ___m_RandomTexture_11;
	// System.Boolean UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::m_Supported
	bool ___m_Supported_12;

public:
	inline static int32_t get_offset_of_m_Radius_2() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1300254689, ___m_Radius_2)); }
	inline float get_m_Radius_2() const { return ___m_Radius_2; }
	inline float* get_address_of_m_Radius_2() { return &___m_Radius_2; }
	inline void set_m_Radius_2(float value)
	{
		___m_Radius_2 = value;
	}

	inline static int32_t get_offset_of_m_SampleCount_3() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1300254689, ___m_SampleCount_3)); }
	inline int32_t get_m_SampleCount_3() const { return ___m_SampleCount_3; }
	inline int32_t* get_address_of_m_SampleCount_3() { return &___m_SampleCount_3; }
	inline void set_m_SampleCount_3(int32_t value)
	{
		___m_SampleCount_3 = value;
	}

	inline static int32_t get_offset_of_m_OcclusionIntensity_4() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1300254689, ___m_OcclusionIntensity_4)); }
	inline float get_m_OcclusionIntensity_4() const { return ___m_OcclusionIntensity_4; }
	inline float* get_address_of_m_OcclusionIntensity_4() { return &___m_OcclusionIntensity_4; }
	inline void set_m_OcclusionIntensity_4(float value)
	{
		___m_OcclusionIntensity_4 = value;
	}

	inline static int32_t get_offset_of_m_Blur_5() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1300254689, ___m_Blur_5)); }
	inline int32_t get_m_Blur_5() const { return ___m_Blur_5; }
	inline int32_t* get_address_of_m_Blur_5() { return &___m_Blur_5; }
	inline void set_m_Blur_5(int32_t value)
	{
		___m_Blur_5 = value;
	}

	inline static int32_t get_offset_of_m_Downsampling_6() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1300254689, ___m_Downsampling_6)); }
	inline int32_t get_m_Downsampling_6() const { return ___m_Downsampling_6; }
	inline int32_t* get_address_of_m_Downsampling_6() { return &___m_Downsampling_6; }
	inline void set_m_Downsampling_6(int32_t value)
	{
		___m_Downsampling_6 = value;
	}

	inline static int32_t get_offset_of_m_OcclusionAttenuation_7() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1300254689, ___m_OcclusionAttenuation_7)); }
	inline float get_m_OcclusionAttenuation_7() const { return ___m_OcclusionAttenuation_7; }
	inline float* get_address_of_m_OcclusionAttenuation_7() { return &___m_OcclusionAttenuation_7; }
	inline void set_m_OcclusionAttenuation_7(float value)
	{
		___m_OcclusionAttenuation_7 = value;
	}

	inline static int32_t get_offset_of_m_MinZ_8() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1300254689, ___m_MinZ_8)); }
	inline float get_m_MinZ_8() const { return ___m_MinZ_8; }
	inline float* get_address_of_m_MinZ_8() { return &___m_MinZ_8; }
	inline void set_m_MinZ_8(float value)
	{
		___m_MinZ_8 = value;
	}

	inline static int32_t get_offset_of_m_SSAOShader_9() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1300254689, ___m_SSAOShader_9)); }
	inline Shader_t3191267369 * get_m_SSAOShader_9() const { return ___m_SSAOShader_9; }
	inline Shader_t3191267369 ** get_address_of_m_SSAOShader_9() { return &___m_SSAOShader_9; }
	inline void set_m_SSAOShader_9(Shader_t3191267369 * value)
	{
		___m_SSAOShader_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_SSAOShader_9, value);
	}

	inline static int32_t get_offset_of_m_SSAOMaterial_10() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1300254689, ___m_SSAOMaterial_10)); }
	inline Material_t3870600107 * get_m_SSAOMaterial_10() const { return ___m_SSAOMaterial_10; }
	inline Material_t3870600107 ** get_address_of_m_SSAOMaterial_10() { return &___m_SSAOMaterial_10; }
	inline void set_m_SSAOMaterial_10(Material_t3870600107 * value)
	{
		___m_SSAOMaterial_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_SSAOMaterial_10, value);
	}

	inline static int32_t get_offset_of_m_RandomTexture_11() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1300254689, ___m_RandomTexture_11)); }
	inline Texture2D_t3884108195 * get_m_RandomTexture_11() const { return ___m_RandomTexture_11; }
	inline Texture2D_t3884108195 ** get_address_of_m_RandomTexture_11() { return &___m_RandomTexture_11; }
	inline void set_m_RandomTexture_11(Texture2D_t3884108195 * value)
	{
		___m_RandomTexture_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_RandomTexture_11, value);
	}

	inline static int32_t get_offset_of_m_Supported_12() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientOcclusion_t1300254689, ___m_Supported_12)); }
	inline bool get_m_Supported_12() const { return ___m_Supported_12; }
	inline bool* get_address_of_m_Supported_12() { return &___m_Supported_12; }
	inline void set_m_Supported_12(bool value)
	{
		___m_Supported_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
