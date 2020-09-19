// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.HitReaction
  class HitReaction : public RootMotion::FinalIK::OffsetModifier {
    public:
    // Nested type: RootMotion::FinalIK::HitReaction::HitPoint
    class HitPoint;
    // Nested type: RootMotion::FinalIK::HitReaction::HitPointEffector
    class HitPointEffector;
    // Nested type: RootMotion::FinalIK::HitReaction::HitPointBone
    class HitPointBone;
    // public RootMotion.FinalIK.HitReaction/HitPointEffector[] effectorHitPoints
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::HitReaction::HitPointEffector*>* effectorHitPoints;
    // public RootMotion.FinalIK.HitReaction/HitPointBone[] boneHitPoints
    // Offset: 0x38
    ::Array<RootMotion::FinalIK::HitReaction::HitPointBone*>* boneHitPoints;
    // public System.Boolean get_inProgress()
    // Offset: 0x137F5AC
    bool get_inProgress();
    // public System.Void Hit(UnityEngine.Collider collider, UnityEngine.Vector3 force, UnityEngine.Vector3 point)
    // Offset: 0x137F89C
    void Hit(UnityEngine::Collider* collider, UnityEngine::Vector3 force, UnityEngine::Vector3 point);
    // protected override System.Void OnModifyOffset()
    // Offset: 0x137F67C
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
    // public System.Void .ctor()
    // Offset: 0x137FC08
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HitReaction* New_ctor();
  }; // RootMotion.FinalIK.HitReaction
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction*, "RootMotion.FinalIK", "HitReaction");
#pragma pack(pop)
