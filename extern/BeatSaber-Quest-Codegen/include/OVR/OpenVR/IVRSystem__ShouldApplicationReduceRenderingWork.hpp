// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_ShouldApplicationReduceRenderingWork
  class IVRSystem::_ShouldApplicationReduceRenderingWork : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xCC28B4
    static IVRSystem::_ShouldApplicationReduceRenderingWork* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke()
    // Offset: 0xCC28C8
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0xCC2AE0
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0xCC2B0C
    bool EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_ShouldApplicationReduceRenderingWork
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_ShouldApplicationReduceRenderingWork*, "OVR.OpenVR", "IVRSystem/_ShouldApplicationReduceRenderingWork");
#pragma pack(pop)