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
  // Autogenerated type: OVR.OpenVR.IVRDriverManager
  struct IVRDriverManager : public System::ValueType {
    public:
    // Nested type: OVR::OpenVR::IVRDriverManager::_GetDriverCount
    class _GetDriverCount;
    // Nested type: OVR::OpenVR::IVRDriverManager::_GetDriverName
    class _GetDriverName;
    // Nested type: OVR::OpenVR::IVRDriverManager::_GetDriverHandle
    class _GetDriverHandle;
    // OVR.OpenVR.IVRDriverManager/_GetDriverCount GetDriverCount
    // Offset: 0x0
    OVR::OpenVR::IVRDriverManager::_GetDriverCount* GetDriverCount;
    // OVR.OpenVR.IVRDriverManager/_GetDriverName GetDriverName
    // Offset: 0x8
    OVR::OpenVR::IVRDriverManager::_GetDriverName* GetDriverName;
    // OVR.OpenVR.IVRDriverManager/_GetDriverHandle GetDriverHandle
    // Offset: 0x10
    OVR::OpenVR::IVRDriverManager::_GetDriverHandle* GetDriverHandle;
    // Creating value type constructor for type: IVRDriverManager
    constexpr IVRDriverManager(OVR::OpenVR::IVRDriverManager::_GetDriverCount* GetDriverCount_ = {}, OVR::OpenVR::IVRDriverManager::_GetDriverName* GetDriverName_ = {}, OVR::OpenVR::IVRDriverManager::_GetDriverHandle* GetDriverHandle_ = {}) noexcept : GetDriverCount{GetDriverCount_}, GetDriverName{GetDriverName_}, GetDriverHandle{GetDriverHandle_} {}
  }; // OVR.OpenVR.IVRDriverManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRDriverManager, "OVR.OpenVR", "IVRDriverManager");
#pragma pack(pop)