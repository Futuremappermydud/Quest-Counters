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
  // Autogenerated type: UnityEngine.SpriteMeshType
  struct SpriteMeshType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: SpriteMeshType
    constexpr SpriteMeshType(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.SpriteMeshType FullRect
    static constexpr const int FullRect = 0;
    // Get static field: static public UnityEngine.SpriteMeshType FullRect
    static UnityEngine::SpriteMeshType _get_FullRect();
    // Set static field: static public UnityEngine.SpriteMeshType FullRect
    static void _set_FullRect(UnityEngine::SpriteMeshType value);
    // static field const value: static public UnityEngine.SpriteMeshType Tight
    static constexpr const int Tight = 1;
    // Get static field: static public UnityEngine.SpriteMeshType Tight
    static UnityEngine::SpriteMeshType _get_Tight();
    // Set static field: static public UnityEngine.SpriteMeshType Tight
    static void _set_Tight(UnityEngine::SpriteMeshType value);
  }; // UnityEngine.SpriteMeshType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpriteMeshType, "UnityEngine", "SpriteMeshType");
#pragma pack(pop)