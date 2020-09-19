// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Including type: OVR.OpenVR.HmdVector3_t
#include "OVR/OpenVR/HmdVector3_t.hpp"
// Including type: OVR.OpenVR.ETrackingResult
#include "OVR/OpenVR/ETrackingResult.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.TrackedDevicePose_t
  struct TrackedDevicePose_t : public System::ValueType {
    public:
    // public OVR.OpenVR.HmdMatrix34_t mDeviceToAbsoluteTracking
    // Offset: 0x0
    OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking;
    // public OVR.OpenVR.HmdVector3_t vVelocity
    // Offset: 0x30
    OVR::OpenVR::HmdVector3_t vVelocity;
    // public OVR.OpenVR.HmdVector3_t vAngularVelocity
    // Offset: 0x3C
    OVR::OpenVR::HmdVector3_t vAngularVelocity;
    // public OVR.OpenVR.ETrackingResult eTrackingResult
    // Offset: 0x48
    OVR::OpenVR::ETrackingResult eTrackingResult;
    // public System.Boolean bPoseIsValid
    // Offset: 0x4C
    bool bPoseIsValid;
    // public System.Boolean bDeviceIsConnected
    // Offset: 0x4D
    bool bDeviceIsConnected;
    // Creating value type constructor for type: TrackedDevicePose_t
    constexpr TrackedDevicePose_t(OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking_ = {}, OVR::OpenVR::HmdVector3_t vVelocity_ = {}, OVR::OpenVR::HmdVector3_t vAngularVelocity_ = {}, OVR::OpenVR::ETrackingResult eTrackingResult_ = {}, bool bPoseIsValid_ = {}, bool bDeviceIsConnected_ = {}) noexcept : mDeviceToAbsoluteTracking{mDeviceToAbsoluteTracking_}, vVelocity{vVelocity_}, vAngularVelocity{vAngularVelocity_}, eTrackingResult{eTrackingResult_}, bPoseIsValid{bPoseIsValid_}, bDeviceIsConnected{bDeviceIsConnected_} {}
  }; // OVR.OpenVR.TrackedDevicePose_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::TrackedDevicePose_t, "OVR.OpenVR", "TrackedDevicePose_t");
#pragma pack(pop)