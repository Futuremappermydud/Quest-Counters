// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSettings
#include "OVR/OpenVR/IVRSettings.hpp"
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
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSettings/_SetFloat
  class IVRSettings::_SetFloat : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B82F4
    static IVRSettings::_SetFloat* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.String pchSection, System.String pchSettingsKey, System.Single flValue, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x16B8308
    void Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, float flValue, OVR::OpenVR::EVRSettingsError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, System.Single flValue, ref OVR.OpenVR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B8758
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, float flValue, OVR::OpenVR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x16B8820
    void EndInvoke(OVR::OpenVR::EVRSettingsError& peError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSettings/_SetFloat
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSettings::_SetFloat*, "OVR.OpenVR", "IVRSettings/_SetFloat");
#pragma pack(pop)