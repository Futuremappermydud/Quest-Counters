// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: ETrackedControllerRole
  struct ETrackedControllerRole;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex
  class IVRSystem::_GetControllerRoleForTrackedDeviceIndex : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16D4C9C
    static IVRSystem::_GetControllerRoleForTrackedDeviceIndex* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.ETrackedControllerRole Invoke(System.UInt32 unDeviceIndex)
    // Offset: 0x16D4CB0
    Valve::VR::ETrackedControllerRole Invoke(uint unDeviceIndex);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16D4F24
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.ETrackedControllerRole EndInvoke(System.IAsyncResult result)
    // Offset: 0x16D4FB0
    Valve::VR::ETrackedControllerRole EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetControllerRoleForTrackedDeviceIndex*, "Valve.VR", "IVRSystem/_GetControllerRoleForTrackedDeviceIndex");
#pragma pack(pop)