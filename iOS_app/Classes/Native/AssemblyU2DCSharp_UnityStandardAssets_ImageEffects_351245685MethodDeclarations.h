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

// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_t351245685;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void UnityStandardAssets.ImageEffects.Bloom::.ctor()
extern "C"  void Bloom__ctor_m3323328646 (Bloom_t351245685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Bloom::CheckResources()
extern "C"  bool Bloom_CheckResources_m41585967 (Bloom_t351245685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_OnRenderImage_m1723889688 (Bloom_t351245685 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_AddTo_m1829493191 (Bloom_t351245685 * __this, float ___intensity_0, RenderTexture_t1963041563 * ___from1, RenderTexture_t1963041563 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BlendFlares_m2336347464 (Bloom_t351245685 * __this, RenderTexture_t1963041563 * ___from0, RenderTexture_t1963041563 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m4052697047 (Bloom_t351245685 * __this, float ___thresh0, RenderTexture_t1963041563 * ___from1, RenderTexture_t1963041563 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m1716410578 (Bloom_t351245685 * __this, Color_t4194546905  ___threshColor0, RenderTexture_t1963041563 * ___from1, RenderTexture_t1963041563 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_Vignette_m4273803823 (Bloom_t351245685 * __this, float ___amount0, RenderTexture_t1963041563 * ___from1, RenderTexture_t1963041563 * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
