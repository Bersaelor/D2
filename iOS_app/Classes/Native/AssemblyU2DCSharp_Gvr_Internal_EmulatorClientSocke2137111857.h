#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.TcpClient
struct TcpClient_t838416830;
// System.Threading.Thread
struct Thread_t1973216770;
// Gvr.Internal.EmulatorManager
struct EmulatorManager_t622010154;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "mscorlib_System_Boolean476798718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorClientSocket
struct  EmulatorClientSocket_t2137111857  : public MonoBehaviour_t667441552
{
public:
	// System.Net.Sockets.TcpClient Gvr.Internal.EmulatorClientSocket::phoneMirroringSocket
	TcpClient_t838416830 * ___phoneMirroringSocket_5;
	// System.Threading.Thread Gvr.Internal.EmulatorClientSocket::phoneEventThread
	Thread_t1973216770 * ___phoneEventThread_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Gvr.Internal.EmulatorClientSocket::shouldStop
	bool ___shouldStop_7;
	// Gvr.Internal.EmulatorManager Gvr.Internal.EmulatorClientSocket::phoneRemote
	EmulatorManager_t622010154 * ___phoneRemote_8;
	// System.Boolean Gvr.Internal.EmulatorClientSocket::<connected>k__BackingField
	bool ___U3CconnectedU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_phoneMirroringSocket_5() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2137111857, ___phoneMirroringSocket_5)); }
	inline TcpClient_t838416830 * get_phoneMirroringSocket_5() const { return ___phoneMirroringSocket_5; }
	inline TcpClient_t838416830 ** get_address_of_phoneMirroringSocket_5() { return &___phoneMirroringSocket_5; }
	inline void set_phoneMirroringSocket_5(TcpClient_t838416830 * value)
	{
		___phoneMirroringSocket_5 = value;
		Il2CppCodeGenWriteBarrier(&___phoneMirroringSocket_5, value);
	}

	inline static int32_t get_offset_of_phoneEventThread_6() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2137111857, ___phoneEventThread_6)); }
	inline Thread_t1973216770 * get_phoneEventThread_6() const { return ___phoneEventThread_6; }
	inline Thread_t1973216770 ** get_address_of_phoneEventThread_6() { return &___phoneEventThread_6; }
	inline void set_phoneEventThread_6(Thread_t1973216770 * value)
	{
		___phoneEventThread_6 = value;
		Il2CppCodeGenWriteBarrier(&___phoneEventThread_6, value);
	}

	inline static int32_t get_offset_of_shouldStop_7() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2137111857, ___shouldStop_7)); }
	inline bool get_shouldStop_7() const { return ___shouldStop_7; }
	inline bool* get_address_of_shouldStop_7() { return &___shouldStop_7; }
	inline void set_shouldStop_7(bool value)
	{
		___shouldStop_7 = value;
	}

	inline static int32_t get_offset_of_phoneRemote_8() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2137111857, ___phoneRemote_8)); }
	inline EmulatorManager_t622010154 * get_phoneRemote_8() const { return ___phoneRemote_8; }
	inline EmulatorManager_t622010154 ** get_address_of_phoneRemote_8() { return &___phoneRemote_8; }
	inline void set_phoneRemote_8(EmulatorManager_t622010154 * value)
	{
		___phoneRemote_8 = value;
		Il2CppCodeGenWriteBarrier(&___phoneRemote_8, value);
	}

	inline static int32_t get_offset_of_U3CconnectedU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2137111857, ___U3CconnectedU3Ek__BackingField_9)); }
	inline bool get_U3CconnectedU3Ek__BackingField_9() const { return ___U3CconnectedU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CconnectedU3Ek__BackingField_9() { return &___U3CconnectedU3Ek__BackingField_9; }
	inline void set_U3CconnectedU3Ek__BackingField_9(bool value)
	{
		___U3CconnectedU3Ek__BackingField_9 = value;
	}
};

struct EmulatorClientSocket_t2137111857_StaticFields
{
public:
	// System.Int32 Gvr.Internal.EmulatorClientSocket::kPhoneEventPort
	int32_t ___kPhoneEventPort_4;

public:
	inline static int32_t get_offset_of_kPhoneEventPort_4() { return static_cast<int32_t>(offsetof(EmulatorClientSocket_t2137111857_StaticFields, ___kPhoneEventPort_4)); }
	inline int32_t get_kPhoneEventPort_4() const { return ___kPhoneEventPort_4; }
	inline int32_t* get_address_of_kPhoneEventPort_4() { return &___kPhoneEventPort_4; }
	inline void set_kPhoneEventPort_4(int32_t value)
	{
		___kPhoneEventPort_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
