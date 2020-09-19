// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VREvent_InputBindingLoad_t
  struct VREvent_InputBindingLoad_t : public System::ValueType {
    public:
    // public System.UInt64 ulAppContainer
    // Offset: 0x0
    uint64_t ulAppContainer;
    // public System.UInt64 pathMessage
    // Offset: 0x8
    uint64_t pathMessage;
    // public System.UInt64 pathUrl
    // Offset: 0x10
    uint64_t pathUrl;
    // public System.UInt64 pathControllerType
    // Offset: 0x18
    uint64_t pathControllerType;
    // Creating value type constructor for type: VREvent_InputBindingLoad_t
    constexpr VREvent_InputBindingLoad_t(uint64_t ulAppContainer_ = {}, uint64_t pathMessage_ = {}, uint64_t pathUrl_ = {}, uint64_t pathControllerType_ = {}) noexcept : ulAppContainer{ulAppContainer_}, pathMessage{pathMessage_}, pathUrl{pathUrl_}, pathControllerType{pathControllerType_} {}
  }; // OVR.OpenVR.VREvent_InputBindingLoad_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_InputBindingLoad_t, "OVR.OpenVR", "VREvent_InputBindingLoad_t");
#pragma pack(pop)
