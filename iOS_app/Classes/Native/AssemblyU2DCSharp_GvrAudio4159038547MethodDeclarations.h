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

// GvrAudioListener
struct GvrAudioListener_t2617838119;
// UnityEngine.Transform
struct Transform_t1659122786;
// GvrAudioRoom
struct GvrAudioRoom_t252475342;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// GvrAudioRoom/SurfaceMaterial[]
struct SurfaceMaterialU5BU5D_t869604290;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrAudioListener2617838119.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality3830609699.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode1562508899.h"
#include "AssemblyU2DCSharp_GvrAudioRoom252475342.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// System.Void GvrAudio::.cctor()
extern "C"  void GvrAudio__cctor_m4258904325 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_SampleRate()
extern "C"  int32_t GvrAudio_get_SampleRate_m3270880477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_NumChannels()
extern "C"  int32_t GvrAudio_get_NumChannels_m2317404805 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_FramesPerBuffer()
extern "C"  int32_t GvrAudio_get_FramesPerBuffer_m1465030534 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Initialize(GvrAudioListener,GvrAudio/Quality)
extern "C"  void GvrAudio_Initialize_m4140574142 (Il2CppObject * __this /* static, unused */, GvrAudioListener_t2617838119 * ___listener0, int32_t ___quality1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Shutdown(GvrAudioListener)
extern "C"  void GvrAudio_Shutdown_m3896450219 (Il2CppObject * __this /* static, unused */, GvrAudioListener_t2617838119 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioListener(System.Single,UnityEngine.LayerMask,System.Single)
extern "C"  void GvrAudio_UpdateAudioListener_m2285629295 (Il2CppObject * __this /* static, unused */, float ___globalGainDb0, LayerMask_t3236759763  ___occlusionMask1, float ___worldScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateAudioSoundfield()
extern "C"  int32_t GvrAudio_CreateAudioSoundfield_m1964651101 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroyAudioSoundfield(System.Int32)
extern "C"  void GvrAudio_DestroyAudioSoundfield_m3366174036 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioSoundfield(System.Int32,UnityEngine.Transform,System.Single)
extern "C"  void GvrAudio_UpdateAudioSoundfield_m1990725739 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Transform_t1659122786 * ___transform1, float ___gainDb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateAudioSource(System.Boolean)
extern "C"  int32_t GvrAudio_CreateAudioSource_m1809109092 (Il2CppObject * __this /* static, unused */, bool ___hrtfEnabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroyAudioSource(System.Int32)
extern "C"  void GvrAudio_DestroyAudioSource_m3759383460 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioSource(System.Int32,UnityEngine.Transform,System.Boolean,System.Single,System.Single,UnityEngine.AudioRolloffMode,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void GvrAudio_UpdateAudioSource_m639837080 (Il2CppObject * __this /* static, unused */, int32_t ___id0, Transform_t1659122786 * ___transform1, bool ___bypassRoomEffects2, float ___gainDb3, float ___spread4, int32_t ___rolloffMode5, float ___minDistance6, float ___maxDistance7, float ___alpha8, float ___sharpness9, float ___occlusion10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioRoom(GvrAudioRoom,System.Boolean)
extern "C"  void GvrAudio_UpdateAudioRoom_m4154358141 (Il2CppObject * __this /* static, unused */, GvrAudioRoom_t252475342 * ___room0, bool ___roomEnabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudio::ComputeOcclusion(UnityEngine.Transform)
extern "C"  float GvrAudio_ComputeOcclusion_m4053637503 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___sourceTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GvrAudio::Generate2dPolarPattern(System.Single,System.Single,System.Int32)
extern "C"  Vector2U5BU5D_t4024180168* GvrAudio_Generate2dPolarPattern_m1431210773 (Il2CppObject * __this /* static, unused */, float ___alpha0, float ___order1, int32_t ___resolution2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudio::IsListenerInsideRoom(GvrAudioRoom)
extern "C"  bool GvrAudio_IsListenerInsideRoom_m1548351895 (Il2CppObject * __this /* static, unused */, GvrAudioRoom_t252475342 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudio::ConvertAmplitudeFromDb(System.Single)
extern "C"  float GvrAudio_ConvertAmplitudeFromDb_m1063126027 (Il2CppObject * __this /* static, unused */, float ___db0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::ConvertAudioTransformFromUnity(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void GvrAudio_ConvertAudioTransformFromUnity_m448868012 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___position0, Quaternion_t1553702882 * ___rotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetListenerGain(System.Single)
extern "C"  void GvrAudio_SetListenerGain_m4290622576 (Il2CppObject * __this /* static, unused */, float ___gain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetListenerTransform(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void GvrAudio_SetListenerTransform_m4241122455 (Il2CppObject * __this /* static, unused */, float ___px0, float ___py1, float ___pz2, float ___qx3, float ___qy4, float ___qz5, float ___qw6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateSoundfield(System.Int32)
extern "C"  int32_t GvrAudio_CreateSoundfield_m4003300002 (Il2CppObject * __this /* static, unused */, int32_t ___numChannels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroySoundfield(System.Int32)
extern "C"  void GvrAudio_DestroySoundfield_m2253810108 (Il2CppObject * __this /* static, unused */, int32_t ___soundfieldId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSoundfieldGain(System.Int32,System.Single)
extern "C"  void GvrAudio_SetSoundfieldGain_m1187858088 (Il2CppObject * __this /* static, unused */, int32_t ___soundfieldId0, float ___gain1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSoundfieldRotation(System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  void GvrAudio_SetSoundfieldRotation_m3581234902 (Il2CppObject * __this /* static, unused */, int32_t ___soundfieldId0, float ___qx1, float ___qy2, float ___qz3, float ___qw4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateSource(System.Boolean)
extern "C"  int32_t GvrAudio_CreateSource_m919673816 (Il2CppObject * __this /* static, unused */, bool ___enableHrtf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroySource(System.Int32)
extern "C"  void GvrAudio_DestroySource_m3248276492 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceBypassRoomEffects(System.Int32,System.Boolean)
extern "C"  void GvrAudio_SetSourceBypassRoomEffects_m3470739822 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, bool ___bypassRoomEffects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceDirectivity(System.Int32,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceDirectivity_m275237490 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___alpha1, float ___order2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceDistanceAttenuationMethod(System.Int32,UnityEngine.AudioRolloffMode,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceDistanceAttenuationMethod_m602109940 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, int32_t ___rolloffMode1, float ___minDistance2, float ___maxDistance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceGain(System.Int32,System.Single)
extern "C"  void GvrAudio_SetSourceGain_m2656461048 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___gain1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceOcclusionIntensity(System.Int32,System.Single)
extern "C"  void GvrAudio_SetSourceOcclusionIntensity_m3150654111 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___intensity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceSpread(System.Int32,System.Single)
extern "C"  void GvrAudio_SetSourceSpread_m1274341484 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___spreadRad1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceTransform(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceTransform_m2959118527 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___px1, float ___py2, float ___pz3, float ___qx4, float ___qy5, float ___qz6, float ___qw7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetRoomProperties(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,GvrAudioRoom/SurfaceMaterial[],System.Single,System.Single,System.Single,System.Single)
extern "C"  void GvrAudio_SetRoomProperties_m2791477763 (Il2CppObject * __this /* static, unused */, float ___px0, float ___py1, float ___pz2, float ___qx3, float ___qy4, float ___qz5, float ___qw6, float ___dx7, float ___dy8, float ___dz9, SurfaceMaterialU5BU5D_t869604290* ___materialNames10, float ___reflectionScalar11, float ___reverbGain12, float ___reverbBrightness13, float ___reverbTime14, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Initialize(GvrAudio/Quality,System.Int32,System.Int32,System.Int32)
extern "C"  void GvrAudio_Initialize_m1191139374 (Il2CppObject * __this /* static, unused */, int32_t ___quality0, int32_t ___sampleRate1, int32_t ___numChannels2, int32_t ___framesPerBuffer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Shutdown()
extern "C"  void GvrAudio_Shutdown_m1565365234 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
