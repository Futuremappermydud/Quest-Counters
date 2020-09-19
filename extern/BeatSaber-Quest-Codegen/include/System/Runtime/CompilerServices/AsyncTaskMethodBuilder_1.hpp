// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: IAsyncStateMachine
  class IAsyncStateMachine;
  // Forward declaring type: ICriticalNotifyCompletion
  class ICriticalNotifyCompletion;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
  template<typename TResult>
  struct AsyncTaskMethodBuilder_1 : public System::ValueType {
    public:
    // private System.Runtime.CompilerServices.AsyncMethodBuilderCore m_coreState
    // Offset: 0x0
    System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState;
    // private System.Threading.Tasks.Task`1<TResult> m_task
    // Offset: 0x0
    System::Threading::Tasks::Task_1<TResult>* m_task;
    // Creating value type constructor for type: AsyncTaskMethodBuilder_1
    constexpr AsyncTaskMethodBuilder_1(System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState_ = {}, System::Threading::Tasks::Task_1<TResult>* m_task_ = {}) noexcept : m_coreState{m_coreState_}, m_task{m_task_} {}
    // Autogenerated static field getter
    // Get static field: static readonly System.Threading.Tasks.Task`1<TResult> s_defaultResultTask
    static System::Threading::Tasks::Task_1<TResult>* _get_s_defaultResultTask() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::Tasks::Task_1<TResult>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AsyncTaskMethodBuilder_1<TResult>>::get(), "s_defaultResultTask"));
    }
    // Autogenerated static field setter
    // Set static field: static readonly System.Threading.Tasks.Task`1<TResult> s_defaultResultTask
    static void _set_s_defaultResultTask(System::Threading::Tasks::Task_1<TResult>* value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AsyncTaskMethodBuilder_1<TResult>>::get(), "s_defaultResultTask", value));
    }
    // static public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> Create()
    // Offset: 0xFFFFFFFF
    static System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> Create() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AsyncTaskMethodBuilder_1<TResult>>::get(), "Create"));
    }
    // public System.Void Start(ref TStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    template<class TStateMachine>
    void Start(TStateMachine& stateMachine) {
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::IAsyncStateMachine, std::remove_pointer_t<TStateMachine>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(*this, "Start", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, stateMachine));
    }
    // public System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetStateMachine", stateMachine));
    }
    // public System.Void AwaitUnsafeOnCompleted(ref TAwaiter awaiter, ref TStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    template<class TAwaiter, class TStateMachine>
    void AwaitUnsafeOnCompleted(TAwaiter& awaiter, TStateMachine& stateMachine) {
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::ICriticalNotifyCompletion, std::remove_pointer_t<TAwaiter>>);
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::IAsyncStateMachine, std::remove_pointer_t<TStateMachine>>);
      THROW_UNLESS((il2cpp_utils::RunGenericMethod(*this, "AwaitUnsafeOnCompleted", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, awaiter, stateMachine)));
    }
    // public System.Threading.Tasks.Task`1<TResult> get_Task()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<TResult>* get_Task() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<TResult>*>(*this, "get_Task"));
    }
    // public System.Void SetResult(TResult result)
    // Offset: 0xFFFFFFFF
    void SetResult(TResult result) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetResult", result));
    }
    // System.Void SetResult(System.Threading.Tasks.Task`1<TResult> completedTask)
    // Offset: 0xFFFFFFFF
    void SetResult(System::Threading::Tasks::Task_1<TResult>* completedTask) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetResult", completedTask));
    }
    // public System.Void SetException(System.Exception exception)
    // Offset: 0xFFFFFFFF
    void SetException(System::Exception* exception) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetException", exception));
    }
    // private System.Threading.Tasks.Task`1<TResult> GetTaskForResult(TResult result)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<TResult>* GetTaskForResult(TResult result) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<TResult>*>(*this, "GetTaskForResult", result));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AsyncTaskMethodBuilder_1<TResult>>::get(), ".cctor"));
    }
  }; // System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1");
#pragma pack(pop)