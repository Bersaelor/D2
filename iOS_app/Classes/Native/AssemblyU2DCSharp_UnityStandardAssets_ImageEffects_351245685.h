#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects1415309093.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects2627308469.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects1277121599.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_B59984938.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_335996342.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects2339122139.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Bloom
struct  Bloom_t351245685  : public PostEffectsBase_t1415309093
{
public:
	// UnityStandardAssets.ImageEffects.Bloom/TweakMode UnityStandardAssets.ImageEffects.Bloom::tweakMode
	int32_t ___tweakMode_5;
	// UnityStandardAssets.ImageEffects.Bloom/BloomScreenBlendMode UnityStandardAssets.ImageEffects.Bloom::screenBlendMode
	int32_t ___screenBlendMode_6;
	// UnityStandardAssets.ImageEffects.Bloom/HDRBloomMode UnityStandardAssets.ImageEffects.Bloom::hdr
	int32_t ___hdr_7;
	// System.Boolean UnityStandardAssets.ImageEffects.Bloom::doHdr
	bool ___doHdr_8;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::sepBlurSpread
	float ___sepBlurSpread_9;
	// UnityStandardAssets.ImageEffects.Bloom/BloomQuality UnityStandardAssets.ImageEffects.Bloom::quality
	int32_t ___quality_10;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomIntensity
	float ___bloomIntensity_11;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::bloomThreshold
	float ___bloomThreshold_12;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::bloomThresholdColor
	Color_t4194546905  ___bloomThresholdColor_13;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::bloomBlurIterations
	int32_t ___bloomBlurIterations_14;
	// System.Int32 UnityStandardAssets.ImageEffects.Bloom::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_15;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::flareRotation
	float ___flareRotation_16;
	// UnityStandardAssets.ImageEffects.Bloom/LensFlareStyle UnityStandardAssets.ImageEffects.Bloom::lensflareMode
	int32_t ___lensflareMode_17;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::hollyStretchWidth
	float ___hollyStretchWidth_18;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareIntensity
	float ___lensflareIntensity_19;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensflareThreshold
	float ___lensflareThreshold_20;
	// System.Single UnityStandardAssets.ImageEffects.Bloom::lensFlareSaturation
	float ___lensFlareSaturation_21;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorA
	Color_t4194546905  ___flareColorA_22;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorB
	Color_t4194546905  ___flareColorB_23;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorC
	Color_t4194546905  ___flareColorC_24;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.Bloom::flareColorD
	Color_t4194546905  ___flareColorD_25;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Bloom::lensFlareVignetteMask
	Texture2D_t3884108195 * ___lensFlareVignetteMask_26;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::lensFlareShader
	Shader_t3191267369 * ___lensFlareShader_27;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::lensFlareMaterial
	Material_t3870600107 * ___lensFlareMaterial_28;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::screenBlendShader
	Shader_t3191267369 * ___screenBlendShader_29;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::screenBlend
	Material_t3870600107 * ___screenBlend_30;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresShader
	Shader_t3191267369 * ___blurAndFlaresShader_31;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::blurAndFlaresMaterial
	Material_t3870600107 * ___blurAndFlaresMaterial_32;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Bloom::brightPassFilterShader
	Shader_t3191267369 * ___brightPassFilterShader_33;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Bloom::brightPassFilterMaterial
	Material_t3870600107 * ___brightPassFilterMaterial_34;

public:
	inline static int32_t get_offset_of_tweakMode_5() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___tweakMode_5)); }
	inline int32_t get_tweakMode_5() const { return ___tweakMode_5; }
	inline int32_t* get_address_of_tweakMode_5() { return &___tweakMode_5; }
	inline void set_tweakMode_5(int32_t value)
	{
		___tweakMode_5 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_6() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___screenBlendMode_6)); }
	inline int32_t get_screenBlendMode_6() const { return ___screenBlendMode_6; }
	inline int32_t* get_address_of_screenBlendMode_6() { return &___screenBlendMode_6; }
	inline void set_screenBlendMode_6(int32_t value)
	{
		___screenBlendMode_6 = value;
	}

	inline static int32_t get_offset_of_hdr_7() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___hdr_7)); }
	inline int32_t get_hdr_7() const { return ___hdr_7; }
	inline int32_t* get_address_of_hdr_7() { return &___hdr_7; }
	inline void set_hdr_7(int32_t value)
	{
		___hdr_7 = value;
	}

	inline static int32_t get_offset_of_doHdr_8() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___doHdr_8)); }
	inline bool get_doHdr_8() const { return ___doHdr_8; }
	inline bool* get_address_of_doHdr_8() { return &___doHdr_8; }
	inline void set_doHdr_8(bool value)
	{
		___doHdr_8 = value;
	}

	inline static int32_t get_offset_of_sepBlurSpread_9() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___sepBlurSpread_9)); }
	inline float get_sepBlurSpread_9() const { return ___sepBlurSpread_9; }
	inline float* get_address_of_sepBlurSpread_9() { return &___sepBlurSpread_9; }
	inline void set_sepBlurSpread_9(float value)
	{
		___sepBlurSpread_9 = value;
	}

	inline static int32_t get_offset_of_quality_10() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___quality_10)); }
	inline int32_t get_quality_10() const { return ___quality_10; }
	inline int32_t* get_address_of_quality_10() { return &___quality_10; }
	inline void set_quality_10(int32_t value)
	{
		___quality_10 = value;
	}

	inline static int32_t get_offset_of_bloomIntensity_11() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___bloomIntensity_11)); }
	inline float get_bloomIntensity_11() const { return ___bloomIntensity_11; }
	inline float* get_address_of_bloomIntensity_11() { return &___bloomIntensity_11; }
	inline void set_bloomIntensity_11(float value)
	{
		___bloomIntensity_11 = value;
	}

	inline static int32_t get_offset_of_bloomThreshold_12() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___bloomThreshold_12)); }
	inline float get_bloomThreshold_12() const { return ___bloomThreshold_12; }
	inline float* get_address_of_bloomThreshold_12() { return &___bloomThreshold_12; }
	inline void set_bloomThreshold_12(float value)
	{
		___bloomThreshold_12 = value;
	}

	inline static int32_t get_offset_of_bloomThresholdColor_13() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___bloomThresholdColor_13)); }
	inline Color_t4194546905  get_bloomThresholdColor_13() const { return ___bloomThresholdColor_13; }
	inline Color_t4194546905 * get_address_of_bloomThresholdColor_13() { return &___bloomThresholdColor_13; }
	inline void set_bloomThresholdColor_13(Color_t4194546905  value)
	{
		___bloomThresholdColor_13 = value;
	}

	inline static int32_t get_offset_of_bloomBlurIterations_14() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___bloomBlurIterations_14)); }
	inline int32_t get_bloomBlurIterations_14() const { return ___bloomBlurIterations_14; }
	inline int32_t* get_address_of_bloomBlurIterations_14() { return &___bloomBlurIterations_14; }
	inline void set_bloomBlurIterations_14(int32_t value)
	{
		___bloomBlurIterations_14 = value;
	}

	inline static int32_t get_offset_of_hollywoodFlareBlurIterations_15() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___hollywoodFlareBlurIterations_15)); }
	inline int32_t get_hollywoodFlareBlurIterations_15() const { return ___hollywoodFlareBlurIterations_15; }
	inline int32_t* get_address_of_hollywoodFlareBlurIterations_15() { return &___hollywoodFlareBlurIterations_15; }
	inline void set_hollywoodFlareBlurIterations_15(int32_t value)
	{
		___hollywoodFlareBlurIterations_15 = value;
	}

	inline static int32_t get_offset_of_flareRotation_16() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___flareRotation_16)); }
	inline float get_flareRotation_16() const { return ___flareRotation_16; }
	inline float* get_address_of_flareRotation_16() { return &___flareRotation_16; }
	inline void set_flareRotation_16(float value)
	{
		___flareRotation_16 = value;
	}

	inline static int32_t get_offset_of_lensflareMode_17() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___lensflareMode_17)); }
	inline int32_t get_lensflareMode_17() const { return ___lensflareMode_17; }
	inline int32_t* get_address_of_lensflareMode_17() { return &___lensflareMode_17; }
	inline void set_lensflareMode_17(int32_t value)
	{
		___lensflareMode_17 = value;
	}

	inline static int32_t get_offset_of_hollyStretchWidth_18() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___hollyStretchWidth_18)); }
	inline float get_hollyStretchWidth_18() const { return ___hollyStretchWidth_18; }
	inline float* get_address_of_hollyStretchWidth_18() { return &___hollyStretchWidth_18; }
	inline void set_hollyStretchWidth_18(float value)
	{
		___hollyStretchWidth_18 = value;
	}

	inline static int32_t get_offset_of_lensflareIntensity_19() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___lensflareIntensity_19)); }
	inline float get_lensflareIntensity_19() const { return ___lensflareIntensity_19; }
	inline float* get_address_of_lensflareIntensity_19() { return &___lensflareIntensity_19; }
	inline void set_lensflareIntensity_19(float value)
	{
		___lensflareIntensity_19 = value;
	}

	inline static int32_t get_offset_of_lensflareThreshold_20() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___lensflareThreshold_20)); }
	inline float get_lensflareThreshold_20() const { return ___lensflareThreshold_20; }
	inline float* get_address_of_lensflareThreshold_20() { return &___lensflareThreshold_20; }
	inline void set_lensflareThreshold_20(float value)
	{
		___lensflareThreshold_20 = value;
	}

	inline static int32_t get_offset_of_lensFlareSaturation_21() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___lensFlareSaturation_21)); }
	inline float get_lensFlareSaturation_21() const { return ___lensFlareSaturation_21; }
	inline float* get_address_of_lensFlareSaturation_21() { return &___lensFlareSaturation_21; }
	inline void set_lensFlareSaturation_21(float value)
	{
		___lensFlareSaturation_21 = value;
	}

	inline static int32_t get_offset_of_flareColorA_22() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___flareColorA_22)); }
	inline Color_t4194546905  get_flareColorA_22() const { return ___flareColorA_22; }
	inline Color_t4194546905 * get_address_of_flareColorA_22() { return &___flareColorA_22; }
	inline void set_flareColorA_22(Color_t4194546905  value)
	{
		___flareColorA_22 = value;
	}

	inline static int32_t get_offset_of_flareColorB_23() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___flareColorB_23)); }
	inline Color_t4194546905  get_flareColorB_23() const { return ___flareColorB_23; }
	inline Color_t4194546905 * get_address_of_flareColorB_23() { return &___flareColorB_23; }
	inline void set_flareColorB_23(Color_t4194546905  value)
	{
		___flareColorB_23 = value;
	}

	inline static int32_t get_offset_of_flareColorC_24() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___flareColorC_24)); }
	inline Color_t4194546905  get_flareColorC_24() const { return ___flareColorC_24; }
	inline Color_t4194546905 * get_address_of_flareColorC_24() { return &___flareColorC_24; }
	inline void set_flareColorC_24(Color_t4194546905  value)
	{
		___flareColorC_24 = value;
	}

	inline static int32_t get_offset_of_flareColorD_25() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___flareColorD_25)); }
	inline Color_t4194546905  get_flareColorD_25() const { return ___flareColorD_25; }
	inline Color_t4194546905 * get_address_of_flareColorD_25() { return &___flareColorD_25; }
	inline void set_flareColorD_25(Color_t4194546905  value)
	{
		___flareColorD_25 = value;
	}

	inline static int32_t get_offset_of_lensFlareVignetteMask_26() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___lensFlareVignetteMask_26)); }
	inline Texture2D_t3884108195 * get_lensFlareVignetteMask_26() const { return ___lensFlareVignetteMask_26; }
	inline Texture2D_t3884108195 ** get_address_of_lensFlareVignetteMask_26() { return &___lensFlareVignetteMask_26; }
	inline void set_lensFlareVignetteMask_26(Texture2D_t3884108195 * value)
	{
		___lensFlareVignetteMask_26 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareVignetteMask_26, value);
	}

	inline static int32_t get_offset_of_lensFlareShader_27() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___lensFlareShader_27)); }
	inline Shader_t3191267369 * get_lensFlareShader_27() const { return ___lensFlareShader_27; }
	inline Shader_t3191267369 ** get_address_of_lensFlareShader_27() { return &___lensFlareShader_27; }
	inline void set_lensFlareShader_27(Shader_t3191267369 * value)
	{
		___lensFlareShader_27 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareShader_27, value);
	}

	inline static int32_t get_offset_of_lensFlareMaterial_28() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___lensFlareMaterial_28)); }
	inline Material_t3870600107 * get_lensFlareMaterial_28() const { return ___lensFlareMaterial_28; }
	inline Material_t3870600107 ** get_address_of_lensFlareMaterial_28() { return &___lensFlareMaterial_28; }
	inline void set_lensFlareMaterial_28(Material_t3870600107 * value)
	{
		___lensFlareMaterial_28 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareMaterial_28, value);
	}

	inline static int32_t get_offset_of_screenBlendShader_29() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___screenBlendShader_29)); }
	inline Shader_t3191267369 * get_screenBlendShader_29() const { return ___screenBlendShader_29; }
	inline Shader_t3191267369 ** get_address_of_screenBlendShader_29() { return &___screenBlendShader_29; }
	inline void set_screenBlendShader_29(Shader_t3191267369 * value)
	{
		___screenBlendShader_29 = value;
		Il2CppCodeGenWriteBarrier(&___screenBlendShader_29, value);
	}

	inline static int32_t get_offset_of_screenBlend_30() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___screenBlend_30)); }
	inline Material_t3870600107 * get_screenBlend_30() const { return ___screenBlend_30; }
	inline Material_t3870600107 ** get_address_of_screenBlend_30() { return &___screenBlend_30; }
	inline void set_screenBlend_30(Material_t3870600107 * value)
	{
		___screenBlend_30 = value;
		Il2CppCodeGenWriteBarrier(&___screenBlend_30, value);
	}

	inline static int32_t get_offset_of_blurAndFlaresShader_31() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___blurAndFlaresShader_31)); }
	inline Shader_t3191267369 * get_blurAndFlaresShader_31() const { return ___blurAndFlaresShader_31; }
	inline Shader_t3191267369 ** get_address_of_blurAndFlaresShader_31() { return &___blurAndFlaresShader_31; }
	inline void set_blurAndFlaresShader_31(Shader_t3191267369 * value)
	{
		___blurAndFlaresShader_31 = value;
		Il2CppCodeGenWriteBarrier(&___blurAndFlaresShader_31, value);
	}

	inline static int32_t get_offset_of_blurAndFlaresMaterial_32() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___blurAndFlaresMaterial_32)); }
	inline Material_t3870600107 * get_blurAndFlaresMaterial_32() const { return ___blurAndFlaresMaterial_32; }
	inline Material_t3870600107 ** get_address_of_blurAndFlaresMaterial_32() { return &___blurAndFlaresMaterial_32; }
	inline void set_blurAndFlaresMaterial_32(Material_t3870600107 * value)
	{
		___blurAndFlaresMaterial_32 = value;
		Il2CppCodeGenWriteBarrier(&___blurAndFlaresMaterial_32, value);
	}

	inline static int32_t get_offset_of_brightPassFilterShader_33() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___brightPassFilterShader_33)); }
	inline Shader_t3191267369 * get_brightPassFilterShader_33() const { return ___brightPassFilterShader_33; }
	inline Shader_t3191267369 ** get_address_of_brightPassFilterShader_33() { return &___brightPassFilterShader_33; }
	inline void set_brightPassFilterShader_33(Shader_t3191267369 * value)
	{
		___brightPassFilterShader_33 = value;
		Il2CppCodeGenWriteBarrier(&___brightPassFilterShader_33, value);
	}

	inline static int32_t get_offset_of_brightPassFilterMaterial_34() { return static_cast<int32_t>(offsetof(Bloom_t351245685, ___brightPassFilterMaterial_34)); }
	inline Material_t3870600107 * get_brightPassFilterMaterial_34() const { return ___brightPassFilterMaterial_34; }
	inline Material_t3870600107 ** get_address_of_brightPassFilterMaterial_34() { return &___brightPassFilterMaterial_34; }
	inline void set_brightPassFilterMaterial_34(Material_t3870600107 * value)
	{
		___brightPassFilterMaterial_34 = value;
		Il2CppCodeGenWriteBarrier(&___brightPassFilterMaterial_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
