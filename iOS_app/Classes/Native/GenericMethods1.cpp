#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEve2704060668.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEve2704060668MethodDeclarations.h"

// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern "C"  GameObject_t3674682005 * ExecuteEvents_GetEventHandler_TisIl2CppObject_m2285942506_gshared (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___root0, const MethodInfo* method);
#define ExecuteEvents_GetEventHandler_TisIl2CppObject_m2285942506(__this /* static, unused */, ___root0, method) ((  GameObject_t3674682005 * (*) (Il2CppObject * /* static, unused */, GameObject_t3674682005 *, const MethodInfo*))ExecuteEvents_GetEventHandler_TisIl2CppObject_m2285942506_gshared)(__this /* static, unused */, ___root0, method)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::CanHandleEvent<System.Object>(UnityEngine.GameObject)
extern "C"  bool ExecuteEvents_CanHandleEvent_TisIl2CppObject_m2627025177_gshared (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * p0, const MethodInfo* method);
#define ExecuteEvents_CanHandleEvent_TisIl2CppObject_m2627025177(__this /* static, unused */, p0, method) ((  bool (*) (Il2CppObject * /* static, unused */, GameObject_t3674682005 *, const MethodInfo*))ExecuteEvents_CanHandleEvent_TisIl2CppObject_m2627025177_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* ExecuteEvents_t2704060668_il2cpp_TypeInfo_var;
extern const uint32_t ExecuteEvents_GetEventHandler_TisIl2CppObject_m2285942506_MetadataUsageId;
extern "C"  GameObject_t3674682005 * ExecuteEvents_GetEventHandler_TisIl2CppObject_m2285942506_gshared (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___root0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisIl2CppObject_m2285942506_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t1659122786 * V_0 = NULL;
	{
		GameObject_t3674682005 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3964590952(NULL /*static, unused*/, (Object_t3071478659 *)L_0, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (GameObject_t3674682005 *)NULL;
	}

IL_000e:
	{
		GameObject_t3674682005 * L_2 = ___root0;
		NullCheck((GameObject_t3674682005 *)L_2);
		Transform_t1659122786 * L_3 = GameObject_get_transform_m1278640159((GameObject_t3674682005 *)L_2, /*hidden argument*/NULL);
		V_0 = (Transform_t1659122786 *)L_3;
		goto IL_0038;
	}

IL_001a:
	{
		Transform_t1659122786 * L_4 = V_0;
		NullCheck((Component_t3501516275 *)L_4);
		GameObject_t3674682005 * L_5 = Component_get_gameObject_m1170635899((Component_t3501516275 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t2704060668_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (Il2CppObject * /* static, unused */, GameObject_t3674682005 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (GameObject_t3674682005 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t1659122786 * L_7 = V_0;
		NullCheck((Component_t3501516275 *)L_7);
		GameObject_t3674682005 * L_8 = Component_get_gameObject_m1170635899((Component_t3501516275 *)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0031:
	{
		Transform_t1659122786 * L_9 = V_0;
		NullCheck((Transform_t1659122786 *)L_9);
		Transform_t1659122786 * L_10 = Transform_get_parent_m2236876972((Transform_t1659122786 *)L_9, /*hidden argument*/NULL);
		V_0 = (Transform_t1659122786 *)L_10;
	}

IL_0038:
	{
		Transform_t1659122786 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, (Object_t3071478659 *)L_11, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_001a;
		}
	}
	{
		return (GameObject_t3674682005 *)NULL;
	}
}
