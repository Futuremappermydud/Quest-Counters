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
  // Autogenerated type: Oculus.Platform.VoipBitrate
  struct VoipBitrate : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: VoipBitrate
    constexpr VoipBitrate(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Platform.VoipBitrate Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.VoipBitrate Unknown
    static Oculus::Platform::VoipBitrate _get_Unknown();
    // Set static field: static public Oculus.Platform.VoipBitrate Unknown
    static void _set_Unknown(Oculus::Platform::VoipBitrate value);
    // static field const value: static public Oculus.Platform.VoipBitrate B16000
    static constexpr const int B16000 = 1;
    // Get static field: static public Oculus.Platform.VoipBitrate B16000
    static Oculus::Platform::VoipBitrate _get_B16000();
    // Set static field: static public Oculus.Platform.VoipBitrate B16000
    static void _set_B16000(Oculus::Platform::VoipBitrate value);
    // static field const value: static public Oculus.Platform.VoipBitrate B24000
    static constexpr const int B24000 = 2;
    // Get static field: static public Oculus.Platform.VoipBitrate B24000
    static Oculus::Platform::VoipBitrate _get_B24000();
    // Set static field: static public Oculus.Platform.VoipBitrate B24000
    static void _set_B24000(Oculus::Platform::VoipBitrate value);
    // static field const value: static public Oculus.Platform.VoipBitrate B32000
    static constexpr const int B32000 = 3;
    // Get static field: static public Oculus.Platform.VoipBitrate B32000
    static Oculus::Platform::VoipBitrate _get_B32000();
    // Set static field: static public Oculus.Platform.VoipBitrate B32000
    static void _set_B32000(Oculus::Platform::VoipBitrate value);
    // static field const value: static public Oculus.Platform.VoipBitrate B64000
    static constexpr const int B64000 = 4;
    // Get static field: static public Oculus.Platform.VoipBitrate B64000
    static Oculus::Platform::VoipBitrate _get_B64000();
    // Set static field: static public Oculus.Platform.VoipBitrate B64000
    static void _set_B64000(Oculus::Platform::VoipBitrate value);
    // static field const value: static public Oculus.Platform.VoipBitrate B96000
    static constexpr const int B96000 = 5;
    // Get static field: static public Oculus.Platform.VoipBitrate B96000
    static Oculus::Platform::VoipBitrate _get_B96000();
    // Set static field: static public Oculus.Platform.VoipBitrate B96000
    static void _set_B96000(Oculus::Platform::VoipBitrate value);
    // static field const value: static public Oculus.Platform.VoipBitrate B128000
    static constexpr const int B128000 = 6;
    // Get static field: static public Oculus.Platform.VoipBitrate B128000
    static Oculus::Platform::VoipBitrate _get_B128000();
    // Set static field: static public Oculus.Platform.VoipBitrate B128000
    static void _set_B128000(Oculus::Platform::VoipBitrate value);
  }; // Oculus.Platform.VoipBitrate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipBitrate, "Oculus.Platform", "VoipBitrate");
#pragma pack(pop)