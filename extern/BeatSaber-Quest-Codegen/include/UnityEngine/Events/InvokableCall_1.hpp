// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.BaseInvokableCall
#include "UnityEngine/Events/BaseInvokableCall.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.InvokableCall`1
  template<typename T1>
  class InvokableCall_1 : public UnityEngine::Events::BaseInvokableCall {
    public:
    // private UnityEngine.Events.UnityAction`1<T1> Delegate
    // Offset: 0x0
    UnityEngine::Events::UnityAction_1<T1>* Delegate;
    // Creating conversion operator: operator UnityEngine::Events::UnityAction_1<T1>*
    constexpr operator UnityEngine::Events::UnityAction_1<T1>*() const noexcept {
      return Delegate;
    }
    // protected System.Void add_Delegate(UnityEngine.Events.UnityAction`1<T1> value)
    // Offset: 0xFFFFFFFF
    void add_Delegate(UnityEngine::Events::UnityAction_1<T1>* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_Delegate", value));
    }
    // protected System.Void remove_Delegate(UnityEngine.Events.UnityAction`1<T1> value)
    // Offset: 0xFFFFFFFF
    void remove_Delegate(UnityEngine::Events::UnityAction_1<T1>* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_Delegate", value));
    }
    // public System.Void .ctor(UnityEngine.Events.UnityAction`1<T1> action)
    // Offset: 0xFFFFFFFF
    static InvokableCall_1<T1>* New_ctor(UnityEngine::Events::UnityAction_1<T1>* action) {
      return (InvokableCall_1<T1>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InvokableCall_1<T1>*>::get(), action));
    }
    // public System.Void Invoke(T1 args0)
    // Offset: 0xFFFFFFFF
    void Invoke(T1 args0) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", args0));
    }
    // public System.Void .ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::.ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    static InvokableCall_1<T1>* New_ctor(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
      return (InvokableCall_1<T1>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InvokableCall_1<T1>*>::get(), target, theFunction));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::Invoke(System.Object[] args)
    void Invoke(::Array<::Il2CppObject*>* args) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", args));
    }
    // public override System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Boolean BaseInvokableCall::Find(System.Object targetObj, System.Reflection.MethodInfo method)
    bool Find(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Find", targetObj, method));
    }
  }; // UnityEngine.Events.InvokableCall`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::InvokableCall_1, "UnityEngine.Events", "InvokableCall`1");
#pragma pack(pop)
