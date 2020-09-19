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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Type because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.GUILayoutOption
  class GUILayoutOption : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::GUILayoutOption::Type
    struct Type;
    // Autogenerated type: UnityEngine.GUILayoutOption/Type
    struct Type : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Type
      constexpr Type(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.GUILayoutOption/Type fixedWidth
      static constexpr const int fixedWidth = 0;
      // Get static field: static public UnityEngine.GUILayoutOption/Type fixedWidth
      static UnityEngine::GUILayoutOption::Type _get_fixedWidth();
      // Set static field: static public UnityEngine.GUILayoutOption/Type fixedWidth
      static void _set_fixedWidth(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type fixedHeight
      static constexpr const int fixedHeight = 1;
      // Get static field: static public UnityEngine.GUILayoutOption/Type fixedHeight
      static UnityEngine::GUILayoutOption::Type _get_fixedHeight();
      // Set static field: static public UnityEngine.GUILayoutOption/Type fixedHeight
      static void _set_fixedHeight(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type minWidth
      static constexpr const int minWidth = 2;
      // Get static field: static public UnityEngine.GUILayoutOption/Type minWidth
      static UnityEngine::GUILayoutOption::Type _get_minWidth();
      // Set static field: static public UnityEngine.GUILayoutOption/Type minWidth
      static void _set_minWidth(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type maxWidth
      static constexpr const int maxWidth = 3;
      // Get static field: static public UnityEngine.GUILayoutOption/Type maxWidth
      static UnityEngine::GUILayoutOption::Type _get_maxWidth();
      // Set static field: static public UnityEngine.GUILayoutOption/Type maxWidth
      static void _set_maxWidth(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type minHeight
      static constexpr const int minHeight = 4;
      // Get static field: static public UnityEngine.GUILayoutOption/Type minHeight
      static UnityEngine::GUILayoutOption::Type _get_minHeight();
      // Set static field: static public UnityEngine.GUILayoutOption/Type minHeight
      static void _set_minHeight(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type maxHeight
      static constexpr const int maxHeight = 5;
      // Get static field: static public UnityEngine.GUILayoutOption/Type maxHeight
      static UnityEngine::GUILayoutOption::Type _get_maxHeight();
      // Set static field: static public UnityEngine.GUILayoutOption/Type maxHeight
      static void _set_maxHeight(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type stretchWidth
      static constexpr const int stretchWidth = 6;
      // Get static field: static public UnityEngine.GUILayoutOption/Type stretchWidth
      static UnityEngine::GUILayoutOption::Type _get_stretchWidth();
      // Set static field: static public UnityEngine.GUILayoutOption/Type stretchWidth
      static void _set_stretchWidth(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type stretchHeight
      static constexpr const int stretchHeight = 7;
      // Get static field: static public UnityEngine.GUILayoutOption/Type stretchHeight
      static UnityEngine::GUILayoutOption::Type _get_stretchHeight();
      // Set static field: static public UnityEngine.GUILayoutOption/Type stretchHeight
      static void _set_stretchHeight(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type alignStart
      static constexpr const int alignStart = 8;
      // Get static field: static public UnityEngine.GUILayoutOption/Type alignStart
      static UnityEngine::GUILayoutOption::Type _get_alignStart();
      // Set static field: static public UnityEngine.GUILayoutOption/Type alignStart
      static void _set_alignStart(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type alignMiddle
      static constexpr const int alignMiddle = 9;
      // Get static field: static public UnityEngine.GUILayoutOption/Type alignMiddle
      static UnityEngine::GUILayoutOption::Type _get_alignMiddle();
      // Set static field: static public UnityEngine.GUILayoutOption/Type alignMiddle
      static void _set_alignMiddle(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type alignEnd
      static constexpr const int alignEnd = 10;
      // Get static field: static public UnityEngine.GUILayoutOption/Type alignEnd
      static UnityEngine::GUILayoutOption::Type _get_alignEnd();
      // Set static field: static public UnityEngine.GUILayoutOption/Type alignEnd
      static void _set_alignEnd(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type alignJustify
      static constexpr const int alignJustify = 11;
      // Get static field: static public UnityEngine.GUILayoutOption/Type alignJustify
      static UnityEngine::GUILayoutOption::Type _get_alignJustify();
      // Set static field: static public UnityEngine.GUILayoutOption/Type alignJustify
      static void _set_alignJustify(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type equalSize
      static constexpr const int equalSize = 12;
      // Get static field: static public UnityEngine.GUILayoutOption/Type equalSize
      static UnityEngine::GUILayoutOption::Type _get_equalSize();
      // Set static field: static public UnityEngine.GUILayoutOption/Type equalSize
      static void _set_equalSize(UnityEngine::GUILayoutOption::Type value);
      // static field const value: static public UnityEngine.GUILayoutOption/Type spacing
      static constexpr const int spacing = 13;
      // Get static field: static public UnityEngine.GUILayoutOption/Type spacing
      static UnityEngine::GUILayoutOption::Type _get_spacing();
      // Set static field: static public UnityEngine.GUILayoutOption/Type spacing
      static void _set_spacing(UnityEngine::GUILayoutOption::Type value);
    }; // UnityEngine.GUILayoutOption/Type
    // UnityEngine.GUILayoutOption/Type type
    // Offset: 0x10
    UnityEngine::GUILayoutOption::Type type;
    // System.Object value
    // Offset: 0x18
    ::Il2CppObject* value;
    // System.Void .ctor(UnityEngine.GUILayoutOption/Type type, System.Object value)
    // Offset: 0x126EBDC
    static GUILayoutOption* New_ctor(UnityEngine::GUILayoutOption::Type type, ::Il2CppObject* value);
  }; // UnityEngine.GUILayoutOption
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayoutOption*, "UnityEngine", "GUILayoutOption");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayoutOption::Type, "UnityEngine", "GUILayoutOption/Type");
#pragma pack(pop)