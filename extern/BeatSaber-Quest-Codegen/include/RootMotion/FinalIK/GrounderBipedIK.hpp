// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Grounder
#include "RootMotion/FinalIK/Grounder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: BipedIK
  class BipedIK;
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.GrounderBipedIK
  class GrounderBipedIK : public RootMotion::FinalIK::Grounder {
    public:
    // public RootMotion.FinalIK.BipedIK ik
    // Offset: 0x40
    RootMotion::FinalIK::BipedIK* ik;
    // public System.Single spineBend
    // Offset: 0x48
    float spineBend;
    // public System.Single spineSpeed
    // Offset: 0x4C
    float spineSpeed;
    // private UnityEngine.Transform[] feet
    // Offset: 0x50
    ::Array<UnityEngine::Transform*>* feet;
    // private UnityEngine.Quaternion[] footRotations
    // Offset: 0x58
    ::Array<UnityEngine::Quaternion>* footRotations;
    // private UnityEngine.Vector3 animatedPelvisLocalPosition
    // Offset: 0x60
    UnityEngine::Vector3 animatedPelvisLocalPosition;
    // private UnityEngine.Vector3 solvedPelvisLocalPosition
    // Offset: 0x6C
    UnityEngine::Vector3 solvedPelvisLocalPosition;
    // private UnityEngine.Vector3 spineOffset
    // Offset: 0x78
    UnityEngine::Vector3 spineOffset;
    // private System.Single lastWeight
    // Offset: 0x84
    float lastWeight;
    // private System.Boolean IsReadyToInitiate()
    // Offset: 0x1375414
    bool IsReadyToInitiate();
    // private System.Void Update()
    // Offset: 0x13754C4
    void Update();
    // private System.Void Initiate()
    // Offset: 0x1375578
    void Initiate();
    // private System.Void OnDisable()
    // Offset: 0x1375B40
    void OnDisable();
    // private System.Void OnSolverUpdate()
    // Offset: 0x1375B94
    void OnSolverUpdate();
    // private System.Void SetLegIK(RootMotion.FinalIK.IKSolverLimb limb, System.Int32 index)
    // Offset: 0x1376348
    void SetLegIK(RootMotion::FinalIK::IKSolverLimb* limb, int index);
    // private System.Void OnPostSolverUpdate()
    // Offset: 0x13764A8
    void OnPostSolverUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x1376638
    void OnDestroy();
    // protected override System.Void OpenUserManual()
    // Offset: 0x1375278
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x13752C4
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x1375310
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
    // public System.Void .ctor()
    // Offset: 0x13767DC
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GrounderBipedIK* New_ctor();
  }; // RootMotion.FinalIK.GrounderBipedIK
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderBipedIK*, "RootMotion.FinalIK", "GrounderBipedIK");
#pragma pack(pop)
