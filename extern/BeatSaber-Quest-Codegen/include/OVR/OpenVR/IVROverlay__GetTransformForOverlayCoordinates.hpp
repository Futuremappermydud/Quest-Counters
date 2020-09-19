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
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetTransformForOverlayCoordinates
  class IVROverlay::_GetTransformForOverlayCoordinates : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x152BEBC
    static IVROverlay::_GetTransformForOverlayCoordinates* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, OVR.OpenVR.HmdVector2_t coordinatesInOverlay, ref OVR.OpenVR.HmdMatrix34_t pmatTransform)
    // Offset: 0x152BED0
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdVector2_t coordinatesInOverlay, OVR::OpenVR::HmdMatrix34_t& pmatTransform);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, OVR.OpenVR.ETrackingUniverseOrigin eTrackingOrigin, OVR.OpenVR.HmdVector2_t coordinatesInOverlay, ref OVR.OpenVR.HmdMatrix34_t pmatTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x152C198
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, OVR::OpenVR::HmdVector2_t coordinatesInOverlay, OVR::OpenVR::HmdMatrix34_t& pmatTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref OVR.OpenVR.HmdMatrix34_t pmatTransform, System.IAsyncResult result)
    // Offset: 0x152C288
    OVR::OpenVR::EVROverlayError EndInvoke(OVR::OpenVR::HmdMatrix34_t& pmatTransform, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetTransformForOverlayCoordinates
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetTransformForOverlayCoordinates*, "OVR.OpenVR", "IVROverlay/_GetTransformForOverlayCoordinates");
#pragma pack(pop)
