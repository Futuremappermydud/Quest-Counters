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
  // Autogenerated type: OVR.OpenVR.EGamepadTextInputMode
  struct EGamepadTextInputMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EGamepadTextInputMode
    constexpr EGamepadTextInputMode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EGamepadTextInputMode k_EGamepadTextInputModeNormal
    static constexpr const int k_EGamepadTextInputModeNormal = 0;
    // Get static field: static public OVR.OpenVR.EGamepadTextInputMode k_EGamepadTextInputModeNormal
    static OVR::OpenVR::EGamepadTextInputMode _get_k_EGamepadTextInputModeNormal();
    // Set static field: static public OVR.OpenVR.EGamepadTextInputMode k_EGamepadTextInputModeNormal
    static void _set_k_EGamepadTextInputModeNormal(OVR::OpenVR::EGamepadTextInputMode value);
    // static field const value: static public OVR.OpenVR.EGamepadTextInputMode k_EGamepadTextInputModePassword
    static constexpr const int k_EGamepadTextInputModePassword = 1;
    // Get static field: static public OVR.OpenVR.EGamepadTextInputMode k_EGamepadTextInputModePassword
    static OVR::OpenVR::EGamepadTextInputMode _get_k_EGamepadTextInputModePassword();
    // Set static field: static public OVR.OpenVR.EGamepadTextInputMode k_EGamepadTextInputModePassword
    static void _set_k_EGamepadTextInputModePassword(OVR::OpenVR::EGamepadTextInputMode value);
    // static field const value: static public OVR.OpenVR.EGamepadTextInputMode k_EGamepadTextInputModeSubmit
    static constexpr const int k_EGamepadTextInputModeSubmit = 2;
    // Get static field: static public OVR.OpenVR.EGamepadTextInputMode k_EGamepadTextInputModeSubmit
    static OVR::OpenVR::EGamepadTextInputMode _get_k_EGamepadTextInputModeSubmit();
    // Set static field: static public OVR.OpenVR.EGamepadTextInputMode k_EGamepadTextInputModeSubmit
    static void _set_k_EGamepadTextInputModeSubmit(OVR::OpenVR::EGamepadTextInputMode value);
  }; // OVR.OpenVR.EGamepadTextInputMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EGamepadTextInputMode, "OVR.OpenVR", "EGamepadTextInputMode");
#pragma pack(pop)
