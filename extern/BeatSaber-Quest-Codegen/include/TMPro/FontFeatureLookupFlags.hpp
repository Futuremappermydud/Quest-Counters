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
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.FontFeatureLookupFlags
  struct FontFeatureLookupFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: FontFeatureLookupFlags
    constexpr FontFeatureLookupFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.FontFeatureLookupFlags IgnoreLigatures
    static constexpr const int IgnoreLigatures = 4;
    // Get static field: static public TMPro.FontFeatureLookupFlags IgnoreLigatures
    static TMPro::FontFeatureLookupFlags _get_IgnoreLigatures();
    // Set static field: static public TMPro.FontFeatureLookupFlags IgnoreLigatures
    static void _set_IgnoreLigatures(TMPro::FontFeatureLookupFlags value);
    // static field const value: static public TMPro.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static constexpr const int IgnoreSpacingAdjustments = 256;
    // Get static field: static public TMPro.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static TMPro::FontFeatureLookupFlags _get_IgnoreSpacingAdjustments();
    // Set static field: static public TMPro.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static void _set_IgnoreSpacingAdjustments(TMPro::FontFeatureLookupFlags value);
  }; // TMPro.FontFeatureLookupFlags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::FontFeatureLookupFlags, "TMPro", "FontFeatureLookupFlags");
#pragma pack(pop)