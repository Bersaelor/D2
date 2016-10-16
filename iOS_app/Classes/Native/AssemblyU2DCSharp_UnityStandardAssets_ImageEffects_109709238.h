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
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects2414447165.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenOverlay
struct  ScreenOverlay_t109709238  : public PostEffectsBase_t1415309093
{
public:
	// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode UnityStandardAssets.ImageEffects.ScreenOverlay::blendMode
	int32_t ___blendMode_5;
	// System.Single UnityStandardAssets.ImageEffects.ScreenOverlay::intensity
	float ___intensity_6;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenOverlay::texture
	Texture2D_t3884108195 * ___texture_7;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenOverlay::overlayShader
	Shader_t3191267369 * ___overlayShader_8;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenOverlay::overlayMaterial
	Material_t3870600107 * ___overlayMaterial_9;

public:
	inline static int32_t get_offset_of_blendMode_5() { return static_cast<int32_t>(offsetof(ScreenOverlay_t109709238, ___blendMode_5)); }
	inline int32_t get_blendMode_5() const { return ___blendMode_5; }
	inline int32_t* get_address_of_blendMode_5() { return &___blendMode_5; }
	inline void set_blendMode_5(int32_t value)
	{
		___blendMode_5 = value;
	}

	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(ScreenOverlay_t109709238, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_texture_7() { return static_cast<int32_t>(offsetof(ScreenOverlay_t109709238, ___texture_7)); }
	inline Texture2D_t3884108195 * get_texture_7() const { return ___texture_7; }
	inline Texture2D_t3884108195 ** get_address_of_texture_7() { return &___texture_7; }
	inline void set_texture_7(Texture2D_t3884108195 * value)
	{
		___texture_7 = value;
		Il2CppCodeGenWriteBarrier(&___texture_7, value);
	}

	inline static int32_t get_offset_of_overlayShader_8() { return static_cast<int32_t>(offsetof(ScreenOverlay_t109709238, ___overlayShader_8)); }
	inline Shader_t3191267369 * get_overlayShader_8() const { return ___overlayShader_8; }
	inline Shader_t3191267369 ** get_address_of_overlayShader_8() { return &___overlayShader_8; }
	inline void set_overlayShader_8(Shader_t3191267369 * value)
	{
		___overlayShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___overlayShader_8, value);
	}

	inline static int32_t get_offset_of_overlayMaterial_9() { return static_cast<int32_t>(offsetof(ScreenOverlay_t109709238, ___overlayMaterial_9)); }
	inline Material_t3870600107 * get_overlayMaterial_9() const { return ___overlayMaterial_9; }
	inline Material_t3870600107 ** get_address_of_overlayMaterial_9() { return &___overlayMaterial_9; }
	inline void set_overlayMaterial_9(Material_t3870600107 * value)
	{
		___overlayMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___overlayMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
