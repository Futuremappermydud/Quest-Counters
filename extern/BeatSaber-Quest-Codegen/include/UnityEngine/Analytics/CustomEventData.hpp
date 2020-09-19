// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Autogenerated type: UnityEngine.Analytics.CustomEventData
  class CustomEventData : public ::Il2CppObject, public System::IDisposable {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x1975868
    static CustomEventData* New_ctor(::Il2CppString* name);
    // private System.Void Destroy()
    // Offset: 0x1977190
    void Destroy();
    // static System.IntPtr Internal_Create(UnityEngine.Analytics.CustomEventData ced, System.String name)
    // Offset: 0x19770D8
    static System::IntPtr Internal_Create(UnityEngine::Analytics::CustomEventData* ced, ::Il2CppString* name);
    // static System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x197721C
    static void Internal_Destroy(System::IntPtr ptr);
    // public System.Boolean AddString(System.String key, System.String value)
    // Offset: 0x197725C
    bool AddString(::Il2CppString* key, ::Il2CppString* value);
    // public System.Boolean AddInt32(System.String key, System.Int32 value)
    // Offset: 0x19772B4
    bool AddInt32(::Il2CppString* key, int value);
    // public System.Boolean AddUInt32(System.String key, System.UInt32 value)
    // Offset: 0x197730C
    bool AddUInt32(::Il2CppString* key, uint value);
    // public System.Boolean AddInt64(System.String key, System.Int64 value)
    // Offset: 0x1977364
    bool AddInt64(::Il2CppString* key, int64_t value);
    // public System.Boolean AddUInt64(System.String key, System.UInt64 value)
    // Offset: 0x19773BC
    bool AddUInt64(::Il2CppString* key, uint64_t value);
    // public System.Boolean AddBool(System.String key, System.Boolean value)
    // Offset: 0x1977414
    bool AddBool(::Il2CppString* key, bool value);
    // public System.Boolean AddDouble(System.String key, System.Double value)
    // Offset: 0x197746C
    bool AddDouble(::Il2CppString* key, double value);
    // public System.Boolean AddDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object> eventData)
    // Offset: 0x19758C8
    bool AddDictionary(System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>* eventData);
    // protected override System.Void Finalize()
    // Offset: 0x1977128
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x1976738
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // UnityEngine.Analytics.CustomEventData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Analytics::CustomEventData*, "UnityEngine.Analytics", "CustomEventData");
#pragma pack(pop)