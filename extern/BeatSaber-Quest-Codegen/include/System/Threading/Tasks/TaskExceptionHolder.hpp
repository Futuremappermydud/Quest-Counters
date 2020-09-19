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
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: EventArgs
  class EventArgs;
  // Forward declaring type: AggregateException
  class AggregateException;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.TaskExceptionHolder
  class TaskExceptionHolder : public ::Il2CppObject {
    public:
    // private readonly System.Threading.Tasks.Task m_task
    // Offset: 0x10
    System::Threading::Tasks::Task* m_task;
    // private System.Collections.Generic.List`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo> m_faultExceptions
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* m_faultExceptions;
    // private System.Runtime.ExceptionServices.ExceptionDispatchInfo m_cancellationException
    // Offset: 0x20
    System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_cancellationException;
    // private System.Boolean m_isHandled
    // Offset: 0x28
    bool m_isHandled;
    // Get static field: static private readonly System.Boolean s_failFastOnUnobservedException
    static bool _get_s_failFastOnUnobservedException();
    // Set static field: static private readonly System.Boolean s_failFastOnUnobservedException
    static void _set_s_failFastOnUnobservedException(bool value);
    // Get static field: static private System.Boolean s_domainUnloadStarted
    static bool _get_s_domainUnloadStarted();
    // Set static field: static private System.Boolean s_domainUnloadStarted
    static void _set_s_domainUnloadStarted(bool value);
    // Get static field: static private System.EventHandler s_adUnloadEventHandler
    static System::EventHandler* _get_s_adUnloadEventHandler();
    // Set static field: static private System.EventHandler s_adUnloadEventHandler
    static void _set_s_adUnloadEventHandler(System::EventHandler* value);
    // System.Void .ctor(System.Threading.Tasks.Task task)
    // Offset: 0xCE2FBC
    static TaskExceptionHolder* New_ctor(System::Threading::Tasks::Task* task);
    // static private System.Boolean ShouldFailFastOnUnobservedException()
    // Offset: 0xCE77B4
    static bool ShouldFailFastOnUnobservedException();
    // static private System.Void EnsureADUnloadCallbackRegistered()
    // Offset: 0xCE7690
    static void EnsureADUnloadCallbackRegistered();
    // static private System.Void AppDomainUnloadCallback(System.Object sender, System.EventArgs e)
    // Offset: 0xCE77BC
    static void AppDomainUnloadCallback(::Il2CppObject* sender, System::EventArgs* e);
    // System.Boolean get_ContainsFaultList()
    // Offset: 0xCE277C
    bool get_ContainsFaultList();
    // System.Void Add(System.Object exceptionObject, System.Boolean representsCancellation)
    // Offset: 0xCE3044
    void Add(::Il2CppObject* exceptionObject, bool representsCancellation);
    // private System.Void SetCancellationException(System.Object exceptionObject)
    // Offset: 0xCE800C
    void SetCancellationException(::Il2CppObject* exceptionObject);
    // private System.Void AddFaultException(System.Object exceptionObject)
    // Offset: 0xCE80D4
    void AddFaultException(::Il2CppObject* exceptionObject);
    // private System.Void MarkAsUnhandled()
    // Offset: 0xCE8610
    void MarkAsUnhandled();
    // System.Void MarkAsHandled(System.Boolean calledFromFinalizer)
    // Offset: 0xCE2DAC
    void MarkAsHandled(bool calledFromFinalizer);
    // System.AggregateException CreateExceptionObject(System.Boolean calledFromFinalizer, System.Exception includeThisException)
    // Offset: 0xCE30F8
    System::AggregateException* CreateExceptionObject(bool calledFromFinalizer, System::Exception* includeThisException);
    // System.Collections.ObjectModel.ReadOnlyCollection`1<System.Runtime.ExceptionServices.ExceptionDispatchInfo> GetExceptionDispatchInfos()
    // Offset: 0xCE3374
    System::Collections::ObjectModel::ReadOnlyCollection_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* GetExceptionDispatchInfos();
    // System.Runtime.ExceptionServices.ExceptionDispatchInfo GetCancellationExceptionDispatchInfo()
    // Offset: 0xCE8690
    System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetCancellationExceptionDispatchInfo();
    // static private System.Void .cctor()
    // Offset: 0xCE8698
    static void _cctor();
    // protected override System.Void Finalize()
    // Offset: 0xCE782C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Threading.Tasks.TaskExceptionHolder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskExceptionHolder*, "System.Threading.Tasks", "TaskExceptionHolder");
#pragma pack(pop)