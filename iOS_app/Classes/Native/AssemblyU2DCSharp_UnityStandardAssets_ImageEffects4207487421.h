#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.NoiseAndScratches
struct  NoiseAndScratches_t4207487421  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndScratches::monochrome
	bool ___monochrome_2;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndScratches::rgbFallback
	bool ___rgbFallback_3;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainIntensityMin
	float ___grainIntensityMin_4;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainIntensityMax
	float ___grainIntensityMax_5;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainSize
	float ___grainSize_6;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchIntensityMin
	float ___scratchIntensityMin_7;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchIntensityMax
	float ___scratchIntensityMax_8;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchFPS
	float ___scratchFPS_9;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchJitter
	float ___scratchJitter_10;
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.NoiseAndScratches::grainTexture
	Texture_t2526458961 * ___grainTexture_11;
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchTexture
	Texture_t2526458961 * ___scratchTexture_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndScratches::shaderRGB
	Shader_t3191267369 * ___shaderRGB_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndScratches::shaderYUV
	Shader_t3191267369 * ___shaderYUV_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::m_MaterialRGB
	Material_t3870600107 * ___m_MaterialRGB_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::m_MaterialYUV
	Material_t3870600107 * ___m_MaterialYUV_16;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchTimeLeft
	float ___scratchTimeLeft_17;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchX
	float ___scratchX_18;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchY
	float ___scratchY_19;

