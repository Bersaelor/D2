#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects1415309093.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects1351415316.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.CameraMotionBlur
struct  CameraMotionBlur_t3513202448  : public PostEffectsBase_t1415309093
{
public:
	// UnityStandardAssets.ImageEffects.CameraMotionBlur/MotionBlurFilter UnityStandardAssets.ImageEffects.CameraMotionBlur::filterType
	int32_t ___filterType_6;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::preview
	bool ___preview_7;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::previewScale
	Vector3_t4282066566  ___previewScale_8;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::movementScale
	float ___movementScale_9;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::rotationScale
	float ___rotationScale_10;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::maxVelocity
	float ___maxVelocity_11;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::minVelocity
	float ___minVelocity_12;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::velocityScale
	float ___velocityScale_13;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::softZDistance
	float ___softZDistance_14;
	// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::velocityDownsample
	int32_t ___velocityDownsample_15;
	// UnityEngine.LayerMask UnityStandardAssets.ImageEffects.CameraMotionBlur::excludeLayers
	LayerMask_t3236759763  ___excludeLayers_16;
	// UnityEngine.GameObject UnityStandardAssets.ImageEffects.CameraMotionBlur::tmpCam
	GameObject_t3674682005 * ___tmpCam_17;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::shader
	Shader_t3191267369 * ___shader_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::dx11MotionBlurShader
	Shader_t3191267369 * ___dx11MotionBlurShader_19;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.CameraMotionBlur::replacementClear
	Shader_t3191267369 * ___replacementClear_20;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CameraMotionBlur::motionBlurMaterial
	Material_t3870600107 * ___motionBlurMaterial_21;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.CameraMotionBlur::dx11MotionBlurMaterial
	Material_t3870600107 * ___dx11MotionBlurMaterial_22;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.CameraMotionBlur::noiseTexture
	Texture2D_t3884108195 * ___noiseTexture_23;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::jitter
	float ___jitter_24;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::showVelocity
	bool ___showVelocity_25;
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::showVelocityScale
	float ___showVelocityScale_26;
	// UnityEngine.Matrix4x4 UnityStandardAssets.ImageEffects.CameraMotionBlur::currentViewProjMat
	Matrix4x4_t1651859333  ___currentViewProjMat_27;
	// UnityEngine.Matrix4x4 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevViewProjMat
	Matrix4x4_t1651859333  ___prevViewProjMat_28;
	// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameCount
	int32_t ___prevFrameCount_29;
	// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::wasActive
	bool ___wasActive_30;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameForward
	Vector3_t4282066566  ___prevFrameForward_31;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFrameUp
	Vector3_t4282066566  ___prevFrameUp_32;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.CameraMotionBlur::prevFramePos
	Vector3_t4282066566  ___prevFramePos_33;
	// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::_camera
	Camera_t2727095145 * ____camera_34;

public:
	inline static int32_t get_offset_of_filterType_6() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___filterType_6)); }
	inline int32_t get_filterType_6() const { return ___filterType_6; }
	inline int32_t* get_address_of_filterType_6() { return &___filterType_6; }
	inline void set_filterType_6(int32_t value)
	{
		___filterType_6 = value;
	}

	inline static int32_t get_offset_of_preview_7() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___preview_7)); }
	inline bool get_preview_7() const { return ___preview_7; }
	inline bool* get_address_of_preview_7() { return &___preview_7; }
	inline void set_preview_7(bool value)
	{
		___preview_7 = value;
	}

	inline static int32_t get_offset_of_previewScale_8() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___previewScale_8)); }
	inline Vector3_t4282066566  get_previewScale_8() const { return ___previewScale_8; }
	inline Vector3_t4282066566 * get_address_of_previewScale_8() { return &___previewScale_8; }
	inline void set_previewScale_8(Vector3_t4282066566  value)
	{
		___previewScale_8 = value;
	}

	inline static int32_t get_offset_of_movementScale_9() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___movementScale_9)); }
	inline float get_movementScale_9() const { return ___movementScale_9; }
	inline float* get_address_of_movementScale_9() { return &___movementScale_9; }
	inline void set_movementScale_9(float value)
	{
		___movementScale_9 = value;
	}

	inline static int32_t get_offset_of_rotationScale_10() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___rotationScale_10)); }
	inline float get_rotationScale_10() const { return ___rotationScale_10; }
	inline float* get_address_of_rotationScale_10() { return &___rotationScale_10; }
	inline void set_rotationScale_10(float value)
	{
		___rotationScale_10 = value;
	}

	inline static int32_t get_offset_of_maxVelocity_11() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___maxVelocity_11)); }
	inline float get_maxVelocity_11() const { return ___maxVelocity_11; }
	inline float* get_address_of_maxVelocity_11() { return &___maxVelocity_11; }
	inline void set_maxVelocity_11(float value)
	{
		___maxVelocity_11 = value;
	}

	inline static int32_t get_offset_of_minVelocity_12() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___minVelocity_12)); }
	inline float get_minVelocity_12() const { return ___minVelocity_12; }
	inline float* get_address_of_minVelocity_12() { return &___minVelocity_12; }
	inline void set_minVelocity_12(float value)
	{
		___minVelocity_12 = value;
	}

	inline static int32_t get_offset_of_velocityScale_13() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___velocityScale_13)); }
	inline float get_velocityScale_13() const { return ___velocityScale_13; }
	inline float* get_address_of_velocityScale_13() { return &___velocityScale_13; }
	inline void set_velocityScale_13(float value)
	{
		___velocityScale_13 = value;
	}

	inline static int32_t get_offset_of_softZDistance_14() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___softZDistance_14)); }
	inline float get_softZDistance_14() const { return ___softZDistance_14; }
	inline float* get_address_of_softZDistance_14() { return &___softZDistance_14; }
	inline void set_softZDistance_14(float value)
	{
		___softZDistance_14 = value;
	}

	inline static int32_t get_offset_of_velocityDownsample_15() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___velocityDownsample_15)); }
	inline int32_t get_velocityDownsample_15() const { return ___velocityDownsample_15; }
	inline int32_t* get_address_of_velocityDownsample_15() { return &___velocityDownsample_15; }
	inline void set_velocityDownsample_15(int32_t value)
	{
		___velocityDownsample_15 = value;
	}

	inline static int32_t get_offset_of_excludeLayers_16() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___excludeLayers_16)); }
	inline LayerMask_t3236759763  get_excludeLayers_16() const { return ___excludeLayers_16; }
	inline LayerMask_t3236759763 * get_address_of_excludeLayers_16() { return &___excludeLayers_16; }
	inline void set_excludeLayers_16(LayerMask_t3236759763  value)
	{
		___excludeLayers_16 = value;
	}

	inline static int32_t get_offset_of_tmpCam_17() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___tmpCam_17)); }
	inline GameObject_t3674682005 * get_tmpCam_17() const { return ___tmpCam_17; }
	inline GameObject_t3674682005 ** get_address_of_tmpCam_17() { return &___tmpCam_17; }
	inline void set_tmpCam_17(GameObject_t3674682005 * value)
	{
		___tmpCam_17 = value;
		Il2CppCodeGenWriteBarrier(&___tmpCam_17, value);
	}

	inline static int32_t get_offset_of_shader_18() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___shader_18)); }
	inline Shader_t3191267369 * get_shader_18() const { return ___shader_18; }
	inline Shader_t3191267369 ** get_address_of_shader_18() { return &___shader_18; }
	inline void set_shader_18(Shader_t3191267369 * value)
	{
		___shader_18 = value;
		Il2CppCodeGenWriteBarrier(&___shader_18, value);
	}

	inline static int32_t get_offset_of_dx11MotionBlurShader_19() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___dx11MotionBlurShader_19)); }
	inline Shader_t3191267369 * get_dx11MotionBlurShader_19() const { return ___dx11MotionBlurShader_19; }
	inline Shader_t3191267369 ** get_address_of_dx11MotionBlurShader_19() { return &___dx11MotionBlurShader_19; }
	inline void set_dx11MotionBlurShader_19(Shader_t3191267369 * value)
	{
		___dx11MotionBlurShader_19 = value;
		Il2CppCodeGenWriteBarrier(&___dx11MotionBlurShader_19, value);
	}

	inline static int32_t get_offset_of_replacementClear_20() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___replacementClear_20)); }
	inline Shader_t3191267369 * get_replacementClear_20() const { return ___replacementClear_20; }
	inline Shader_t3191267369 ** get_address_of_replacementClear_20() { return &___replacementClear_20; }
	inline void set_replacementClear_20(Shader_t3191267369 * value)
	{
		___replacementClear_20 = value;
		Il2CppCodeGenWriteBarrier(&___replacementClear_20, value);
	}

	inline static int32_t get_offset_of_motionBlurMaterial_21() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___motionBlurMaterial_21)); }
	inline Material_t3870600107 * get_motionBlurMaterial_21() const { return ___motionBlurMaterial_21; }
	inline Material_t3870600107 ** get_address_of_motionBlurMaterial_21() { return &___motionBlurMaterial_21; }
	inline void set_motionBlurMaterial_21(Material_t3870600107 * value)
	{
		___motionBlurMaterial_21 = value;
		Il2CppCodeGenWriteBarrier(&___motionBlurMaterial_21, value);
	}

	inline static int32_t get_offset_of_dx11MotionBlurMaterial_22() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___dx11MotionBlurMaterial_22)); }
	inline Material_t3870600107 * get_dx11MotionBlurMaterial_22() const { return ___dx11MotionBlurMaterial_22; }
	inline Material_t3870600107 ** get_address_of_dx11MotionBlurMaterial_22() { return &___dx11MotionBlurMaterial_22; }
	inline void set_dx11MotionBlurMaterial_22(Material_t3870600107 * value)
	{
		___dx11MotionBlurMaterial_22 = value;
		Il2CppCodeGenWriteBarrier(&___dx11MotionBlurMaterial_22, value);
	}

	inline static int32_t get_offset_of_noiseTexture_23() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___noiseTexture_23)); }
	inline Texture2D_t3884108195 * get_noiseTexture_23() const { return ___noiseTexture_23; }
	inline Texture2D_t3884108195 ** get_address_of_noiseTexture_23() { return &___noiseTexture_23; }
	inline void set_noiseTexture_23(Texture2D_t3884108195 * value)
	{
		___noiseTexture_23 = value;
		Il2CppCodeGenWriteBarrier(&___noiseTexture_23, value);
	}

	inline static int32_t get_offset_of_jitter_24() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___jitter_24)); }
	inline float get_jitter_24() const { return ___jitter_24; }
	inline float* get_address_of_jitter_24() { return &___jitter_24; }
	inline void set_jitter_24(float value)
	{
		___jitter_24 = value;
	}

	inline static int32_t get_offset_of_showVelocity_25() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___showVelocity_25)); }
	inline bool get_showVelocity_25() const { return ___showVelocity_25; }
	inline bool* get_address_of_showVelocity_25() { return &___showVelocity_25; }
	inline void set_showVelocity_25(bool value)
	{
		___showVelocity_25 = value;
	}

	inline static int32_t get_offset_of_showVelocityScale_26() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___showVelocityScale_26)); }
	inline float get_showVelocityScale_26() const { return ___showVelocityScale_26; }
	inline float* get_address_of_showVelocityScale_26() { return &___showVelocityScale_26; }
	inline void set_showVelocityScale_26(float value)
	{
		___showVelocityScale_26 = value;
	}

	inline static int32_t get_offset_of_currentViewProjMat_27() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___currentViewProjMat_27)); }
	inline Matrix4x4_t1651859333  get_currentViewProjMat_27() const { return ___currentViewProjMat_27; }
	inline Matrix4x4_t1651859333 * get_address_of_currentViewProjMat_27() { return &___currentViewProjMat_27; }
	inline void set_currentViewProjMat_27(Matrix4x4_t1651859333  value)
	{
		___currentViewProjMat_27 = value;
	}

	inline static int32_t get_offset_of_prevViewProjMat_28() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___prevViewProjMat_28)); }
	inline Matrix4x4_t1651859333  get_prevViewProjMat_28() const { return ___prevViewProjMat_28; }
	inline Matrix4x4_t1651859333 * get_address_of_prevViewProjMat_28() { return &___prevViewProjMat_28; }
	inline void set_prevViewProjMat_28(Matrix4x4_t1651859333  value)
	{
		___prevViewProjMat_28 = value;
	}

	inline static int32_t get_offset_of_prevFrameCount_29() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___prevFrameCount_29)); }
	inline int32_t get_prevFrameCount_29() const { return ___prevFrameCount_29; }
	inline int32_t* get_address_of_prevFrameCount_29() { return &___prevFrameCount_29; }
	inline void set_prevFrameCount_29(int32_t value)
	{
		___prevFrameCount_29 = value;
	}

	inline static int32_t get_offset_of_wasActive_30() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___wasActive_30)); }
	inline bool get_wasActive_30() const { return ___wasActive_30; }
	inline bool* get_address_of_wasActive_30() { return &___wasActive_30; }
	inline void set_wasActive_30(bool value)
	{
		___wasActive_30 = value;
	}

	inline static int32_t get_offset_of_prevFrameForward_31() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___prevFrameForward_31)); }
	inline Vector3_t4282066566  get_prevFrameForward_31() const { return ___prevFrameForward_31; }
	inline Vector3_t4282066566 * get_address_of_prevFrameForward_31() { return &___prevFrameForward_31; }
	inline void set_prevFrameForward_31(Vector3_t4282066566  value)
	{
		___prevFrameForward_31 = value;
	}

	inline static int32_t get_offset_of_prevFrameUp_32() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___prevFrameUp_32)); }
	inline Vector3_t4282066566  get_prevFrameUp_32() const { return ___prevFrameUp_32; }
	inline Vector3_t4282066566 * get_address_of_prevFrameUp_32() { return &___prevFrameUp_32; }
	inline void set_prevFrameUp_32(Vector3_t4282066566  value)
	{
		___prevFrameUp_32 = value;
	}

	inline static int32_t get_offset_of_prevFramePos_33() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ___prevFramePos_33)); }
	inline Vector3_t4282066566  get_prevFramePos_33() const { return ___prevFramePos_33; }
	inline Vector3_t4282066566 * get_address_of_prevFramePos_33() { return &___prevFramePos_33; }
	inline void set_prevFramePos_33(Vector3_t4282066566  value)
	{
		___prevFramePos_33 = value;
	}

	inline static int32_t get_offset_of__camera_34() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448, ____camera_34)); }
	inline Camera_t2727095145 * get__camera_34() const { return ____camera_34; }
	inline Camera_t2727095145 ** get_address_of__camera_34() { return &____camera_34; }
	inline void set__camera_34(Camera_t2727095145 * value)
	{
		____camera_34 = value;
		Il2CppCodeGenWriteBarrier(&____camera_34, value);
	}
};

struct CameraMotionBlur_t3513202448_StaticFields
{
public:
	// System.Single UnityStandardAssets.ImageEffects.CameraMotionBlur::MAX_RADIUS
	float ___MAX_RADIUS_5;

public:
	inline static int32_t get_offset_of_MAX_RADIUS_5() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t3513202448_StaticFields, ___MAX_RADIUS_5)); }
	inline float get_MAX_RADIUS_5() const { return ___MAX_RADIUS_5; }
	inline float* get_address_of_MAX_RADIUS_5() { return &___MAX_RADIUS_5; }
	inline void set_MAX_RADIUS_5(float value)
	{
		___MAX_RADIUS_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
