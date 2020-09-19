// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.SystemVoipStatus
  struct SystemVoipStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: SystemVoipStatus
    constexpr SystemVoipStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Platform.SystemVoipStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.SystemVoipStatus Unknown
    static Oculus::Platform::SystemVoipStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.SystemVoipStatus Unknown
    static void _set_Unknown(Oculus::Platform::SystemVoipStatus value);
    // static field const value: static public Oculus.Platform.SystemVoipStatus Unavailable
    static constexpr const int Unavailable = 1;
    // Get static field: static public Oculus.Platform.SystemVoipStatus Unavailable
    static Oculus::Platform::SystemVoipStatus _get_Unavailable();
    // Set static field: static public Oculus.Platform.SystemVoipStatus Unavailable
    static void _set_Unavailable(Oculus::Platform::SystemVoipStatus value);
    // static field const value: static public Oculus.Platform.SystemVoipStatus Suppressed
    static constexpr const int Suppressed = 2;
    // Get static field: static public Oculus.Platform.SystemVoipStatus Suppressed
    static Oculus::Platform::SystemVoipStatus _get_Suppressed();
    // Set static field: static public Oculus.Platform.SystemVoipStatus Suppressed
    static void _set_Suppressed(Oculus::Platform::SystemVoipStatus value);
    // static field const value: static public Oculus.Platform.SystemVoipStatus Active
    static constexpr const int Active = 3;
    // Get static field: static public Oculus.Platform.SystemVoipStatus Active
    static Oculus::Platform::SystemVoipStatus _get_Active();
    // Set static field: static public Oculus.Platform.SystemVoipStatus Active
    static void _set_Active(Oculus::Platform::SystemVoipStatus value);
  }; // Oculus.Platform.SystemVoipStatus
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::SystemVoipStatus, "Oculus.Platform", "SystemVoipStatus");
#pragma pack(pop)
