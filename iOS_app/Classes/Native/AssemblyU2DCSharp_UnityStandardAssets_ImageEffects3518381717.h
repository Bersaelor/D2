#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t1576771098;
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

// UnityStandardAssets.ImageEffects.ContrastStretch
struct  ContrastStretch_t3518381717  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::adaptationSpeed
	float ___adaptationSpeed_2;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMinimum
	float ___limitMinimum_3;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMaximum
	float ___limitMaximum_4;
	// UnityEngine.RenderTexture[] UnityStandardAssets.ImageEffects.ContrastStretch::adaptRenderTex
	RenderTextureU5BU5D_t1576771098* ___adaptRenderTex_5;
	// System.Int32 UnityStandardAssets.ImageEffects.ContrastStretch::curAdaptIndex
	int32_t ___curAdaptIndex_6;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderLum
	Shader_t3191267369 * ___shaderLum_7;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialLum
	Material_t3870600107 * ___m_materialLum_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderReduce
	Shader_t3191267369 * ___shaderReduce_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialReduce
	Material_t3870600107 * ___m_materialReduce_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderAdapt
	Shader_t3191267369 * ___shaderAdapt_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialAdapt
	Material_t3870600107 * ___m_materialAdapt_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderApply
	Shader_t3191267369 * ___shaderApply_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialApply
	Material_t3870600107 * ___m_materialApply_14;

public:
	inline static int32_t get_offset_of_adaptationSpeed_2() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___adaptationSpeed_2)); }
	inline float get_adaptationSpeed_2() const { return ___adaptationSpeed_2; }
	inline float* get_address_of_adaptationSpeed_2() { return &___adaptationSpeed_2; }
	inline void set_adaptationSpeed_2(float value)
	{
		___adaptationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_limitMinimum_3() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___limitMinimum_3)); }
	inline float get_limitMinimum_3() const { return ___limitMinimum_3; }
	inline float* get_address_of_limitMinimum_3() { return &___limitMinimum_3; }
	inline void set_limitMinimum_3(float value)
	{
		___limitMinimum_3 = value;
	}

	inline static int32_t get_offset_of_limitMaximum_4() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___limitMaximum_4)); }
	inline float get_limitMaximum_4() const { return ___limitMaximum_4; }
	inline float* get_address_of_limitMaximum_4() { return &___limitMaximum_4; }
	inline void set_limitMaximum_4(float value)
	{
		___limitMaximum_4 = value;
	}

	inline static int32_t get_offset_of_adaptRenderTex_5() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___adaptRenderTex_5)); }
	inline RenderTextureU5BU5D_t1576771098* get_adaptRenderTex_5() const { return ___adaptRenderTex_5; }
	inline RenderTextureU5BU5D_t1576771098** get_address_of_adaptRenderTex_5() { return &___adaptRenderTex_5; }
	inline void set_adaptRenderTex_5(RenderTextureU5BU5D_t1576771098* value)
	{
		___adaptRenderTex_5 = value;
		Il2CppCodeGenWriteBarrier(&___adaptRenderTex_5, value);
	}

	inline static int32_t get_offset_of_curAdaptIndex_6() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___curAdaptIndex_6)); }
	inline int32_t get_curAdaptIndex_6() const { return ___curAdaptIndex_6; }
	inline int32_t* get_address_of_curAdaptIndex_6() { return &___curAdaptIndex_6; }
	inline void set_curAdaptIndex_6(int32_t value)
	{
		___curAdaptIndex_6 = value;
	}

	inline static int32_t get_offset_of_shaderLum_7() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___shaderLum_7)); }
	inline Shader_t3191267369 * get_shaderLum_7() const { return ___shaderLum_7; }
	inline Shader_t3191267369 ** get_address_of_shaderLum_7() { return &___shaderLum_7; }
	inline void set_shaderLum_7(Shader_t3191267369 * value)
	{
		___shaderLum_7 = value;
		Il2CppCodeGenWriteBarrier(&___shaderLum_7, value);
	}

	inline static int32_t get_offset_of_m_materialLum_8() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___m_materialLum_8)); }
	inline Material_t3870600107 * get_m_materialLum_8() const { return ___m_materialLum_8; }
	inline Material_t3870600107 ** get_address_of_m_materialLum_8() { return &___m_materialLum_8; }
	inline void set_m_materialLum_8(Material_t3870600107 * value)
	{
		___m_materialLum_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_materialLum_8, value);
	}

	inline static int32_t get_offset_of_shaderReduce_9() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___shaderReduce_9)); }
	inline Shader_t3191267369 * get_shaderReduce_9() const { return ___shaderReduce_9; }
	inline Shader_t3191267369 ** get_address_of_shaderReduce_9() { return &___shaderReduce_9; }
	inline void set_shaderReduce_9(Shader_t3191267369 * value)
	{
		___shaderReduce_9 = value;
		Il2CppCodeGenWriteBarrier(&___shaderReduce_9, value);
	}

	inline static int32_t get_offset_of_m_materialReduce_10() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___m_materialReduce_10)); }
	inline Material_t3870600107 * get_m_materialReduce_10() const { return ___m_materialReduce_10; }
	inline Material_t3870600107 ** get_address_of_m_materialReduce_10() { return &___m_materialReduce_10; }
	inline void set_m_materialReduce_10(Material_t3870600107 * value)
	{
		___m_materialReduce_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_materialReduce_10, value);
	}

	inline static int32_t get_offset_of_shaderAdapt_11() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___shaderAdapt_11)); }
	inline Shader_t3191267369 * get_shaderAdapt_11() const { return ___shaderAdapt_11; }
	inline Shader_t3191267369 ** get_address_of_shaderAdapt_11() { return &___shaderAdapt_11; }
	inline void set_shaderAdapt_11(Shader_t3191267369 * value)
	{
		___shaderAdapt_11 = value;
		Il2CppCodeGenWriteBarrier(&___shaderAdapt_11, value);
	}

	inline static int32_t get_offset_of_m_materialAdapt_12() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___m_materialAdapt_12)); }
	inline Material_t3870600107 * get_m_materialAdapt_12() const { return ___m_materialAdapt_12; }
	inline Material_t3870600107 ** get_address_of_m_materialAdapt_12() { return &___m_materialAdapt_12; }
	inline void set_m_materialAdapt_12(Material_t3870600107 * value)
	{
		___m_materialAdapt_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_materialAdapt_12, value);
	}

	inline static int32_t get_offset_of_shaderApply_13() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___shaderApply_13)); }
	inline Shader_t3191267369 * get_shaderApply_13() const { return ___shaderApply_13; }
	inline Shader_t3191267369 ** get_address_of_shaderApply_13() { return &___shaderApply_13; }
	inline void set_shaderApply_13(Shader_t3191267369 * value)
	{
		___shaderApply_13 = value;
		Il2CppCodeGenWriteBarrier(&___shaderApply_13, value);
	}

	inline static int32_t get_offset_of_m_materialApply_14() { return static_cast<int32_t>(offsetof(ContrastStretch_t3518381717, ___m_materialApply_14)); }
	inline Material_t3870600107 * get_m_materialApply_14() const { return ___m_materialApply_14; }
	inline Material_t3870600107 ** get_address_of_m_materialApply_14() { return &___m_materialApply_14; }
	inline void set_m_materialApply_14(Material_t3870600107 * value)
	{
		___m_materialApply_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_materialApply_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
