// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.ApplicationOptions
  class ApplicationOptions : public ::Il2CppObject {
    public:
    // private System.IntPtr Handle
    // Offset: 0x10
    System::IntPtr Handle;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return Handle;
    }
    // public System.Void SetDeeplinkMessage(System.String value)
    // Offset: 0x159A498
    void SetDeeplinkMessage(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x159A3B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ApplicationOptions* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x159A5BC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.ApplicationOptions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ApplicationOptions*, "Oculus.Platform", "ApplicationOptions");
#pragma pack(pop)
