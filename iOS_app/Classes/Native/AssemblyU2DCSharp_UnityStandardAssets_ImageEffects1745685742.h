#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t37359565;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects1415309093.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects1336427042.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects1548262813.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.DepthOfField
struct  DepthOfField_t1745685742  : public PostEffectsBase_t1415309093
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::visualizeFocus
	bool ___visualizeFocus_5;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalLength
	float ___focalLength_6;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalSize
	float ___focalSize_7;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::aperture
	float ___aperture_8;
	// UnityEngine.Transform UnityStandardAssets.ImageEffects.DepthOfField::focalTransform
	Transform_t1659122786 * ___focalTransform_9;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::maxBlurSize
	float ___maxBlurSize_10;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::highResolution
	bool ___highResolution_11;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurType UnityStandardAssets.ImageEffects.DepthOfField::blurType
	int32_t ___blurType_12;
	// UnityStandardAssets.ImageEffects.DepthOfField/BlurSampleCount UnityStandardAssets.ImageEffects.DepthOfField::blurSampleCount
	int32_t ___blurSampleCount_13;
	// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::nearBlur
	bool ___nearBlur_14;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::foregroundOverlap
	float ___foregroundOverlap_15;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dofHdrShader
	Shader_t3191267369 * ___dofHdrShader_16;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dofHdrMaterial
	Material_t3870600107 * ___dofHdrMaterial_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehShader
	Shader_t3191267369 * ___dx11BokehShader_18;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.DepthOfField::dx11bokehMaterial
	Material_t3870600107 * ___dx11bokehMaterial_19;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehThreshold
	float ___dx11BokehThreshold_20;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11SpawnHeuristic
	float ___dx11SpawnHeuristic_21;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehTexture
	Texture2D_t3884108195 * ___dx11BokehTexture_22;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehScale
	float ___dx11BokehScale_23;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::dx11BokehIntensity
	float ___dx11BokehIntensity_24;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::focalDistance01
	float ___focalDistance01_25;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbDrawArgs
	ComputeBuffer_t37359565 * ___cbDrawArgs_26;
	// UnityEngine.ComputeBuffer UnityStandardAssets.ImageEffects.DepthOfField::cbPoints
	ComputeBuffer_t37359565 * ___cbPoints_27;
	// System.Single UnityStandardAssets.ImageEffects.DepthOfField::internalBlurWidth
	float ___internalBlurWidth_28;
	// UnityEngine.Camera UnityStandardAssets.ImageEffects.DepthOfField::cachedCamera
	Camera_t2727095145 * ___cachedCamera_29;

