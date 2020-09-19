// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRDisplay
#include "GlobalNamespace/OVRDisplay.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRDisplay/LatencyData
  struct OVRDisplay::LatencyData : public System::ValueType {
    public:
    // public System.Single render
    // Offset: 0x0
    float render;
    // public System.Single timeWarp
    // Offset: 0x4
    float timeWarp;
    // public System.Single postPresent
    // Offset: 0x8
    float postPresent;
    // public System.Single renderError
    // Offset: 0xC
    float renderError;
    // public System.Single timeWarpError
    // Offset: 0x10
    float timeWarpError;
    // Creating value type constructor for type: LatencyData
    constexpr LatencyData(float render_ = {}, float timeWarp_ = {}, float postPresent_ = {}, float renderError_ = {}, float timeWarpError_ = {}) noexcept : render{render_}, timeWarp{timeWarp_}, postPresent{postPresent_}, renderError{renderError_}, timeWarpError{timeWarpError_} {}
  }; // OVRDisplay/LatencyData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDisplay::LatencyData, "", "OVRDisplay/LatencyData");
#pragma pack(pop)
