// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.ETrackedControllerRole
  struct ETrackedControllerRole : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ETrackedControllerRole
    constexpr ETrackedControllerRole(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.ETrackedControllerRole Invalid
    static constexpr const int Invalid = 0;
    // Get static field: static public OVR.OpenVR.ETrackedControllerRole Invalid
    static OVR::OpenVR::ETrackedControllerRole _get_Invalid();
    // Set static field: static public OVR.OpenVR.ETrackedControllerRole Invalid
    static void _set_Invalid(OVR::OpenVR::ETrackedControllerRole value);
    // static field const value: static public OVR.OpenVR.ETrackedControllerRole LeftHand
    static constexpr const int LeftHand = 1;
    // Get static field: static public OVR.OpenVR.ETrackedControllerRole LeftHand
    static OVR::OpenVR::ETrackedControllerRole _get_LeftHand();
    // Set static field: static public OVR.OpenVR.ETrackedControllerRole LeftHand
    static void _set_LeftHand(OVR::OpenVR::ETrackedControllerRole value);
    // static field const value: static public OVR.OpenVR.ETrackedControllerRole RightHand
    static constexpr const int RightHand = 2;
    // Get static field: static public OVR.OpenVR.ETrackedControllerRole RightHand
    static OVR::OpenVR::ETrackedControllerRole _get_RightHand();
    // Set static field: static public OVR.OpenVR.ETrackedControllerRole RightHand
    static void _set_RightHand(OVR::OpenVR::ETrackedControllerRole value);
    // static field const value: static public OVR.OpenVR.ETrackedControllerRole OptOut
    static constexpr const int OptOut = 3;
    // Get static field: static public OVR.OpenVR.ETrackedControllerRole OptOut
    static OVR::OpenVR::ETrackedControllerRole _get_OptOut();
    // Set static field: static public OVR.OpenVR.ETrackedControllerRole OptOut
    static void _set_OptOut(OVR::OpenVR::ETrackedControllerRole value);
    // static field const value: static public OVR.OpenVR.ETrackedControllerRole Max
    static constexpr const int Max = 4;
    // Get static field: static public OVR.OpenVR.ETrackedControllerRole Max
    static OVR::OpenVR::ETrackedControllerRole _get_Max();
    // Set static field: static public OVR.OpenVR.ETrackedControllerRole Max
    static void _set_Max(OVR::OpenVR::ETrackedControllerRole value);
  }; // OVR.OpenVR.ETrackedControllerRole
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ETrackedControllerRole, "OVR.OpenVR", "ETrackedControllerRole");
#pragma pack(pop)