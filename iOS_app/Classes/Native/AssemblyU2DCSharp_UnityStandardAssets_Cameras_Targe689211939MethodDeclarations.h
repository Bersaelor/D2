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

// UnityStandardAssets.Cameras.TargetFieldOfView
struct TargetFieldOfView_t689211939;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::.ctor()
extern "C"  void TargetFieldOfView__ctor_m771803167 (TargetFieldOfView_t689211939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::Start()
extern "C"  void TargetFieldOfView_Start_m4013908255 (TargetFieldOfView_t689211939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::FollowTarget(System.Single)
extern "C"  void TargetFieldOfView_FollowTarget_m3408375716 (TargetFieldOfView_t689211939 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::SetTarget(UnityEngine.Transform)
extern "C"  void TargetFieldOfView_SetTarget_m51165741 (TargetFieldOfView_t689211939 * __this, Transform_t1659122786 * ___newTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::MaxBoundsExtent(UnityEngine.Transform,System.Boolean)
extern "C"  float TargetFieldOfView_MaxBoundsExtent_m3186253996 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___obj0, bool ___includeEffects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
