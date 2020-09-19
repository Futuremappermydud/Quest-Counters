// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissedNoteEffectSpawner
#include "GlobalNamespace/MissedNoteEffectSpawner.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissedNoteEffectSpawner/InitData
  class MissedNoteEffectSpawner::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean spawnMisses
    // Offset: 0x10
    bool spawnMisses;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return spawnMisses;
    }
    // public System.Void .ctor(System.Boolean spawnMisses)
    // Offset: 0xC03998
    static MissedNoteEffectSpawner::InitData* New_ctor(bool spawnMisses);
  }; // MissedNoteEffectSpawner/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissedNoteEffectSpawner::InitData*, "", "MissedNoteEffectSpawner/InitData");
#pragma pack(pop)
