// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ExternalCamerasManager
#include "GlobalNamespace/ExternalCamerasManager.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ExternalCamerasManager/InitData
  class ExternalCamerasManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean enableOculusMRC
    // Offset: 0x10
    bool enableOculusMRC;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return enableOculusMRC;
    }
    // public System.Void .ctor(System.Boolean enableOculusMRC)
    // Offset: 0x1910EDC
    static ExternalCamerasManager::InitData* New_ctor(bool enableOculusMRC);
  }; // ExternalCamerasManager/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ExternalCamerasManager::InitData*, "", "ExternalCamerasManager/InitData");
#pragma pack(pop)