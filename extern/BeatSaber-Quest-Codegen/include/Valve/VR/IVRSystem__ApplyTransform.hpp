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
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_ApplyTransform
  class IVRSystem::_ApplyTransform : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16D3290
    static IVRSystem::_ApplyTransform* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, ref Valve.VR.HmdMatrix34_t pTransform)
    // Offset: 0x16D32A4
    void Invoke(Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, Valve::VR::HmdMatrix34_t& pTransform);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, ref Valve.VR.HmdMatrix34_t pTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16D3528
    System::IAsyncResult* BeginInvoke(Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, Valve::VR::HmdMatrix34_t& pTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, ref Valve.VR.HmdMatrix34_t pTransform, System.IAsyncResult result)
    // Offset: 0x16D35FC
    void EndInvoke(Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, Valve::VR::HmdMatrix34_t& pTransform, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_ApplyTransform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_ApplyTransform*, "Valve.VR", "IVRSystem/_ApplyTransform");
#pragma pack(pop)
