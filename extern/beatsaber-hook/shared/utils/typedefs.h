#ifndef TYPEDEFS_H
#define TYPEDEFS_H

#include <stdio.h>
#include <stdlib.h>
#include <type_traits>
// from https://gcc.gnu.org/bugzilla//show_bug.cgi?id=71579#c4, leading underscores removed
namespace std {
    template <class _Tp>
    struct is_complete_impl
    {
        template <class _Up, size_t = sizeof(_Up)>
        static true_type _S_test(int);

        template <class _Up>
        static false_type _S_test(...);

        using type = decltype(_S_test<_Tp>(0));
    };

    template<typename _Tp>
    using is_complete = typename is_complete_impl<_Tp>::type;

    // my own (trivial) addition
    template<typename _Tp>
    constexpr bool is_complete_v = is_complete<_Tp>::value;
}

#include <cassert>
// For including il2cpp properly
#ifdef _MSC_VER
#undef _MSC_VER
#endif
#ifndef __GNUC__
#define __GNUC__
#endif

#define NET_4_0 true
#include "il2cpp-config.h"
#include "il2cpp-api-types.h"
#include "il2cpp-class-internals.h"
#include "il2cpp-tabledefs.h"

#ifdef __cplusplus
template<class T, class Enable = void>
struct is_value_type : std::integral_constant< 
    bool,
    (std::is_arithmetic_v<T> || std::is_enum_v<T> || std::is_pointer_v<T> || std::is_pod_v<T>) && !std::is_base_of_v<Il2CppObject, T>
> {};
template<class _T> constexpr bool is_value_type_v = is_value_type<_T>::value;

template<class T>
struct Array;

extern "C" {
#endif

// UNITY SPECIFIC

// UnityEngine.Color
typedef struct Color {
    float r;
    float g;
    float b;
    float a;
} Color;

// UnityEngine.Vector2
typedef struct Vector2 {
    float x;
    float y;
} Vector2;

// UnityEngine.Vector3
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;

// UnityEngine.Vector4
typedef struct Vector4 {
    float x;
    float y;
    float z;
    float w;
} Vector4;

// UnityEngine.Quaternion
typedef struct Quaternion {
    float x;
    float y;
    float z;
    float w;
} Quaternion;

// UnityEngine.Rect
typedef struct Rect {
    float m_XMin;
    float m_YMin;
    float m_Width;
    float m_Height;
} Rect;

// UnityEngine.Scene
typedef struct Scene {
    int m_Handle;
} Scene;

// C# SPECIFIC

// System.IntPtr
typedef struct IntPtr {
    void* value;
} IntPtr;

#ifdef __cplusplus
}  /* extern "C" */
#endif /* __cplusplus */

#if __has_include("System/Array.hpp") && !defined(NO_CODEGEN_USE)
#define HAS_CODEGEN
#include <stdint.h>
#include <stddef.h>
#include "il2cpp-windowsruntime-types.h"
#else
// TODO: find a way to include this without putting the types in the global namespace?
#include "il2cpp-object-internals.h"
#endif

#ifdef HAS_CODEGEN
struct Il2CppReflectionType;
struct Il2CppReflectionRuntimeType;
#include "System/Object.hpp"
typedef Il2CppClass Il2CppVTable;
struct MonitorData;
struct Il2CppObject : public System::Object {
    union {
        Il2CppClass *klass;
        Il2CppVTable *vtable;
    };
    MonitorData *monitor;
};
#endif

#ifdef HAS_CODEGEN
#include "System/Delegate.hpp"
// self-typedef'd in il2cpp-class-internals.h
struct Il2CppDelegate : public System::Delegate {};
typedef System::Delegate Delegate;
#else
struct DelegateData;
// See il2cpp-object-internals.h/Il2CppDelegate
// System.Delegate
typedef struct Delegate : Il2CppObject {
    Il2CppMethodPointer method_ptr; // 0x8
    InvokerMethod invoke_impl; // 0xC
    Il2CppObject* m_target; // 0x10
    IntPtr* method; // 0x14
    void* delegate_trampoline; // 0x18
    intptr_t extra_arg; // 0x1C

    /*
    * If non-NULL, this points to a memory location which stores the address of
    * the compiled code of the method, or NULL if it is not yet compiled.
    */
    uint8_t** method_code; // 0x20
    Il2CppReflectionMethod* method_info; // 0x24
    Il2CppReflectionMethod* original_method_info; // 0x28
    DelegateData* data; // 0x2C
    bool method_is_virtual; // 0x30
} Delegate;
#endif

