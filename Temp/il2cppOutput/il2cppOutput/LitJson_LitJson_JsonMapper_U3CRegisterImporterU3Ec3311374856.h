#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// LitJson.ImporterFunc`2<System.Int32,System.Int64>
struct ImporterFunc_2_t184123628;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonMapper/<RegisterImporter>c__AnonStorey1`2<System.Int32,System.Int64>
struct  U3CRegisterImporterU3Ec__AnonStorey1_2_t3311374856  : public Il2CppObject
{
public:
	// LitJson.ImporterFunc`2<TJson,TValue> LitJson.JsonMapper/<RegisterImporter>c__AnonStorey1`2::importer
	ImporterFunc_2_t184123628 * ___importer_0;

public:
	inline static int32_t get_offset_of_importer_0() { return static_cast<int32_t>(offsetof(U3CRegisterImporterU3Ec__AnonStorey1_2_t3311374856, ___importer_0)); }
	inline ImporterFunc_2_t184123628 * get_importer_0() const { return ___importer_0; }
	inline ImporterFunc_2_t184123628 ** get_address_of_importer_0() { return &___importer_0; }
	inline void set_importer_0(ImporterFunc_2_t184123628 * value)
	{
		___importer_0 = value;
		Il2CppCodeGenWriteBarrier(&___importer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
