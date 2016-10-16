#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.ImageEffects.CameraMotionBlur
struct CameraMotionBlur_t3513202448;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.ctor()
extern "C"  void CameraMotionBlur__ctor_m1070595611 (CameraMotionBlur_t3513202448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::.cctor()
extern "C"  void CameraMotionBlur__cctor_m2641596658 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::CalculateViewProjection()
extern "C"  void CameraMotionBlur_CalculateViewProjection_m4145099411 (CameraMotionBlur_t3513202448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Start()
extern "C"  void CameraMotionBlur_Start_m17733403 (CameraMotionBlur_t3513202448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnEnable()
extern "C"  void CameraMotionBlur_OnEnable_m1758285707 (CameraMotionBlur_t3513202448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnDisable()
extern "C"  void CameraMotionBlur_OnDisable_m3408186626 (CameraMotionBlur_t3513202448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.CameraMotionBlur::CheckResources()
extern "C"  bool CameraMotionBlur_CheckResources_m4151542098 (CameraMotionBlur_t3513202448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void CameraMotionBlur_OnRenderImage_m2750722403 (CameraMotionBlur_t3513202448 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::Remember()
extern "C"  void CameraMotionBlur_Remember_m2194658070 (CameraMotionBlur_t3513202448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.ImageEffects.CameraMotionBlur::GetTmpCam()
extern "C"  Camera_t2727095145 * CameraMotionBlur_GetTmpCam_m1756927240 (CameraMotionBlur_t3513202448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.CameraMotionBlur::StartFrame()
extern "C"  void CameraMotionBlur_StartFrame_m111234356 (CameraMotionBlur_t3513202448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C"  int32_t CameraMotionBlur_divRoundUp_m4017167283 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___d1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
