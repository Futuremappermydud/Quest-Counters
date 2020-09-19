// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: GCHandleType
  struct GCHandleType;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.GCHandle
  struct GCHandle : public System::ValueType {
    public:
    // private System.Int32 handle
    // Offset: 0x0
    int handle;
    // Creating value type constructor for type: GCHandle
    constexpr GCHandle(int handle_ = {}) noexcept : handle{handle_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return handle;
    }
    // private System.Void .ctor(System.IntPtr h)
    // Offset: 0xA42544
    static GCHandle* New_ctor(System::IntPtr h);
    // private System.Void .ctor(System.Object obj)
    // Offset: 0xA42570
    static GCHandle* New_ctor(::Il2CppObject* obj);
    // System.Void .ctor(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0xA425A0
    static GCHandle* New_ctor(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type);
    // public System.Boolean get_IsAllocated()
    // Offset: 0xA425D8
    bool get_IsAllocated();
    // public System.Object get_Target()
    // Offset: 0xA425E8
    ::Il2CppObject* get_Target();
    // public System.Void set_Target(System.Object value)
    // Offset: 0xA425F0
    void set_Target(::Il2CppObject* value);
    // public System.IntPtr AddrOfPinnedObject()
    // Offset: 0xA42624
    System::IntPtr AddrOfPinnedObject();
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value)
    // Offset: 0x1168340
    static System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value);
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x1168360
    static System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type);
    // public System.Void Free()
    // Offset: 0xA4262C
    void Free();
    // static private System.Boolean CheckCurrentDomain(System.Int32 handle)
    // Offset: 0x1168518
    static bool CheckCurrentDomain(int handle);
    // static private System.Object GetTarget(System.Int32 handle)
    // Offset: 0x1168204
    static ::Il2CppObject* GetTarget(int handle);
    // static private System.Int32 GetTargetHandle(System.Object obj, System.Int32 handle, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x1168158
    static int GetTargetHandle(::Il2CppObject* obj, int handle, System::Runtime::InteropServices::GCHandleType type);
    // static private System.Void FreeHandle(System.Int32 handle)
    // Offset: 0x116842C
    static void FreeHandle(int handle);
    // static private System.IntPtr GetAddrOfPinnedObject(System.Int32 handle)
    // Offset: 0x116833C
    static System::IntPtr GetAddrOfPinnedObject(int handle);
    // static public System.Runtime.InteropServices.GCHandle FromIntPtr(System.IntPtr value)
    // Offset: 0x11685B8
    static System::Runtime::InteropServices::GCHandle FromIntPtr(System::IntPtr value);
    // static public System.IntPtr ToIntPtr(System.Runtime.InteropServices.GCHandle value)
    // Offset: 0x11685D0
    static System::IntPtr ToIntPtr(System::Runtime::InteropServices::GCHandle value);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0xA42634
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA4263C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Runtime.InteropServices.GCHandle
  // static public System.Boolean op_Equality(System.Runtime.InteropServices.GCHandle a, System.Runtime.InteropServices.GCHandle b)
  // Offset: 0x116851C
  bool operator ==(const System::Runtime::InteropServices::GCHandle& a, const System::Runtime::InteropServices::GCHandle& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::GCHandle, "System.Runtime.InteropServices", "GCHandle");
#pragma pack(pop)
