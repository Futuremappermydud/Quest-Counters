// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
  // Forward declaring type: AppOverrideKeys_t
  struct AppOverrideKeys_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_LaunchTemplateApplication
  class IVRApplications::_LaunchTemplateApplication : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFEAA78
    static IVRApplications::_LaunchTemplateApplication* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRApplicationError Invoke(System.String pchTemplateAppKey, System.String pchNewAppKey, in Valve.VR.AppOverrideKeys_t[] pKeys, System.UInt32 unKeys)
    // Offset: 0xFDD65C
    Valve::VR::EVRApplicationError Invoke(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<Valve::VR::AppOverrideKeys_t>*& pKeys, uint unKeys);
    // public System.IAsyncResult BeginInvoke(System.String pchTemplateAppKey, System.String pchNewAppKey, in Valve.VR.AppOverrideKeys_t[] pKeys, System.UInt32 unKeys, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFEAA8C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<Valve::VR::AppOverrideKeys_t>*& pKeys, uint unKeys, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0xFEAB3C
    Valve::VR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_LaunchTemplateApplication
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_LaunchTemplateApplication*, "Valve.VR", "IVRApplications/_LaunchTemplateApplication");
#pragma pack(pop)
