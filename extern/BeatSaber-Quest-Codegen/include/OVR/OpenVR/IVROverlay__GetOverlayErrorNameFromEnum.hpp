// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayErrorNameFromEnum
  class IVROverlay::_GetOverlayErrorNameFromEnum : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1526B58
    static IVROverlay::_GetOverlayErrorNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.IntPtr Invoke(OVR.OpenVR.EVROverlayError error)
    // Offset: 0x1526B6C
    System::IntPtr Invoke(OVR::OpenVR::EVROverlayError error);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVROverlayError error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1526DE0
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVROverlayError error, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x1526E6C
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayErrorNameFromEnum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayErrorNameFromEnum*, "OVR.OpenVR", "IVROverlay/_GetOverlayErrorNameFromEnum");
#pragma pack(pop)