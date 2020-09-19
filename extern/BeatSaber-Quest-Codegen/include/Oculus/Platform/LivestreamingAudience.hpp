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
  // Autogenerated type: Oculus.Platform.LivestreamingAudience
  struct LivestreamingAudience : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: LivestreamingAudience
    constexpr LivestreamingAudience(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Platform.LivestreamingAudience Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.LivestreamingAudience Unknown
    static Oculus::Platform::LivestreamingAudience _get_Unknown();
    // Set static field: static public Oculus.Platform.LivestreamingAudience Unknown
    static void _set_Unknown(Oculus::Platform::LivestreamingAudience value);
    // static field const value: static public Oculus.Platform.LivestreamingAudience Public
    static constexpr const int Public = 1;
    // Get static field: static public Oculus.Platform.LivestreamingAudience Public
    static Oculus::Platform::LivestreamingAudience _get_Public();
    // Set static field: static public Oculus.Platform.LivestreamingAudience Public
    static void _set_Public(Oculus::Platform::LivestreamingAudience value);
    // static field const value: static public Oculus.Platform.LivestreamingAudience Friends
    static constexpr const int Friends = 2;
    // Get static field: static public Oculus.Platform.LivestreamingAudience Friends
    static Oculus::Platform::LivestreamingAudience _get_Friends();
    // Set static field: static public Oculus.Platform.LivestreamingAudience Friends
    static void _set_Friends(Oculus::Platform::LivestreamingAudience value);
    // static field const value: static public Oculus.Platform.LivestreamingAudience OnlyMe
    static constexpr const int OnlyMe = 3;
    // Get static field: static public Oculus.Platform.LivestreamingAudience OnlyMe
    static Oculus::Platform::LivestreamingAudience _get_OnlyMe();
    // Set static field: static public Oculus.Platform.LivestreamingAudience OnlyMe
    static void _set_OnlyMe(Oculus::Platform::LivestreamingAudience value);
  }; // Oculus.Platform.LivestreamingAudience
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LivestreamingAudience, "Oculus.Platform", "LivestreamingAudience");
#pragma pack(pop)
