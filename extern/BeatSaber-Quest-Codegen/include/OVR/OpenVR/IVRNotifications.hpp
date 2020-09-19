// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRNotifications
  struct IVRNotifications : public System::ValueType {
    public:
    // Nested type: OVR::OpenVR::IVRNotifications::_CreateNotification
    class _CreateNotification;
    // Nested type: OVR::OpenVR::IVRNotifications::_RemoveNotification
    class _RemoveNotification;
    // OVR.OpenVR.IVRNotifications/_CreateNotification CreateNotification
    // Offset: 0x0
    OVR::OpenVR::IVRNotifications::_CreateNotification* CreateNotification;
    // OVR.OpenVR.IVRNotifications/_RemoveNotification RemoveNotification
    // Offset: 0x8
    OVR::OpenVR::IVRNotifications::_RemoveNotification* RemoveNotification;
    // Creating value type constructor for type: IVRNotifications
    constexpr IVRNotifications(OVR::OpenVR::IVRNotifications::_CreateNotification* CreateNotification_ = {}, OVR::OpenVR::IVRNotifications::_RemoveNotification* RemoveNotification_ = {}) noexcept : CreateNotification{CreateNotification_}, RemoveNotification{RemoveNotification_} {}
  }; // OVR.OpenVR.IVRNotifications
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRNotifications, "OVR.OpenVR", "IVRNotifications");
#pragma pack(pop)