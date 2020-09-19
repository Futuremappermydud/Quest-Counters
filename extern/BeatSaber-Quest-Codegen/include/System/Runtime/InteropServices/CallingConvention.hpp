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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.CallingConvention
  struct CallingConvention : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: CallingConvention
    constexpr CallingConvention(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.InteropServices.CallingConvention Winapi
    static constexpr const int Winapi = 1;
    // Get static field: static public System.Runtime.InteropServices.CallingConvention Winapi
    static System::Runtime::InteropServices::CallingConvention _get_Winapi();
    // Set static field: static public System.Runtime.InteropServices.CallingConvention Winapi
    static void _set_Winapi(System::Runtime::InteropServices::CallingConvention value);
    // static field const value: static public System.Runtime.InteropServices.CallingConvention Cdecl
    static constexpr const int Cdecl = 2;
    // Get static field: static public System.Runtime.InteropServices.CallingConvention Cdecl
    static System::Runtime::InteropServices::CallingConvention _get_Cdecl();
    // Set static field: static public System.Runtime.InteropServices.CallingConvention Cdecl
    static void _set_Cdecl(System::Runtime::InteropServices::CallingConvention value);
    // static field const value: static public System.Runtime.InteropServices.CallingConvention StdCall
    static constexpr const int StdCall = 3;
    // Get static field: static public System.Runtime.InteropServices.CallingConvention StdCall
    static System::Runtime::InteropServices::CallingConvention _get_StdCall();
    // Set static field: static public System.Runtime.InteropServices.CallingConvention StdCall
    static void _set_StdCall(System::Runtime::InteropServices::CallingConvention value);
    // static field const value: static public System.Runtime.InteropServices.CallingConvention ThisCall
    static constexpr const int ThisCall = 4;
    // Get static field: static public System.Runtime.InteropServices.CallingConvention ThisCall
    static System::Runtime::InteropServices::CallingConvention _get_ThisCall();
    // Set static field: static public System.Runtime.InteropServices.CallingConvention ThisCall
    static void _set_ThisCall(System::Runtime::InteropServices::CallingConvention value);
    // static field const value: static public System.Runtime.InteropServices.CallingConvention FastCall
    static constexpr const int FastCall = 5;
    // Get static field: static public System.Runtime.InteropServices.CallingConvention FastCall
    static System::Runtime::InteropServices::CallingConvention _get_FastCall();
    // Set static field: static public System.Runtime.InteropServices.CallingConvention FastCall
    static void _set_FastCall(System::Runtime::InteropServices::CallingConvention value);
  }; // System.Runtime.InteropServices.CallingConvention
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::CallingConvention, "System.Runtime.InteropServices", "CallingConvention");
#pragma pack(pop)
