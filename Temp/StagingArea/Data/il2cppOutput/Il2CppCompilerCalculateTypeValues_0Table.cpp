﻿#include "il2cpp-config.h"

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
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.IntPtr[]
struct IntPtrU5BU5D_t279842175;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t4031441047;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3824933216;
// Mono.Globalization.Unicode.CodePointIndexer/TableRange[]
struct TableRangeU5BU5D_t285522446;
// System.Char[]
struct CharU5BU5D_t1233889757;
// System.Byte[]
struct ByteU5BU5D_t160258817;
// Mono.Globalization.Unicode.TailoringInfo[]
struct TailoringInfoU5BU5D_t2634224993;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3467483792;
// System.Byte
struct Byte_t1418166528;
// System.Type
struct Type_t;
// System.Double
struct Double_t3260592656;
// System.UInt16
struct UInt16_t2292527167;
// System.Void
struct Void_t617821848;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t860836189;
// System.Type[]
struct TypeU5BU5D_t3029090325;
// System.Reflection.MemberFilter
struct MemberFilter_t79641807;
// System.IAsyncResult
struct IAsyncResult_t403706783;
// System.AsyncCallback
struct AsyncCallback_t150799411;




#ifndef U3CMODULEU3E_T855567900_H
#define U3CMODULEU3E_T855567900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t855567900 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T855567900_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef SIMPLEENUMERATOR_T509431999_H
#define SIMPLEENUMERATOR_T509431999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/SimpleEnumerator
struct  SimpleEnumerator_t509431999  : public RuntimeObject
{
public:
	// System.Array System.Array/SimpleEnumerator::enumeratee
	RuntimeArray * ___enumeratee_0;
	// System.Int32 System.Array/SimpleEnumerator::currentpos
	int32_t ___currentpos_1;
	// System.Int32 System.Array/SimpleEnumerator::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_enumeratee_0() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t509431999, ___enumeratee_0)); }
	inline RuntimeArray * get_enumeratee_0() const { return ___enumeratee_0; }
	inline RuntimeArray ** get_address_of_enumeratee_0() { return &___enumeratee_0; }
	inline void set_enumeratee_0(RuntimeArray * value)
	{
		___enumeratee_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumeratee_0), value);
	}

	inline static int32_t get_offset_of_currentpos_1() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t509431999, ___currentpos_1)); }
	inline int32_t get_currentpos_1() const { return ___currentpos_1; }
	inline int32_t* get_address_of_currentpos_1() { return &___currentpos_1; }
	inline void set_currentpos_1(int32_t value)
	{
		___currentpos_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t509431999, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEENUMERATOR_T509431999_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef EXCEPTION_T2361189672_H
#define EXCEPTION_T2361189672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2361189672  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t279842175* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2361189672 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2361189672, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t279842175* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t279842175** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t279842175* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2361189672, ___inner_exception_1)); }
	inline Exception_t2361189672 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2361189672 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2361189672 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2361189672, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2361189672, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2361189672, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2361189672, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2361189672, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2361189672, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2361189672, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2361189672, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2361189672, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T2361189672_H
#ifndef MARSHALBYREFOBJECT_T2757329776_H
#define MARSHALBYREFOBJECT_T2757329776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2757329776  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3824933216 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2757329776, ____identity_0)); }
	inline ServerIdentity_t3824933216 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3824933216 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3824933216 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2757329776_H
#ifndef RUNTIMEHELPERS_T1446002970_H
#define RUNTIMEHELPERS_T1446002970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeHelpers
struct  RuntimeHelpers_t1446002970  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEHELPERS_T1446002970_H
#ifndef LOCALE_T3081758046_H
#define LOCALE_T3081758046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t3081758046  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T3081758046_H
#ifndef CODEPOINTINDEXER_T976210660_H
#define CODEPOINTINDEXER_T976210660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer
struct  CodePointIndexer_t976210660  : public RuntimeObject
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer/TableRange[] Mono.Globalization.Unicode.CodePointIndexer::ranges
	TableRangeU5BU5D_t285522446* ___ranges_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::TotalCount
	int32_t ___TotalCount_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultIndex
	int32_t ___defaultIndex_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultCP
	int32_t ___defaultCP_3;

public:
	inline static int32_t get_offset_of_ranges_0() { return static_cast<int32_t>(offsetof(CodePointIndexer_t976210660, ___ranges_0)); }
	inline TableRangeU5BU5D_t285522446* get_ranges_0() const { return ___ranges_0; }
	inline TableRangeU5BU5D_t285522446** get_address_of_ranges_0() { return &___ranges_0; }
	inline void set_ranges_0(TableRangeU5BU5D_t285522446* value)
	{
		___ranges_0 = value;
		Il2CppCodeGenWriteBarrier((&___ranges_0), value);
	}

	inline static int32_t get_offset_of_TotalCount_1() { return static_cast<int32_t>(offsetof(CodePointIndexer_t976210660, ___TotalCount_1)); }
	inline int32_t get_TotalCount_1() const { return ___TotalCount_1; }
	inline int32_t* get_address_of_TotalCount_1() { return &___TotalCount_1; }
	inline void set_TotalCount_1(int32_t value)
	{
		___TotalCount_1 = value;
	}

	inline static int32_t get_offset_of_defaultIndex_2() { return static_cast<int32_t>(offsetof(CodePointIndexer_t976210660, ___defaultIndex_2)); }
	inline int32_t get_defaultIndex_2() const { return ___defaultIndex_2; }
	inline int32_t* get_address_of_defaultIndex_2() { return &___defaultIndex_2; }
	inline void set_defaultIndex_2(int32_t value)
	{
		___defaultIndex_2 = value;
	}

	inline static int32_t get_offset_of_defaultCP_3() { return static_cast<int32_t>(offsetof(CodePointIndexer_t976210660, ___defaultCP_3)); }
	inline int32_t get_defaultCP_3() const { return ___defaultCP_3; }
	inline int32_t* get_address_of_defaultCP_3() { return &___defaultCP_3; }
	inline void set_defaultCP_3(int32_t value)
	{
		___defaultCP_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEPOINTINDEXER_T976210660_H
#ifndef TAILORINGINFO_T1966100000_H
#define TAILORINGINFO_T1966100000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.TailoringInfo
struct  TailoringInfo_t1966100000  : public RuntimeObject
{
public:
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::LCID
	int32_t ___LCID_0;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringIndex
	int32_t ___TailoringIndex_1;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringCount
	int32_t ___TailoringCount_2;
	// System.Boolean Mono.Globalization.Unicode.TailoringInfo::FrenchSort
	bool ___FrenchSort_3;

public:
	inline static int32_t get_offset_of_LCID_0() { return static_cast<int32_t>(offsetof(TailoringInfo_t1966100000, ___LCID_0)); }
	inline int32_t get_LCID_0() const { return ___LCID_0; }
	inline int32_t* get_address_of_LCID_0() { return &___LCID_0; }
	inline void set_LCID_0(int32_t value)
	{
		___LCID_0 = value;
	}

	inline static int32_t get_offset_of_TailoringIndex_1() { return static_cast<int32_t>(offsetof(TailoringInfo_t1966100000, ___TailoringIndex_1)); }
	inline int32_t get_TailoringIndex_1() const { return ___TailoringIndex_1; }
	inline int32_t* get_address_of_TailoringIndex_1() { return &___TailoringIndex_1; }
	inline void set_TailoringIndex_1(int32_t value)
	{
		___TailoringIndex_1 = value;
	}

	inline static int32_t get_offset_of_TailoringCount_2() { return static_cast<int32_t>(offsetof(TailoringInfo_t1966100000, ___TailoringCount_2)); }
	inline int32_t get_TailoringCount_2() const { return ___TailoringCount_2; }
	inline int32_t* get_address_of_TailoringCount_2() { return &___TailoringCount_2; }
	inline void set_TailoringCount_2(int32_t value)
	{
		___TailoringCount_2 = value;
	}

	inline static int32_t get_offset_of_FrenchSort_3() { return static_cast<int32_t>(offsetof(TailoringInfo_t1966100000, ___FrenchSort_3)); }
	inline bool get_FrenchSort_3() const { return ___FrenchSort_3; }
	inline bool* get_address_of_FrenchSort_3() { return &___FrenchSort_3; }
	inline void set_FrenchSort_3(bool value)
	{
		___FrenchSort_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILORINGINFO_T1966100000_H
#ifndef CONTRACTION_T2245376577_H
#define CONTRACTION_T2245376577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Contraction
struct  Contraction_t2245376577  : public RuntimeObject
{
public:
	// System.Char[] Mono.Globalization.Unicode.Contraction::Source
	CharU5BU5D_t1233889757* ___Source_0;
	// System.String Mono.Globalization.Unicode.Contraction::Replacement
	String_t* ___Replacement_1;
	// System.Byte[] Mono.Globalization.Unicode.Contraction::SortKey
	ByteU5BU5D_t160258817* ___SortKey_2;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Contraction_t2245376577, ___Source_0)); }
	inline CharU5BU5D_t1233889757* get_Source_0() const { return ___Source_0; }
	inline CharU5BU5D_t1233889757** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(CharU5BU5D_t1233889757* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___Source_0), value);
	}

	inline static int32_t get_offset_of_Replacement_1() { return static_cast<int32_t>(offsetof(Contraction_t2245376577, ___Replacement_1)); }
	inline String_t* get_Replacement_1() const { return ___Replacement_1; }
	inline String_t** get_address_of_Replacement_1() { return &___Replacement_1; }
	inline void set_Replacement_1(String_t* value)
	{
		___Replacement_1 = value;
		Il2CppCodeGenWriteBarrier((&___Replacement_1), value);
	}

	inline static int32_t get_offset_of_SortKey_2() { return static_cast<int32_t>(offsetof(Contraction_t2245376577, ___SortKey_2)); }
	inline ByteU5BU5D_t160258817* get_SortKey_2() const { return ___SortKey_2; }
	inline ByteU5BU5D_t160258817** get_address_of_SortKey_2() { return &___SortKey_2; }
	inline void set_SortKey_2(ByteU5BU5D_t160258817* value)
	{
		___SortKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___SortKey_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTION_T2245376577_H
#ifndef CONTRACTIONCOMPARER_T4024548509_H
#define CONTRACTIONCOMPARER_T4024548509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.ContractionComparer
struct  ContractionComparer_t4024548509  : public RuntimeObject
{
public:

public:
};

struct ContractionComparer_t4024548509_StaticFields
{
public:
	// Mono.Globalization.Unicode.ContractionComparer Mono.Globalization.Unicode.ContractionComparer::Instance
	ContractionComparer_t4024548509 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(ContractionComparer_t4024548509_StaticFields, ___Instance_0)); }
	inline ContractionComparer_t4024548509 * get_Instance_0() const { return ___Instance_0; }
	inline ContractionComparer_t4024548509 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ContractionComparer_t4024548509 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTIONCOMPARER_T4024548509_H