#ifdef HAS_CODEGEN
#include "System/MulticastDelegate.hpp"
typedef System::MulticastDelegate Il2CppMulticastDelegate;
typedef System::MulticastDelegate MulticastDelegate;
#else
// System.MulticastDelegate
typedef struct MulticastDelegate : Delegate {
    ::Array<Delegate*>* delegates;
} MulticastDelegate;
#endif

#ifdef HAS_CODEGEN
typedef int32_t il2cpp_array_lower_bound_t;
#define IL2CPP_ARRAY_MAX_INDEX ((int32_t) 0x7fffffff)
#define IL2CPP_ARRAY_MAX_SIZE  ((uint32_t) 0xffffffff)

typedef struct Il2CppArrayBounds
{
    il2cpp_array_size_t length;
    il2cpp_array_lower_bound_t lower_bound;
} Il2CppArrayBounds;

#if IL2CPP_COMPILER_MSVC
#pragma warning( push )
#pragma warning( disable : 4200 )
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#endif

#include "System/Array.hpp"
struct Il2CppArray : public System::Array {
    /* bounds is NULL for szarrays */
    Il2CppArrayBounds *bounds;
    /* total number of elements of the array */
    il2cpp_array_size_t max_length;
};

struct Il2CppArraySize : public Il2CppArray {
    ALIGN_TYPE(8) void* vector[IL2CPP_ZERO_LEN_ARRAY];
};

static const size_t kIl2CppSizeOfArray = offsetof(Il2CppArraySize, vector);
static const size_t kIl2CppOffsetOfArrayBounds = offsetof(Il2CppArray, bounds);
static const size_t kIl2CppOffsetOfArrayLength = offsetof(Il2CppArray, max_length);
#endif

namespace il2cpp_utils {
    namespace array_utils {
        static char* il2cpp_array_addr_with_size(Il2CppArray *array, int32_t size, uintptr_t idx)
        {
            return ((char*)array) + kIl2CppSizeOfArray + size * idx;
        }
        #define load_array_elema(arr, idx, size) ((((uint8_t*)(arr)) + kIl2CppSizeOfArray) + ((size) * (idx)))

        #define il2cpp_array_setwithsize(array, elementSize, index, value)  \
            do {    \
                void*__p = (void*) il2cpp_utils::array_utils::il2cpp_array_addr_with_size ((array), elementSize, (index)); \
                memcpy(__p, &(value), elementSize); \
            } while (0)
        #define il2cpp_array_setrefwithsize(array, elementSize, index, value)  \
            do {    \
                void*__p = (void*) il2cpp_utils::array_utils::il2cpp_array_addr_with_size ((array), elementSize, (index)); \
                memcpy(__p, value, elementSize); \
                } while (0)
        #define il2cpp_array_addr(array, type, index) ((type*)(void*) il2cpp_utils::array_utils::il2cpp_array_addr_with_size (array, sizeof (type), index))
        #define il2cpp_array_get(array, type, index) ( *(type*)il2cpp_array_addr ((array), type, (index)) )
        #define il2cpp_array_set(array, type, index, value)    \
            do {    \
                type *__p = (type *) il2cpp_array_addr ((array), type, (index));    \
                *__p = (value); \
            } while (0)
        #define il2cpp_array_setref(array, index, value)  \
            do {    \
                void* *__p = (void* *) il2cpp_array_addr ((array), void*, (index)); \
                /* il2cpp_gc_wbarrier_set_arrayref ((array), __p, (MonoObject*)(value));    */\
                *__p = (value);    \
            } while (0)
    }
}

#ifdef HAS_CODEGEN
#include "System/String.hpp"
struct Il2CppString : public System::String {};
#endif

#ifndef HAS_CODEGEN
// System.DelegateData
typedef struct DelegateData : Il2CppObject {
    Il2CppReflectionType* target_type;
    Il2CppString* method_name;
    bool curied_first_arg;
} DelegateData;
#endif

#ifdef HAS_CODEGEN
#include "System/Collections/Generic/IEnumerable_1.hpp"
template<class T>
struct Array : public Il2CppArray, public System::Collections::Generic::IEnumerable_1<T>
#else
template<class T>
struct Array : public Il2CppArray
#endif
{
    static_assert(is_value_type_v<T>, "T must be a C# value type! (primitive, pointer or Struct)");
    ALIGN_TYPE(8) T values[IL2CPP_ZERO_LEN_ARRAY];

    il2cpp_array_size_t Length() {
        if (bounds) {
            return bounds->length;
        }
        return max_length;
    }
    T& operator[](size_t i) {
        return values[i];
    }
    const T& operator[](size_t i) const {
        return values[i];
    }
};

