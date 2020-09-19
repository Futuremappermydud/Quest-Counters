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
  // Autogenerated type: TMPro.ColorMode
  struct ColorMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ColorMode
    constexpr ColorMode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.ColorMode Single
    static constexpr const int Single = 0;
    // Get static field: static public TMPro.ColorMode Single
    static TMPro::ColorMode _get_Single();
    // Set static field: static public TMPro.ColorMode Single
    static void _set_Single(TMPro::ColorMode value);
    // static field const value: static public TMPro.ColorMode HorizontalGradient
    static constexpr const int HorizontalGradient = 1;
    // Get static field: static public TMPro.ColorMode HorizontalGradient
    static TMPro::ColorMode _get_HorizontalGradient();
    // Set static field: static public TMPro.ColorMode HorizontalGradient
    static void _set_HorizontalGradient(TMPro::ColorMode value);
    // static field const value: static public TMPro.ColorMode VerticalGradient
    static constexpr const int VerticalGradient = 2;
    // Get static field: static public TMPro.ColorMode VerticalGradient
    static TMPro::ColorMode _get_VerticalGradient();
    // Set static field: static public TMPro.ColorMode VerticalGradient
    static void _set_VerticalGradient(TMPro::ColorMode value);
    // static field const value: static public TMPro.ColorMode FourCornersGradient
    static constexpr const int FourCornersGradient = 3;
    // Get static field: static public TMPro.ColorMode FourCornersGradient
    static TMPro::ColorMode _get_FourCornersGradient();
    // Set static field: static public TMPro.ColorMode FourCornersGradient
    static void _set_FourCornersGradient(TMPro::ColorMode value);
  }; // TMPro.ColorMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::ColorMode, "TMPro", "ColorMode");
#pragma pack(pop)