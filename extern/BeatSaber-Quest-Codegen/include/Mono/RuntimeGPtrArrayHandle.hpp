// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.RuntimeGPtrArrayHandle
  struct RuntimeGPtrArrayHandle : public System::ValueType {
    public:
    // private Mono.RuntimeStructs/GPtrArray* value
    // Offset: 0x0
    Mono::RuntimeStructs::GPtrArray* value;
    // Creating value type constructor for type: RuntimeGPtrArrayHandle
    constexpr RuntimeGPtrArrayHandle(Mono::RuntimeStructs::GPtrArray* value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator Mono::RuntimeStructs::GPtrArray*
    constexpr operator Mono::RuntimeStructs::GPtrArray*() const noexcept {
      return value;
    }
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xA40850
    static RuntimeGPtrArrayHandle* New_ctor(System::IntPtr ptr);
    // System.Int32 get_Length()
    // Offset: 0xA4087C
    int get_Length();
    // System.IntPtr get_Item(System.Int32 i)
    // Offset: 0xA40898
    System::IntPtr get_Item(int i);
    // System.IntPtr Lookup(System.Int32 i)
    // Offset: 0xA408A0
    System::IntPtr Lookup(int i);
    // static private System.Void GPtrArrayFree(Mono.RuntimeStructs/GPtrArray* value)
    // Offset: 0x10B96CC
    static void GPtrArrayFree(Mono::RuntimeStructs::GPtrArray* value);
    // static System.Void DestroyAndFree(ref Mono.RuntimeGPtrArrayHandle h)
    // Offset: 0x10B96D0
    static void DestroyAndFree(Mono::RuntimeGPtrArrayHandle& h);
  }; // Mono.RuntimeGPtrArrayHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeGPtrArrayHandle, "Mono", "RuntimeGPtrArrayHandle");
#pragma pack(pop)