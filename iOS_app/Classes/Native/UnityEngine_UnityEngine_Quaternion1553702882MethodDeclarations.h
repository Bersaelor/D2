﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Quaternion
struct Quaternion_t1553702882;
struct Quaternion_t1553702882_marshaled_pinvoke;
struct Quaternion_t1553702882_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m1100844011 (Quaternion_t1553702882 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t1553702882  Quaternion_get_identity_m1743882806 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  float Quaternion_Dot_m580284 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___a0, Quaternion_t1553702882  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t1553702882  Quaternion_AngleAxis_m644124247 (Il2CppObject * __this /* static, unused */, float ___angle0, Vector3_t4282066566  ___axis1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_AngleAxis_m1562314763 (Il2CppObject * __this /* static, unused */, float ___angle0, Vector3_t4282066566 * ___axis1, Quaternion_t1553702882 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t1553702882  Quaternion_LookRotation_m2869326048 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___forward0, Vector3_t4282066566  ___upwards1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t1553702882  Quaternion_LookRotation_m1257501645 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___forward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_LookRotation_m1501255504 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___forward0, Vector3_t4282066566 * ___upwards1, Quaternion_t1553702882 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t1553702882  Quaternion_Slerp_m844700366 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___a0, Quaternion_t1553702882  ___b1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Slerp_m2927410052 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882 * ___a0, Quaternion_t1553702882 * ___b1, float ___t2, Quaternion_t1553702882 * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t1553702882  Quaternion_Lerp_m1693481477 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___a0, Quaternion_t1553702882  ___b1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Lerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Lerp_m3955033425 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882 * ___a0, Quaternion_t1553702882 * ___b1, float ___t2, Quaternion_t1553702882 * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  Quaternion_Inverse_m3542515566 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Inverse_m4175627710 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882 * ___rotation0, Quaternion_t1553702882 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m1793285860 (Quaternion_t1553702882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C"  Vector3_t4282066566  Quaternion_get_eulerAngles_m997303795 (Quaternion_t1553702882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t1553702882  Quaternion_Euler_m1204688217 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t1553702882  Quaternion_Euler_m1940911101 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___euler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  Quaternion_Internal_MakePositive_m4059160381 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___euler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C"  Vector3_t4282066566  Quaternion_Internal_ToEulerRad_m1608666215 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m1660134351 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882 * ___rotation0, Vector3_t4282066566 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C"  Quaternion_t1553702882  Quaternion_Internal_FromEulerRad_m3681319598 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___euler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m1312441940 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___euler0, Quaternion_t1553702882 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m3823258238 (Quaternion_t1553702882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m3843409946 (Quaternion_t1553702882 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  Quaternion_op_Multiply_m3077481361 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___lhs0, Quaternion_t1553702882  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  Quaternion_op_Multiply_m3771288979 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___rotation0, Vector3_t4282066566  ___point1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  bool Quaternion_op_Inequality_m4197259746 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___lhs0, Quaternion_t1553702882  ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Quaternion_t1553702882;
struct Quaternion_t1553702882_marshaled_pinvoke;

extern "C" void Quaternion_t1553702882_marshal_pinvoke(const Quaternion_t1553702882& unmarshaled, Quaternion_t1553702882_marshaled_pinvoke& marshaled);
extern "C" void Quaternion_t1553702882_marshal_pinvoke_back(const Quaternion_t1553702882_marshaled_pinvoke& marshaled, Quaternion_t1553702882& unmarshaled);
extern "C" void Quaternion_t1553702882_marshal_pinvoke_cleanup(Quaternion_t1553702882_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Quaternion_t1553702882;
struct Quaternion_t1553702882_marshaled_com;

extern "C" void Quaternion_t1553702882_marshal_com(const Quaternion_t1553702882& unmarshaled, Quaternion_t1553702882_marshaled_com& marshaled);
extern "C" void Quaternion_t1553702882_marshal_com_back(const Quaternion_t1553702882_marshaled_com& marshaled, Quaternion_t1553702882& unmarshaled);
extern "C" void Quaternion_t1553702882_marshal_com_cleanup(Quaternion_t1553702882_marshaled_com& marshaled);
