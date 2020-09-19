// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TaskUpdater`1
#include "Zenject/TaskUpdater_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ITickable
  class ITickable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.TickablesTaskUpdater
  class TickablesTaskUpdater : public Zenject::TaskUpdater_1<Zenject::ITickable*> {
    public:
    // protected System.Void UpdateItem(Zenject.ITickable task)
    // Offset: 0xFD5A10
    void UpdateItem(Zenject::ITickable* task);
    // public System.Void .ctor()
    // Offset: 0xFD3FCC
    // Implemented from: Zenject.TaskUpdater`1
    // Base method: System.Void TaskUpdater`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static TickablesTaskUpdater* New_ctor();
  }; // Zenject.TickablesTaskUpdater
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::TickablesTaskUpdater*, "Zenject", "TickablesTaskUpdater");
#pragma pack(pop)