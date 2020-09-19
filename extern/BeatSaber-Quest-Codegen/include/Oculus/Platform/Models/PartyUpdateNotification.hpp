// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.PartyUpdateAction
#include "Oculus/Platform/PartyUpdateAction.hpp"
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
  // Autogenerated type: Oculus.Platform.Models.PartyUpdateNotification
  class PartyUpdateNotification : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.PartyUpdateAction Action
    // Offset: 0x10
    Oculus::Platform::PartyUpdateAction Action;
    // public readonly System.UInt64 PartyId
    // Offset: 0x18
    uint64_t PartyId;
    // public readonly System.UInt64 SenderId
    // Offset: 0x20
    uint64_t SenderId;
    // public readonly System.String UpdateTimestamp
    // Offset: 0x28
    ::Il2CppString* UpdateTimestamp;
    // public readonly System.String UserAlias
    // Offset: 0x30
    ::Il2CppString* UserAlias;
    // public readonly System.UInt64 UserId
    // Offset: 0x38
    uint64_t UserId;
    // public readonly System.String UserName
    // Offset: 0x40
    ::Il2CppString* UserName;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xEA7338
    static PartyUpdateNotification* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.PartyUpdateNotification
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PartyUpdateNotification*, "Oculus.Platform.Models", "PartyUpdateNotification");
#pragma pack(pop)
