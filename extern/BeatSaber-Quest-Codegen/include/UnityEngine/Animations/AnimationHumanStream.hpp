// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Autogenerated type: UnityEngine.Animations.AnimationHumanStream
  struct AnimationHumanStream : public System::ValueType {
    public:
    // private System.IntPtr stream
    // Offset: 0x0
    System::IntPtr stream;
    // Creating value type constructor for type: AnimationHumanStream
    constexpr AnimationHumanStream(System::IntPtr stream_ = {}) noexcept : stream{stream_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return stream;
    }
  }; // UnityEngine.Animations.AnimationHumanStream
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationHumanStream, "UnityEngine.Animations", "AnimationHumanStream");
#pragma pack(pop)
