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

// UnityEngine.ComputeBuffer
struct ComputeBuffer_t37359565;
// System.Array
struct Il2CppArray;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ComputeBufferType2569032487.h"
#include "UnityEngine_UnityEngine_ComputeBuffer37359565.h"
#include "mscorlib_System_Array1146569071.h"

// System.Void UnityEngine.ComputeBuffer::.ctor(System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C"  void ComputeBuffer__ctor_m3093304150 (ComputeBuffer_t37359565 * __this, int32_t ___count0, int32_t ___stride1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Finalize()
extern "C"  void ComputeBuffer_Finalize_m3729323200 (ComputeBuffer_t37359565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Dispose()
extern "C"  void ComputeBuffer_Dispose_m2093487135 (ComputeBuffer_t37359565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Dispose(System.Boolean)
extern "C"  void ComputeBuffer_Dispose_m2265818966 (ComputeBuffer_t37359565 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)
extern "C"  void ComputeBuffer_InitBuffer_m3899303506 (Il2CppObject * __this /* static, unused */, ComputeBuffer_t37359565 * ___buf0, int32_t ___count1, int32_t ___stride2, int32_t ___type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
extern "C"  void ComputeBuffer_DestroyBuffer_m1957470488 (Il2CppObject * __this /* static, unused */, ComputeBuffer_t37359565 * ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::Release()
extern "C"  void ComputeBuffer_Release_m1932213255 (ComputeBuffer_t37359565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::SetData(System.Array)
extern "C"  void ComputeBuffer_SetData_m3962017490 (ComputeBuffer_t37359565 * __this, Il2CppArray * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32)
extern "C"  void ComputeBuffer_InternalSetData_m3343666658 (ComputeBuffer_t37359565 * __this, Il2CppArray * ___data0, int32_t ___elemSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeBuffer::CopyCount(UnityEngine.ComputeBuffer,UnityEngine.ComputeBuffer,System.Int32)
extern "C"  void ComputeBuffer_CopyCount_m63772307 (Il2CppObject * __this /* static, unused */, ComputeBuffer_t37359565 * ___src0, ComputeBuffer_t37359565 * ___dst1, int32_t ___dstOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
