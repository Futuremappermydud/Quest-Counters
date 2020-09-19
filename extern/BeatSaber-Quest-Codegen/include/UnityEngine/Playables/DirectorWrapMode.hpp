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
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.DirectorWrapMode
  struct DirectorWrapMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: DirectorWrapMode
    constexpr DirectorWrapMode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Playables.DirectorWrapMode Hold
    static constexpr const int Hold = 0;
    // Get static field: static public UnityEngine.Playables.DirectorWrapMode Hold
    static UnityEngine::Playables::DirectorWrapMode _get_Hold();
    // Set static field: static public UnityEngine.Playables.DirectorWrapMode Hold
    static void _set_Hold(UnityEngine::Playables::DirectorWrapMode value);
    // static field const value: static public UnityEngine.Playables.DirectorWrapMode Loop
    static constexpr const int Loop = 1;
    // Get static field: static public UnityEngine.Playables.DirectorWrapMode Loop
    static UnityEngine::Playables::DirectorWrapMode _get_Loop();
    // Set static field: static public UnityEngine.Playables.DirectorWrapMode Loop
    static void _set_Loop(UnityEngine::Playables::DirectorWrapMode value);
    // static field const value: static public UnityEngine.Playables.DirectorWrapMode None
    static constexpr const int None = 2;
    // Get static field: static public UnityEngine.Playables.DirectorWrapMode None
    static UnityEngine::Playables::DirectorWrapMode _get_None();
    // Set static field: static public UnityEngine.Playables.DirectorWrapMode None
    static void _set_None(UnityEngine::Playables::DirectorWrapMode value);
  }; // UnityEngine.Playables.DirectorWrapMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::DirectorWrapMode, "UnityEngine.Playables", "DirectorWrapMode");
#pragma pack(pop)