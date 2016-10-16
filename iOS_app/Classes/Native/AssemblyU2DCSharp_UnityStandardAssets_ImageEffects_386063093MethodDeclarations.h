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

// UnityStandardAssets.ImageEffects.ImageEffects
struct ImageEffects_t386063093;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void UnityStandardAssets.ImageEffects.ImageEffects::.ctor()
extern "C"  void ImageEffects__ctor_m1214554070 (ImageEffects_t386063093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void ImageEffects_RenderDistortion_m2474859756 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___material0, RenderTexture_t1963041563 * ___source1, RenderTexture_t1963041563 * ___destination2, float ___angle3, Vector2_t4282066565  ___center4, Vector2_t4282066565  ___radius5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ImageEffects_Blit_m2096195135 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ImageEffects_BlitWithMaterial_m592840046 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___material0, RenderTexture_t1963041563 * ___source1, RenderTexture_t1963041563 * ___dest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