#ifdef HAS_CODEGEN
#include "System/Collections/Generic/List_1.hpp"
template<class T>
using List = System::Collections::Generic::List_1<T>;
#else
// System.Collections.Generic.List
template<class T>
struct List : Il2CppObject
{
    Array<T>* items;
    int size;
    int version;
    Il2CppObject* syncRoot;
};
#endif

#ifdef HAS_CODEGEN
// TODO: QiCache and Il2CppComObject ("System.__Il2CppComObject (dummy type that replaces System.__ComObject)")

#include "System/AppDomain.hpp"
// self-typedef'd in il2cpp-class-internals.h
struct Il2CppAppDomain : public System::AppDomain {};

#include "System/AppDomainSetup.hpp"
// self-typedef'd in il2cpp-class-internals.h
struct Il2CppAppDomainSetup : public System::AppDomainSetup {};

#include "System/ArgumentException.hpp"
typedef System::ArgumentException Il2CppArgumentException;

// TODO: Il2CppDecimal is System::Decimal?

typedef enum Il2CppDecimalCompareResult
{
    IL2CPP_DECIMAL_CMP_LT = -1,
    IL2CPP_DECIMAL_CMP_EQ,
    IL2CPP_DECIMAL_CMP_GT
} Il2CppDecimalCompareResult;

// TODO: Il2CppDouble, Il2CppDouble_double are System::Double?

#include "System/Exception.hpp"
// self-typedef'd in il2cpp-api-types.h
struct Il2CppException : public System::Exception {};

// TODO: Il2CppExceptionWrapper?

#include "System/IOAsyncResult.hpp"
typedef System::IOAsyncResult Il2CppIOAsyncResult;

#include "System/IOSelectorJob.hpp"
typedef System::IOSelectorJob Il2CppIOSelectorJob;

#include "System/MarshalByRefObject.hpp"
typedef System::MarshalByRefObject Il2CppMarshalByRefObject;

#include "System/MonoAsyncCall.hpp"
typedef System::MonoAsyncCall Il2CppAsyncCall;

#include "System/MonoType.hpp"
struct Il2CppReflectionMonoType : public System::MonoType {
    const Il2CppType* GetIl2CppType() const {
        return reinterpret_cast<Il2CppType*>(impl.value.m_value);
    }
};

#include "System/RuntimeType.hpp"
struct Il2CppReflectionRuntimeType : public System::RuntimeType {};

// TODO: Il2CppSingle, Il2CppSingle_float are System::Single?

#include "System/SystemException.hpp"
typedef System::SystemException Il2CppSystemException;

#include "System/Type.hpp"
// self-typedef'd in il2cpp-api-types.h
struct Il2CppReflectionType : public System::Type {};

#include "System/TypedReference.hpp"
typedef System::TypedReference Il2CppTypedRef;

#include "System/Diagnostics/StackFrame.hpp"
typedef System::Diagnostics::StackFrame Il2CppStackFrame;

// TODO: Il2CppCalendarData is System::Globalization::CalendarData minus 4 fields at the end?

// TODO: Il2CppCultureData is System::Globalization::CultureData minus 13 fields at the end?

#include "System/Globalization/CultureInfo.hpp"
typedef System::Globalization::CultureInfo Il2CppCultureInfo;

#include "System/Globalization/DateTimeFormatInfo.hpp"
typedef System::Globalization::DateTimeFormatInfo Il2CppDateTimeFormatInfo;

#include "System/Globalization/NumberFormatInfo.hpp"
typedef System::Globalization::NumberFormatInfo Il2CppNumberFormatInfo;

#include "System/Globalization/RegionInfo.hpp"
typedef System::Globalization::RegionInfo Il2CppRegionInfo;

#include "System/Globalization/SortKey.hpp"
typedef System::Globalization::SortKey Il2CppSortKey;

#include "System/Net/SocketAddress.hpp"
typedef System::Net::SocketAddress Il2CppSocketAddress;

// "Corresponds to Mono's internal System.Net.Sockets.Socket.SocketAsyncResult class. Has no relation to Il2CppAsyncResult."
#include "System/Net/Sockets/SocketAsyncResult.hpp"
typedef System::Net::Sockets::SocketAsyncResult Il2CppSocketAsyncResult;

#include "System/Reflection/EventInfo.hpp"
typedef System::Reflection::EventInfo Il2CppReflectionEvent;

#include "System/Reflection/MonoEvent.hpp"
typedef System::Reflection::MonoEvent Il2CppReflectionMonoEvent;

#include "System/Reflection/MonoEventInfo.hpp"
typedef System::Reflection::MonoEventInfo Il2CppReflectionMonoEventInfo;

#include "System/Reflection/MonoField.hpp"
typedef System::Reflection::MonoField Il2CppReflectionField;

