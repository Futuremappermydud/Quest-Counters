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
  // Autogenerated type: Valve.VR.EOverlayDirection
  struct EOverlayDirection : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EOverlayDirection
    constexpr EOverlayDirection(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EOverlayDirection Up
    static constexpr const int Up = 0;
    // Get static field: static public Valve.VR.EOverlayDirection Up
    static Valve::VR::EOverlayDirection _get_Up();
    // Set static field: static public Valve.VR.EOverlayDirection Up
    static void _set_Up(Valve::VR::EOverlayDirection value);
    // static field const value: static public Valve.VR.EOverlayDirection Down
    static constexpr const int Down = 1;
    // Get static field: static public Valve.VR.EOverlayDirection Down
    static Valve::VR::EOverlayDirection _get_Down();
    // Set static field: static public Valve.VR.EOverlayDirection Down
    static void _set_Down(Valve::VR::EOverlayDirection value);
    // static field const value: static public Valve.VR.EOverlayDirection Left
    static constexpr const int Left = 2;
    // Get static field: static public Valve.VR.EOverlayDirection Left
    static Valve::VR::EOverlayDirection _get_Left();
    // Set static field: static public Valve.VR.EOverlayDirection Left
    static void _set_Left(Valve::VR::EOverlayDirection value);
    // static field const value: static public Valve.VR.EOverlayDirection Right
    static constexpr const int Right = 3;
    // Get static field: static public Valve.VR.EOverlayDirection Right
    static Valve::VR::EOverlayDirection _get_Right();
    // Set static field: static public Valve.VR.EOverlayDirection Right
    static void _set_Right(Valve::VR::EOverlayDirection value);
    // static field const value: static public Valve.VR.EOverlayDirection Count
    static constexpr const int Count = 4;
    // Get static field: static public Valve.VR.EOverlayDirection Count
    static Valve::VR::EOverlayDirection _get_Count();
    // Set static field: static public Valve.VR.EOverlayDirection Count
    static void _set_Count(Valve::VR::EOverlayDirection value);
  }; // Valve.VR.EOverlayDirection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EOverlayDirection, "Valve.VR", "EOverlayDirection");
#pragma pack(pop)
