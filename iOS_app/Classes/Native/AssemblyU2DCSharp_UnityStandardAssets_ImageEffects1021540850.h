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
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects2715957662.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BlurOptimized
struct  BlurOptimized_t1021540850  : public PostEffectsBase_t1415309093
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::downsample
	int32_t ___downsample_5;
	// System.Single UnityStandardAssets.ImageEffects.BlurOptimized::blurSize
	float ___blurSize_6;
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::blurIterations
	int32_t ___blurIterations_7;
	// UnityStandardAssets.ImageEffects.BlurOptimized/BlurType UnityStandardAssets.ImageEffects.BlurOptimized::blurType
	int32_t ___blurType_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BlurOptimized::blurShader
	Shader_t3191267369 * ___blurShader_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BlurOptimized::blurMaterial
	Material_t3870600107 * ___blurMaterial_10;

public:
	inline static int32_t get_offset_of_downsample_5() { return static_cast<int32_t>(offsetof(BlurOptimized_t1021540850, ___downsample_5)); }
	inline int32_t get_downsample_5() const { return ___downsample_5; }
	inline int32_t* get_address_of_downsample_5() { return &___downsample_5; }
	inline void set_downsample_5(int32_t value)
	{
		___downsample_5 = value;
	}

	inline static int32_t get_offset_of_blurSize_6() { return static_cast<int32_t>(offsetof(BlurOptimized_t1021540850, ___blurSize_6)); }
	inline float get_blurSize_6() const { return ___blurSize_6; }
	inline float* get_address_of_blurSize_6() { return &___blurSize_6; }
	inline void set_blurSize_6(float value)
	{
		___blurSize_6 = value;
	}

	inline static int32_t get_offset_of_blurIterations_7() { return static_cast<int32_t>(offsetof(BlurOptimized_t1021540850, ___blurIterations_7)); }
	inline int32_t get_blurIterations_7() const { return ___blurIterations_7; }
	inline int32_t* get_address_of_blurIterations_7() { return &___blurIterations_7; }
	inline void set_blurIterations_7(int32_t value)
	{
		___blurIterations_7 = value;
	}

	inline static int32_t get_offset_of_blurType_8() { return static_cast<int32_t>(offsetof(BlurOptimized_t1021540850, ___blurType_8)); }
	inline int32_t get_blurType_8() const { return ___blurType_8; }
	inline int32_t* get_address_of_blurType_8() { return &___blurType_8; }
	inline void set_blurType_8(int32_t value)
	{
		___blurType_8 = value;
	}

	inline static int32_t get_offset_of_blurShader_9() { return static_cast<int32_t>(offsetof(BlurOptimized_t1021540850, ___blurShader_9)); }
	inline Shader_t3191267369 * get_blurShader_9() const { return ___blurShader_9; }
	inline Shader_t3191267369 ** get_address_of_blurShader_9() { return &___blurShader_9; }
	inline void set_blurShader_9(Shader_t3191267369 * value)
	{
		___blurShader_9 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_9, value);
	}

	inline static int32_t get_offset_of_blurMaterial_10() { return static_cast<int32_t>(offsetof(BlurOptimized_t1021540850, ___blurMaterial_10)); }
	inline Material_t3870600107 * get_blurMaterial_10() const { return ___blurMaterial_10; }
	inline Material_t3870600107 ** get_address_of_blurMaterial_10() { return &___blurMaterial_10; }
	inline void set_blurMaterial_10(Material_t3870600107 * value)
	{
		___blurMaterial_10 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
