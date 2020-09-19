// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.WeakReference`1
  template<typename T>
  class WeakReference_1 : public ::Il2CppObject, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.Runtime.InteropServices.GCHandle handle
    // Offset: 0x0
    System::Runtime::InteropServices::GCHandle handle;
    // private System.Boolean trackResurrection
    // Offset: 0x0
    bool trackResurrection;
    // public System.Void .ctor(T target)
    // Offset: 0xFFFFFFFF
    static WeakReference_1<T>* New_ctor(T target) {
      return (WeakReference_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<WeakReference_1<T>*>::get(), target));
    }
    // public System.Void .ctor(T target, System.Boolean trackResurrection)
    // Offset: 0xFFFFFFFF
    static WeakReference_1<T>* New_ctor(T target, bool trackResurrection) {
      return (WeakReference_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<WeakReference_1<T>*>::get(), target, trackResurrection));
    }
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFF
    static WeakReference_1<T>* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      return (WeakReference_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<WeakReference_1<T>*>::get(), info, context));
    }
    // public System.Boolean TryGetTarget(out T target)
    // Offset: 0xFFFFFFFF
    bool TryGetTarget(T& target) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetTarget", target));
    }
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
    }
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      GetObjectData(info, context);
    }
    // protected override System.Void Finalize()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
    }
  }; // System.WeakReference`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::WeakReference_1, "System", "WeakReference`1");
#pragma pack(pop)
