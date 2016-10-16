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

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct ScreenSpaceAmbientOcclusion_t1300254689;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Shader3191267369.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::.ctor()
extern "C"  void ScreenSpaceAmbientOcclusion__ctor_m4111701402 (ScreenSpaceAmbientOcclusion_t1300254689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterial(UnityEngine.Shader)
extern "C"  Material_t3870600107 * ScreenSpaceAmbientOcclusion_CreateMaterial_m3954121456 (Il2CppObject * __this /* static, unused */, Shader_t3191267369 * ___shader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::DestroyMaterial(UnityEngine.Material)
extern "C"  void ScreenSpaceAmbientOcclusion_DestroyMaterial_m907780443 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnDisable()
extern "C"  void ScreenSpaceAmbientOcclusion_OnDisable_m2109902081 (ScreenSpaceAmbientOcclusion_t1300254689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::Start()
extern "C"  void ScreenSpaceAmbientOcclusion_Start_m3058839194 (ScreenSpaceAmbientOcclusion_t1300254689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnEnable()
extern "C"  void ScreenSpaceAmbientOcclusion_OnEnable_m1300763564 (ScreenSpaceAmbientOcclusion_t1300254689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterials()
extern "C"  void ScreenSpaceAmbientOcclusion_CreateMaterials_m2195536008 (ScreenSpaceAmbientOcclusion_t1300254689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ScreenSpaceAmbientOcclusion_OnRenderImage_m1101569668 (ScreenSpaceAmbientOcclusion_t1300254689 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
