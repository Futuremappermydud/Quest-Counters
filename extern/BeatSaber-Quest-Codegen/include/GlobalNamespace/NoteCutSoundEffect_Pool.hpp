// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteCutSoundEffect
#include "GlobalNamespace/NoteCutSoundEffect.hpp"
// Including type: MemoryPoolWithActiveItems`1
#include "GlobalNamespace/MemoryPoolWithActiveItems_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteCutSoundEffect/Pool
  class NoteCutSoundEffect::Pool : public GlobalNamespace::MemoryPoolWithActiveItems_1<GlobalNamespace::NoteCutSoundEffect*> {
    public:
    // public System.Void .ctor()
    // Offset: 0xC1860C
    // Implemented from: MemoryPoolWithActiveItems`1
    // Base method: System.Void MemoryPoolWithActiveItems`1::.ctor()
    // Base method: System.Void MonoMemoryPool`1::.ctor()
    // Base method: System.Void MemoryPool`1::.ctor()
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteCutSoundEffect::Pool* New_ctor();
  }; // NoteCutSoundEffect/Pool
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutSoundEffect::Pool*, "", "NoteCutSoundEffect/Pool");
#pragma pack(pop)