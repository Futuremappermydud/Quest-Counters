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
  // Autogenerated type: TMPro.TextRenderFlags
  struct TextRenderFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: TextRenderFlags
    constexpr TextRenderFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.TextRenderFlags DontRender
    static constexpr const int DontRender = 0;
    // Get static field: static public TMPro.TextRenderFlags DontRender
    static TMPro::TextRenderFlags _get_DontRender();
    // Set static field: static public TMPro.TextRenderFlags DontRender
    static void _set_DontRender(TMPro::TextRenderFlags value);
    // static field const value: static public TMPro.TextRenderFlags Render
    static constexpr const int Render = 255;
    // Get static field: static public TMPro.TextRenderFlags Render
    static TMPro::TextRenderFlags _get_Render();
    // Set static field: static public TMPro.TextRenderFlags Render
    static void _set_Render(TMPro::TextRenderFlags value);
  }; // TMPro.TextRenderFlags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextRenderFlags, "TMPro", "TextRenderFlags");
#pragma pack(pop)
