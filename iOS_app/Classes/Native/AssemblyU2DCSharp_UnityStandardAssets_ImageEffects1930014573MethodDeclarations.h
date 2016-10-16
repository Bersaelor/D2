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

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct ColorCorrectionLookup_t1930014573;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::.ctor()
extern "C"  void ColorCorrectionLookup__ctor_m1138910606 (ColorCorrectionLookup_t1930014573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::CheckResources()
extern "C"  bool ColorCorrectionLookup_CheckResources_m2823840039 (ColorCorrectionLookup_t1930014573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDisable()
extern "C"  void ColorCorrectionLookup_OnDisable_m671105781 (ColorCorrectionLookup_t1930014573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDestroy()
extern "C"  void ColorCorrectionLookup_OnDestroy_m2848637831 (ColorCorrectionLookup_t1930014573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::SetIdentityLut()
extern "C"  void ColorCorrectionLookup_SetIdentityLut_m3610822049 (ColorCorrectionLookup_t1930014573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::ValidDimensions(UnityEngine.Texture2D)
extern "C"  bool ColorCorrectionLookup_ValidDimensions_m879968603 (ColorCorrectionLookup_t1930014573 * __this, Texture2D_t3884108195 * ___tex2d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::Convert(UnityEngine.Texture2D,System.String)
extern "C"  void ColorCorrectionLookup_Convert_m2859219993 (ColorCorrectionLookup_t1930014573 * __this, Texture2D_t3884108195 * ___temp2DTex0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ColorCorrectionLookup_OnRenderImage_m2804565520 (ColorCorrectionLookup_t1930014573 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
