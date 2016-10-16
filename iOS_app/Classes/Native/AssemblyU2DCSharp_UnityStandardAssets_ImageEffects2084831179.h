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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Fisheye
struct  Fisheye_t2084831179  : public PostEffectsBase_t1415309093
{
public:
	// System.Single UnityStandardAssets.ImageEffects.Fisheye::strengthX
	float ___strengthX_5;
	// System.Single UnityStandardAssets.ImageEffects.Fisheye::strengthY
	float ___strengthY_6;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Fisheye::fishEyeShader
	Shader_t3191267369 * ___fishEyeShader_7;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Fisheye::fisheyeMaterial
	Material_t3870600107 * ___fisheyeMaterial_8;

public:
	inline static int32_t get_offset_of_strengthX_5() { return static_cast<int32_t>(offsetof(Fisheye_t2084831179, ___strengthX_5)); }
	inline float get_strengthX_5() const { return ___strengthX_5; }
	inline float* get_address_of_strengthX_5() { return &___strengthX_5; }
	inline void set_strengthX_5(float value)
	{
		___strengthX_5 = value;
	}

	inline static int32_t get_offset_of_strengthY_6() { return static_cast<int32_t>(offsetof(Fisheye_t2084831179, ___strengthY_6)); }
	inline float get_strengthY_6() const { return ___strengthY_6; }
	inline float* get_address_of_strengthY_6() { return &___strengthY_6; }
	inline void set_strengthY_6(float value)
	{
		___strengthY_6 = value;
	}

	inline static int32_t get_offset_of_fishEyeShader_7() { return static_cast<int32_t>(offsetof(Fisheye_t2084831179, ___fishEyeShader_7)); }
	inline Shader_t3191267369 * get_fishEyeShader_7() const { return ___fishEyeShader_7; }
	inline Shader_t3191267369 ** get_address_of_fishEyeShader_7() { return &___fishEyeShader_7; }
	inline void set_fishEyeShader_7(Shader_t3191267369 * value)
	{
		___fishEyeShader_7 = value;
		Il2CppCodeGenWriteBarrier(&___fishEyeShader_7, value);
	}

	inline static int32_t get_offset_of_fisheyeMaterial_8() { return static_cast<int32_t>(offsetof(Fisheye_t2084831179, ___fisheyeMaterial_8)); }
	inline Material_t3870600107 * get_fisheyeMaterial_8() const { return ___fisheyeMaterial_8; }
	inline Material_t3870600107 ** get_address_of_fisheyeMaterial_8() { return &___fisheyeMaterial_8; }
	inline void set_fisheyeMaterial_8(Material_t3870600107 * value)
	{
		___fisheyeMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___fisheyeMaterial_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
