// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DisposableManager
#include "Zenject/DisposableManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.DisposableManager/<>c__DisplayClass9_0
  class DisposableManager::$$c__DisplayClass9_0 : public ::Il2CppObject {
    public:
    // public System.IDisposable disposable
    // Offset: 0x10
    System::IDisposable* disposable;
    // Creating conversion operator: operator System::IDisposable*
    constexpr operator System::IDisposable*() const noexcept {
      return disposable;
    }
    // System.Boolean <Remove>b__0(Zenject.DisposableManager/DisposableInfo x)
    // Offset: 0xF309F8
    bool $Remove$b__0(Zenject::DisposableManager::DisposableInfo x);
    // public System.Void .ctor()
    // Offset: 0xF2FFA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DisposableManager::$$c__DisplayClass9_0* New_ctor();
  }; // Zenject.DisposableManager/<>c__DisplayClass9_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager::$$c__DisplayClass9_0*, "Zenject", "DisposableManager/<>c__DisplayClass9_0");
#pragma pack(pop)
