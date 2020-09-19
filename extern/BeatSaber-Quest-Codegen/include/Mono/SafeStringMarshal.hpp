// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.SafeStringMarshal
  struct SafeStringMarshal : public System::ValueType, public System::IDisposable {
    public:
    // private readonly System.String str
    // Offset: 0x0
    ::Il2CppString* str;
    // private System.IntPtr marshaled_string
    // Offset: 0x8
    System::IntPtr marshaled_string;
    // Creating value type constructor for type: SafeStringMarshal
    constexpr SafeStringMarshal(::Il2CppString* str_ = {}, System::IntPtr marshaled_string_ = {}) noexcept : str{str_}, marshaled_string{marshaled_string_} {}
    // static public System.IntPtr StringToUtf8(System.String str)
    // Offset: 0x10B9D9C
    static System::IntPtr StringToUtf8(::Il2CppString* str);
    // static public System.Void GFree(System.IntPtr ptr)
    // Offset: 0x10B9DA0
    static void GFree(System::IntPtr ptr);
    // public System.Void .ctor(System.String str)
    // Offset: 0xA40A5C
    static SafeStringMarshal* New_ctor(::Il2CppString* str);
    // public System.IntPtr get_Value()
    // Offset: 0xA40A64
    System::IntPtr get_Value();
    // public System.Void Dispose()
    // Offset: 0xA40A6C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // Mono.SafeStringMarshal
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::SafeStringMarshal, "Mono", "SafeStringMarshal");
#pragma pack(pop)