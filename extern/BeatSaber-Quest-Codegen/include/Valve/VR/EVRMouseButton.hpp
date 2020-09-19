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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.EVRMouseButton
  struct EVRMouseButton : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EVRMouseButton
    constexpr EVRMouseButton(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRMouseButton Left
    static constexpr const int Left = 1;
    // Get static field: static public Valve.VR.EVRMouseButton Left
    static Valve::VR::EVRMouseButton _get_Left();
    // Set static field: static public Valve.VR.EVRMouseButton Left
    static void _set_Left(Valve::VR::EVRMouseButton value);
    // static field const value: static public Valve.VR.EVRMouseButton Right
    static constexpr const int Right = 2;
    // Get static field: static public Valve.VR.EVRMouseButton Right
    static Valve::VR::EVRMouseButton _get_Right();
    // Set static field: static public Valve.VR.EVRMouseButton Right
    static void _set_Right(Valve::VR::EVRMouseButton value);
    // static field const value: static public Valve.VR.EVRMouseButton Middle
    static constexpr const int Middle = 4;
    // Get static field: static public Valve.VR.EVRMouseButton Middle
    static Valve::VR::EVRMouseButton _get_Middle();
    // Set static field: static public Valve.VR.EVRMouseButton Middle
    static void _set_Middle(Valve::VR::EVRMouseButton value);
  }; // Valve.VR.EVRMouseButton
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRMouseButton, "Valve.VR", "EVRMouseButton");
#pragma pack(pop)