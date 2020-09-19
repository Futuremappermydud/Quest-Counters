// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Action`1
  template<typename T>
  class Action_1 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    static Action_1<T>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      return (Action_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Action_1<T>*>::get(), object, method));
    }
    // public System.Void Invoke(T obj)
    // Offset: 0xFFFFFFFF
    void Invoke(T obj) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", obj));
    }
    // public System.IAsyncResult BeginInvoke(T obj, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(T obj, System::AsyncCallback* callback, ::Il2CppObject* object) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", obj, callback, object));
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    void EndInvoke(System::IAsyncResult* result) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
    }
  }; // System.Action`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Action_1, "System", "Action`1");
#pragma pack(pop)