#include "System/Reflection/MonoProperty.hpp"
typedef System::Reflection::MonoProperty Il2CppReflectionProperty;

#include "System/Reflection/MonoMethod.hpp"
// self-typedef'd in il2cpp-api-types.h
struct Il2CppReflectionMethod : public System::Reflection::MonoMethod {};

#if __has_include("System/Reflection/MonoGenericMethod.hpp")
#include "System/Reflection/MonoGenericMethod.hpp"
typedef System::Reflection::MonoGenericMethod Il2CppReflectionGenericMethod;
#endif

#include "System/Reflection/MonoMethodInfo.hpp"
typedef System::Reflection::MonoMethodInfo Il2CppMethodInfo;

#include "System/Reflection/MonoPropertyInfo.hpp"
typedef System::Reflection::MonoPropertyInfo Il2CppPropertyInfo;

#include "System/Reflection/ParameterInfo.hpp"
typedef System::Reflection::ParameterInfo Il2CppReflectionParameter;

#include "System/Reflection/Module.hpp"
typedef System::Reflection::Module Il2CppReflectionModule;

#include "System/Reflection/AssemblyName.hpp"
typedef System::Reflection::AssemblyName Il2CppReflectionAssemblyName;

#include "System/Reflection/Assembly.hpp"
typedef System::Reflection::Assembly Il2CppReflectionAssembly;

#include "System/Reflection/Emit/UnmanagedMarshal.hpp"
typedef System::Reflection::Emit::UnmanagedMarshal Il2CppReflectionMarshal;

#include "System/Reflection/ManifestResourceInfo.hpp"
typedef System::Reflection::ManifestResourceInfo Il2CppManifestResourceInfo;

#include "System/Reflection/Pointer.hpp"
typedef System::Reflection::Pointer Il2CppReflectionPointer;

// TODO: Il2CppResourceLocation seems to be the System.Reflection.ResourceLocation enum

#include "System/Runtime/InteropServices/ErrorWrapper.hpp"
typedef System::Runtime::InteropServices::ErrorWrapper Il2CppErrorWrapper;

// "Inherited by Microsoft.Win32.SafeHandles.SafeWaitHandle"
#include "System/Runtime/InteropServices/SafeHandle.hpp"
typedef System::Runtime::InteropServices::SafeHandle Il2CppSafeHandle;

#include "System/Runtime/Remoting/Contexts/Context.hpp"
// self-typedef'd in il2cpp-class-internals.h
struct Il2CppAppContext : public System::Runtime::Remoting::Contexts::Context {};

#include "System/Runtime/Remoting/Messaging/AsyncResult.hpp"
// self-typedef'd in il2cpp-api-types.h
struct Il2CppAsyncResult : public System::Runtime::Remoting::Messaging::AsyncResult {};

// TODO: Il2CppCallType which "is a copy of System.Runtime.Remoting.Messaging.CallType" enum

// TODO: Il2CppMethodMessage is System::Runtime::Remoting::Messaging::MonoMethodMessage minus 4 fields at the end?

#include "System/Text/StringBuilder.hpp"
typedef System::Text::StringBuilder Il2CppStringBuilder;

#include "System/Threading/InternalThread.hpp"
typedef System::Threading::InternalThread Il2CppInternalThread;

#include "System/Threading/Thread.hpp"
// self-typedef'd in il2cpp-api-types.h
struct Il2CppThread : public System::Threading::Thread {};


#endif

#include "utils/Il2CppHashMap.h"
#include "utils/HashUtils.h"
#include "utils/StringUtils.h"

struct NamespaceAndNamePairHash
{
    size_t operator()(const std::pair<const char*, const char*>& pair) const
    {
        return il2cpp::utils::HashUtils::Combine(il2cpp::utils::StringUtils::Hash(pair.first), il2cpp::utils::StringUtils::Hash(pair.second));
    }
};

struct NamespaceAndNamePairEquals
{
    bool operator()(const std::pair<const char*, const char*>& p1, const std::pair<const char*, const char*>& p2) const
    {
        return !strcmp(p1.first, p2.first) && !strcmp(p1.second, p2.second);
    }
};

struct Il2CppNameToTypeDefinitionIndexHashTable : public Il2CppHashMap<std::pair<const char*, const char*>, TypeDefinitionIndex, NamespaceAndNamePairHash, NamespaceAndNamePairEquals>
{
    typedef Il2CppHashMap<std::pair<const char*, const char*>, TypeDefinitionIndex, NamespaceAndNamePairHash, NamespaceAndNamePairEquals> Base;
    Il2CppNameToTypeDefinitionIndexHashTable() : Base()
    {
    }
};

#endif /* TYPEDEFS_H */
