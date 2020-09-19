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
// Type namespace: System
namespace System {
  // Autogenerated type: System.PlatformID
  struct PlatformID : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: PlatformID
    constexpr PlatformID(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.PlatformID Win32S
    static constexpr const int Win32S = 0;
    // Get static field: static public System.PlatformID Win32S
    static System::PlatformID _get_Win32S();
    // Set static field: static public System.PlatformID Win32S
    static void _set_Win32S(System::PlatformID value);
    // static field const value: static public System.PlatformID Win32Windows
    static constexpr const int Win32Windows = 1;
    // Get static field: static public System.PlatformID Win32Windows
    static System::PlatformID _get_Win32Windows();
    // Set static field: static public System.PlatformID Win32Windows
    static void _set_Win32Windows(System::PlatformID value);
    // static field const value: static public System.PlatformID Win32NT
    static constexpr const int Win32NT = 2;
    // Get static field: static public System.PlatformID Win32NT
    static System::PlatformID _get_Win32NT();
    // Set static field: static public System.PlatformID Win32NT
    static void _set_Win32NT(System::PlatformID value);
    // static field const value: static public System.PlatformID WinCE
    static constexpr const int WinCE = 3;
    // Get static field: static public System.PlatformID WinCE
    static System::PlatformID _get_WinCE();
    // Set static field: static public System.PlatformID WinCE
    static void _set_WinCE(System::PlatformID value);
    // static field const value: static public System.PlatformID Unix
    static constexpr const int Unix = 4;
    // Get static field: static public System.PlatformID Unix
    static System::PlatformID _get_Unix();
    // Set static field: static public System.PlatformID Unix
    static void _set_Unix(System::PlatformID value);
    // static field const value: static public System.PlatformID Xbox
    static constexpr const int Xbox = 5;
    // Get static field: static public System.PlatformID Xbox
    static System::PlatformID _get_Xbox();
    // Set static field: static public System.PlatformID Xbox
    static void _set_Xbox(System::PlatformID value);
    // static field const value: static public System.PlatformID MacOSX
    static constexpr const int MacOSX = 6;
    // Get static field: static public System.PlatformID MacOSX
    static System::PlatformID _get_MacOSX();
    // Set static field: static public System.PlatformID MacOSX
    static void _set_MacOSX(System::PlatformID value);
  }; // System.PlatformID
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::PlatformID, "System", "PlatformID");
#pragma pack(pop)