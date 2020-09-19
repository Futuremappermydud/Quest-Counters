// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.VoidTaskResult
#include "System/Threading/Tasks/VoidTaskResult.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Timer
  class Timer;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.Task/DelayPromise
  class Task::DelayPromise : public System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> {
    public:
    // readonly System.Threading.CancellationToken Token
    // Offset: 0x58
    System::Threading::CancellationToken Token;
    // System.Threading.CancellationTokenRegistration Registration
    // Offset: 0x60
    System::Threading::CancellationTokenRegistration Registration;
    // System.Threading.Timer Timer
    // Offset: 0x78
    System::Threading::Timer* Timer;
    // System.Void .ctor(System.Threading.CancellationToken token)
    // Offset: 0xCE68AC
    static Task::DelayPromise* New_ctor(System::Threading::CancellationToken token);
    // System.Void Complete()
    // Offset: 0xCE6FA8
    void Complete();
  }; // System.Threading.Tasks.Task/DelayPromise
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task::DelayPromise*, "System.Threading.Tasks", "Task/DelayPromise");
#pragma pack(pop)
