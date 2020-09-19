// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetEaseSceneSetupData
  class NetEaseSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // private ScenesTransitionSetupDataSO _nextScenesTransitionSetupData
    // Offset: 0x10
    GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;
    // Creating conversion operator: operator GlobalNamespace::ScenesTransitionSetupDataSO*
    constexpr operator GlobalNamespace::ScenesTransitionSetupDataSO*() const noexcept {
      return nextScenesTransitionSetupData;
    }
    // public ScenesTransitionSetupDataSO get_nextScenesTransitionSetupData()
    // Offset: 0xC143B4
    GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData();
    // public System.Void .ctor(ScenesTransitionSetupDataSO nextScenesTransitionSetupData)
    // Offset: 0xC143BC
    static NetEaseSceneSetupData* New_ctor(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);
  }; // NetEaseSceneSetupData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseSceneSetupData*, "", "NetEaseSceneSetupData");
#pragma pack(pop)