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

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t3049971822;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Utility_Wayp2172029929.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void UnityStandardAssets.Utility.WaypointCircuit::.ctor()
extern "C"  void WaypointCircuit__ctor_m3386788286 (WaypointCircuit_t3049971822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Utility.WaypointCircuit::get_Length()
extern "C"  float WaypointCircuit_get_Length_m377407721 (WaypointCircuit_t3049971822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::set_Length(System.Single)
extern "C"  void WaypointCircuit_set_Length_m3158598562 (WaypointCircuit_t3049971822 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C"  TransformU5BU5D_t3792884695* WaypointCircuit_get_Waypoints_m3168539201 (WaypointCircuit_t3049971822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::Awake()
extern "C"  void WaypointCircuit_Awake_m3624393505 (WaypointCircuit_t3049971822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern "C"  RoutePoint_t2172029929  WaypointCircuit_GetRoutePoint_m977067582 (WaypointCircuit_t3049971822 * __this, float ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern "C"  Vector3_t4282066566  WaypointCircuit_GetRoutePosition_m3848505155 (WaypointCircuit_t3049971822 * __this, float ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t4282066566  WaypointCircuit_CatmullRom_m3392065657 (WaypointCircuit_t3049971822 * __this, Vector3_t4282066566  ___p00, Vector3_t4282066566  ___p11, Vector3_t4282066566  ___p22, Vector3_t4282066566  ___p33, float ___i4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::CachePositionsAndDistances()
extern "C"  void WaypointCircuit_CachePositionsAndDistances_m2593842293 (WaypointCircuit_t3049971822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmos()
extern "C"  void WaypointCircuit_OnDrawGizmos_m928445858 (WaypointCircuit_t3049971822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::OnDrawGizmosSelected()
extern "C"  void WaypointCircuit_OnDrawGizmosSelected_m4237711517 (WaypointCircuit_t3049971822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointCircuit::DrawGizmos(System.Boolean)
extern "C"  void WaypointCircuit_DrawGizmos_m2778112922 (WaypointCircuit_t3049971822 * __this, bool ___selected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
