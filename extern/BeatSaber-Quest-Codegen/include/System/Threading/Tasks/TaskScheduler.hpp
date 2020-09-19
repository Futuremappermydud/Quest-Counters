// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: UnobservedTaskExceptionEventArgs
  class UnobservedTaskExceptionEventArgs;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConditionalWeakTable`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.TaskScheduler
  class TaskScheduler : public ::Il2CppObject {
    public:
    // Nested type: System::Threading::Tasks::TaskScheduler::SystemThreadingTasks_TaskSchedulerDebugView
    class SystemThreadingTasks_TaskSchedulerDebugView;
    // private System.Int32 m_taskSchedulerId
    // Offset: 0x10
    int m_taskSchedulerId;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_taskSchedulerId;
    }
    // Get static field: static private System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> s_activeTaskSchedulers
    static System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Threading::Tasks::TaskScheduler*, ::Il2CppObject*>* _get_s_activeTaskSchedulers();
    // Set static field: static private System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> s_activeTaskSchedulers
    static void _set_s_activeTaskSchedulers(System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Threading::Tasks::TaskScheduler*, ::Il2CppObject*>* value);
    // Get static field: static private readonly System.Threading.Tasks.TaskScheduler s_defaultTaskScheduler
    static System::Threading::Tasks::TaskScheduler* _get_s_defaultTaskScheduler();
    // Set static field: static private readonly System.Threading.Tasks.TaskScheduler s_defaultTaskScheduler
    static void _set_s_defaultTaskScheduler(System::Threading::Tasks::TaskScheduler* value);
    // Get static field: static System.Int32 s_taskSchedulerIdCounter
    static int _get_s_taskSchedulerIdCounter();
    // Set static field: static System.Int32 s_taskSchedulerIdCounter
    static void _set_s_taskSchedulerIdCounter(int value);
    // Get static field: static private System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> _unobservedTaskException
    static System::EventHandler_1<System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* _get__unobservedTaskException();
    // Set static field: static private System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> _unobservedTaskException
    static void _set__unobservedTaskException(System::EventHandler_1<System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>* value);
    // Get static field: static private readonly System.Object _unobservedTaskExceptionLockObject
    static ::Il2CppObject* _get__unobservedTaskExceptionLockObject();
    // Set static field: static private readonly System.Object _unobservedTaskExceptionLockObject
    static void _set__unobservedTaskExceptionLockObject(::Il2CppObject* value);
    // protected internal System.Void QueueTask(System.Threading.Tasks.Task task)
    // Offset: 0xFFFFFFFF
    void QueueTask(System::Threading::Tasks::Task* task);
    // protected System.Boolean TryExecuteTaskInline(System.Threading.Tasks.Task task, System.Boolean taskWasPreviouslyQueued)
    // Offset: 0xFFFFFFFF
    bool TryExecuteTaskInline(System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);
    // System.Boolean TryRunInline(System.Threading.Tasks.Task task, System.Boolean taskWasPreviouslyQueued)
    // Offset: 0xCE5198
    bool TryRunInline(System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);
    // protected internal System.Boolean TryDequeue(System.Threading.Tasks.Task task)
    // Offset: 0xCE8CC8
    bool TryDequeue(System::Threading::Tasks::Task* task);
    // System.Void NotifyWorkItemProgress()
    // Offset: 0xCE8CD0
    void NotifyWorkItemProgress();
    // System.Boolean get_RequiresAtomicStartTransition()
    // Offset: 0xCE8CD4
    bool get_RequiresAtomicStartTransition();
    // System.Void InternalQueueTask(System.Threading.Tasks.Task task)
    // Offset: 0xCE2AE8
    void InternalQueueTask(System::Threading::Tasks::Task* task);
    // private System.Void AddToActiveTaskSchedulers()
    // Offset: 0xCE8D64
    void AddToActiveTaskSchedulers();
    // static public System.Threading.Tasks.TaskScheduler get_Default()
    // Offset: 0xCE8E54
    static System::Threading::Tasks::TaskScheduler* get_Default();
    // static public System.Threading.Tasks.TaskScheduler get_Current()
    // Offset: 0xCE5BD4
    static System::Threading::Tasks::TaskScheduler* get_Current();
    // static System.Threading.Tasks.TaskScheduler get_InternalCurrent()
    // Offset: 0xCDF1C4
    static System::Threading::Tasks::TaskScheduler* get_InternalCurrent();
    // public System.Int32 get_Id()
    // Offset: 0xCE8EBC
    int get_Id();
    // static System.Void PublishUnobservedTaskException(System.Object sender, System.Threading.Tasks.UnobservedTaskExceptionEventArgs ueea)
    // Offset: 0xCE7EDC
    static void PublishUnobservedTaskException(::Il2CppObject* sender, System::Threading::Tasks::UnobservedTaskExceptionEventArgs* ueea);
    // static private System.Void .cctor()
    // Offset: 0xCE8F70
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0xCE8CDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TaskScheduler* New_ctor();
  }; // System.Threading.Tasks.TaskScheduler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskScheduler*, "System.Threading.Tasks", "TaskScheduler");
#pragma pack(pop)