#ifndef LEVEL2MAP_T1455259309_H
#define LEVEL2MAP_T1455259309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Level2Map
struct  Level2Map_t1455259309  : public RuntimeObject
{
public:
	// System.Byte Mono.Globalization.Unicode.Level2Map::Source
	uint8_t ___Source_0;
	// System.Byte Mono.Globalization.Unicode.Level2Map::Replace
	uint8_t ___Replace_1;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Level2Map_t1455259309, ___Source_0)); }
	inline uint8_t get_Source_0() const { return ___Source_0; }
	inline uint8_t* get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(uint8_t value)
	{
		___Source_0 = value;
	}

	inline static int32_t get_offset_of_Replace_1() { return static_cast<int32_t>(offsetof(Level2Map_t1455259309, ___Replace_1)); }
	inline uint8_t get_Replace_1() const { return ___Replace_1; }
	inline uint8_t* get_address_of_Replace_1() { return &___Replace_1; }
	inline void set_Replace_1(uint8_t value)
	{
		___Replace_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL2MAP_T1455259309_H
#ifndef LEVEL2MAPCOMPARER_T1968909304_H
#define LEVEL2MAPCOMPARER_T1968909304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Level2MapComparer
struct  Level2MapComparer_t1968909304  : public RuntimeObject
{
public:

public:
};

struct Level2MapComparer_t1968909304_StaticFields
{
public:
	// Mono.Globalization.Unicode.Level2MapComparer Mono.Globalization.Unicode.Level2MapComparer::Instance
	Level2MapComparer_t1968909304 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Level2MapComparer_t1968909304_StaticFields, ___Instance_0)); }
	inline Level2MapComparer_t1968909304 * get_Instance_0() const { return ___Instance_0; }
	inline Level2MapComparer_t1968909304 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Level2MapComparer_t1968909304 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL2MAPCOMPARER_T1968909304_H
#ifndef MSCOMPATUNICODETABLE_T694247041_H
#define MSCOMPATUNICODETABLE_T694247041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTable
struct  MSCompatUnicodeTable_t694247041  : public RuntimeObject
{
public:

public:
};

