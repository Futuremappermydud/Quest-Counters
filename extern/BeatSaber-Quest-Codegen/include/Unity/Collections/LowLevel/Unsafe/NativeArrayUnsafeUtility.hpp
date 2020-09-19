// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
  class NativeArrayUnsafeUtility : public ::Il2CppObject {
    public:
    // static public Unity.Collections.NativeArray`1<T> ConvertExistingDataToNativeArray(System.Void* dataPointer, System.Int32 length, Unity.Collections.Allocator allocator)
    // Offset: 0xFFFFFFFF
    template<class T>
    static Unity::Collections::NativeArray_1<T> ConvertExistingDataToNativeArray(void* dataPointer, int length, Unity::Collections::Allocator allocator) {
      static_assert(is_value_type_v<T>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Unity::Collections::NativeArray_1<T>>("Unity.Collections.LowLevel.Unsafe", "NativeArrayUnsafeUtility", "ConvertExistingDataToNativeArray", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, dataPointer, length, allocator)));
    }
  }; // Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
}
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "NativeArrayUnsafeUtility");
#pragma pack(pop)
