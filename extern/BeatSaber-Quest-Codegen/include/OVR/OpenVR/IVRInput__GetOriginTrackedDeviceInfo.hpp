// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
  // Forward declaring type: InputOriginInfo_t
  struct InputOriginInfo_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo
  class IVRInput::_GetOriginTrackedDeviceInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15203BC
    static IVRInput::_GetOriginTrackedDeviceInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 origin, ref OVR.OpenVR.InputOriginInfo_t pOriginInfo, System.UInt32 unOriginInfoSize)
    // Offset: 0x15203D0
    OVR::OpenVR::EVRInputError Invoke(uint64_t origin, OVR::OpenVR::InputOriginInfo_t& pOriginInfo, uint unOriginInfoSize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 origin, ref OVR.OpenVR.InputOriginInfo_t pOriginInfo, System.UInt32 unOriginInfoSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1520668
    System::IAsyncResult* BeginInvoke(uint64_t origin, OVR::OpenVR::InputOriginInfo_t& pOriginInfo, uint unOriginInfoSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref OVR.OpenVR.InputOriginInfo_t pOriginInfo, System.IAsyncResult result)
    // Offset: 0x152073C
    OVR::OpenVR::EVRInputError EndInvoke(OVR::OpenVR::InputOriginInfo_t& pOriginInfo, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo*, "OVR.OpenVR", "IVRInput/_GetOriginTrackedDeviceInfo");
#pragma pack(pop)