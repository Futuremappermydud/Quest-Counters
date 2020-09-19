// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ETrackedControllerRole
  struct ETrackedControllerRole;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
  class IVRSystem::_GetTrackedDeviceIndexForControllerRole : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C19E4
    static IVRSystem::_GetTrackedDeviceIndexForControllerRole* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(OVR.OpenVR.ETrackedControllerRole unDeviceType)
    // Offset: 0x16C19F8
    uint Invoke(OVR::OpenVR::ETrackedControllerRole unDeviceType);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.ETrackedControllerRole unDeviceType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C1C6C
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::ETrackedControllerRole unDeviceType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x16C1CF8
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetTrackedDeviceIndexForControllerRole*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceIndexForControllerRole");
#pragma pack(pop)
