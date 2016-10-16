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
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects2836510274.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_354636755.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects_220225470.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects1464032496.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BloomAndFlares
struct  BloomAndFlares_t1631335591  : public PostEffectsBase_t1415309093
{
public:
	// UnityStandardAssets.ImageEffects.TweakMode34 UnityStandardAssets.ImageEffects.BloomAndFlares::tweakMode
	int32_t ___tweakMode_5;
	// UnityStandardAssets.ImageEffects.BloomScreenBlendMode UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlendMode
	int32_t ___screenBlendMode_6;
	// UnityStandardAssets.ImageEffects.HDRBloomMode UnityStandardAssets.ImageEffects.BloomAndFlares::hdr
	int32_t ___hdr_7;
	// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::doHdr
	bool ___doHdr_8;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::sepBlurSpread
	float ___sepBlurSpread_9;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::useSrcAlphaAsMask
	float ___useSrcAlphaAsMask_10;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::bloomIntensity
	float ___bloomIntensity_11;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::bloomThreshold
	float ___bloomThreshold_12;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomAndFlares::bloomBlurIterations
	int32_t ___bloomBlurIterations_13;
	// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::lensflares
	bool ___lensflares_14;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlareBlurIterations
	int32_t ___hollywoodFlareBlurIterations_15;
	// UnityStandardAssets.ImageEffects.LensflareStyle34 UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareMode
	int32_t ___lensflareMode_16;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::hollyStretchWidth
	float ___hollyStretchWidth_17;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareIntensity
	float ___lensflareIntensity_18;
	// System.Single UnityStandardAssets.ImageEffects.BloomAndFlares::lensflareThreshold
	float ___lensflareThreshold_19;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorA
	Color_t4194546905  ___flareColorA_20;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorB
	Color_t4194546905  ___flareColorB_21;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorC
	Color_t4194546905  ___flareColorC_22;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.BloomAndFlares::flareColorD
	Color_t4194546905  ___flareColorD_23;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareVignetteMask
	Texture2D_t3884108195 * ___lensFlareVignetteMask_24;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareShader
	Shader_t3191267369 * ___lensFlareShader_25;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::lensFlareMaterial
	Material_t3870600107 * ___lensFlareMaterial_26;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::vignetteShader
	Shader_t3191267369 * ___vignetteShader_27;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::vignetteMaterial
	Material_t3870600107 * ___vignetteMaterial_28;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::separableBlurShader
	Shader_t3191267369 * ___separableBlurShader_29;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::separableBlurMaterial
	Material_t3870600107 * ___separableBlurMaterial_30;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::addBrightStuffOneOneShader
	Shader_t3191267369 * ___addBrightStuffOneOneShader_31;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::addBrightStuffBlendOneOneMaterial
	Material_t3870600107 * ___addBrightStuffBlendOneOneMaterial_32;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlendShader
	Shader_t3191267369 * ___screenBlendShader_33;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::screenBlend
	Material_t3870600107 * ___screenBlend_34;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlaresShader
	Shader_t3191267369 * ___hollywoodFlaresShader_35;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::hollywoodFlaresMaterial
	Material_t3870600107 * ___hollywoodFlaresMaterial_36;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomAndFlares::brightPassFilterShader
	Shader_t3191267369 * ___brightPassFilterShader_37;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomAndFlares::brightPassFilterMaterial
	Material_t3870600107 * ___brightPassFilterMaterial_38;

public:
	inline static int32_t get_offset_of_tweakMode_5() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___tweakMode_5)); }
	inline int32_t get_tweakMode_5() const { return ___tweakMode_5; }
	inline int32_t* get_address_of_tweakMode_5() { return &___tweakMode_5; }
	inline void set_tweakMode_5(int32_t value)
	{
		___tweakMode_5 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_6() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___screenBlendMode_6)); }
	inline int32_t get_screenBlendMode_6() const { return ___screenBlendMode_6; }
	inline int32_t* get_address_of_screenBlendMode_6() { return &___screenBlendMode_6; }
	inline void set_screenBlendMode_6(int32_t value)
	{
		___screenBlendMode_6 = value;
	}

	inline static int32_t get_offset_of_hdr_7() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___hdr_7)); }
	inline int32_t get_hdr_7() const { return ___hdr_7; }
	inline int32_t* get_address_of_hdr_7() { return &___hdr_7; }
	inline void set_hdr_7(int32_t value)
	{
		___hdr_7 = value;
	}

	inline static int32_t get_offset_of_doHdr_8() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___doHdr_8)); }
	inline bool get_doHdr_8() const { return ___doHdr_8; }
	inline bool* get_address_of_doHdr_8() { return &___doHdr_8; }
	inline void set_doHdr_8(bool value)
	{
		___doHdr_8 = value;
	}

	inline static int32_t get_offset_of_sepBlurSpread_9() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___sepBlurSpread_9)); }
	inline float get_sepBlurSpread_9() const { return ___sepBlurSpread_9; }
	inline float* get_address_of_sepBlurSpread_9() { return &___sepBlurSpread_9; }
	inline void set_sepBlurSpread_9(float value)
	{
		___sepBlurSpread_9 = value;
	}

	inline static int32_t get_offset_of_useSrcAlphaAsMask_10() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___useSrcAlphaAsMask_10)); }
	inline float get_useSrcAlphaAsMask_10() const { return ___useSrcAlphaAsMask_10; }
	inline float* get_address_of_useSrcAlphaAsMask_10() { return &___useSrcAlphaAsMask_10; }
	inline void set_useSrcAlphaAsMask_10(float value)
	{
		___useSrcAlphaAsMask_10 = value;
	}

	inline static int32_t get_offset_of_bloomIntensity_11() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___bloomIntensity_11)); }
	inline float get_bloomIntensity_11() const { return ___bloomIntensity_11; }
	inline float* get_address_of_bloomIntensity_11() { return &___bloomIntensity_11; }
	inline void set_bloomIntensity_11(float value)
	{
		___bloomIntensity_11 = value;
	}

	inline static int32_t get_offset_of_bloomThreshold_12() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___bloomThreshold_12)); }
	inline float get_bloomThreshold_12() const { return ___bloomThreshold_12; }
	inline float* get_address_of_bloomThreshold_12() { return &___bloomThreshold_12; }
	inline void set_bloomThreshold_12(float value)
	{
		___bloomThreshold_12 = value;
	}

	inline static int32_t get_offset_of_bloomBlurIterations_13() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___bloomBlurIterations_13)); }
	inline int32_t get_bloomBlurIterations_13() const { return ___bloomBlurIterations_13; }
	inline int32_t* get_address_of_bloomBlurIterations_13() { return &___bloomBlurIterations_13; }
	inline void set_bloomBlurIterations_13(int32_t value)
	{
		___bloomBlurIterations_13 = value;
	}

	inline static int32_t get_offset_of_lensflares_14() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___lensflares_14)); }
	inline bool get_lensflares_14() const { return ___lensflares_14; }
	inline bool* get_address_of_lensflares_14() { return &___lensflares_14; }
	inline void set_lensflares_14(bool value)
	{
		___lensflares_14 = value;
	}

	inline static int32_t get_offset_of_hollywoodFlareBlurIterations_15() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___hollywoodFlareBlurIterations_15)); }
	inline int32_t get_hollywoodFlareBlurIterations_15() const { return ___hollywoodFlareBlurIterations_15; }
	inline int32_t* get_address_of_hollywoodFlareBlurIterations_15() { return &___hollywoodFlareBlurIterations_15; }
	inline void set_hollywoodFlareBlurIterations_15(int32_t value)
	{
		___hollywoodFlareBlurIterations_15 = value;
	}

	inline static int32_t get_offset_of_lensflareMode_16() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___lensflareMode_16)); }
	inline int32_t get_lensflareMode_16() const { return ___lensflareMode_16; }
	inline int32_t* get_address_of_lensflareMode_16() { return &___lensflareMode_16; }
	inline void set_lensflareMode_16(int32_t value)
	{
		___lensflareMode_16 = value;
	}

	inline static int32_t get_offset_of_hollyStretchWidth_17() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___hollyStretchWidth_17)); }
	inline float get_hollyStretchWidth_17() const { return ___hollyStretchWidth_17; }
	inline float* get_address_of_hollyStretchWidth_17() { return &___hollyStretchWidth_17; }
	inline void set_hollyStretchWidth_17(float value)
	{
		___hollyStretchWidth_17 = value;
	}

	inline static int32_t get_offset_of_lensflareIntensity_18() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___lensflareIntensity_18)); }
	inline float get_lensflareIntensity_18() const { return ___lensflareIntensity_18; }
	inline float* get_address_of_lensflareIntensity_18() { return &___lensflareIntensity_18; }
	inline void set_lensflareIntensity_18(float value)
	{
		___lensflareIntensity_18 = value;
	}

	inline static int32_t get_offset_of_lensflareThreshold_19() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___lensflareThreshold_19)); }
	inline float get_lensflareThreshold_19() const { return ___lensflareThreshold_19; }
	inline float* get_address_of_lensflareThreshold_19() { return &___lensflareThreshold_19; }
	inline void set_lensflareThreshold_19(float value)
	{
		___lensflareThreshold_19 = value;
	}

	inline static int32_t get_offset_of_flareColorA_20() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___flareColorA_20)); }
	inline Color_t4194546905  get_flareColorA_20() const { return ___flareColorA_20; }
	inline Color_t4194546905 * get_address_of_flareColorA_20() { return &___flareColorA_20; }
	inline void set_flareColorA_20(Color_t4194546905  value)
	{
		___flareColorA_20 = value;
	}

	inline static int32_t get_offset_of_flareColorB_21() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___flareColorB_21)); }
	inline Color_t4194546905  get_flareColorB_21() const { return ___flareColorB_21; }
	inline Color_t4194546905 * get_address_of_flareColorB_21() { return &___flareColorB_21; }
	inline void set_flareColorB_21(Color_t4194546905  value)
	{
		___flareColorB_21 = value;
	}

	inline static int32_t get_offset_of_flareColorC_22() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___flareColorC_22)); }
	inline Color_t4194546905  get_flareColorC_22() const { return ___flareColorC_22; }
	inline Color_t4194546905 * get_address_of_flareColorC_22() { return &___flareColorC_22; }
	inline void set_flareColorC_22(Color_t4194546905  value)
	{
		___flareColorC_22 = value;
	}

	inline static int32_t get_offset_of_flareColorD_23() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___flareColorD_23)); }
	inline Color_t4194546905  get_flareColorD_23() const { return ___flareColorD_23; }
	inline Color_t4194546905 * get_address_of_flareColorD_23() { return &___flareColorD_23; }
	inline void set_flareColorD_23(Color_t4194546905  value)
	{
		___flareColorD_23 = value;
	}

	inline static int32_t get_offset_of_lensFlareVignetteMask_24() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___lensFlareVignetteMask_24)); }
	inline Texture2D_t3884108195 * get_lensFlareVignetteMask_24() const { return ___lensFlareVignetteMask_24; }
	inline Texture2D_t3884108195 ** get_address_of_lensFlareVignetteMask_24() { return &___lensFlareVignetteMask_24; }
	inline void set_lensFlareVignetteMask_24(Texture2D_t3884108195 * value)
	{
		___lensFlareVignetteMask_24 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareVignetteMask_24, value);
	}

	inline static int32_t get_offset_of_lensFlareShader_25() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___lensFlareShader_25)); }
	inline Shader_t3191267369 * get_lensFlareShader_25() const { return ___lensFlareShader_25; }
	inline Shader_t3191267369 ** get_address_of_lensFlareShader_25() { return &___lensFlareShader_25; }
	inline void set_lensFlareShader_25(Shader_t3191267369 * value)
	{
		___lensFlareShader_25 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareShader_25, value);
	}

	inline static int32_t get_offset_of_lensFlareMaterial_26() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___lensFlareMaterial_26)); }
	inline Material_t3870600107 * get_lensFlareMaterial_26() const { return ___lensFlareMaterial_26; }
	inline Material_t3870600107 ** get_address_of_lensFlareMaterial_26() { return &___lensFlareMaterial_26; }
	inline void set_lensFlareMaterial_26(Material_t3870600107 * value)
	{
		___lensFlareMaterial_26 = value;
		Il2CppCodeGenWriteBarrier(&___lensFlareMaterial_26, value);
	}

	inline static int32_t get_offset_of_vignetteShader_27() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___vignetteShader_27)); }
	inline Shader_t3191267369 * get_vignetteShader_27() const { return ___vignetteShader_27; }
	inline Shader_t3191267369 ** get_address_of_vignetteShader_27() { return &___vignetteShader_27; }
	inline void set_vignetteShader_27(Shader_t3191267369 * value)
	{
		___vignetteShader_27 = value;
		Il2CppCodeGenWriteBarrier(&___vignetteShader_27, value);
	}

	inline static int32_t get_offset_of_vignetteMaterial_28() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___vignetteMaterial_28)); }
	inline Material_t3870600107 * get_vignetteMaterial_28() const { return ___vignetteMaterial_28; }
	inline Material_t3870600107 ** get_address_of_vignetteMaterial_28() { return &___vignetteMaterial_28; }
	inline void set_vignetteMaterial_28(Material_t3870600107 * value)
	{
		___vignetteMaterial_28 = value;
		Il2CppCodeGenWriteBarrier(&___vignetteMaterial_28, value);
	}

	inline static int32_t get_offset_of_separableBlurShader_29() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___separableBlurShader_29)); }
	inline Shader_t3191267369 * get_separableBlurShader_29() const { return ___separableBlurShader_29; }
	inline Shader_t3191267369 ** get_address_of_separableBlurShader_29() { return &___separableBlurShader_29; }
	inline void set_separableBlurShader_29(Shader_t3191267369 * value)
	{
		___separableBlurShader_29 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurShader_29, value);
	}

	inline static int32_t get_offset_of_separableBlurMaterial_30() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___separableBlurMaterial_30)); }
	inline Material_t3870600107 * get_separableBlurMaterial_30() const { return ___separableBlurMaterial_30; }
	inline Material_t3870600107 ** get_address_of_separableBlurMaterial_30() { return &___separableBlurMaterial_30; }
	inline void set_separableBlurMaterial_30(Material_t3870600107 * value)
	{
		___separableBlurMaterial_30 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurMaterial_30, value);
	}

	inline static int32_t get_offset_of_addBrightStuffOneOneShader_31() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___addBrightStuffOneOneShader_31)); }
	inline Shader_t3191267369 * get_addBrightStuffOneOneShader_31() const { return ___addBrightStuffOneOneShader_31; }
	inline Shader_t3191267369 ** get_address_of_addBrightStuffOneOneShader_31() { return &___addBrightStuffOneOneShader_31; }
	inline void set_addBrightStuffOneOneShader_31(Shader_t3191267369 * value)
	{
		___addBrightStuffOneOneShader_31 = value;
		Il2CppCodeGenWriteBarrier(&___addBrightStuffOneOneShader_31, value);
	}

	inline static int32_t get_offset_of_addBrightStuffBlendOneOneMaterial_32() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___addBrightStuffBlendOneOneMaterial_32)); }
	inline Material_t3870600107 * get_addBrightStuffBlendOneOneMaterial_32() const { return ___addBrightStuffBlendOneOneMaterial_32; }
	inline Material_t3870600107 ** get_address_of_addBrightStuffBlendOneOneMaterial_32() { return &___addBrightStuffBlendOneOneMaterial_32; }
	inline void set_addBrightStuffBlendOneOneMaterial_32(Material_t3870600107 * value)
	{
		___addBrightStuffBlendOneOneMaterial_32 = value;
		Il2CppCodeGenWriteBarrier(&___addBrightStuffBlendOneOneMaterial_32, value);
	}

	inline static int32_t get_offset_of_screenBlendShader_33() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___screenBlendShader_33)); }
	inline Shader_t3191267369 * get_screenBlendShader_33() const { return ___screenBlendShader_33; }
	inline Shader_t3191267369 ** get_address_of_screenBlendShader_33() { return &___screenBlendShader_33; }
	inline void set_screenBlendShader_33(Shader_t3191267369 * value)
	{
		___screenBlendShader_33 = value;
		Il2CppCodeGenWriteBarrier(&___screenBlendShader_33, value);
	}

	inline static int32_t get_offset_of_screenBlend_34() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___screenBlend_34)); }
	inline Material_t3870600107 * get_screenBlend_34() const { return ___screenBlend_34; }
	inline Material_t3870600107 ** get_address_of_screenBlend_34() { return &___screenBlend_34; }
	inline void set_screenBlend_34(Material_t3870600107 * value)
	{
		___screenBlend_34 = value;
		Il2CppCodeGenWriteBarrier(&___screenBlend_34, value);
	}

	inline static int32_t get_offset_of_hollywoodFlaresShader_35() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___hollywoodFlaresShader_35)); }
	inline Shader_t3191267369 * get_hollywoodFlaresShader_35() const { return ___hollywoodFlaresShader_35; }
	inline Shader_t3191267369 ** get_address_of_hollywoodFlaresShader_35() { return &___hollywoodFlaresShader_35; }
	inline void set_hollywoodFlaresShader_35(Shader_t3191267369 * value)
	{
		___hollywoodFlaresShader_35 = value;
		Il2CppCodeGenWriteBarrier(&___hollywoodFlaresShader_35, value);
	}

	inline static int32_t get_offset_of_hollywoodFlaresMaterial_36() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___hollywoodFlaresMaterial_36)); }
	inline Material_t3870600107 * get_hollywoodFlaresMaterial_36() const { return ___hollywoodFlaresMaterial_36; }
	inline Material_t3870600107 ** get_address_of_hollywoodFlaresMaterial_36() { return &___hollywoodFlaresMaterial_36; }
	inline void set_hollywoodFlaresMaterial_36(Material_t3870600107 * value)
	{
		___hollywoodFlaresMaterial_36 = value;
		Il2CppCodeGenWriteBarrier(&___hollywoodFlaresMaterial_36, value);
	}

	inline static int32_t get_offset_of_brightPassFilterShader_37() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___brightPassFilterShader_37)); }
	inline Shader_t3191267369 * get_brightPassFilterShader_37() const { return ___brightPassFilterShader_37; }
	inline Shader_t3191267369 ** get_address_of_brightPassFilterShader_37() { return &___brightPassFilterShader_37; }
	inline void set_brightPassFilterShader_37(Shader_t3191267369 * value)
	{
		___brightPassFilterShader_37 = value;
		Il2CppCodeGenWriteBarrier(&___brightPassFilterShader_37, value);
	}

	inline static int32_t get_offset_of_brightPassFilterMaterial_38() { return static_cast<int32_t>(offsetof(BloomAndFlares_t1631335591, ___brightPassFilterMaterial_38)); }
	inline Material_t3870600107 * get_brightPassFilterMaterial_38() const { return ___brightPassFilterMaterial_38; }
	inline Material_t3870600107 ** get_address_of_brightPassFilterMaterial_38() { return &___brightPassFilterMaterial_38; }
	inline void set_brightPassFilterMaterial_38(Material_t3870600107 * value)
	{
		___brightPassFilterMaterial_38 = value;
		Il2CppCodeGenWriteBarrier(&___brightPassFilterMaterial_38, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
