#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En969056901.h"

// LJR.RequestDemo1
struct RequestDemo1_t2305034759;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// UnityEngine.WWW
struct WWW_t2919945039;
// System.Action`2<LJR.RequestDemo1,LJR.ResponceDemo1>
struct Action_2_t3822382719;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LJR.Http/<SendRequest>c__Iterator0`2<LJR.RequestDemo1,LJR.ResponceDemo1>
struct  U3CSendRequestU3Ec__Iterator0_2_t661365330  : public Il2CppObject
{
public:
	// TRequest LJR.Http/<SendRequest>c__Iterator0`2::request
	RequestDemo1_t2305034759 * ___request_0;
	// System.String LJR.Http/<SendRequest>c__Iterator0`2::url
	String_t* ___url_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> LJR.Http/<SendRequest>c__Iterator0`2::get
	Dictionary_2_t3943999495 * ___get_2;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String> LJR.Http/<SendRequest>c__Iterator0`2::$locvar0
	Enumerator_t969056901  ___U24locvar0_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> LJR.Http/<SendRequest>c__Iterator0`2::post
	Dictionary_2_t3943999495 * ___post_4;
	// UnityEngine.WWW LJR.Http/<SendRequest>c__Iterator0`2::<www>__1
	WWW_t2919945039 * ___U3CwwwU3E__1_5;
	// System.Action`2<TRequest,TResponce> LJR.Http/<SendRequest>c__Iterator0`2::onFinish
	Action_2_t3822382719 * ___onFinish_6;
	// System.Object LJR.Http/<SendRequest>c__Iterator0`2::$current
	Il2CppObject * ___U24current_7;
	// System.Boolean LJR.Http/<SendRequest>c__Iterator0`2::$disposing
	bool ___U24disposing_8;
	// System.Int32 LJR.Http/<SendRequest>c__Iterator0`2::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3CSendRequestU3Ec__Iterator0_2_t661365330, ___request_0)); }
	inline RequestDemo1_t2305034759 * get_request_0() const { return ___request_0; }
	inline RequestDemo1_t2305034759 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(RequestDemo1_t2305034759 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}

	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(U3CSendRequestU3Ec__Iterator0_2_t661365330, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier(&___url_1, value);
	}

	inline static int32_t get_offset_of_get_2() { return static_cast<int32_t>(offsetof(U3CSendRequestU3Ec__Iterator0_2_t661365330, ___get_2)); }
	inline Dictionary_2_t3943999495 * get_get_2() const { return ___get_2; }
	inline Dictionary_2_t3943999495 ** get_address_of_get_2() { return &___get_2; }
	inline void set_get_2(Dictionary_2_t3943999495 * value)
	{
		___get_2 = value;
		Il2CppCodeGenWriteBarrier(&___get_2, value);
	}

	inline static int32_t get_offset_of_U24locvar0_3() { return static_cast<int32_t>(offsetof(U3CSendRequestU3Ec__Iterator0_2_t661365330, ___U24locvar0_3)); }
	inline Enumerator_t969056901  get_U24locvar0_3() const { return ___U24locvar0_3; }
	inline Enumerator_t969056901 * get_address_of_U24locvar0_3() { return &___U24locvar0_3; }
	inline void set_U24locvar0_3(Enumerator_t969056901  value)
	{
		___U24locvar0_3 = value;
	}

	inline static int32_t get_offset_of_post_4() { return static_cast<int32_t>(offsetof(U3CSendRequestU3Ec__Iterator0_2_t661365330, ___post_4)); }
	inline Dictionary_2_t3943999495 * get_post_4() const { return ___post_4; }
	inline Dictionary_2_t3943999495 ** get_address_of_post_4() { return &___post_4; }
	inline void set_post_4(Dictionary_2_t3943999495 * value)
	{
		___post_4 = value;
		Il2CppCodeGenWriteBarrier(&___post_4, value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__1_5() { return static_cast<int32_t>(offsetof(U3CSendRequestU3Ec__Iterator0_2_t661365330, ___U3CwwwU3E__1_5)); }
	inline WWW_t2919945039 * get_U3CwwwU3E__1_5() const { return ___U3CwwwU3E__1_5; }
	inline WWW_t2919945039 ** get_address_of_U3CwwwU3E__1_5() { return &___U3CwwwU3E__1_5; }
	inline void set_U3CwwwU3E__1_5(WWW_t2919945039 * value)
	{
		___U3CwwwU3E__1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CwwwU3E__1_5, value);
	}

	inline static int32_t get_offset_of_onFinish_6() { return static_cast<int32_t>(offsetof(U3CSendRequestU3Ec__Iterator0_2_t661365330, ___onFinish_6)); }
	inline Action_2_t3822382719 * get_onFinish_6() const { return ___onFinish_6; }
	inline Action_2_t3822382719 ** get_address_of_onFinish_6() { return &___onFinish_6; }
	inline void set_onFinish_6(Action_2_t3822382719 * value)
	{
		___onFinish_6 = value;
		Il2CppCodeGenWriteBarrier(&___onFinish_6, value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CSendRequestU3Ec__Iterator0_2_t661365330, ___U24current_7)); }
	inline Il2CppObject * get_U24current_7() const { return ___U24current_7; }
	inline Il2CppObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(Il2CppObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_7, value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CSendRequestU3Ec__Iterator0_2_t661365330, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CSendRequestU3Ec__Iterator0_2_t661365330, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
