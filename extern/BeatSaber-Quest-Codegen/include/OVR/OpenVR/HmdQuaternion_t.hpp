// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.HmdQuaternion_t
  struct HmdQuaternion_t : public System::ValueType {
    public:
    // public System.Double w
    // Offset: 0x0
    double w;
    // public System.Double x
    // Offset: 0x8
    double x;
    // public System.Double y
    // Offset: 0x10
    double y;
    // public System.Double z
    // Offset: 0x18
    double z;
    // Creating value type constructor for type: HmdQuaternion_t
    constexpr HmdQuaternion_t(double w_ = {}, double x_ = {}, double y_ = {}, double z_ = {}) noexcept : w{w_}, x{x_}, y{y_}, z{z_} {}
  }; // OVR.OpenVR.HmdQuaternion_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdQuaternion_t, "OVR.OpenVR", "HmdQuaternion_t");
#pragma pack(pop)