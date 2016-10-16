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

// UnityEngine.Renderer
struct Renderer_t3076687687;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t3870600107 * Renderer_get_material_m2720864603 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C"  MaterialU5BU5D_t170856778* Renderer_get_materials_m3755041148 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
extern "C"  void Renderer_set_materials_m268031319 (Renderer_t3076687687 * __this, MaterialU5BU5D_t170856778* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
extern "C"  MaterialU5BU5D_t170856778* Renderer_get_sharedMaterials_m1981818007 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C"  Bounds_t2711641849  Renderer_get_bounds_m1533373851 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Renderer_INTERNAL_get_bounds_m3488131760 (Renderer_t3076687687 * __this, Bounds_t2711641849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C"  int32_t Renderer_get_sortingLayerID_m1954594923 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C"  int32_t Renderer_get_sortingOrder_m3623465101 (Renderer_t3076687687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
