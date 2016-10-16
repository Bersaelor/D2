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

// UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated
struct DepthOfFieldDeprecated_t432057665;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_ImageEffects3456138658.h"

// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.ctor()
extern "C"  void DepthOfFieldDeprecated__ctor_m2663162122 (DepthOfFieldDeprecated_t432057665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::.cctor()
extern "C"  void DepthOfFieldDeprecated__cctor_m471550947 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CreateMaterials()
extern "C"  void DepthOfFieldDeprecated_CreateMaterials_m3842160632 (DepthOfFieldDeprecated_t432057665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::CheckResources()
extern "C"  bool DepthOfFieldDeprecated_CheckResources_m2382492227 (DepthOfFieldDeprecated_t432057665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnDisable()
extern "C"  void DepthOfFieldDeprecated_OnDisable_m3424149617 (DepthOfFieldDeprecated_t432057665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnEnable()
extern "C"  void DepthOfFieldDeprecated_OnEnable_m3698463292 (DepthOfFieldDeprecated_t432057665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::FocalDistance01(System.Single)
extern "C"  float DepthOfFieldDeprecated_FocalDistance01_m1292342428 (DepthOfFieldDeprecated_t432057665 * __this, float ___worldDist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetDividerBasedOnQuality()
extern "C"  int32_t DepthOfFieldDeprecated_GetDividerBasedOnQuality_m3935736092 (DepthOfFieldDeprecated_t432057665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::GetLowResolutionDividerBasedOnQuality(System.Int32)
extern "C"  int32_t DepthOfFieldDeprecated_GetLowResolutionDividerBasedOnQuality_m2416355683 (DepthOfFieldDeprecated_t432057665 * __this, int32_t ___baseDivider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfFieldDeprecated_OnRenderImage_m96840980 (DepthOfFieldDeprecated_t432057665 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
extern "C"  void DepthOfFieldDeprecated_Blur_m4248775825 (DepthOfFieldDeprecated_t432057665 * __this, RenderTexture_t1963041563 * ___from0, RenderTexture_t1963041563 * ___to1, int32_t ___iterations2, int32_t ___blurPass3, float ___spread4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated/DofBlurriness,System.Int32,System.Single)
extern "C"  void DepthOfFieldDeprecated_BlurFg_m3362270898 (DepthOfFieldDeprecated_t432057665 * __this, RenderTexture_t1963041563 * ___from0, RenderTexture_t1963041563 * ___to1, int32_t ___iterations2, int32_t ___blurPass3, float ___spread4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
extern "C"  void DepthOfFieldDeprecated_BlurHex_m4105335860 (DepthOfFieldDeprecated_t432057665 * __this, RenderTexture_t1963041563 * ___from0, RenderTexture_t1963041563 * ___to1, int32_t ___blurPass2, float ___spread3, RenderTexture_t1963041563 * ___tmp4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfFieldDeprecated_Downsample_m1752717244 (DepthOfFieldDeprecated_t432057665 * __this, RenderTexture_t1963041563 * ___from0, RenderTexture_t1963041563 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfFieldDeprecated_AddBokeh_m3906833254 (DepthOfFieldDeprecated_t432057665 * __this, RenderTexture_t1963041563 * ___bokehInfo0, RenderTexture_t1963041563 * ___tempTex1, RenderTexture_t1963041563 * ___finalTarget2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::ReleaseTextures()
extern "C"  void DepthOfFieldDeprecated_ReleaseTextures_m4053789063 (DepthOfFieldDeprecated_t432057665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfFieldDeprecated::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C"  void DepthOfFieldDeprecated_AllocateTextures_m545557188 (DepthOfFieldDeprecated_t432057665 * __this, bool ___blurForeground0, RenderTexture_t1963041563 * ___source1, int32_t ___divider2, int32_t ___lowTexDivider3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
