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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
struct  ScreenSpaceAmbientObscurance_t2967460411  : public PostEffectsBase_t1415309093
{
public:
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::intensity
	float ___intensity_5;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::radius
	float ___radius_6;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurIterations
	int32_t ___blurIterations_7;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurFilterDistance
	float ___blurFilterDistance_8;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::downsample
	int32_t ___downsample_9;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::rand
	Texture2D_t3884108195 * ___rand_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoShader
	Shader_t3191267369 * ___aoShader_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoMaterial
	Material_t3870600107 * ___aoMaterial_12;

public:
	inline static int32_t get_offset_of_intensity_5() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t2967460411, ___intensity_5)); }
	inline float get_intensity_5() const { return ___intensity_5; }
	inline float* get_address_of_intensity_5() { return &___intensity_5; }
	inline void set_intensity_5(float value)
	{
		___intensity_5 = value;
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t2967460411, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_blurIterations_7() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t2967460411, ___blurIterations_7)); }
	inline int32_t get_blurIterations_7() const { return ___blurIterations_7; }
	inline int32_t* get_address_of_blurIterations_7() { return &___blurIterations_7; }
	inline void set_blurIterations_7(int32_t value)
	{
		___blurIterations_7 = value;
	}

	inline static int32_t get_offset_of_blurFilterDistance_8() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t2967460411, ___blurFilterDistance_8)); }
	inline float get_blurFilterDistance_8() const { return ___blurFilterDistance_8; }
	inline float* get_address_of_blurFilterDistance_8() { return &___blurFilterDistance_8; }
	inline void set_blurFilterDistance_8(float value)
	{
		___blurFilterDistance_8 = value;
	}

	inline static int32_t get_offset_of_downsample_9() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t2967460411, ___downsample_9)); }
	inline int32_t get_downsample_9() const { return ___downsample_9; }
	inline int32_t* get_address_of_downsample_9() { return &___downsample_9; }
	inline void set_downsample_9(int32_t value)
	{
		___downsample_9 = value;
	}

	inline static int32_t get_offset_of_rand_10() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t2967460411, ___rand_10)); }
	inline Texture2D_t3884108195 * get_rand_10() const { return ___rand_10; }
	inline Texture2D_t3884108195 ** get_address_of_rand_10() { return &___rand_10; }
	inline void set_rand_10(Texture2D_t3884108195 * value)
	{
		___rand_10 = value;
		Il2CppCodeGenWriteBarrier(&___rand_10, value);
	}

	inline static int32_t get_offset_of_aoShader_11() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t2967460411, ___aoShader_11)); }
	inline Shader_t3191267369 * get_aoShader_11() const { return ___aoShader_11; }
	inline Shader_t3191267369 ** get_address_of_aoShader_11() { return &___aoShader_11; }
	inline void set_aoShader_11(Shader_t3191267369 * value)
	{
		___aoShader_11 = value;
		Il2CppCodeGenWriteBarrier(&___aoShader_11, value);
	}

	inline static int32_t get_offset_of_aoMaterial_12() { return static_cast<int32_t>(offsetof(ScreenSpaceAmbientObscurance_t2967460411, ___aoMaterial_12)); }
	inline Material_t3870600107 * get_aoMaterial_12() const { return ___aoMaterial_12; }
	inline Material_t3870600107 ** get_address_of_aoMaterial_12() { return &___aoMaterial_12; }
	inline void set_aoMaterial_12(Material_t3870600107 * value)
	{
		___aoMaterial_12 = value;
		Il2CppCodeGenWriteBarrier(&___aoMaterial_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
