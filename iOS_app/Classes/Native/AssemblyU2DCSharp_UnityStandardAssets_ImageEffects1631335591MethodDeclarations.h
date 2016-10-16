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

// UnityStandardAssets.ImageEffects.BloomAndFlares
struct BloomAndFlares_t1631335591;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::.ctor()
extern "C"  void BloomAndFlares__ctor_m3188028516 (BloomAndFlares_t1631335591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::CheckResources()
extern "C"  bool BloomAndFlares_CheckResources_m2746667049 (BloomAndFlares_t1631335591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_OnRenderImage_m4151474554 (BloomAndFlares_t1631335591 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_AddTo_m1453050281 (BloomAndFlares_t1631335591 * __this, float ___intensity_0, RenderTexture_t1963041563 * ___from1, RenderTexture_t1963041563 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_BlendFlares_m703121194 (BloomAndFlares_t1631335591 * __this, RenderTexture_t1963041563 * ___from0, RenderTexture_t1963041563 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_BrightFilter_m1741199450 (BloomAndFlares_t1631335591 * __this, float ___thresh0, float ___useAlphaAsMask1, RenderTexture_t1963041563 * ___from2, RenderTexture_t1963041563 * ___to3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_Vignette_m3822681869 (BloomAndFlares_t1631335591 * __this, float ___amount0, RenderTexture_t1963041563 * ___from1, RenderTexture_t1963041563 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
