// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Constraint
#include "RootMotion/FinalIK/Constraint.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.ConstraintRotation
  class ConstraintRotation : public RootMotion::FinalIK::Constraint {
    public:
    // public UnityEngine.Quaternion rotation
    // Offset: 0x1C
    UnityEngine::Quaternion rotation;
    // Creating conversion operator: operator UnityEngine::Quaternion
    constexpr operator UnityEngine::Quaternion() const noexcept {
      return rotation;
    }
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x13AF170
    static ConstraintRotation* New_ctor(UnityEngine::Transform* transform);
    // public override System.Void UpdateConstraint()
    // Offset: 0x13AF040
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::UpdateConstraint()
    void UpdateConstraint();
    // public System.Void .ctor()
    // Offset: 0x13AF168
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::.ctor()
    // Base method: System.Void Object::.ctor()
    static ConstraintRotation* New_ctor();
  }; // RootMotion.FinalIK.ConstraintRotation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ConstraintRotation*, "RootMotion.FinalIK", "ConstraintRotation");
#pragma pack(pop)
