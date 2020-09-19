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
  // Autogenerated type: Valve.VR.EVRState
  struct EVRState : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EVRState
    constexpr EVRState(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRState Undefined
    static constexpr const int Undefined = -1;
    // Get static field: static public Valve.VR.EVRState Undefined
    static Valve::VR::EVRState _get_Undefined();
    // Set static field: static public Valve.VR.EVRState Undefined
    static void _set_Undefined(Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Off
    static constexpr const int Off = 0;
    // Get static field: static public Valve.VR.EVRState Off
    static Valve::VR::EVRState _get_Off();
    // Set static field: static public Valve.VR.EVRState Off
    static void _set_Off(Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Searching
    static constexpr const int Searching = 1;
    // Get static field: static public Valve.VR.EVRState Searching
    static Valve::VR::EVRState _get_Searching();
    // Set static field: static public Valve.VR.EVRState Searching
    static void _set_Searching(Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Searching_Alert
    static constexpr const int Searching_Alert = 2;
    // Get static field: static public Valve.VR.EVRState Searching_Alert
    static Valve::VR::EVRState _get_Searching_Alert();
    // Set static field: static public Valve.VR.EVRState Searching_Alert
    static void _set_Searching_Alert(Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Ready
    static constexpr const int Ready = 3;
    // Get static field: static public Valve.VR.EVRState Ready
    static Valve::VR::EVRState _get_Ready();
    // Set static field: static public Valve.VR.EVRState Ready
    static void _set_Ready(Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Ready_Alert
    static constexpr const int Ready_Alert = 4;
    // Get static field: static public Valve.VR.EVRState Ready_Alert
    static Valve::VR::EVRState _get_Ready_Alert();
    // Set static field: static public Valve.VR.EVRState Ready_Alert
    static void _set_Ready_Alert(Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState NotReady
    static constexpr const int NotReady = 5;
    // Get static field: static public Valve.VR.EVRState NotReady
    static Valve::VR::EVRState _get_NotReady();
    // Set static field: static public Valve.VR.EVRState NotReady
    static void _set_NotReady(Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Standby
    static constexpr const int Standby = 6;
    // Get static field: static public Valve.VR.EVRState Standby
    static Valve::VR::EVRState _get_Standby();
    // Set static field: static public Valve.VR.EVRState Standby
    static void _set_Standby(Valve::VR::EVRState value);
    // static field const value: static public Valve.VR.EVRState Ready_Alert_Low
    static constexpr const int Ready_Alert_Low = 7;
    // Get static field: static public Valve.VR.EVRState Ready_Alert_Low
    static Valve::VR::EVRState _get_Ready_Alert_Low();
    // Set static field: static public Valve.VR.EVRState Ready_Alert_Low
    static void _set_Ready_Alert_Low(Valve::VR::EVRState value);
  }; // Valve.VR.EVRState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRState, "Valve.VR", "EVRState");
#pragma pack(pop)