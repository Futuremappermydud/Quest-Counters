// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IPoolable`1
  template<typename TParam1>
  class IPoolable_1 {
    public:
    // public System.Void OnDespawned()
    // Offset: 0xFFFFFFFF
    void OnDespawned() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned"));
    }
    // public System.Void OnSpawned(TParam1 p1)
    // Offset: 0xFFFFFFFF
    void OnSpawned(TParam1 p1) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnSpawned", p1));
    }
  }; // Zenject.IPoolable`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IPoolable_1, "Zenject", "IPoolable`1");
#pragma pack(pop)