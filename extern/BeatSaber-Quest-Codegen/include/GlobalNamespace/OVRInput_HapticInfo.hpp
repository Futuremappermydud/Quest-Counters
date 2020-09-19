// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRInput/HapticInfo
  class OVRInput::HapticInfo : public ::Il2CppObject {
    public:
    // public System.Boolean playingHaptics
    // Offset: 0x10
    bool playingHaptics;
    // public System.Single hapticsDurationPlayed
    // Offset: 0x14
    float hapticsDurationPlayed;
    // public System.Single hapticsDuration
    // Offset: 0x18
    float hapticsDuration;
    // public System.Single hapticAmplitude
    // Offset: 0x1C
    float hapticAmplitude;
    // public UnityEngine.XR.XRNode node
    // Offset: 0x20
    UnityEngine::XR::XRNode node;
    // public System.Void .ctor()
    // Offset: 0xE75180
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRInput::HapticInfo* New_ctor();
  }; // OVRInput/HapticInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::HapticInfo*, "", "OVRInput/HapticInfo");
#pragma pack(pop)