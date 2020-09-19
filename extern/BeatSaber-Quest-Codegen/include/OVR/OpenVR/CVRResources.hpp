// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRResources
#include "OVR/OpenVR/IVRResources.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRResources
  class CVRResources : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRResources FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRResources FnTable;
    // Creating conversion operator: operator OVR::OpenVR::IVRResources
    constexpr operator OVR::OpenVR::IVRResources() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xED1140
    static CVRResources* New_ctor(System::IntPtr pInterface);
    // public System.UInt32 LoadSharedResource(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen)
    // Offset: 0xED1248
    uint LoadSharedResource(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen);
    // public System.UInt32 GetResourceFullPath(System.String pchResourceName, System.String pchResourceTypeDirectory, System.Text.StringBuilder pchPathBuffer, System.UInt32 unBufferLen)
    // Offset: 0xED1264
    uint GetResourceFullPath(::Il2CppString* pchResourceName, ::Il2CppString* pchResourceTypeDirectory, System::Text::StringBuilder* pchPathBuffer, uint unBufferLen);
  }; // OVR.OpenVR.CVRResources
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRResources*, "OVR.OpenVR", "CVRResources");
#pragma pack(pop)
