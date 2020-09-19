// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
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
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum
  class IVRRenderModels::_GetRenderModelErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B11D8
    static IVRRenderModels::_GetRenderModelErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.IntPtr Invoke(OVR.OpenVR.EVRRenderModelError error)
    // Offset: 0x16B11EC
    System::IntPtr Invoke(OVR::OpenVR::EVRRenderModelError error);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVRRenderModelError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B1460
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVRRenderModelError error, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x16B14EC
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_GetRenderModelErrorNameFromEnum*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelErrorNameFromEnum");
#pragma pack(pop)