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

// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_t3518381717;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Texture
struct Texture_t2526458961;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"

// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
extern "C"  void ContrastStretch__ctor_m2976994662 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
extern "C"  Material_t3870600107 * ContrastStretch_get_materialLum_m3107779033 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
extern "C"  Material_t3870600107 * ContrastStretch_get_materialReduce_m1897184915 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
extern "C"  Material_t3870600107 * ContrastStretch_get_materialAdapt_m4200181879 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
extern "C"  Material_t3870600107 * ContrastStretch_get_materialApply_m262502851 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
extern "C"  void ContrastStretch_Start_m1924132454 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
extern "C"  void ContrastStretch_OnEnable_m2939859040 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
extern "C"  void ContrastStretch_OnDisable_m1382254285 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ContrastStretch_OnRenderImage_m2263715640 (ContrastStretch_t3518381717 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
extern "C"  void ContrastStretch_CalculateAdaptation_m94063665 (ContrastStretch_t3518381717 * __this, Texture_t2526458961 * ___curTexture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
