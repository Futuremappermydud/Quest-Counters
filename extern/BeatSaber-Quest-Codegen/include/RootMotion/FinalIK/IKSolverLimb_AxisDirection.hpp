// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverLimb
#include "RootMotion/FinalIK/IKSolverLimb.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolverLimb/AxisDirection
  struct IKSolverLimb::AxisDirection : public System::ValueType {
    public:
    // public UnityEngine.Vector3 direction
    // Offset: 0x0
    UnityEngine::Vector3 direction;
    // public UnityEngine.Vector3 axis
    // Offset: 0xC
    UnityEngine::Vector3 axis;
    // public System.Single dot
    // Offset: 0x18
    float dot;
    // Creating value type constructor for type: AxisDirection
    constexpr AxisDirection(UnityEngine::Vector3 direction_ = {}, UnityEngine::Vector3 axis_ = {}, float dot_ = {}) noexcept : direction{direction_}, axis{axis_}, dot{dot_} {}
    // public System.Void .ctor(UnityEngine.Vector3 direction, UnityEngine.Vector3 axis)
    // Offset: 0xA46A68
    static IKSolverLimb::AxisDirection* New_ctor(UnityEngine::Vector3 direction, UnityEngine::Vector3 axis);
  }; // RootMotion.FinalIK.IKSolverLimb/AxisDirection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverLimb::AxisDirection, "RootMotion.FinalIK", "IKSolverLimb/AxisDirection");
#pragma pack(pop)