struct MSCompatUnicodeTable_t694247041_StaticFields
{
public:
	// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::MaxExpansionLength
	int32_t ___MaxExpansionLength_0;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::ignorableFlags
	uint8_t* ___ignorableFlags_1;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::categories
	uint8_t* ___categories_2;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level1
	uint8_t* ___level1_3;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level2
	uint8_t* ___level2_4;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level3
	uint8_t* ___level3_5;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHScategory
	uint8_t* ___cjkCHScategory_6;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTcategory
	uint8_t* ___cjkCHTcategory_7;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAcategory
	uint8_t* ___cjkJAcategory_8;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOcategory
	uint8_t* ___cjkKOcategory_9;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHSlv1
	uint8_t* ___cjkCHSlv1_10;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTlv1
	uint8_t* ___cjkCHTlv1_11;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAlv1
	uint8_t* ___cjkJAlv1_12;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv1
	uint8_t* ___cjkKOlv1_13;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv2
	uint8_t* ___cjkKOlv2_14;
	// System.Char[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringArr
	CharU5BU5D_t1233889757* ___tailoringArr_15;
	// Mono.Globalization.Unicode.TailoringInfo[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringInfos
	TailoringInfoU5BU5D_t2634224993* ___tailoringInfos_16;
	// System.Object Mono.Globalization.Unicode.MSCompatUnicodeTable::forLock
	RuntimeObject * ___forLock_17;
	// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::isReady
	bool ___isReady_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map2
	Dictionary_2_t3467483792 * ___U3CU3Ef__switchU24map2_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map3
	Dictionary_2_t3467483792 * ___U3CU3Ef__switchU24map3_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map4
	Dictionary_2_t3467483792 * ___U3CU3Ef__switchU24map4_21;

public:
	inline static int32_t get_offset_of_MaxExpansionLength_0() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___MaxExpansionLength_0)); }
	inline int32_t get_MaxExpansionLength_0() const { return ___MaxExpansionLength_0; }
	inline int32_t* get_address_of_MaxExpansionLength_0() { return &___MaxExpansionLength_0; }
	inline void set_MaxExpansionLength_0(int32_t value)
	{
		___MaxExpansionLength_0 = value;
	}

	inline static int32_t get_offset_of_ignorableFlags_1() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___ignorableFlags_1)); }
	inline uint8_t* get_ignorableFlags_1() const { return ___ignorableFlags_1; }
	inline uint8_t** get_address_of_ignorableFlags_1() { return &___ignorableFlags_1; }
	inline void set_ignorableFlags_1(uint8_t* value)
	{
		___ignorableFlags_1 = value;
	}

	inline static int32_t get_offset_of_categories_2() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___categories_2)); }
	inline uint8_t* get_categories_2() const { return ___categories_2; }
	inline uint8_t** get_address_of_categories_2() { return &___categories_2; }
	inline void set_categories_2(uint8_t* value)
	{
		___categories_2 = value;
	}

	inline static int32_t get_offset_of_level1_3() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___level1_3)); }
	inline uint8_t* get_level1_3() const { return ___level1_3; }
	inline uint8_t** get_address_of_level1_3() { return &___level1_3; }
	inline void set_level1_3(uint8_t* value)
	{
		___level1_3 = value;
	}

	inline static int32_t get_offset_of_level2_4() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___level2_4)); }
	inline uint8_t* get_level2_4() const { return ___level2_4; }
	inline uint8_t** get_address_of_level2_4() { return &___level2_4; }
	inline void set_level2_4(uint8_t* value)
	{
		___level2_4 = value;
	}

	inline static int32_t get_offset_of_level3_5() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___level3_5)); }
	inline uint8_t* get_level3_5() const { return ___level3_5; }
	inline uint8_t** get_address_of_level3_5() { return &___level3_5; }
	inline void set_level3_5(uint8_t* value)
	{
		___level3_5 = value;
	}

	inline static int32_t get_offset_of_cjkCHScategory_6() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___cjkCHScategory_6)); }
	inline uint8_t* get_cjkCHScategory_6() const { return ___cjkCHScategory_6; }
	inline uint8_t** get_address_of_cjkCHScategory_6() { return &___cjkCHScategory_6; }
	inline void set_cjkCHScategory_6(uint8_t* value)
	{
		___cjkCHScategory_6 = value;
	}

	inline static int32_t get_offset_of_cjkCHTcategory_7() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___cjkCHTcategory_7)); }
	inline uint8_t* get_cjkCHTcategory_7() const { return ___cjkCHTcategory_7; }
	inline uint8_t** get_address_of_cjkCHTcategory_7() { return &___cjkCHTcategory_7; }
	inline void set_cjkCHTcategory_7(uint8_t* value)
	{
		___cjkCHTcategory_7 = value;
	}

	inline static int32_t get_offset_of_cjkJAcategory_8() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___cjkJAcategory_8)); }
	inline uint8_t* get_cjkJAcategory_8() const { return ___cjkJAcategory_8; }
	inline uint8_t** get_address_of_cjkJAcategory_8() { return &___cjkJAcategory_8; }
	inline void set_cjkJAcategory_8(uint8_t* value)
	{
		___cjkJAcategory_8 = value;
	}

	inline static int32_t get_offset_of_cjkKOcategory_9() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___cjkKOcategory_9)); }
	inline uint8_t* get_cjkKOcategory_9() const { return ___cjkKOcategory_9; }
	inline uint8_t** get_address_of_cjkKOcategory_9() { return &___cjkKOcategory_9; }
	inline void set_cjkKOcategory_9(uint8_t* value)
	{
		___cjkKOcategory_9 = value;
	}

	inline static int32_t get_offset_of_cjkCHSlv1_10() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___cjkCHSlv1_10)); }
	inline uint8_t* get_cjkCHSlv1_10() const { return ___cjkCHSlv1_10; }
	inline uint8_t** get_address_of_cjkCHSlv1_10() { return &___cjkCHSlv1_10; }
	inline void set_cjkCHSlv1_10(uint8_t* value)
	{
		___cjkCHSlv1_10 = value;
	}

	inline static int32_t get_offset_of_cjkCHTlv1_11() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___cjkCHTlv1_11)); }
	inline uint8_t* get_cjkCHTlv1_11() const { return ___cjkCHTlv1_11; }
	inline uint8_t** get_address_of_cjkCHTlv1_11() { return &___cjkCHTlv1_11; }
	inline void set_cjkCHTlv1_11(uint8_t* value)
	{
		___cjkCHTlv1_11 = value;
	}

	inline static int32_t get_offset_of_cjkJAlv1_12() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___cjkJAlv1_12)); }
	inline uint8_t* get_cjkJAlv1_12() const { return ___cjkJAlv1_12; }
	inline uint8_t** get_address_of_cjkJAlv1_12() { return &___cjkJAlv1_12; }
	inline void set_cjkJAlv1_12(uint8_t* value)
	{
		___cjkJAlv1_12 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv1_13() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___cjkKOlv1_13)); }
	inline uint8_t* get_cjkKOlv1_13() const { return ___cjkKOlv1_13; }
	inline uint8_t** get_address_of_cjkKOlv1_13() { return &___cjkKOlv1_13; }
	inline void set_cjkKOlv1_13(uint8_t* value)
	{
		___cjkKOlv1_13 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv2_14() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___cjkKOlv2_14)); }
	inline uint8_t* get_cjkKOlv2_14() const { return ___cjkKOlv2_14; }
	inline uint8_t** get_address_of_cjkKOlv2_14() { return &___cjkKOlv2_14; }
	inline void set_cjkKOlv2_14(uint8_t* value)
	{
		___cjkKOlv2_14 = value;
	}

	inline static int32_t get_offset_of_tailoringArr_15() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___tailoringArr_15)); }
	inline CharU5BU5D_t1233889757* get_tailoringArr_15() const { return ___tailoringArr_15; }
	inline CharU5BU5D_t1233889757** get_address_of_tailoringArr_15() { return &___tailoringArr_15; }
	inline void set_tailoringArr_15(CharU5BU5D_t1233889757* value)
	{
		___tailoringArr_15 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringArr_15), value);
	}

	inline static int32_t get_offset_of_tailoringInfos_16() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___tailoringInfos_16)); }
	inline TailoringInfoU5BU5D_t2634224993* get_tailoringInfos_16() const { return ___tailoringInfos_16; }
	inline TailoringInfoU5BU5D_t2634224993** get_address_of_tailoringInfos_16() { return &___tailoringInfos_16; }
	inline void set_tailoringInfos_16(TailoringInfoU5BU5D_t2634224993* value)
	{
		___tailoringInfos_16 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringInfos_16), value);
	}

	inline static int32_t get_offset_of_forLock_17() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___forLock_17)); }
	inline RuntimeObject * get_forLock_17() const { return ___forLock_17; }
	inline RuntimeObject ** get_address_of_forLock_17() { return &___forLock_17; }
	inline void set_forLock_17(RuntimeObject * value)
	{
		___forLock_17 = value;
		Il2CppCodeGenWriteBarrier((&___forLock_17), value);
	}

	inline static int32_t get_offset_of_isReady_18() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___isReady_18)); }
	inline bool get_isReady_18() const { return ___isReady_18; }
	inline bool* get_address_of_isReady_18() { return &___isReady_18; }
	inline void set_isReady_18(bool value)
	{
		___isReady_18 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_19() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___U3CU3Ef__switchU24map2_19)); }
	inline Dictionary_2_t3467483792 * get_U3CU3Ef__switchU24map2_19() const { return ___U3CU3Ef__switchU24map2_19; }
	inline Dictionary_2_t3467483792 ** get_address_of_U3CU3Ef__switchU24map2_19() { return &___U3CU3Ef__switchU24map2_19; }
	inline void set_U3CU3Ef__switchU24map2_19(Dictionary_2_t3467483792 * value)
	{
		___U3CU3Ef__switchU24map2_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_20() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___U3CU3Ef__switchU24map3_20)); }
	inline Dictionary_2_t3467483792 * get_U3CU3Ef__switchU24map3_20() const { return ___U3CU3Ef__switchU24map3_20; }
	inline Dictionary_2_t3467483792 ** get_address_of_U3CU3Ef__switchU24map3_20() { return &___U3CU3Ef__switchU24map3_20; }
	inline void set_U3CU3Ef__switchU24map3_20(Dictionary_2_t3467483792 * value)
	{
		___U3CU3Ef__switchU24map3_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_21() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t694247041_StaticFields, ___U3CU3Ef__switchU24map4_21)); }
	inline Dictionary_2_t3467483792 * get_U3CU3Ef__switchU24map4_21() const { return ___U3CU3Ef__switchU24map4_21; }
	inline Dictionary_2_t3467483792 ** get_address_of_U3CU3Ef__switchU24map4_21() { return &___U3CU3Ef__switchU24map4_21; }
	inline void set_U3CU3Ef__switchU24map4_21(Dictionary_2_t3467483792 * value)
	{
		___U3CU3Ef__switchU24map4_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map4_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSCOMPATUNICODETABLE_T694247041_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1233889757* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1233889757* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1233889757** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1233889757* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef CRITICALFINALIZEROBJECT_T2900133936_H
#define CRITICALFINALIZEROBJECT_T2900133936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t2900133936  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T2900133936_H
#ifndef VALUETYPE_T3435267022_H
#define VALUETYPE_T3435267022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3435267022  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3435267022_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3435267022_marshaled_com
{
};
#endif // VALUETYPE_T3435267022_H
#ifndef ATTRIBUTE_T470801405_H
#define ATTRIBUTE_T470801405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t470801405  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T470801405_H
#ifndef SINGLE_T1906236192_H
#define SINGLE_T1906236192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1906236192 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1906236192, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1906236192_H
#ifndef COMIMPORTATTRIBUTE_T872524639_H
#define COMIMPORTATTRIBUTE_T872524639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComImportAttribute
struct  ComImportAttribute_t872524639  : public Attribute_t470801405
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMIMPORTATTRIBUTE_T872524639_H
#ifndef OPTIONALATTRIBUTE_T2002007077_H
#define OPTIONALATTRIBUTE_T2002007077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OptionalAttribute
struct  OptionalAttribute_t2002007077  : public Attribute_t470801405
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONALATTRIBUTE_T2002007077_H
#ifndef FIXEDBUFFERATTRIBUTE_T1002463674_H
#define FIXEDBUFFERATTRIBUTE_T1002463674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FixedBufferAttribute
struct  FixedBufferAttribute_t1002463674  : public Attribute_t470801405
{
public:
	// System.Type System.Runtime.CompilerServices.FixedBufferAttribute::elementType
	Type_t * ___elementType_0;
	// System.Int32 System.Runtime.CompilerServices.FixedBufferAttribute::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_elementType_0() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t1002463674, ___elementType_0)); }
	inline Type_t * get_elementType_0() const { return ___elementType_0; }
	inline Type_t ** get_address_of_elementType_0() { return &___elementType_0; }
	inline void set_elementType_0(Type_t * value)
	{
		___elementType_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t1002463674, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDBUFFERATTRIBUTE_T1002463674_H
#ifndef COMPILERGENERATEDATTRIBUTE_T2705918215_H
#define COMPILERGENERATEDATTRIBUTE_T2705918215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t2705918215  : public Attribute_t470801405
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERGENERATEDATTRIBUTE_T2705918215_H
#ifndef CHAR_T795266644_H
#define CHAR_T795266644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t795266644 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t795266644, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t795266644_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t795266644_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t795266644_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t795266644_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t795266644_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t795266644_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t795266644_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t795266644_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T795266644_H
#ifndef RUNTIMECOMPATIBILITYATTRIBUTE_T410827646_H
#define RUNTIMECOMPATIBILITYATTRIBUTE_T410827646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_t410827646  : public Attribute_t470801405
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::wrap_non_exception_throws
	bool ___wrap_non_exception_throws_0;

public:
	inline static int32_t get_offset_of_wrap_non_exception_throws_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_t410827646, ___wrap_non_exception_throws_0)); }
	inline bool get_wrap_non_exception_throws_0() const { return ___wrap_non_exception_throws_0; }
	inline bool* get_address_of_wrap_non_exception_throws_0() { return &___wrap_non_exception_throws_0; }
	inline void set_wrap_non_exception_throws_0(bool value)
	{
		___wrap_non_exception_throws_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMECOMPATIBILITYATTRIBUTE_T410827646_H
#ifndef DEBUGGERHIDDENATTRIBUTE_T1753874708_H
#define DEBUGGERHIDDENATTRIBUTE_T1753874708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerHiddenAttribute
struct  DebuggerHiddenAttribute_t1753874708  : public Attribute_t470801405
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERHIDDENATTRIBUTE_T1753874708_H
#ifndef DEFAULTMEMBERATTRIBUTE_T300456519_H
#define DEFAULTMEMBERATTRIBUTE_T300456519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.DefaultMemberAttribute
struct  DefaultMemberAttribute_t300456519  : public Attribute_t470801405
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::member_name
	String_t* ___member_name_0;

public:
	inline static int32_t get_offset_of_member_name_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t300456519, ___member_name_0)); }
	inline String_t* get_member_name_0() const { return ___member_name_0; }
	inline String_t** get_address_of_member_name_0() { return &___member_name_0; }
	inline void set_member_name_0(String_t* value)
	{
		___member_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTMEMBERATTRIBUTE_T300456519_H
#ifndef DECIMALCONSTANTATTRIBUTE_T3934771803_H
#define DECIMALCONSTANTATTRIBUTE_T3934771803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DecimalConstantAttribute
struct  DecimalConstantAttribute_t3934771803  : public Attribute_t470801405
{
public:
	// System.Byte System.Runtime.CompilerServices.DecimalConstantAttribute::scale
	uint8_t ___scale_0;
	// System.Boolean System.Runtime.CompilerServices.DecimalConstantAttribute::sign
	bool ___sign_1;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::hi
	int32_t ___hi_2;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::mid
	int32_t ___mid_3;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::low
	int32_t ___low_4;

public:
	inline static int32_t get_offset_of_scale_0() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3934771803, ___scale_0)); }
	inline uint8_t get_scale_0() const { return ___scale_0; }
	inline uint8_t* get_address_of_scale_0() { return &___scale_0; }
	inline void set_scale_0(uint8_t value)
	{
		___scale_0 = value;
	}

	inline static int32_t get_offset_of_sign_1() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3934771803, ___sign_1)); }
	inline bool get_sign_1() const { return ___sign_1; }
	inline bool* get_address_of_sign_1() { return &___sign_1; }
	inline void set_sign_1(bool value)
	{
		___sign_1 = value;
	}

	inline static int32_t get_offset_of_hi_2() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3934771803, ___hi_2)); }
	inline int32_t get_hi_2() const { return ___hi_2; }
	inline int32_t* get_address_of_hi_2() { return &___hi_2; }
	inline void set_hi_2(int32_t value)
	{
		___hi_2 = value;
	}

	inline static int32_t get_offset_of_mid_3() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3934771803, ___mid_3)); }
	inline int32_t get_mid_3() const { return ___mid_3; }
	inline int32_t* get_address_of_mid_3() { return &___mid_3; }
	inline void set_mid_3(int32_t value)
	{
		___mid_3 = value;
	}

	inline static int32_t get_offset_of_low_4() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3934771803, ___low_4)); }
	inline int32_t get_low_4() const { return ___low_4; }
	inline int32_t* get_address_of_low_4() { return &___low_4; }
	inline void set_low_4(int32_t value)
	{
		___low_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONSTANTATTRIBUTE_T3934771803_H
#ifndef UINT64_T3197938168_H
#define UINT64_T3197938168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t3197938168 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t3197938168, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T3197938168_H
#ifndef GUIDATTRIBUTE_T2736266870_H
#define GUIDATTRIBUTE_T2736266870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GuidAttribute
struct  GuidAttribute_t2736266870  : public Attribute_t470801405
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::guidValue
	String_t* ___guidValue_0;

public:
	inline static int32_t get_offset_of_guidValue_0() { return static_cast<int32_t>(offsetof(GuidAttribute_t2736266870, ___guidValue_0)); }
	inline String_t* get_guidValue_0() const { return ___guidValue_0; }
	inline String_t** get_address_of_guidValue_0() { return &___guidValue_0; }
	inline void set_guidValue_0(String_t* value)
	{
		___guidValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___guidValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDATTRIBUTE_T2736266870_H
#ifndef CLSCOMPLIANTATTRIBUTE_T3225630523_H
#define CLSCOMPLIANTATTRIBUTE_T3225630523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CLSCompliantAttribute
struct  CLSCompliantAttribute_t3225630523  : public Attribute_t470801405
{
public:
	// System.Boolean System.CLSCompliantAttribute::is_compliant
	bool ___is_compliant_0;

public:
	inline static int32_t get_offset_of_is_compliant_0() { return static_cast<int32_t>(offsetof(CLSCompliantAttribute_t3225630523, ___is_compliant_0)); }
	inline bool get_is_compliant_0() const { return ___is_compliant_0; }
	inline bool* get_address_of_is_compliant_0() { return &___is_compliant_0; }
	inline void set_is_compliant_0(bool value)
	{
		___is_compliant_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLSCOMPLIANTATTRIBUTE_T3225630523_H
#ifndef UINT32_T2866396082_H
#define UINT32_T2866396082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2866396082 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2866396082, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2866396082_H
#ifndef MONOTODOATTRIBUTE_T545103018_H
#define MONOTODOATTRIBUTE_T545103018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t545103018  : public Attribute_t470801405
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t545103018, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T545103018_H
#ifndef INT64_T2508351128_H
#define INT64_T2508351128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t2508351128 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t2508351128, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T2508351128_H
#ifndef TABLERANGE_T3310569271_H
#define TABLERANGE_T3310569271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
struct  TableRange_t3310569271 
{
public:
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Start
	int32_t ___Start_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::End
	int32_t ___End_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Count
	int32_t ___Count_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexStart
	int32_t ___IndexStart_3;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexEnd
	int32_t ___IndexEnd_4;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TableRange_t3310569271, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TableRange_t3310569271, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(TableRange_t3310569271, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_IndexStart_3() { return static_cast<int32_t>(offsetof(TableRange_t3310569271, ___IndexStart_3)); }
	inline int32_t get_IndexStart_3() const { return ___IndexStart_3; }
	inline int32_t* get_address_of_IndexStart_3() { return &___IndexStart_3; }
	inline void set_IndexStart_3(int32_t value)
	{
		___IndexStart_3 = value;
	}

	inline static int32_t get_offset_of_IndexEnd_4() { return static_cast<int32_t>(offsetof(TableRange_t3310569271, ___IndexEnd_4)); }
	inline int32_t get_IndexEnd_4() const { return ___IndexEnd_4; }
	inline int32_t* get_address_of_IndexEnd_4() { return &___IndexEnd_4; }
	inline void set_IndexEnd_4(int32_t value)
	{
		___IndexEnd_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLERANGE_T3310569271_H
#ifndef COMVISIBLEATTRIBUTE_T3342429816_H
#define COMVISIBLEATTRIBUTE_T3342429816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComVisibleAttribute
struct  ComVisibleAttribute_t3342429816  : public Attribute_t470801405
{
public:
	// System.Boolean System.Runtime.InteropServices.ComVisibleAttribute::Visible
	bool ___Visible_0;

public:
	inline static int32_t get_offset_of_Visible_0() { return static_cast<int32_t>(offsetof(ComVisibleAttribute_t3342429816, ___Visible_0)); }
	inline bool get_Visible_0() const { return ___Visible_0; }
	inline bool* get_address_of_Visible_0() { return &___Visible_0; }
	inline void set_Visible_0(bool value)
	{
		___Visible_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMVISIBLEATTRIBUTE_T3342429816_H
#ifndef SERIALIZABLEATTRIBUTE_T1682841880_H
#define SERIALIZABLEATTRIBUTE_T1682841880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SerializableAttribute
struct  SerializableAttribute_t1682841880  : public Attribute_t470801405
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEATTRIBUTE_T1682841880_H
#ifndef INT32_T2913777605_H
#define INT32_T2913777605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2913777605 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2913777605, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2913777605_H
#ifndef FIELDOFFSETATTRIBUTE_T4123836333_H
#define FIELDOFFSETATTRIBUTE_T4123836333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FieldOffsetAttribute
struct  FieldOffsetAttribute_t4123836333  : public Attribute_t470801405
{
public:
	// System.Int32 System.Runtime.InteropServices.FieldOffsetAttribute::val
	int32_t ___val_0;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(FieldOffsetAttribute_t4123836333, ___val_0)); }
	inline int32_t get_val_0() const { return ___val_0; }
	inline int32_t* get_address_of_val_0() { return &___val_0; }
	inline void set_val_0(int32_t value)
	{
		___val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDOFFSETATTRIBUTE_T4123836333_H
#ifndef SECURITYATTRIBUTE_T148158723_H
#define SECURITYATTRIBUTE_T148158723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t148158723  : public Attribute_t470801405
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T148158723_H
#ifndef INTERNALSVISIBLETOATTRIBUTE_T3018879471_H
#define INTERNALSVISIBLETOATTRIBUTE_T3018879471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t3018879471  : public Attribute_t470801405
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::assemblyName
	String_t* ___assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::all_visible
	bool ___all_visible_1;

public:
	inline static int32_t get_offset_of_assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t3018879471, ___assemblyName_0)); }
	inline String_t* get_assemblyName_0() const { return ___assemblyName_0; }
	inline String_t** get_address_of_assemblyName_0() { return &___assemblyName_0; }
	inline void set_assemblyName_0(String_t* value)
	{
		___assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_0), value);
	}

	inline static int32_t get_offset_of_all_visible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t3018879471, ___all_visible_1)); }
	inline bool get_all_visible_1() const { return ___all_visible_1; }
	inline bool* get_address_of_all_visible_1() { return &___all_visible_1; }
	inline void set_all_visible_1(bool value)
	{
		___all_visible_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSVISIBLETOATTRIBUTE_T3018879471_H
#ifndef ENUM_T686727356_H
#define ENUM_T686727356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t686727356  : public ValueType_t3435267022
{
public:

public:
};

struct Enum_t686727356_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1233889757* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t686727356_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1233889757* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1233889757** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1233889757* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t686727356_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t686727356_marshaled_com
{
};
#endif // ENUM_T686727356_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef DECIMAL_T4234241943_H
#define DECIMAL_T4234241943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t4234241943 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t4234241943, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t4234241943, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t4234241943, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t4234241943, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t4234241943_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t4234241943  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t4234241943  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t4234241943  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t4234241943  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t4234241943  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t4234241943_StaticFields, ___MinValue_0)); }
	inline Decimal_t4234241943  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t4234241943 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t4234241943  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t4234241943_StaticFields, ___MaxValue_1)); }
	inline Decimal_t4234241943  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t4234241943 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t4234241943  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t4234241943_StaticFields, ___MinusOne_2)); }
	inline Decimal_t4234241943  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t4234241943 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t4234241943  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t4234241943_StaticFields, ___One_3)); }
	inline Decimal_t4234241943  get_One_3() const { return ___One_3; }
	inline Decimal_t4234241943 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t4234241943  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t4234241943_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t4234241943  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t4234241943 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t4234241943  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T4234241943_H
