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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_LoadTexture_Async
  class IVRRenderModels::_LoadTexture_Async : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B2FB4
    static IVRRenderModels::_LoadTexture_Async* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRRenderModelError Invoke(System.Int32 textureId, ref System.IntPtr ppTexture)
    // Offset: 0x16B2FC8
    OVR::OpenVR::EVRRenderModelError Invoke(int textureId, System::IntPtr& ppTexture);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, ref System.IntPtr ppTexture, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B3258
    System::IAsyncResult* BeginInvoke(int textureId, System::IntPtr& ppTexture, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRRenderModelError EndInvoke(ref System.IntPtr ppTexture, System.IAsyncResult result)
    // Offset: 0x16B330C
    OVR::OpenVR::EVRRenderModelError EndInvoke(System::IntPtr& ppTexture, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_LoadTexture_Async
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_LoadTexture_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadTexture_Async");
#pragma pack(pop)