public:
	inline static int32_t get_offset_of_visualizeFocus_5() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___visualizeFocus_5)); }
	inline bool get_visualizeFocus_5() const { return ___visualizeFocus_5; }
	inline bool* get_address_of_visualizeFocus_5() { return &___visualizeFocus_5; }
	inline void set_visualizeFocus_5(bool value)
	{
		___visualizeFocus_5 = value;
	}

	inline static int32_t get_offset_of_focalLength_6() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___focalLength_6)); }
	inline float get_focalLength_6() const { return ___focalLength_6; }
	inline float* get_address_of_focalLength_6() { return &___focalLength_6; }
	inline void set_focalLength_6(float value)
	{
		___focalLength_6 = value;
	}

	inline static int32_t get_offset_of_focalSize_7() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___focalSize_7)); }
	inline float get_focalSize_7() const { return ___focalSize_7; }
	inline float* get_address_of_focalSize_7() { return &___focalSize_7; }
	inline void set_focalSize_7(float value)
	{
		___focalSize_7 = value;
	}

	inline static int32_t get_offset_of_aperture_8() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___aperture_8)); }
	inline float get_aperture_8() const { return ___aperture_8; }
	inline float* get_address_of_aperture_8() { return &___aperture_8; }
	inline void set_aperture_8(float value)
	{
		___aperture_8 = value;
	}

	inline static int32_t get_offset_of_focalTransform_9() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___focalTransform_9)); }
	inline Transform_t1659122786 * get_focalTransform_9() const { return ___focalTransform_9; }
	inline Transform_t1659122786 ** get_address_of_focalTransform_9() { return &___focalTransform_9; }
	inline void set_focalTransform_9(Transform_t1659122786 * value)
	{
		___focalTransform_9 = value;
		Il2CppCodeGenWriteBarrier(&___focalTransform_9, value);
	}

	inline static int32_t get_offset_of_maxBlurSize_10() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___maxBlurSize_10)); }
	inline float get_maxBlurSize_10() const { return ___maxBlurSize_10; }
	inline float* get_address_of_maxBlurSize_10() { return &___maxBlurSize_10; }
	inline void set_maxBlurSize_10(float value)
	{
		___maxBlurSize_10 = value;
	}

	inline static int32_t get_offset_of_highResolution_11() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___highResolution_11)); }
	inline bool get_highResolution_11() const { return ___highResolution_11; }
	inline bool* get_address_of_highResolution_11() { return &___highResolution_11; }
	inline void set_highResolution_11(bool value)
	{
		___highResolution_11 = value;
	}

	inline static int32_t get_offset_of_blurType_12() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___blurType_12)); }
	inline int32_t get_blurType_12() const { return ___blurType_12; }
	inline int32_t* get_address_of_blurType_12() { return &___blurType_12; }
	inline void set_blurType_12(int32_t value)
	{
		___blurType_12 = value;
	}

	inline static int32_t get_offset_of_blurSampleCount_13() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___blurSampleCount_13)); }
	inline int32_t get_blurSampleCount_13() const { return ___blurSampleCount_13; }
	inline int32_t* get_address_of_blurSampleCount_13() { return &___blurSampleCount_13; }
	inline void set_blurSampleCount_13(int32_t value)
	{
		___blurSampleCount_13 = value;
	}

	inline static int32_t get_offset_of_nearBlur_14() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___nearBlur_14)); }
	inline bool get_nearBlur_14() const { return ___nearBlur_14; }
	inline bool* get_address_of_nearBlur_14() { return &___nearBlur_14; }
	inline void set_nearBlur_14(bool value)
	{
		___nearBlur_14 = value;
	}

	inline static int32_t get_offset_of_foregroundOverlap_15() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___foregroundOverlap_15)); }
	inline float get_foregroundOverlap_15() const { return ___foregroundOverlap_15; }
	inline float* get_address_of_foregroundOverlap_15() { return &___foregroundOverlap_15; }
	inline void set_foregroundOverlap_15(float value)
	{
		___foregroundOverlap_15 = value;
	}

	inline static int32_t get_offset_of_dofHdrShader_16() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___dofHdrShader_16)); }
	inline Shader_t3191267369 * get_dofHdrShader_16() const { return ___dofHdrShader_16; }
	inline Shader_t3191267369 ** get_address_of_dofHdrShader_16() { return &___dofHdrShader_16; }
	inline void set_dofHdrShader_16(Shader_t3191267369 * value)
	{
		___dofHdrShader_16 = value;
		Il2CppCodeGenWriteBarrier(&___dofHdrShader_16, value);
	}

	inline static int32_t get_offset_of_dofHdrMaterial_17() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___dofHdrMaterial_17)); }
	inline Material_t3870600107 * get_dofHdrMaterial_17() const { return ___dofHdrMaterial_17; }
	inline Material_t3870600107 ** get_address_of_dofHdrMaterial_17() { return &___dofHdrMaterial_17; }
	inline void set_dofHdrMaterial_17(Material_t3870600107 * value)
	{
		___dofHdrMaterial_17 = value;
		Il2CppCodeGenWriteBarrier(&___dofHdrMaterial_17, value);
	}

	inline static int32_t get_offset_of_dx11BokehShader_18() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___dx11BokehShader_18)); }
	inline Shader_t3191267369 * get_dx11BokehShader_18() const { return ___dx11BokehShader_18; }
	inline Shader_t3191267369 ** get_address_of_dx11BokehShader_18() { return &___dx11BokehShader_18; }
	inline void set_dx11BokehShader_18(Shader_t3191267369 * value)
	{
		___dx11BokehShader_18 = value;
		Il2CppCodeGenWriteBarrier(&___dx11BokehShader_18, value);
	}

	inline static int32_t get_offset_of_dx11bokehMaterial_19() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___dx11bokehMaterial_19)); }
	inline Material_t3870600107 * get_dx11bokehMaterial_19() const { return ___dx11bokehMaterial_19; }
	inline Material_t3870600107 ** get_address_of_dx11bokehMaterial_19() { return &___dx11bokehMaterial_19; }
	inline void set_dx11bokehMaterial_19(Material_t3870600107 * value)
	{
		___dx11bokehMaterial_19 = value;
		Il2CppCodeGenWriteBarrier(&___dx11bokehMaterial_19, value);
	}

	inline static int32_t get_offset_of_dx11BokehThreshold_20() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___dx11BokehThreshold_20)); }
	inline float get_dx11BokehThreshold_20() const { return ___dx11BokehThreshold_20; }
	inline float* get_address_of_dx11BokehThreshold_20() { return &___dx11BokehThreshold_20; }
	inline void set_dx11BokehThreshold_20(float value)
	{
		___dx11BokehThreshold_20 = value;
	}

	inline static int32_t get_offset_of_dx11SpawnHeuristic_21() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___dx11SpawnHeuristic_21)); }
	inline float get_dx11SpawnHeuristic_21() const { return ___dx11SpawnHeuristic_21; }
	inline float* get_address_of_dx11SpawnHeuristic_21() { return &___dx11SpawnHeuristic_21; }
	inline void set_dx11SpawnHeuristic_21(float value)
	{
		___dx11SpawnHeuristic_21 = value;
	}

	inline static int32_t get_offset_of_dx11BokehTexture_22() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___dx11BokehTexture_22)); }
	inline Texture2D_t3884108195 * get_dx11BokehTexture_22() const { return ___dx11BokehTexture_22; }
	inline Texture2D_t3884108195 ** get_address_of_dx11BokehTexture_22() { return &___dx11BokehTexture_22; }
	inline void set_dx11BokehTexture_22(Texture2D_t3884108195 * value)
	{
		___dx11BokehTexture_22 = value;
		Il2CppCodeGenWriteBarrier(&___dx11BokehTexture_22, value);
	}

	inline static int32_t get_offset_of_dx11BokehScale_23() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___dx11BokehScale_23)); }
	inline float get_dx11BokehScale_23() const { return ___dx11BokehScale_23; }
	inline float* get_address_of_dx11BokehScale_23() { return &___dx11BokehScale_23; }
	inline void set_dx11BokehScale_23(float value)
	{
		___dx11BokehScale_23 = value;
	}

	inline static int32_t get_offset_of_dx11BokehIntensity_24() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___dx11BokehIntensity_24)); }
	inline float get_dx11BokehIntensity_24() const { return ___dx11BokehIntensity_24; }
	inline float* get_address_of_dx11BokehIntensity_24() { return &___dx11BokehIntensity_24; }
	inline void set_dx11BokehIntensity_24(float value)
	{
		___dx11BokehIntensity_24 = value;
	}

	inline static int32_t get_offset_of_focalDistance01_25() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___focalDistance01_25)); }
	inline float get_focalDistance01_25() const { return ___focalDistance01_25; }
	inline float* get_address_of_focalDistance01_25() { return &___focalDistance01_25; }
	inline void set_focalDistance01_25(float value)
	{
		___focalDistance01_25 = value;
	}

	inline static int32_t get_offset_of_cbDrawArgs_26() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___cbDrawArgs_26)); }
	inline ComputeBuffer_t37359565 * get_cbDrawArgs_26() const { return ___cbDrawArgs_26; }
	inline ComputeBuffer_t37359565 ** get_address_of_cbDrawArgs_26() { return &___cbDrawArgs_26; }
	inline void set_cbDrawArgs_26(ComputeBuffer_t37359565 * value)
	{
		___cbDrawArgs_26 = value;
		Il2CppCodeGenWriteBarrier(&___cbDrawArgs_26, value);
	}

	inline static int32_t get_offset_of_cbPoints_27() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___cbPoints_27)); }
	inline ComputeBuffer_t37359565 * get_cbPoints_27() const { return ___cbPoints_27; }
	inline ComputeBuffer_t37359565 ** get_address_of_cbPoints_27() { return &___cbPoints_27; }
	inline void set_cbPoints_27(ComputeBuffer_t37359565 * value)
	{
		___cbPoints_27 = value;
		Il2CppCodeGenWriteBarrier(&___cbPoints_27, value);
	}

	inline static int32_t get_offset_of_internalBlurWidth_28() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___internalBlurWidth_28)); }
	inline float get_internalBlurWidth_28() const { return ___internalBlurWidth_28; }
	inline float* get_address_of_internalBlurWidth_28() { return &___internalBlurWidth_28; }
	inline void set_internalBlurWidth_28(float value)
	{
		___internalBlurWidth_28 = value;
	}

	inline static int32_t get_offset_of_cachedCamera_29() { return static_cast<int32_t>(offsetof(DepthOfField_t1745685742, ___cachedCamera_29)); }
	inline Camera_t2727095145 * get_cachedCamera_29() const { return ___cachedCamera_29; }
	inline Camera_t2727095145 ** get_address_of_cachedCamera_29() { return &___cachedCamera_29; }
	inline void set_cachedCamera_29(Camera_t2727095145 * value)
	{
		___cachedCamera_29 = value;
		Il2CppCodeGenWriteBarrier(&___cachedCamera_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
