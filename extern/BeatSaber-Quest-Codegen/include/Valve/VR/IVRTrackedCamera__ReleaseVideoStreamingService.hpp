// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
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
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService
  class IVRTrackedCamera::_ReleaseVideoStreamingService : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x192B530
    static IVRTrackedCamera::_ReleaseVideoStreamingService* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt64 hTrackedCamera)
    // Offset: 0x192B544
    Valve::VR::EVRTrackedCameraError Invoke(uint64_t hTrackedCamera);
    // public System.IAsyncResult BeginInvoke(System.UInt64 hTrackedCamera, System.AsyncCallback callback, System.Object object)
    // Offset: 0x192B7AC
    System::IAsyncResult* BeginInvoke(uint64_t hTrackedCamera, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(System.IAsyncResult result)
    // Offset: 0x192B838
    Valve::VR::EVRTrackedCameraError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/_ReleaseVideoStreamingService
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRTrackedCamera::_ReleaseVideoStreamingService*, "Valve.VR", "IVRTrackedCamera/_ReleaseVideoStreamingService");
#pragma pack(pop)
