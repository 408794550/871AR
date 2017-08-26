#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_LJR_RequestStatus3661955317.h"

// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// LJR.ResponceDemo2
struct ResponceDemo2_t1552168152;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LJR.Request`1<LJR.ResponceDemo2>
struct  Request_1_t1829932353  : public MonoBehaviour_t1158329972
{
public:
	// LJR.RequestStatus LJR.Request`1::Status
	int32_t ___Status_2;
	// System.String LJR.Request`1::Message
	String_t* ___Message_3;
	// System.Exception LJR.Request`1::Exception
	Exception_t1927440687 * ___Exception_4;
	// TResponce LJR.Request`1::Responce
	ResponceDemo2_t1552168152 * ___Responce_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> LJR.Request`1::get
	Dictionary_2_t3943999495 * ___get_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> LJR.Request`1::post
	Dictionary_2_t3943999495 * ___post_7;

public:
	inline static int32_t get_offset_of_Status_2() { return static_cast<int32_t>(offsetof(Request_1_t1829932353, ___Status_2)); }
	inline int32_t get_Status_2() const { return ___Status_2; }
	inline int32_t* get_address_of_Status_2() { return &___Status_2; }
	inline void set_Status_2(int32_t value)
	{
		___Status_2 = value;
	}

	inline static int32_t get_offset_of_Message_3() { return static_cast<int32_t>(offsetof(Request_1_t1829932353, ___Message_3)); }
	inline String_t* get_Message_3() const { return ___Message_3; }
	inline String_t** get_address_of_Message_3() { return &___Message_3; }
	inline void set_Message_3(String_t* value)
	{
		___Message_3 = value;
		Il2CppCodeGenWriteBarrier(&___Message_3, value);
	}

	inline static int32_t get_offset_of_Exception_4() { return static_cast<int32_t>(offsetof(Request_1_t1829932353, ___Exception_4)); }
	inline Exception_t1927440687 * get_Exception_4() const { return ___Exception_4; }
	inline Exception_t1927440687 ** get_address_of_Exception_4() { return &___Exception_4; }
	inline void set_Exception_4(Exception_t1927440687 * value)
	{
		___Exception_4 = value;
		Il2CppCodeGenWriteBarrier(&___Exception_4, value);
	}

	inline static int32_t get_offset_of_Responce_5() { return static_cast<int32_t>(offsetof(Request_1_t1829932353, ___Responce_5)); }
	inline ResponceDemo2_t1552168152 * get_Responce_5() const { return ___Responce_5; }
	inline ResponceDemo2_t1552168152 ** get_address_of_Responce_5() { return &___Responce_5; }
	inline void set_Responce_5(ResponceDemo2_t1552168152 * value)
	{
		___Responce_5 = value;
		Il2CppCodeGenWriteBarrier(&___Responce_5, value);
	}

	inline static int32_t get_offset_of_get_6() { return static_cast<int32_t>(offsetof(Request_1_t1829932353, ___get_6)); }
	inline Dictionary_2_t3943999495 * get_get_6() const { return ___get_6; }
	inline Dictionary_2_t3943999495 ** get_address_of_get_6() { return &___get_6; }
	inline void set_get_6(Dictionary_2_t3943999495 * value)
	{
		___get_6 = value;
		Il2CppCodeGenWriteBarrier(&___get_6, value);
	}

	inline static int32_t get_offset_of_post_7() { return static_cast<int32_t>(offsetof(Request_1_t1829932353, ___post_7)); }
	inline Dictionary_2_t3943999495 * get_post_7() const { return ___post_7; }
	inline Dictionary_2_t3943999495 ** get_address_of_post_7() { return &___post_7; }
	inline void set_post_7(Dictionary_2_t3943999495 * value)
	{
		___post_7 = value;
		Il2CppCodeGenWriteBarrier(&___post_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
