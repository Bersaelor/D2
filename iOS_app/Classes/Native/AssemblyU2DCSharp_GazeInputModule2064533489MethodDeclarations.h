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

// GazeInputModule
struct GazeInputModule_t2064533489;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void GazeInputModule::.ctor()
extern "C"  void GazeInputModule__ctor_m1046273690 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::ShouldActivateModule()
extern "C"  bool GazeInputModule_ShouldActivateModule_m90977672 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DeactivateModule()
extern "C"  void GazeInputModule_DeactivateModule_m3462298090 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::IsPointerOverGameObject(System.Int32)
extern "C"  bool GazeInputModule_IsPointerOverGameObject_m3732481365 (GazeInputModule_t2064533489 * __this, int32_t ___pointerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::Process()
extern "C"  void GazeInputModule_Process_m3294277799 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::CastRayFromGaze()
extern "C"  void GazeInputModule_CastRayFromGaze_m432849490 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateCurrentObject()
extern "C"  void GazeInputModule_UpdateCurrentObject_m2728252295 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateReticle(UnityEngine.GameObject)
extern "C"  void GazeInputModule_UpdateReticle_m3546183771 (GazeInputModule_t2064533489 * __this, GameObject_t3674682005 * ___previousGazedObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleDrag()
extern "C"  void GazeInputModule_HandleDrag_m461122854 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandlePendingClick()
extern "C"  void GazeInputModule_HandlePendingClick_m1735452131 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleTrigger()
extern "C"  void GazeInputModule_HandleTrigger_m1721205544 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GazeInputModule::NormalizedCartesianToSpherical(UnityEngine.Vector3)
extern "C"  Vector2_t4282066565  GazeInputModule_NormalizedCartesianToSpherical_m3148374809 (GazeInputModule_t2064533489 * __this, Vector3_t4282066566  ___cartCoords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GazeInputModule::GetCurrentGameObject()
extern "C"  GameObject_t3674682005 * GazeInputModule_GetCurrentGameObject_m3453813641 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GazeInputModule::GetIntersectionPosition()
extern "C"  Vector3_t4282066566  GazeInputModule_GetIntersectionPosition_m1734457914 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DisableGazePointer()
extern "C"  void GazeInputModule_DisableGazePointer_m2817493146 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GazeInputModule::GetGazePointerPosition()
extern "C"  Vector2_t4282066565  GazeInputModule_GetGazePointerPosition_m3374365818 (GazeInputModule_t2064533489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
