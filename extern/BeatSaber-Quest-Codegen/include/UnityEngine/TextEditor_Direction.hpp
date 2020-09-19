// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TextEditor
#include "UnityEngine/TextEditor.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.TextEditor/Direction
  struct TextEditor::Direction : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: Direction
    constexpr Direction(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextEditor/Direction Forward
    static constexpr const int Forward = 0;
    // Get static field: static public UnityEngine.TextEditor/Direction Forward
    static UnityEngine::TextEditor::Direction _get_Forward();
    // Set static field: static public UnityEngine.TextEditor/Direction Forward
    static void _set_Forward(UnityEngine::TextEditor::Direction value);
    // static field const value: static public UnityEngine.TextEditor/Direction Backward
    static constexpr const int Backward = 1;
    // Get static field: static public UnityEngine.TextEditor/Direction Backward
    static UnityEngine::TextEditor::Direction _get_Backward();
    // Set static field: static public UnityEngine.TextEditor/Direction Backward
    static void _set_Backward(UnityEngine::TextEditor::Direction value);
  }; // UnityEngine.TextEditor/Direction
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextEditor::Direction, "UnityEngine", "TextEditor/Direction");
#pragma pack(pop)
