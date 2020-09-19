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
  // Autogenerated type: UnityEngine.RenderMode
  struct RenderMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: RenderMode
    constexpr RenderMode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RenderMode ScreenSpaceOverlay
    static constexpr const int ScreenSpaceOverlay = 0;
    // Get static field: static public UnityEngine.RenderMode ScreenSpaceOverlay
    static UnityEngine::RenderMode _get_ScreenSpaceOverlay();
    // Set static field: static public UnityEngine.RenderMode ScreenSpaceOverlay
    static void _set_ScreenSpaceOverlay(UnityEngine::RenderMode value);
    // static field const value: static public UnityEngine.RenderMode ScreenSpaceCamera
    static constexpr const int ScreenSpaceCamera = 1;
    // Get static field: static public UnityEngine.RenderMode ScreenSpaceCamera
    static UnityEngine::RenderMode _get_ScreenSpaceCamera();
    // Set static field: static public UnityEngine.RenderMode ScreenSpaceCamera
    static void _set_ScreenSpaceCamera(UnityEngine::RenderMode value);
    // static field const value: static public UnityEngine.RenderMode WorldSpace
    static constexpr const int WorldSpace = 2;
    // Get static field: static public UnityEngine.RenderMode WorldSpace
    static UnityEngine::RenderMode _get_WorldSpace();
    // Set static field: static public UnityEngine.RenderMode WorldSpace
    static void _set_WorldSpace(UnityEngine::RenderMode value);
  }; // UnityEngine.RenderMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderMode, "UnityEngine", "RenderMode");
#pragma pack(pop)
