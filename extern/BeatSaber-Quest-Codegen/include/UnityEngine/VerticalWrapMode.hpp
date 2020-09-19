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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.VerticalWrapMode
  struct VerticalWrapMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: VerticalWrapMode
    constexpr VerticalWrapMode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.VerticalWrapMode Truncate
    static constexpr const int Truncate = 0;
    // Get static field: static public UnityEngine.VerticalWrapMode Truncate
    static UnityEngine::VerticalWrapMode _get_Truncate();
    // Set static field: static public UnityEngine.VerticalWrapMode Truncate
    static void _set_Truncate(UnityEngine::VerticalWrapMode value);
    // static field const value: static public UnityEngine.VerticalWrapMode Overflow
    static constexpr const int Overflow = 1;
    // Get static field: static public UnityEngine.VerticalWrapMode Overflow
    static UnityEngine::VerticalWrapMode _get_Overflow();
    // Set static field: static public UnityEngine.VerticalWrapMode Overflow
    static void _set_Overflow(UnityEngine::VerticalWrapMode value);
  }; // UnityEngine.VerticalWrapMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::VerticalWrapMode, "UnityEngine", "VerticalWrapMode");
#pragma pack(pop)