public:
	inline static int32_t get_offset_of_monochrome_2() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___monochrome_2)); }
	inline bool get_monochrome_2() const { return ___monochrome_2; }
	inline bool* get_address_of_monochrome_2() { return &___monochrome_2; }
	inline void set_monochrome_2(bool value)
	{
		___monochrome_2 = value;
	}

	inline static int32_t get_offset_of_rgbFallback_3() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___rgbFallback_3)); }
	inline bool get_rgbFallback_3() const { return ___rgbFallback_3; }
	inline bool* get_address_of_rgbFallback_3() { return &___rgbFallback_3; }
	inline void set_rgbFallback_3(bool value)
	{
		___rgbFallback_3 = value;
	}

	inline static int32_t get_offset_of_grainIntensityMin_4() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___grainIntensityMin_4)); }
	inline float get_grainIntensityMin_4() const { return ___grainIntensityMin_4; }
	inline float* get_address_of_grainIntensityMin_4() { return &___grainIntensityMin_4; }
	inline void set_grainIntensityMin_4(float value)
	{
		___grainIntensityMin_4 = value;
	}

	inline static int32_t get_offset_of_grainIntensityMax_5() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___grainIntensityMax_5)); }
	inline float get_grainIntensityMax_5() const { return ___grainIntensityMax_5; }
	inline float* get_address_of_grainIntensityMax_5() { return &___grainIntensityMax_5; }
	inline void set_grainIntensityMax_5(float value)
	{
		___grainIntensityMax_5 = value;
	}

	inline static int32_t get_offset_of_grainSize_6() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___grainSize_6)); }
	inline float get_grainSize_6() const { return ___grainSize_6; }
	inline float* get_address_of_grainSize_6() { return &___grainSize_6; }
	inline void set_grainSize_6(float value)
	{
		___grainSize_6 = value;
	}

	inline static int32_t get_offset_of_scratchIntensityMin_7() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___scratchIntensityMin_7)); }
	inline float get_scratchIntensityMin_7() const { return ___scratchIntensityMin_7; }
	inline float* get_address_of_scratchIntensityMin_7() { return &___scratchIntensityMin_7; }
	inline void set_scratchIntensityMin_7(float value)
	{
		___scratchIntensityMin_7 = value;
	}

	inline static int32_t get_offset_of_scratchIntensityMax_8() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___scratchIntensityMax_8)); }
	inline float get_scratchIntensityMax_8() const { return ___scratchIntensityMax_8; }
	inline float* get_address_of_scratchIntensityMax_8() { return &___scratchIntensityMax_8; }
	inline void set_scratchIntensityMax_8(float value)
	{
		___scratchIntensityMax_8 = value;
	}

	inline static int32_t get_offset_of_scratchFPS_9() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___scratchFPS_9)); }
	inline float get_scratchFPS_9() const { return ___scratchFPS_9; }
	inline float* get_address_of_scratchFPS_9() { return &___scratchFPS_9; }
	inline void set_scratchFPS_9(float value)
	{
		___scratchFPS_9 = value;
	}

	inline static int32_t get_offset_of_scratchJitter_10() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___scratchJitter_10)); }
	inline float get_scratchJitter_10() const { return ___scratchJitter_10; }
	inline float* get_address_of_scratchJitter_10() { return &___scratchJitter_10; }
	inline void set_scratchJitter_10(float value)
	{
		___scratchJitter_10 = value;
	}

	inline static int32_t get_offset_of_grainTexture_11() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___grainTexture_11)); }
	inline Texture_t2526458961 * get_grainTexture_11() const { return ___grainTexture_11; }
	inline Texture_t2526458961 ** get_address_of_grainTexture_11() { return &___grainTexture_11; }
	inline void set_grainTexture_11(Texture_t2526458961 * value)
	{
		___grainTexture_11 = value;
		Il2CppCodeGenWriteBarrier(&___grainTexture_11, value);
	}

	inline static int32_t get_offset_of_scratchTexture_12() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___scratchTexture_12)); }
	inline Texture_t2526458961 * get_scratchTexture_12() const { return ___scratchTexture_12; }
	inline Texture_t2526458961 ** get_address_of_scratchTexture_12() { return &___scratchTexture_12; }
	inline void set_scratchTexture_12(Texture_t2526458961 * value)
	{
		___scratchTexture_12 = value;
		Il2CppCodeGenWriteBarrier(&___scratchTexture_12, value);
	}

	inline static int32_t get_offset_of_shaderRGB_13() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___shaderRGB_13)); }
	inline Shader_t3191267369 * get_shaderRGB_13() const { return ___shaderRGB_13; }
	inline Shader_t3191267369 ** get_address_of_shaderRGB_13() { return &___shaderRGB_13; }
	inline void set_shaderRGB_13(Shader_t3191267369 * value)
	{
		___shaderRGB_13 = value;
		Il2CppCodeGenWriteBarrier(&___shaderRGB_13, value);
	}

	inline static int32_t get_offset_of_shaderYUV_14() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___shaderYUV_14)); }
	inline Shader_t3191267369 * get_shaderYUV_14() const { return ___shaderYUV_14; }
	inline Shader_t3191267369 ** get_address_of_shaderYUV_14() { return &___shaderYUV_14; }
	inline void set_shaderYUV_14(Shader_t3191267369 * value)
	{
		___shaderYUV_14 = value;
		Il2CppCodeGenWriteBarrier(&___shaderYUV_14, value);
	}

	inline static int32_t get_offset_of_m_MaterialRGB_15() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___m_MaterialRGB_15)); }
	inline Material_t3870600107 * get_m_MaterialRGB_15() const { return ___m_MaterialRGB_15; }
	inline Material_t3870600107 ** get_address_of_m_MaterialRGB_15() { return &___m_MaterialRGB_15; }
	inline void set_m_MaterialRGB_15(Material_t3870600107 * value)
	{
		___m_MaterialRGB_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_MaterialRGB_15, value);
	}

	inline static int32_t get_offset_of_m_MaterialYUV_16() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___m_MaterialYUV_16)); }
	inline Material_t3870600107 * get_m_MaterialYUV_16() const { return ___m_MaterialYUV_16; }
	inline Material_t3870600107 ** get_address_of_m_MaterialYUV_16() { return &___m_MaterialYUV_16; }
	inline void set_m_MaterialYUV_16(Material_t3870600107 * value)
	{
		___m_MaterialYUV_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_MaterialYUV_16, value);
	}

	inline static int32_t get_offset_of_scratchTimeLeft_17() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___scratchTimeLeft_17)); }
	inline float get_scratchTimeLeft_17() const { return ___scratchTimeLeft_17; }
	inline float* get_address_of_scratchTimeLeft_17() { return &___scratchTimeLeft_17; }
	inline void set_scratchTimeLeft_17(float value)
	{
		___scratchTimeLeft_17 = value;
	}

	inline static int32_t get_offset_of_scratchX_18() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___scratchX_18)); }
	inline float get_scratchX_18() const { return ___scratchX_18; }
	inline float* get_address_of_scratchX_18() { return &___scratchX_18; }
	inline void set_scratchX_18(float value)
	{
		___scratchX_18 = value;
	}

	inline static int32_t get_offset_of_scratchY_19() { return static_cast<int32_t>(offsetof(NoiseAndScratches_t4207487421, ___scratchY_19)); }
	inline float get_scratchY_19() const { return ___scratchY_19; }
	inline float* get_address_of_scratchY_19() { return &___scratchY_19; }
	inline void set_scratchY_19(float value)
	{
		___scratchY_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
