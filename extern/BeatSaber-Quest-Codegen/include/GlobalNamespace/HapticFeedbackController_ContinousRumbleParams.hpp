// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HapticFeedbackController
#include "GlobalNamespace/HapticFeedbackController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HapticFeedbackController/ContinousRumbleParams
  class HapticFeedbackController::ContinousRumbleParams : public ::Il2CppObject {
    public:
    // public System.Boolean active
    // Offset: 0x10
    bool active;
    // public System.Single intervalTimeCounter
    // Offset: 0x14
    float intervalTimeCounter;
    // public System.Void .ctor()
    // Offset: 0xCB72C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HapticFeedbackController::ContinousRumbleParams* New_ctor();
  }; // HapticFeedbackController/ContinousRumbleParams
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HapticFeedbackController::ContinousRumbleParams*, "", "HapticFeedbackController/ContinousRumbleParams");
#pragma pack(pop)