#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Shader
struct Shader_t3191267369;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects1415309093.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects3663505356.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ColorCorrectionCurves
struct  ColorCorrectionCurves_t1677992791  : public PostEffectsBase_t1415309093
{
public:
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::redChannel
	AnimationCurve_t3667593487 * ___redChannel_5;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::greenChannel
	AnimationCurve_t3667593487 * ___greenChannel_6;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::blueChannel
	AnimationCurve_t3667593487 * ___blueChannel_7;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::useDepthCorrection
	bool ___useDepthCorrection_8;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::zCurve
	AnimationCurve_t3667593487 * ___zCurve_9;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthRedChannel
	AnimationCurve_t3667593487 * ___depthRedChannel_10;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthGreenChannel
	AnimationCurve_t3667593487 * ___depthGreenChannel_11;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.ColorCorrectionCurves::depthBlueChannel
	AnimationCurve_t3667593487 * ___depthBlueChannel_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::ccMaterial
	Material_t3870600107 * ___ccMaterial_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::ccDepthMaterial
	Material_t3870600107 * ___ccDepthMaterial_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveCcMaterial
	Material_t3870600107 * ___selectiveCcMaterial_15;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::rgbChannelTex
	Texture2D_t3884108195 * ___rgbChannelTex_16;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::rgbDepthChannelTex
	Texture2D_t3884108195 * ___rgbDepthChannelTex_17;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ColorCorrectionCurves::zCurveTex
	Texture2D_t3884108195 * ___zCurveTex_18;
	// System.Single UnityStandardAssets.ImageEffects.ColorCorrectionCurves::saturation
	float ___saturation_19;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveCc
	bool ___selectiveCc_20;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveFromColor
	Color_t4194546905  ___selectiveFromColor_21;
	// UnityEngine.Color UnityStandardAssets.ImageEffects.ColorCorrectionCurves::selectiveToColor
	Color_t4194546905  ___selectiveToColor_22;
	// UnityStandardAssets.ImageEffects.ColorCorrectionCurves/ColorCorrectionMode UnityStandardAssets.ImageEffects.ColorCorrectionCurves::mode
	int32_t ___mode_23;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::updateTextures
	bool ___updateTextures_24;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::colorCorrectionCurvesShader
	Shader_t3191267369 * ___colorCorrectionCurvesShader_25;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::simpleColorCorrectionCurvesShader
	Shader_t3191267369 * ___simpleColorCorrectionCurvesShader_26;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionCurves::colorCorrectionSelectiveShader
	Shader_t3191267369 * ___colorCorrectionSelectiveShader_27;
	// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionCurves::updateTexturesOnStartup
	bool ___updateTexturesOnStartup_28;

public:
	inline static int32_t get_offset_of_redChannel_5() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___redChannel_5)); }
	inline AnimationCurve_t3667593487 * get_redChannel_5() const { return ___redChannel_5; }
	inline AnimationCurve_t3667593487 ** get_address_of_redChannel_5() { return &___redChannel_5; }
	inline void set_redChannel_5(AnimationCurve_t3667593487 * value)
	{
		___redChannel_5 = value;
		Il2CppCodeGenWriteBarrier(&___redChannel_5, value);
	}

	inline static int32_t get_offset_of_greenChannel_6() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___greenChannel_6)); }
	inline AnimationCurve_t3667593487 * get_greenChannel_6() const { return ___greenChannel_6; }
	inline AnimationCurve_t3667593487 ** get_address_of_greenChannel_6() { return &___greenChannel_6; }
	inline void set_greenChannel_6(AnimationCurve_t3667593487 * value)
	{
		___greenChannel_6 = value;
		Il2CppCodeGenWriteBarrier(&___greenChannel_6, value);
	}

	inline static int32_t get_offset_of_blueChannel_7() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___blueChannel_7)); }
	inline AnimationCurve_t3667593487 * get_blueChannel_7() const { return ___blueChannel_7; }
	inline AnimationCurve_t3667593487 ** get_address_of_blueChannel_7() { return &___blueChannel_7; }
	inline void set_blueChannel_7(AnimationCurve_t3667593487 * value)
	{
		___blueChannel_7 = value;
		Il2CppCodeGenWriteBarrier(&___blueChannel_7, value);
	}

	inline static int32_t get_offset_of_useDepthCorrection_8() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___useDepthCorrection_8)); }
	inline bool get_useDepthCorrection_8() const { return ___useDepthCorrection_8; }
	inline bool* get_address_of_useDepthCorrection_8() { return &___useDepthCorrection_8; }
	inline void set_useDepthCorrection_8(bool value)
	{
		___useDepthCorrection_8 = value;
	}

	inline static int32_t get_offset_of_zCurve_9() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___zCurve_9)); }
	inline AnimationCurve_t3667593487 * get_zCurve_9() const { return ___zCurve_9; }
	inline AnimationCurve_t3667593487 ** get_address_of_zCurve_9() { return &___zCurve_9; }
	inline void set_zCurve_9(AnimationCurve_t3667593487 * value)
	{
		___zCurve_9 = value;
		Il2CppCodeGenWriteBarrier(&___zCurve_9, value);
	}

	inline static int32_t get_offset_of_depthRedChannel_10() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___depthRedChannel_10)); }
	inline AnimationCurve_t3667593487 * get_depthRedChannel_10() const { return ___depthRedChannel_10; }
	inline AnimationCurve_t3667593487 ** get_address_of_depthRedChannel_10() { return &___depthRedChannel_10; }
	inline void set_depthRedChannel_10(AnimationCurve_t3667593487 * value)
	{
		___depthRedChannel_10 = value;
		Il2CppCodeGenWriteBarrier(&___depthRedChannel_10, value);
	}

	inline static int32_t get_offset_of_depthGreenChannel_11() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___depthGreenChannel_11)); }
	inline AnimationCurve_t3667593487 * get_depthGreenChannel_11() const { return ___depthGreenChannel_11; }
	inline AnimationCurve_t3667593487 ** get_address_of_depthGreenChannel_11() { return &___depthGreenChannel_11; }
	inline void set_depthGreenChannel_11(AnimationCurve_t3667593487 * value)
	{
		___depthGreenChannel_11 = value;
		Il2CppCodeGenWriteBarrier(&___depthGreenChannel_11, value);
	}

	inline static int32_t get_offset_of_depthBlueChannel_12() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___depthBlueChannel_12)); }
	inline AnimationCurve_t3667593487 * get_depthBlueChannel_12() const { return ___depthBlueChannel_12; }
	inline AnimationCurve_t3667593487 ** get_address_of_depthBlueChannel_12() { return &___depthBlueChannel_12; }
	inline void set_depthBlueChannel_12(AnimationCurve_t3667593487 * value)
	{
		___depthBlueChannel_12 = value;
		Il2CppCodeGenWriteBarrier(&___depthBlueChannel_12, value);
	}

	inline static int32_t get_offset_of_ccMaterial_13() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___ccMaterial_13)); }
	inline Material_t3870600107 * get_ccMaterial_13() const { return ___ccMaterial_13; }
	inline Material_t3870600107 ** get_address_of_ccMaterial_13() { return &___ccMaterial_13; }
	inline void set_ccMaterial_13(Material_t3870600107 * value)
	{
		___ccMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___ccMaterial_13, value);
	}

	inline static int32_t get_offset_of_ccDepthMaterial_14() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___ccDepthMaterial_14)); }
	inline Material_t3870600107 * get_ccDepthMaterial_14() const { return ___ccDepthMaterial_14; }
	inline Material_t3870600107 ** get_address_of_ccDepthMaterial_14() { return &___ccDepthMaterial_14; }
	inline void set_ccDepthMaterial_14(Material_t3870600107 * value)
	{
		___ccDepthMaterial_14 = value;
		Il2CppCodeGenWriteBarrier(&___ccDepthMaterial_14, value);
	}

	inline static int32_t get_offset_of_selectiveCcMaterial_15() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___selectiveCcMaterial_15)); }
	inline Material_t3870600107 * get_selectiveCcMaterial_15() const { return ___selectiveCcMaterial_15; }
	inline Material_t3870600107 ** get_address_of_selectiveCcMaterial_15() { return &___selectiveCcMaterial_15; }
	inline void set_selectiveCcMaterial_15(Material_t3870600107 * value)
	{
		___selectiveCcMaterial_15 = value;
		Il2CppCodeGenWriteBarrier(&___selectiveCcMaterial_15, value);
	}

	inline static int32_t get_offset_of_rgbChannelTex_16() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___rgbChannelTex_16)); }
	inline Texture2D_t3884108195 * get_rgbChannelTex_16() const { return ___rgbChannelTex_16; }
	inline Texture2D_t3884108195 ** get_address_of_rgbChannelTex_16() { return &___rgbChannelTex_16; }
	inline void set_rgbChannelTex_16(Texture2D_t3884108195 * value)
	{
		___rgbChannelTex_16 = value;
		Il2CppCodeGenWriteBarrier(&___rgbChannelTex_16, value);
	}

	inline static int32_t get_offset_of_rgbDepthChannelTex_17() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___rgbDepthChannelTex_17)); }
	inline Texture2D_t3884108195 * get_rgbDepthChannelTex_17() const { return ___rgbDepthChannelTex_17; }
	inline Texture2D_t3884108195 ** get_address_of_rgbDepthChannelTex_17() { return &___rgbDepthChannelTex_17; }
	inline void set_rgbDepthChannelTex_17(Texture2D_t3884108195 * value)
	{
		___rgbDepthChannelTex_17 = value;
		Il2CppCodeGenWriteBarrier(&___rgbDepthChannelTex_17, value);
	}

	inline static int32_t get_offset_of_zCurveTex_18() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___zCurveTex_18)); }
	inline Texture2D_t3884108195 * get_zCurveTex_18() const { return ___zCurveTex_18; }
	inline Texture2D_t3884108195 ** get_address_of_zCurveTex_18() { return &___zCurveTex_18; }
	inline void set_zCurveTex_18(Texture2D_t3884108195 * value)
	{
		___zCurveTex_18 = value;
		Il2CppCodeGenWriteBarrier(&___zCurveTex_18, value);
	}

	inline static int32_t get_offset_of_saturation_19() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___saturation_19)); }
	inline float get_saturation_19() const { return ___saturation_19; }
	inline float* get_address_of_saturation_19() { return &___saturation_19; }
	inline void set_saturation_19(float value)
	{
		___saturation_19 = value;
	}

	inline static int32_t get_offset_of_selectiveCc_20() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___selectiveCc_20)); }
	inline bool get_selectiveCc_20() const { return ___selectiveCc_20; }
	inline bool* get_address_of_selectiveCc_20() { return &___selectiveCc_20; }
	inline void set_selectiveCc_20(bool value)
	{
		___selectiveCc_20 = value;
	}

	inline static int32_t get_offset_of_selectiveFromColor_21() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___selectiveFromColor_21)); }
	inline Color_t4194546905  get_selectiveFromColor_21() const { return ___selectiveFromColor_21; }
	inline Color_t4194546905 * get_address_of_selectiveFromColor_21() { return &___selectiveFromColor_21; }
	inline void set_selectiveFromColor_21(Color_t4194546905  value)
	{
		___selectiveFromColor_21 = value;
	}

	inline static int32_t get_offset_of_selectiveToColor_22() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___selectiveToColor_22)); }
	inline Color_t4194546905  get_selectiveToColor_22() const { return ___selectiveToColor_22; }
	inline Color_t4194546905 * get_address_of_selectiveToColor_22() { return &___selectiveToColor_22; }
	inline void set_selectiveToColor_22(Color_t4194546905  value)
	{
		___selectiveToColor_22 = value;
	}

	inline static int32_t get_offset_of_mode_23() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___mode_23)); }
	inline int32_t get_mode_23() const { return ___mode_23; }
	inline int32_t* get_address_of_mode_23() { return &___mode_23; }
	inline void set_mode_23(int32_t value)
	{
		___mode_23 = value;
	}

	inline static int32_t get_offset_of_updateTextures_24() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___updateTextures_24)); }
	inline bool get_updateTextures_24() const { return ___updateTextures_24; }
	inline bool* get_address_of_updateTextures_24() { return &___updateTextures_24; }
	inline void set_updateTextures_24(bool value)
	{
		___updateTextures_24 = value;
	}

	inline static int32_t get_offset_of_colorCorrectionCurvesShader_25() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___colorCorrectionCurvesShader_25)); }
	inline Shader_t3191267369 * get_colorCorrectionCurvesShader_25() const { return ___colorCorrectionCurvesShader_25; }
	inline Shader_t3191267369 ** get_address_of_colorCorrectionCurvesShader_25() { return &___colorCorrectionCurvesShader_25; }
	inline void set_colorCorrectionCurvesShader_25(Shader_t3191267369 * value)
	{
		___colorCorrectionCurvesShader_25 = value;
		Il2CppCodeGenWriteBarrier(&___colorCorrectionCurvesShader_25, value);
	}

	inline static int32_t get_offset_of_simpleColorCorrectionCurvesShader_26() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___simpleColorCorrectionCurvesShader_26)); }
	inline Shader_t3191267369 * get_simpleColorCorrectionCurvesShader_26() const { return ___simpleColorCorrectionCurvesShader_26; }
	inline Shader_t3191267369 ** get_address_of_simpleColorCorrectionCurvesShader_26() { return &___simpleColorCorrectionCurvesShader_26; }
	inline void set_simpleColorCorrectionCurvesShader_26(Shader_t3191267369 * value)
	{
		___simpleColorCorrectionCurvesShader_26 = value;
		Il2CppCodeGenWriteBarrier(&___simpleColorCorrectionCurvesShader_26, value);
	}

	inline static int32_t get_offset_of_colorCorrectionSelectiveShader_27() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___colorCorrectionSelectiveShader_27)); }
	inline Shader_t3191267369 * get_colorCorrectionSelectiveShader_27() const { return ___colorCorrectionSelectiveShader_27; }
	inline Shader_t3191267369 ** get_address_of_colorCorrectionSelectiveShader_27() { return &___colorCorrectionSelectiveShader_27; }
	inline void set_colorCorrectionSelectiveShader_27(Shader_t3191267369 * value)
	{
		___colorCorrectionSelectiveShader_27 = value;
		Il2CppCodeGenWriteBarrier(&___colorCorrectionSelectiveShader_27, value);
	}

	inline static int32_t get_offset_of_updateTexturesOnStartup_28() { return static_cast<int32_t>(offsetof(ColorCorrectionCurves_t1677992791, ___updateTexturesOnStartup_28)); }
	inline bool get_updateTexturesOnStartup_28() const { return ___updateTexturesOnStartup_28; }
	inline bool* get_address_of_updateTexturesOnStartup_28() { return &___updateTexturesOnStartup_28; }
	inline void set_updateTexturesOnStartup_28(bool value)
	{
		___updateTexturesOnStartup_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
