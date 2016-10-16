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

// UnityEngine.Texture3D
struct Texture3D_t3884108226;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat4189619560.h"
#include "UnityEngine_UnityEngine_Texture3D3884108226.h"

// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture3D__ctor_m967628078 (Texture3D_t3884108226 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, bool ___mipmap4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[],System.Int32)
extern "C"  void Texture3D_SetPixels_m386933549 (Texture3D_t3884108226 * __this, ColorU5BU5D_t2441545636* ___colors0, int32_t ___miplevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[])
extern "C"  void Texture3D_SetPixels_m2314823146 (Texture3D_t3884108226 * __this, ColorU5BU5D_t2441545636* ___colors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Apply(System.Boolean,System.Boolean)
extern "C"  void Texture3D_Apply_m4216112429 (Texture3D_t3884108226 * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Apply()
extern "C"  void Texture3D_Apply_m3862146713 (Texture3D_t3884108226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture3D_Internal_Create_m4117793545 (Il2CppObject * __this /* static, unused */, Texture3D_t3884108226 * ___mono0, int32_t ___width1, int32_t ___height2, int32_t ___depth3, int32_t ___format4, bool ___mipmap5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