#ifndef DOUBLE_T3260592656_H
#define DOUBLE_T3260592656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t3260592656 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t3260592656, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T3260592656_H
#ifndef INATTRIBUTE_T2962543601_H
#define INATTRIBUTE_T2962543601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InAttribute
struct  InAttribute_t2962543601  : public Attribute_t470801405
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INATTRIBUTE_T2962543601_H
#ifndef UINT16_T2292527167_H
#define UINT16_T2292527167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2292527167 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2292527167, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2292527167_H
#ifndef INT16_T1199135165_H
#define INT16_T1199135165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t1199135165 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t1199135165, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T1199135165_H
#ifndef BOOLEAN_T3577999246_H
#define BOOLEAN_T3577999246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3577999246 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3577999246, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3577999246_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3577999246_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3577999246_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3577999246_H
#ifndef VOID_T617821848_H
#define VOID_T617821848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t617821848 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T617821848_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SBYTE_T2598996609_H
#define SBYTE_T2598996609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t2598996609 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t2598996609, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T2598996609_H
#ifndef OBSOLETEATTRIBUTE_T1680717703_H
#define OBSOLETEATTRIBUTE_T1680717703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObsoleteAttribute
struct  ObsoleteAttribute_t1680717703  : public Attribute_t470801405
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t1680717703, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((&____message_0), value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t1680717703, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSOLETEATTRIBUTE_T1680717703_H
#ifndef OUTATTRIBUTE_T3950480168_H
#define OUTATTRIBUTE_T3950480168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OutAttribute
struct  OutAttribute_t3950480168  : public Attribute_t470801405
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTATTRIBUTE_T3950480168_H
#ifndef PARAMARRAYATTRIBUTE_T1683940753_H
#define PARAMARRAYATTRIBUTE_T1683940753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamArrayAttribute
struct  ParamArrayAttribute_t1683940753  : public Attribute_t470801405
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMARRAYATTRIBUTE_T1683940753_H
#ifndef BYTE_T1418166528_H
#define BYTE_T1418166528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1418166528 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1418166528, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1418166528_H
#ifndef ARGITERATOR_T1653883875_H
#define ARGITERATOR_T1653883875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgIterator
struct  ArgIterator_t1653883875 
{
public:
	// System.IntPtr System.ArgIterator::sig
	intptr_t ___sig_0;
	// System.IntPtr System.ArgIterator::args
	intptr_t ___args_1;
	// System.Int32 System.ArgIterator::next_arg
	int32_t ___next_arg_2;
	// System.Int32 System.ArgIterator::num_args
	int32_t ___num_args_3;

public:
	inline static int32_t get_offset_of_sig_0() { return static_cast<int32_t>(offsetof(ArgIterator_t1653883875, ___sig_0)); }
	inline intptr_t get_sig_0() const { return ___sig_0; }
	inline intptr_t* get_address_of_sig_0() { return &___sig_0; }
	inline void set_sig_0(intptr_t value)
	{
		___sig_0 = value;
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(ArgIterator_t1653883875, ___args_1)); }
	inline intptr_t get_args_1() const { return ___args_1; }
	inline intptr_t* get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(intptr_t value)
	{
		___args_1 = value;
	}

	inline static int32_t get_offset_of_next_arg_2() { return static_cast<int32_t>(offsetof(ArgIterator_t1653883875, ___next_arg_2)); }
	inline int32_t get_next_arg_2() const { return ___next_arg_2; }
	inline int32_t* get_address_of_next_arg_2() { return &___next_arg_2; }
	inline void set_next_arg_2(int32_t value)
	{
		___next_arg_2 = value;
	}

	inline static int32_t get_offset_of_num_args_3() { return static_cast<int32_t>(offsetof(ArgIterator_t1653883875, ___num_args_3)); }
	inline int32_t get_num_args_3() const { return ___num_args_3; }
	inline int32_t* get_address_of_num_args_3() { return &___num_args_3; }
	inline void set_num_args_3(int32_t value)
	{
		___num_args_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGITERATOR_T1653883875_H
#ifndef BINDINGFLAGS_T3890411382_H
#define BINDINGFLAGS_T3890411382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t3890411382 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t3890411382, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T3890411382_H
#ifndef RUNTIMEFIELDHANDLE_T2046778572_H
#define RUNTIMEFIELDHANDLE_T2046778572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2046778572 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2046778572, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T2046778572_H
#ifndef RUNTIMETYPEHANDLE_T2255076380_H
#define RUNTIMETYPEHANDLE_T2255076380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t2255076380 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2255076380, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T2255076380_H
#ifndef UNMANAGEDTYPE_T3981367194_H
#define UNMANAGEDTYPE_T3981367194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t3981367194 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t3981367194, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDTYPE_T3981367194_H
#ifndef MONODOCUMENTATIONNOTEATTRIBUTE_T3126741126_H
#define MONODOCUMENTATIONNOTEATTRIBUTE_T3126741126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoDocumentationNoteAttribute
struct  MonoDocumentationNoteAttribute_t3126741126  : public MonoTODOAttribute_t545103018
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONODOCUMENTATIONNOTEATTRIBUTE_T3126741126_H
#ifndef ATTRIBUTETARGETS_T3097659300_H
#define ATTRIBUTETARGETS_T3097659300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t3097659300 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AttributeTargets_t3097659300, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_T3097659300_H
#ifndef CHARSET_T1827855897_H
#define CHARSET_T1827855897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t1827855897 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t1827855897, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARSET_T1827855897_H
#ifndef DELEGATE_T858748147_H
#define DELEGATE_T858748147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t858748147  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t860836189 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t858748147, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t858748147, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t858748147, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t858748147, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t858748147, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t858748147, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t858748147, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t858748147, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t858748147, ___data_8)); }
	inline DelegateData_t860836189 * get_data_8() const { return ___data_8; }
	inline DelegateData_t860836189 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t860836189 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T858748147_H
#ifndef RUNTIMEARGUMENTHANDLE_T2419202929_H
#define RUNTIMEARGUMENTHANDLE_T2419202929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeArgumentHandle
struct  RuntimeArgumentHandle_t2419202929 
{
public:
	// System.IntPtr System.RuntimeArgumentHandle::args
	intptr_t ___args_0;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t2419202929, ___args_0)); }
	inline intptr_t get_args_0() const { return ___args_0; }
	inline intptr_t* get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(intptr_t value)
	{
		___args_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARGUMENTHANDLE_T2419202929_H
#ifndef SAFEHANDLE_T2621087151_H
#define SAFEHANDLE_T2621087151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t2621087151  : public CriticalFinalizerObject_t2900133936
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	intptr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t2621087151, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t2621087151, ___invalid_handle_value_1)); }
	inline intptr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline intptr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(intptr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t2621087151, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t2621087151, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T2621087151_H
#ifndef CALLINGCONVENTION_T1303970609_H
#define CALLINGCONVENTION_T1303970609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t1303970609 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t1303970609, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLINGCONVENTION_T1303970609_H
#ifndef MARSHALASATTRIBUTE_T1975181510_H
#define MARSHALASATTRIBUTE_T1975181510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalAsAttribute
struct  MarshalAsAttribute_t1975181510  : public Attribute_t470801405
{
public:
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::utype
	int32_t ___utype_0;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::ArraySubType
	int32_t ___ArraySubType_1;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalCookie
	String_t* ___MarshalCookie_2;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalType
	String_t* ___MarshalType_3;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::MarshalTypeRef
	Type_t * ___MarshalTypeRef_4;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::SizeConst
	int32_t ___SizeConst_5;
	// System.Int16 System.Runtime.InteropServices.MarshalAsAttribute::SizeParamIndex
	int16_t ___SizeParamIndex_6;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t1975181510, ___utype_0)); }
	inline int32_t get_utype_0() const { return ___utype_0; }
	inline int32_t* get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(int32_t value)
	{
		___utype_0 = value;
	}

	inline static int32_t get_offset_of_ArraySubType_1() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t1975181510, ___ArraySubType_1)); }
	inline int32_t get_ArraySubType_1() const { return ___ArraySubType_1; }
	inline int32_t* get_address_of_ArraySubType_1() { return &___ArraySubType_1; }
	inline void set_ArraySubType_1(int32_t value)
	{
		___ArraySubType_1 = value;
	}

	inline static int32_t get_offset_of_MarshalCookie_2() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t1975181510, ___MarshalCookie_2)); }
	inline String_t* get_MarshalCookie_2() const { return ___MarshalCookie_2; }
	inline String_t** get_address_of_MarshalCookie_2() { return &___MarshalCookie_2; }
	inline void set_MarshalCookie_2(String_t* value)
	{
		___MarshalCookie_2 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalCookie_2), value);
	}

	inline static int32_t get_offset_of_MarshalType_3() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t1975181510, ___MarshalType_3)); }
	inline String_t* get_MarshalType_3() const { return ___MarshalType_3; }
	inline String_t** get_address_of_MarshalType_3() { return &___MarshalType_3; }
	inline void set_MarshalType_3(String_t* value)
	{
		___MarshalType_3 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalType_3), value);
	}

	inline static int32_t get_offset_of_MarshalTypeRef_4() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t1975181510, ___MarshalTypeRef_4)); }
	inline Type_t * get_MarshalTypeRef_4() const { return ___MarshalTypeRef_4; }
	inline Type_t ** get_address_of_MarshalTypeRef_4() { return &___MarshalTypeRef_4; }
	inline void set_MarshalTypeRef_4(Type_t * value)
	{
		___MarshalTypeRef_4 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalTypeRef_4), value);
	}

	inline static int32_t get_offset_of_SizeConst_5() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t1975181510, ___SizeConst_5)); }
	inline int32_t get_SizeConst_5() const { return ___SizeConst_5; }
	inline int32_t* get_address_of_SizeConst_5() { return &___SizeConst_5; }
	inline void set_SizeConst_5(int32_t value)
	{
		___SizeConst_5 = value;
	}

	inline static int32_t get_offset_of_SizeParamIndex_6() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t1975181510, ___SizeParamIndex_6)); }
	inline int16_t get_SizeParamIndex_6() const { return ___SizeParamIndex_6; }
	inline int16_t* get_address_of_SizeParamIndex_6() { return &___SizeParamIndex_6; }
	inline void set_SizeParamIndex_6(int16_t value)
	{
		___SizeParamIndex_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALASATTRIBUTE_T1975181510_H
#ifndef MULTICASTDELEGATE_T760462380_H
#define MULTICASTDELEGATE_T760462380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t760462380  : public Delegate_t858748147
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t760462380 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t760462380 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t760462380, ___prev_9)); }
	inline MulticastDelegate_t760462380 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t760462380 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t760462380 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t760462380, ___kpm_next_10)); }
	inline MulticastDelegate_t760462380 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t760462380 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t760462380 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T760462380_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T2952967591_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T2952967591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t2952967591  : public SafeHandle_t2621087151
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T2952967591_H
#ifndef TYPEDREFERENCE_T3537131378_H
#define TYPEDREFERENCE_T3537131378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t3537131378 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t2255076380  ___type_0;
	// System.IntPtr System.TypedReference::value
	intptr_t ___value_1;
	// System.IntPtr System.TypedReference::klass
	intptr_t ___klass_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t3537131378, ___type_0)); }
	inline RuntimeTypeHandle_t2255076380  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t2255076380 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t2255076380  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(TypedReference_t3537131378, ___value_1)); }
	inline intptr_t get_value_1() const { return ___value_1; }
	inline intptr_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(intptr_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_klass_2() { return static_cast<int32_t>(offsetof(TypedReference_t3537131378, ___klass_2)); }
	inline intptr_t get_klass_2() const { return ___klass_2; }
	inline intptr_t* get_address_of_klass_2() { return &___klass_2; }
	inline void set_klass_2(intptr_t value)
	{
		___klass_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDREFERENCE_T3537131378_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t2255076380  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t2255076380  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t2255076380 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t2255076380  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3029090325* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t79641807 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t79641807 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t79641807 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3029090325* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3029090325** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3029090325* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t79641807 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t79641807 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t79641807 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t79641807 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t79641807 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t79641807 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t79641807 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t79641807 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t79641807 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ATTRIBUTEUSAGEATTRIBUTE_T2427702464_H
#define ATTRIBUTEUSAGEATTRIBUTE_T2427702464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeUsageAttribute
struct  AttributeUsageAttribute_t2427702464  : public Attribute_t470801405
{
public:
	// System.AttributeTargets System.AttributeUsageAttribute::valid_on
	int32_t ___valid_on_0;
	// System.Boolean System.AttributeUsageAttribute::allow_multiple
	bool ___allow_multiple_1;
	// System.Boolean System.AttributeUsageAttribute::inherited
	bool ___inherited_2;

public:
	inline static int32_t get_offset_of_valid_on_0() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t2427702464, ___valid_on_0)); }
	inline int32_t get_valid_on_0() const { return ___valid_on_0; }
	inline int32_t* get_address_of_valid_on_0() { return &___valid_on_0; }
	inline void set_valid_on_0(int32_t value)
	{
		___valid_on_0 = value;
	}

	inline static int32_t get_offset_of_allow_multiple_1() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t2427702464, ___allow_multiple_1)); }
	inline bool get_allow_multiple_1() const { return ___allow_multiple_1; }
	inline bool* get_address_of_allow_multiple_1() { return &___allow_multiple_1; }
	inline void set_allow_multiple_1(bool value)
	{
		___allow_multiple_1 = value;
	}

	inline static int32_t get_offset_of_inherited_2() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t2427702464, ___inherited_2)); }
	inline bool get_inherited_2() const { return ___inherited_2; }
	inline bool* get_address_of_inherited_2() { return &___inherited_2; }
	inline void set_inherited_2(bool value)
	{
		___inherited_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEUSAGEATTRIBUTE_T2427702464_H
#ifndef DLLIMPORTATTRIBUTE_T338674828_H
#define DLLIMPORTATTRIBUTE_T338674828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DllImportAttribute
struct  DllImportAttribute_t338674828  : public Attribute_t470801405
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.DllImportAttribute::CallingConvention
	int32_t ___CallingConvention_0;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.DllImportAttribute::CharSet
	int32_t ___CharSet_1;
	// System.String System.Runtime.InteropServices.DllImportAttribute::Dll
	String_t* ___Dll_2;
	// System.String System.Runtime.InteropServices.DllImportAttribute::EntryPoint
	String_t* ___EntryPoint_3;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ExactSpelling
	bool ___ExactSpelling_4;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::PreserveSig
	bool ___PreserveSig_5;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::SetLastError
	bool ___SetLastError_6;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::BestFitMapping
	bool ___BestFitMapping_7;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_8;

public:
	inline static int32_t get_offset_of_CallingConvention_0() { return static_cast<int32_t>(offsetof(DllImportAttribute_t338674828, ___CallingConvention_0)); }
	inline int32_t get_CallingConvention_0() const { return ___CallingConvention_0; }
	inline int32_t* get_address_of_CallingConvention_0() { return &___CallingConvention_0; }
	inline void set_CallingConvention_0(int32_t value)
	{
		___CallingConvention_0 = value;
	}

	inline static int32_t get_offset_of_CharSet_1() { return static_cast<int32_t>(offsetof(DllImportAttribute_t338674828, ___CharSet_1)); }
	inline int32_t get_CharSet_1() const { return ___CharSet_1; }
	inline int32_t* get_address_of_CharSet_1() { return &___CharSet_1; }
	inline void set_CharSet_1(int32_t value)
	{
		___CharSet_1 = value;
	}

	inline static int32_t get_offset_of_Dll_2() { return static_cast<int32_t>(offsetof(DllImportAttribute_t338674828, ___Dll_2)); }
	inline String_t* get_Dll_2() const { return ___Dll_2; }
	inline String_t** get_address_of_Dll_2() { return &___Dll_2; }
	inline void set_Dll_2(String_t* value)
	{
		___Dll_2 = value;
		Il2CppCodeGenWriteBarrier((&___Dll_2), value);
	}

	inline static int32_t get_offset_of_EntryPoint_3() { return static_cast<int32_t>(offsetof(DllImportAttribute_t338674828, ___EntryPoint_3)); }
	inline String_t* get_EntryPoint_3() const { return ___EntryPoint_3; }
	inline String_t** get_address_of_EntryPoint_3() { return &___EntryPoint_3; }
	inline void set_EntryPoint_3(String_t* value)
	{
		___EntryPoint_3 = value;
		Il2CppCodeGenWriteBarrier((&___EntryPoint_3), value);
	}

	inline static int32_t get_offset_of_ExactSpelling_4() { return static_cast<int32_t>(offsetof(DllImportAttribute_t338674828, ___ExactSpelling_4)); }
	inline bool get_ExactSpelling_4() const { return ___ExactSpelling_4; }
	inline bool* get_address_of_ExactSpelling_4() { return &___ExactSpelling_4; }
	inline void set_ExactSpelling_4(bool value)
	{
		___ExactSpelling_4 = value;
	}

	inline static int32_t get_offset_of_PreserveSig_5() { return static_cast<int32_t>(offsetof(DllImportAttribute_t338674828, ___PreserveSig_5)); }
	inline bool get_PreserveSig_5() const { return ___PreserveSig_5; }
	inline bool* get_address_of_PreserveSig_5() { return &___PreserveSig_5; }
	inline void set_PreserveSig_5(bool value)
	{
		___PreserveSig_5 = value;
	}

	inline static int32_t get_offset_of_SetLastError_6() { return static_cast<int32_t>(offsetof(DllImportAttribute_t338674828, ___SetLastError_6)); }
	inline bool get_SetLastError_6() const { return ___SetLastError_6; }
	inline bool* get_address_of_SetLastError_6() { return &___SetLastError_6; }
	inline void set_SetLastError_6(bool value)
	{
		___SetLastError_6 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_7() { return static_cast<int32_t>(offsetof(DllImportAttribute_t338674828, ___BestFitMapping_7)); }
	inline bool get_BestFitMapping_7() const { return ___BestFitMapping_7; }
	inline bool* get_address_of_BestFitMapping_7() { return &___BestFitMapping_7; }
	inline void set_BestFitMapping_7(bool value)
	{
		___BestFitMapping_7 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_8() { return static_cast<int32_t>(offsetof(DllImportAttribute_t338674828, ___ThrowOnUnmappableChar_8)); }
	inline bool get_ThrowOnUnmappableChar_8() const { return ___ThrowOnUnmappableChar_8; }
	inline bool* get_address_of_ThrowOnUnmappableChar_8() { return &___ThrowOnUnmappableChar_8; }
	inline void set_ThrowOnUnmappableChar_8(bool value)
	{
		___ThrowOnUnmappableChar_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLIMPORTATTRIBUTE_T338674828_H
#ifndef SAFEWAITHANDLE_T3890008073_H
#define SAFEWAITHANDLE_T3890008073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct  SafeWaitHandle_t3890008073  : public SafeHandleZeroOrMinusOneIsInvalid_t2952967591
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEWAITHANDLE_T3890008073_H
#ifndef SWAPPER_T2142009796_H
#define SWAPPER_T2142009796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/Swapper
struct  Swapper_t2142009796  : public MulticastDelegate_t760462380
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWAPPER_T2142009796_H
#ifndef ASYNCCALLBACK_T150799411_H
#define ASYNCCALLBACK_T150799411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t150799411  : public MulticastDelegate_t760462380
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T150799411_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize0 = { sizeof (U3CModuleU3E_t855567900), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1 = { sizeof (RuntimeObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2 = { sizeof (ValueType_t3435267022), sizeof(ValueType_t3435267022_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3 = { sizeof (Attribute_t470801405), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5 = { sizeof (Int32_t2913777605)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5[3] = 
{
	0,
	0,
	Int32_t2913777605::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize9 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize10 = { sizeof (SerializableAttribute_t1682841880), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize11 = { sizeof (AttributeUsageAttribute_t2427702464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable11[3] = 
{
	AttributeUsageAttribute_t2427702464::get_offset_of_valid_on_0(),
	AttributeUsageAttribute_t2427702464::get_offset_of_allow_multiple_1(),
	AttributeUsageAttribute_t2427702464::get_offset_of_inherited_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize12 = { sizeof (ComVisibleAttribute_t3342429816), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable12[1] = 
{
	ComVisibleAttribute_t3342429816::get_offset_of_Visible_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize13 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize14 = { sizeof (Int64_t2508351128)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable14[1] = 
{
	Int64_t2508351128::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize15 = { sizeof (UInt32_t2866396082)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable15[3] = 
{
	0,
	0,
	UInt32_t2866396082::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize16 = { sizeof (CLSCompliantAttribute_t3225630523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable16[1] = 
{
	CLSCompliantAttribute_t3225630523::get_offset_of_is_compliant_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize17 = { sizeof (UInt64_t3197938168)+ sizeof (RuntimeObject), sizeof(uint64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable17[1] = 
{
	UInt64_t3197938168::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize18 = { sizeof (Byte_t1418166528)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable18[3] = 
{
	0,
	0,
	Byte_t1418166528::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize19 = { sizeof (SByte_t2598996609)+ sizeof (RuntimeObject), sizeof(int8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable19[1] = 
{
	SByte_t2598996609::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize20 = { sizeof (Int16_t1199135165)+ sizeof (RuntimeObject), sizeof(int16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable20[1] = 
{
	Int16_t1199135165::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize21 = { sizeof (UInt16_t2292527167)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable21[3] = 
{
	0,
	0,
	UInt16_t2292527167::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize22 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize23 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize24 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize25 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize26 = { sizeof (Char_t795266644)+ sizeof (RuntimeObject), 1, sizeof(Char_t795266644_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable26[10] = 
{
	0,
	0,
	Char_t795266644::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Char_t795266644_StaticFields::get_offset_of_category_data_3(),
	Char_t795266644_StaticFields::get_offset_of_numeric_data_4(),
	Char_t795266644_StaticFields::get_offset_of_numeric_data_values_5(),
	Char_t795266644_StaticFields::get_offset_of_to_lower_data_low_6(),
	Char_t795266644_StaticFields::get_offset_of_to_lower_data_high_7(),
	Char_t795266644_StaticFields::get_offset_of_to_upper_data_low_8(),
	Char_t795266644_StaticFields::get_offset_of_to_upper_data_high_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize27 = { sizeof (String_t), sizeof(char*), sizeof(String_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable27[4] = 
{
	String_t::get_offset_of_length_0(),
	String_t::get_offset_of_start_char_1(),
	String_t_StaticFields::get_offset_of_Empty_2(),
	String_t_StaticFields::get_offset_of_WhiteChars_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize28 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize29 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize30 = { sizeof (Single_t1906236192)+ sizeof (RuntimeObject), sizeof(float), 0, 0 };
extern const int32_t g_FieldOffsetTable30[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Single_t1906236192::get_offset_of_m_value_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize31 = { sizeof (Double_t3260592656)+ sizeof (RuntimeObject), sizeof(double), 0, 0 };
extern const int32_t g_FieldOffsetTable31[14] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Double_t3260592656::get_offset_of_m_value_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize32 = { sizeof (Decimal_t4234241943)+ sizeof (RuntimeObject), sizeof(Decimal_t4234241943 ), sizeof(Decimal_t4234241943_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable32[9] = 
{
	Decimal_t4234241943_StaticFields::get_offset_of_MinValue_0(),
	Decimal_t4234241943_StaticFields::get_offset_of_MaxValue_1(),
	Decimal_t4234241943_StaticFields::get_offset_of_MinusOne_2(),
	Decimal_t4234241943_StaticFields::get_offset_of_One_3(),
	Decimal_t4234241943_StaticFields::get_offset_of_MaxValueDiv10_4(),
	Decimal_t4234241943::get_offset_of_flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t4234241943::get_offset_of_hi_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t4234241943::get_offset_of_lo_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t4234241943::get_offset_of_mid_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize33 = { sizeof (Boolean_t3577999246)+ sizeof (RuntimeObject), 4, sizeof(Boolean_t3577999246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable33[3] = 
{
	Boolean_t3577999246_StaticFields::get_offset_of_FalseString_0(),
	Boolean_t3577999246_StaticFields::get_offset_of_TrueString_1(),
	Boolean_t3577999246::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize34 = { sizeof (IntPtr_t)+ sizeof (RuntimeObject), sizeof(intptr_t), sizeof(IntPtr_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable34[2] = 
{
	IntPtr_t::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntPtr_t_StaticFields::get_offset_of_Zero_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize35 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize36 = { sizeof (UIntPtr_t)+ sizeof (RuntimeObject), sizeof(uintptr_t), sizeof(UIntPtr_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable36[2] = 
{
	UIntPtr_t_StaticFields::get_offset_of_Zero_0(),
	UIntPtr_t::get_offset_of__pointer_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize37 = { sizeof (MulticastDelegate_t760462380), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable37[2] = 
{
	MulticastDelegate_t760462380::get_offset_of_prev_9(),
	MulticastDelegate_t760462380::get_offset_of_kpm_next_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize38 = { sizeof (Delegate_t858748147), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable38[9] = 
{
	Delegate_t858748147::get_offset_of_method_ptr_0(),
	Delegate_t858748147::get_offset_of_invoke_impl_1(),
	Delegate_t858748147::get_offset_of_m_target_2(),
	Delegate_t858748147::get_offset_of_method_3(),
	Delegate_t858748147::get_offset_of_delegate_trampoline_4(),
	Delegate_t858748147::get_offset_of_method_code_5(),
	Delegate_t858748147::get_offset_of_method_info_6(),
	Delegate_t858748147::get_offset_of_original_method_info_7(),
	Delegate_t858748147::get_offset_of_data_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize39 = { sizeof (Enum_t686727356), sizeof(Enum_t686727356_marshaled_pinvoke), sizeof(Enum_t686727356_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable39[1] = 
{
	Enum_t686727356_StaticFields::get_offset_of_split_char_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize40 = { sizeof (RuntimeArray), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize41 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable41[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize42 = { sizeof (SimpleEnumerator_t509431999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable42[3] = 
{
	SimpleEnumerator_t509431999::get_offset_of_enumeratee_0(),
	SimpleEnumerator_t509431999::get_offset_of_currentpos_1(),
	SimpleEnumerator_t509431999::get_offset_of_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize43 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable43[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize44 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable44[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize45 = { sizeof (Swapper_t2142009796), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize46 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize47 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize48 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize49 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize50 = { sizeof (Void_t617821848)+ sizeof (RuntimeObject), 1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize51 = { sizeof (Type_t), -1, sizeof(Type_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable51[8] = 
{
	0,
	Type_t::get_offset_of__impl_1(),
	Type_t_StaticFields::get_offset_of_Delimiter_2(),
	Type_t_StaticFields::get_offset_of_EmptyTypes_3(),
	Type_t_StaticFields::get_offset_of_FilterAttribute_4(),
	Type_t_StaticFields::get_offset_of_FilterName_5(),
	Type_t_StaticFields::get_offset_of_FilterNameIgnoreCase_6(),
	Type_t_StaticFields::get_offset_of_Missing_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize52 = { sizeof (MemberInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize53 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize54 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize55 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize56 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize57 = { sizeof (Exception_t2361189672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable57[11] = 
{
	Exception_t2361189672::get_offset_of_trace_ips_0(),
	Exception_t2361189672::get_offset_of_inner_exception_1(),
	Exception_t2361189672::get_offset_of_message_2(),
	Exception_t2361189672::get_offset_of_help_link_3(),
	Exception_t2361189672::get_offset_of_class_name_4(),
	Exception_t2361189672::get_offset_of_stack_trace_5(),
	Exception_t2361189672::get_offset_of__remoteStackTraceString_6(),
	Exception_t2361189672::get_offset_of_remote_stack_index_7(),
	Exception_t2361189672::get_offset_of_hresult_8(),
	Exception_t2361189672::get_offset_of_source_9(),
	Exception_t2361189672::get_offset_of__data_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize58 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize59 = { sizeof (RuntimeFieldHandle_t2046778572)+ sizeof (RuntimeObject), sizeof(RuntimeFieldHandle_t2046778572 ), 0, 0 };
extern const int32_t g_FieldOffsetTable59[1] = 
{
	RuntimeFieldHandle_t2046778572::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize60 = { sizeof (RuntimeTypeHandle_t2255076380)+ sizeof (RuntimeObject), sizeof(RuntimeTypeHandle_t2255076380 ), 0, 0 };
extern const int32_t g_FieldOffsetTable60[1] = 
{
	RuntimeTypeHandle_t2255076380::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize61 = { sizeof (ParamArrayAttribute_t1683940753), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize62 = { sizeof (OutAttribute_t3950480168), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize63 = { sizeof (ObsoleteAttribute_t1680717703), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable63[2] = 
{
	ObsoleteAttribute_t1680717703::get_offset_of__message_0(),
	ObsoleteAttribute_t1680717703::get_offset_of__error_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize64 = { sizeof (DllImportAttribute_t338674828), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable64[9] = 
{
	DllImportAttribute_t338674828::get_offset_of_CallingConvention_0(),
	DllImportAttribute_t338674828::get_offset_of_CharSet_1(),
	DllImportAttribute_t338674828::get_offset_of_Dll_2(),
	DllImportAttribute_t338674828::get_offset_of_EntryPoint_3(),
	DllImportAttribute_t338674828::get_offset_of_ExactSpelling_4(),
	DllImportAttribute_t338674828::get_offset_of_PreserveSig_5(),
	DllImportAttribute_t338674828::get_offset_of_SetLastError_6(),
	DllImportAttribute_t338674828::get_offset_of_BestFitMapping_7(),
	DllImportAttribute_t338674828::get_offset_of_ThrowOnUnmappableChar_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize65 = { sizeof (MarshalAsAttribute_t1975181510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable65[7] = 
{
	MarshalAsAttribute_t1975181510::get_offset_of_utype_0(),
	MarshalAsAttribute_t1975181510::get_offset_of_ArraySubType_1(),
	MarshalAsAttribute_t1975181510::get_offset_of_MarshalCookie_2(),
	MarshalAsAttribute_t1975181510::get_offset_of_MarshalType_3(),
	MarshalAsAttribute_t1975181510::get_offset_of_MarshalTypeRef_4(),
	MarshalAsAttribute_t1975181510::get_offset_of_SizeConst_5(),
	MarshalAsAttribute_t1975181510::get_offset_of_SizeParamIndex_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize66 = { sizeof (InAttribute_t2962543601), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize67 = { sizeof (SecurityAttribute_t148158723), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize68 = { sizeof (GuidAttribute_t2736266870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable68[1] = 
{
	GuidAttribute_t2736266870::get_offset_of_guidValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize69 = { sizeof (ComImportAttribute_t872524639), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize70 = { sizeof (OptionalAttribute_t2002007077), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize71 = { sizeof (FixedBufferAttribute_t1002463674), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable71[2] = 
{
	FixedBufferAttribute_t1002463674::get_offset_of_elementType_0(),
	FixedBufferAttribute_t1002463674::get_offset_of_length_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize72 = { sizeof (CompilerGeneratedAttribute_t2705918215), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize73 = { sizeof (InternalsVisibleToAttribute_t3018879471), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable73[2] = 
{
	InternalsVisibleToAttribute_t3018879471::get_offset_of_assemblyName_0(),
	InternalsVisibleToAttribute_t3018879471::get_offset_of_all_visible_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize74 = { sizeof (RuntimeCompatibilityAttribute_t410827646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable74[1] = 
{
	RuntimeCompatibilityAttribute_t410827646::get_offset_of_wrap_non_exception_throws_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize75 = { sizeof (DebuggerHiddenAttribute_t1753874708), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize76 = { sizeof (DefaultMemberAttribute_t300456519), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable76[1] = 
{
	DefaultMemberAttribute_t300456519::get_offset_of_member_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize77 = { sizeof (DecimalConstantAttribute_t3934771803), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable77[5] = 
{
	DecimalConstantAttribute_t3934771803::get_offset_of_scale_0(),
	DecimalConstantAttribute_t3934771803::get_offset_of_sign_1(),
	DecimalConstantAttribute_t3934771803::get_offset_of_hi_2(),
	DecimalConstantAttribute_t3934771803::get_offset_of_mid_3(),
	DecimalConstantAttribute_t3934771803::get_offset_of_low_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize78 = { sizeof (FieldOffsetAttribute_t4123836333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable78[1] = 
{
	FieldOffsetAttribute_t4123836333::get_offset_of_val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize79 = { sizeof (RuntimeArgumentHandle_t2419202929)+ sizeof (RuntimeObject), sizeof(RuntimeArgumentHandle_t2419202929 ), 0, 0 };
extern const int32_t g_FieldOffsetTable79[1] = 
{
	RuntimeArgumentHandle_t2419202929::get_offset_of_args_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize80 = { sizeof (AsyncCallback_t150799411), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize81 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize82 = { sizeof (TypedReference_t3537131378)+ sizeof (RuntimeObject), sizeof(TypedReference_t3537131378 ), 0, 0 };
extern const int32_t g_FieldOffsetTable82[3] = 
{
	TypedReference_t3537131378::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t3537131378::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t3537131378::get_offset_of_klass_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize83 = { sizeof (ArgIterator_t1653883875)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable83[4] = 
{
	ArgIterator_t1653883875::get_offset_of_sig_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t1653883875::get_offset_of_args_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t1653883875::get_offset_of_next_arg_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t1653883875::get_offset_of_num_args_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize84 = { sizeof (MarshalByRefObject_t2757329776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable84[1] = 
{
	MarshalByRefObject_t2757329776::get_offset_of__identity_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize85 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable85[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize86 = { sizeof (RuntimeHelpers_t1446002970), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize87 = { sizeof (Locale_t3081758046), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize88 = { sizeof (MonoTODOAttribute_t545103018), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable88[1] = 
{
	MonoTODOAttribute_t545103018::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize89 = { sizeof (MonoDocumentationNoteAttribute_t3126741126), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize90 = { sizeof (SafeHandleZeroOrMinusOneIsInvalid_t2952967591), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize91 = { sizeof (SafeWaitHandle_t3890008073), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize92 = { sizeof (CodePointIndexer_t976210660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable92[4] = 
{
	CodePointIndexer_t976210660::get_offset_of_ranges_0(),
	CodePointIndexer_t976210660::get_offset_of_TotalCount_1(),
	CodePointIndexer_t976210660::get_offset_of_defaultIndex_2(),
	CodePointIndexer_t976210660::get_offset_of_defaultCP_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize93 = { sizeof (TableRange_t3310569271)+ sizeof (RuntimeObject), sizeof(TableRange_t3310569271 ), 0, 0 };
extern const int32_t g_FieldOffsetTable93[5] = 
{
	TableRange_t3310569271::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3310569271::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3310569271::get_offset_of_Count_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3310569271::get_offset_of_IndexStart_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t3310569271::get_offset_of_IndexEnd_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize94 = { sizeof (TailoringInfo_t1966100000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable94[4] = 
{
	TailoringInfo_t1966100000::get_offset_of_LCID_0(),
	TailoringInfo_t1966100000::get_offset_of_TailoringIndex_1(),
	TailoringInfo_t1966100000::get_offset_of_TailoringCount_2(),
	TailoringInfo_t1966100000::get_offset_of_FrenchSort_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize95 = { sizeof (Contraction_t2245376577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable95[3] = 
{
	Contraction_t2245376577::get_offset_of_Source_0(),
	Contraction_t2245376577::get_offset_of_Replacement_1(),
	Contraction_t2245376577::get_offset_of_SortKey_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize96 = { sizeof (ContractionComparer_t4024548509), -1, sizeof(ContractionComparer_t4024548509_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable96[1] = 
{
	ContractionComparer_t4024548509_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize97 = { sizeof (Level2Map_t1455259309), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable97[2] = 
{
	Level2Map_t1455259309::get_offset_of_Source_0(),
	Level2Map_t1455259309::get_offset_of_Replace_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize98 = { sizeof (Level2MapComparer_t1968909304), -1, sizeof(Level2MapComparer_t1968909304_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable98[1] = 
{
	Level2MapComparer_t1968909304_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize99 = { sizeof (MSCompatUnicodeTable_t694247041), -1, sizeof(MSCompatUnicodeTable_t694247041_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable99[22] = 
{
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_MaxExpansionLength_0(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_ignorableFlags_1(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_categories_2(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_level1_3(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_level2_4(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_level3_5(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_cjkCHScategory_6(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_cjkCHTcategory_7(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_cjkJAcategory_8(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_cjkKOcategory_9(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_cjkCHSlv1_10(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_cjkCHTlv1_11(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_cjkJAlv1_12(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_cjkKOlv1_13(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_cjkKOlv2_14(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_tailoringArr_15(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_tailoringInfos_16(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_forLock_17(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_isReady_18(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_U3CU3Ef__switchU24map2_19(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_U3CU3Ef__switchU24map3_20(),
	MSCompatUnicodeTable_t694247041_StaticFields::get_offset_of_U3CU3Ef__switchU24map4_21(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
