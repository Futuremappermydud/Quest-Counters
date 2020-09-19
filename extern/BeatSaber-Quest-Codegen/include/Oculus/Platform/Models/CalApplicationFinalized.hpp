// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.CalApplicationFinalized
  class CalApplicationFinalized : public ::Il2CppObject {
    public:
    // public readonly System.Int32 CountdownMS
    // Offset: 0x10
    int CountdownMS;
    // public readonly System.UInt64 ID
    // Offset: 0x18
    uint64_t ID;
    // public readonly System.String LaunchDetails
    // Offset: 0x20
    ::Il2CppString* LaunchDetails;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xEA24F4
    static CalApplicationFinalized* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.CalApplicationFinalized
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CalApplicationFinalized*, "Oculus.Platform.Models", "CalApplicationFinalized");
#pragma pack(pop)
