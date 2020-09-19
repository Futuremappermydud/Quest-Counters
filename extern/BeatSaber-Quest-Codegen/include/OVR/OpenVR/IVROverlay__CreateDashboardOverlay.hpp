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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_CreateDashboardOverlay
  class IVROverlay::_CreateDashboardOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1523C14
    static IVROverlay::_CreateDashboardOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.String pchOverlayKey, System.String pchOverlayFriendlyName, ref System.UInt64 pMainHandle, ref System.UInt64 pThumbnailHandle)
    // Offset: 0x1523C28
    OVR::OpenVR::EVROverlayError Invoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayFriendlyName, uint64_t& pMainHandle, uint64_t& pThumbnailHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayKey, System.String pchOverlayFriendlyName, ref System.UInt64 pMainHandle, ref System.UInt64 pThumbnailHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x152407C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayFriendlyName, uint64_t& pMainHandle, uint64_t& pThumbnailHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.UInt64 pMainHandle, ref System.UInt64 pThumbnailHandle, System.IAsyncResult result)
    // Offset: 0x152413C
    OVR::OpenVR::EVROverlayError EndInvoke(uint64_t& pMainHandle, uint64_t& pThumbnailHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_CreateDashboardOverlay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_CreateDashboardOverlay*, "OVR.OpenVR", "IVROverlay/_CreateDashboardOverlay");
#pragma pack(pop)