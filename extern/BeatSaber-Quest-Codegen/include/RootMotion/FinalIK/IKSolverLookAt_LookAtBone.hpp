// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverLookAt
#include "RootMotion/FinalIK/IKSolverLookAt.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Bone
#include "RootMotion/FinalIK/IKSolver_Bone.hpp"
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
  // Autogenerated type: RootMotion.FinalIK.IKSolverLookAt/LookAtBone
  class IKSolverLookAt::LookAtBone : public RootMotion::FinalIK::IKSolver::Bone {
    public:
    // public UnityEngine.Vector3 baseForwardOffsetEuler
    // Offset: 0x74
    UnityEngine::Vector3 baseForwardOffsetEuler;
    // Creating conversion operator: operator UnityEngine::Vector3
    constexpr operator UnityEngine::Vector3() const noexcept {
      return baseForwardOffsetEuler;
    }
    // public System.Void Initiate(UnityEngine.Transform root)
    // Offset: 0x135465C
    void Initiate(UnityEngine::Transform* root);
    // public System.Void LookAt(UnityEngine.Vector3 direction, System.Single weight)
    // Offset: 0x1355588
    void LookAt(UnityEngine::Vector3 direction, float weight);
    // public UnityEngine.Vector3 get_forward()
    // Offset: 0x1355184
    UnityEngine::Vector3 get_forward();
    // public System.Void .ctor()
    // Offset: 0x1355928
    // Implemented from: RootMotion.FinalIK.IKSolver/Bone
    // Base method: System.Void Bone::.ctor()
    // Base method: System.Void Point::.ctor()
    // Base method: System.Void Object::.ctor()
    static IKSolverLookAt::LookAtBone* New_ctor();
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x13542D4
    // Implemented from: RootMotion.FinalIK.IKSolver/Bone
    // Base method: System.Void Bone::.ctor(UnityEngine.Transform transform)
    static IKSolverLookAt::LookAtBone* New_ctor(UnityEngine::Transform* transform);
  }; // RootMotion.FinalIK.IKSolverLookAt/LookAtBone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverLookAt::LookAtBone*, "RootMotion.FinalIK", "IKSolverLookAt/LookAtBone");
#pragma pack(pop)