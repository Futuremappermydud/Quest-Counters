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
  // Autogenerated type: OVR.OpenVR.IVRRenderModels/_LoadTextureD3D11_Async
  class IVRRenderModels::_LoadTextureD3D11_Async : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B2BF4
    static IVRRenderModels::_LoadTextureD3D11_Async* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRRenderModelError Invoke(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D)
    // Offset: 0x16B2C08
    OVR::OpenVR::EVRRenderModelError Invoke(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D);
    // public System.IAsyncResult BeginInvoke(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B2EB4
    System::IAsyncResult* BeginInvoke(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRRenderModelError EndInvoke(ref System.IntPtr ppD3D11Texture2D, System.IAsyncResult result)
    // Offset: 0x16B2F7C
    OVR::OpenVR::EVRRenderModelError EndInvoke(System::IntPtr& ppD3D11Texture2D, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRRenderModels/_LoadTextureD3D11_Async
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRRenderModels::_LoadTextureD3D11_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadTextureD3D11_Async");
#pragma pack(pop)