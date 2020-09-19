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
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventFieldTags
  struct EventFieldTags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EventFieldTags
    constexpr EventFieldTags(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.Tracing.EventFieldTags None
    static constexpr const int None = 0;
    // Get static field: static public System.Diagnostics.Tracing.EventFieldTags None
    static System::Diagnostics::Tracing::EventFieldTags _get_None();
    // Set static field: static public System.Diagnostics.Tracing.EventFieldTags None
    static void _set_None(System::Diagnostics::Tracing::EventFieldTags value);
  }; // System.Diagnostics.Tracing.EventFieldTags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventFieldTags, "System.Diagnostics.Tracing", "EventFieldTags");
#pragma pack(pop)
