// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdVector3_t
#include "OVR/OpenVR/HmdVector3_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.HmdQuad_t
  struct HmdQuad_t : public System::ValueType {
    public:
    // public OVR.OpenVR.HmdVector3_t vCorners0
    // Offset: 0x0
    OVR::OpenVR::HmdVector3_t vCorners0;
    // public OVR.OpenVR.HmdVector3_t vCorners1
    // Offset: 0xC
    OVR::OpenVR::HmdVector3_t vCorners1;
    // public OVR.OpenVR.HmdVector3_t vCorners2
    // Offset: 0x18
    OVR::OpenVR::HmdVector3_t vCorners2;
    // public OVR.OpenVR.HmdVector3_t vCorners3
    // Offset: 0x24
    OVR::OpenVR::HmdVector3_t vCorners3;
    // Creating value type constructor for type: HmdQuad_t
    constexpr HmdQuad_t(OVR::OpenVR::HmdVector3_t vCorners0_ = {}, OVR::OpenVR::HmdVector3_t vCorners1_ = {}, OVR::OpenVR::HmdVector3_t vCorners2_ = {}, OVR::OpenVR::HmdVector3_t vCorners3_ = {}) noexcept : vCorners0{vCorners0_}, vCorners1{vCorners1_}, vCorners2{vCorners2_}, vCorners3{vCorners3_} {}
  }; // OVR.OpenVR.HmdQuad_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdQuad_t, "OVR.OpenVR", "HmdQuad_t");
#pragma pack(pop)
