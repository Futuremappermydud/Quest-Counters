// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.TaskAwaiter`1
  template<typename TResult>
  struct TaskAwaiter_1 : public System::ValueType, public System::Runtime::CompilerServices::ICriticalNotifyCompletion {
    public:
    // private readonly System.Threading.Tasks.Task`1<TResult> m_task
    // Offset: 0x0
    System::Threading::Tasks::Task_1<TResult>* m_task;
    // Creating value type constructor for type: TaskAwaiter_1
    constexpr TaskAwaiter_1(System::Threading::Tasks::Task_1<TResult>* m_task_ = {}) noexcept : m_task{m_task_} {}
    // Creating conversion operator: operator System::Threading::Tasks::Task_1<TResult>*
    constexpr operator System::Threading::Tasks::Task_1<TResult>*() const noexcept {
      return m_task;
    }
    // System.Void .ctor(System.Threading.Tasks.Task`1<TResult> task)
    // Offset: 0xFFFFFFFF
    static TaskAwaiter_1<TResult>* New_ctor(System::Threading::Tasks::Task_1<TResult>* task) {
      return (TaskAwaiter_1<TResult>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TaskAwaiter_1<TResult>>::get(), task));
    }
    // public System.Boolean get_IsCompleted()
    // Offset: 0xFFFFFFFF
    bool get_IsCompleted() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "get_IsCompleted"));
    }
    // public TResult GetResult()
    // Offset: 0xFFFFFFFF
    TResult GetResult() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TResult>(*this, "GetResult"));
    }
    // public System.Void UnsafeOnCompleted(System.Action continuation)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Runtime.CompilerServices.ICriticalNotifyCompletion
    // Base method: System.Void ICriticalNotifyCompletion::UnsafeOnCompleted(System.Action continuation)
    void UnsafeOnCompleted(System::Action* continuation) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "UnsafeOnCompleted", continuation));
    }
  }; // System.Runtime.CompilerServices.TaskAwaiter`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Runtime::CompilerServices::TaskAwaiter_1, "System.Runtime.CompilerServices", "TaskAwaiter`1");
#pragma pack(pop)
