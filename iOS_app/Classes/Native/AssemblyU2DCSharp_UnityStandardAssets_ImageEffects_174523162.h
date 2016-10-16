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

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects1415309093.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects3341081225.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration
struct  VignetteAndChromaticAberration_t174523162  : public PostEffectsBase_t1415309093
{
public:
	// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::mode
	int32_t ___mode_5;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::intensity
	float ___intensity_6;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromaticAberration
	float ___chromaticAberration_7;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::axialAberration
	float ___axialAberration_8;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blur
	float ___blur_9;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurSpread
	float ___blurSpread_10;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::luminanceDependency
	float ___luminanceDependency_11;
	// System.Single UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::blurDistance
	float ___blurDistance_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::vignetteShader
	Shader_t3191267369 * ___vignetteShader_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::separableBlurShader
	Shader_t3191267369 * ___separableBlurShader_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::chromAberrationShader
	Shader_t3191267369 * ___chromAberrationShader_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_VignetteMaterial
	Material_t3870600107 * ___m_VignetteMaterial_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_SeparableBlurMaterial
	Material_t3870600107 * ___m_SeparableBlurMaterial_17;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration::m_ChromAberrationMaterial
	Material_t3870600107 * ___m_ChromAberrationMaterial_18;

public:
	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_chromaticAberration_7() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___chromaticAberration_7)); }
	inline float get_chromaticAberration_7() const { return ___chromaticAberration_7; }
	inline float* get_address_of_chromaticAberration_7() { return &___chromaticAberration_7; }
	inline void set_chromaticAberration_7(float value)
	{
		___chromaticAberration_7 = value;
	}

	inline static int32_t get_offset_of_axialAberration_8() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___axialAberration_8)); }
	inline float get_axialAberration_8() const { return ___axialAberration_8; }
	inline float* get_address_of_axialAberration_8() { return &___axialAberration_8; }
	inline void set_axialAberration_8(float value)
	{
		___axialAberration_8 = value;
	}

	inline static int32_t get_offset_of_blur_9() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___blur_9)); }
	inline float get_blur_9() const { return ___blur_9; }
	inline float* get_address_of_blur_9() { return &___blur_9; }
	inline void set_blur_9(float value)
	{
		___blur_9 = value;
	}

	inline static int32_t get_offset_of_blurSpread_10() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___blurSpread_10)); }
	inline float get_blurSpread_10() const { return ___blurSpread_10; }
	inline float* get_address_of_blurSpread_10() { return &___blurSpread_10; }
	inline void set_blurSpread_10(float value)
	{
		___blurSpread_10 = value;
	}

	inline static int32_t get_offset_of_luminanceDependency_11() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___luminanceDependency_11)); }
	inline float get_luminanceDependency_11() const { return ___luminanceDependency_11; }
	inline float* get_address_of_luminanceDependency_11() { return &___luminanceDependency_11; }
	inline void set_luminanceDependency_11(float value)
	{
		___luminanceDependency_11 = value;
	}

	inline static int32_t get_offset_of_blurDistance_12() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___blurDistance_12)); }
	inline float get_blurDistance_12() const { return ___blurDistance_12; }
	inline float* get_address_of_blurDistance_12() { return &___blurDistance_12; }
	inline void set_blurDistance_12(float value)
	{
		___blurDistance_12 = value;
	}

	inline static int32_t get_offset_of_vignetteShader_13() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___vignetteShader_13)); }
	inline Shader_t3191267369 * get_vignetteShader_13() const { return ___vignetteShader_13; }
	inline Shader_t3191267369 ** get_address_of_vignetteShader_13() { return &___vignetteShader_13; }
	inline void set_vignetteShader_13(Shader_t3191267369 * value)
	{
		___vignetteShader_13 = value;
		Il2CppCodeGenWriteBarrier(&___vignetteShader_13, value);
	}

	inline static int32_t get_offset_of_separableBlurShader_14() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___separableBlurShader_14)); }
	inline Shader_t3191267369 * get_separableBlurShader_14() const { return ___separableBlurShader_14; }
	inline Shader_t3191267369 ** get_address_of_separableBlurShader_14() { return &___separableBlurShader_14; }
	inline void set_separableBlurShader_14(Shader_t3191267369 * value)
	{
		___separableBlurShader_14 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurShader_14, value);
	}

	inline static int32_t get_offset_of_chromAberrationShader_15() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___chromAberrationShader_15)); }
	inline Shader_t3191267369 * get_chromAberrationShader_15() const { return ___chromAberrationShader_15; }
	inline Shader_t3191267369 ** get_address_of_chromAberrationShader_15() { return &___chromAberrationShader_15; }
	inline void set_chromAberrationShader_15(Shader_t3191267369 * value)
	{
		___chromAberrationShader_15 = value;
		Il2CppCodeGenWriteBarrier(&___chromAberrationShader_15, value);
	}

	inline static int32_t get_offset_of_m_VignetteMaterial_16() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___m_VignetteMaterial_16)); }
	inline Material_t3870600107 * get_m_VignetteMaterial_16() const { return ___m_VignetteMaterial_16; }
	inline Material_t3870600107 ** get_address_of_m_VignetteMaterial_16() { return &___m_VignetteMaterial_16; }
	inline void set_m_VignetteMaterial_16(Material_t3870600107 * value)
	{
		___m_VignetteMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_VignetteMaterial_16, value);
	}

	inline static int32_t get_offset_of_m_SeparableBlurMaterial_17() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___m_SeparableBlurMaterial_17)); }
	inline Material_t3870600107 * get_m_SeparableBlurMaterial_17() const { return ___m_SeparableBlurMaterial_17; }
	inline Material_t3870600107 ** get_address_of_m_SeparableBlurMaterial_17() { return &___m_SeparableBlurMaterial_17; }
	inline void set_m_SeparableBlurMaterial_17(Material_t3870600107 * value)
	{
		___m_SeparableBlurMaterial_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_SeparableBlurMaterial_17, value);
	}

	inline static int32_t get_offset_of_m_ChromAberrationMaterial_18() { return static_cast<int32_t>(offsetof(VignetteAndChromaticAberration_t174523162, ___m_ChromAberrationMaterial_18)); }
	inline Material_t3870600107 * get_m_ChromAberrationMaterial_18() const { return ___m_ChromAberrationMaterial_18; }
	inline Material_t3870600107 ** get_address_of_m_ChromAberrationMaterial_18() { return &___m_ChromAberrationMaterial_18; }
	inline void set_m_ChromAberrationMaterial_18(Material_t3870600107 * value)
	{
		___m_ChromAberrationMaterial_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_ChromAberrationMaterial_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
