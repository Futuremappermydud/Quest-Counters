// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverFullBody
#include "RootMotion/FinalIK/IKSolverFullBody.hpp"
// Including type: RootMotion.BipedLimbOrientations
#include "RootMotion/BipedLimbOrientations.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKEffector
  class IKEffector;
  // Forward declaring type: FBIKChain
  class FBIKChain;
  // Forward declaring type: IKMappingLimb
  class IKMappingLimb;
  // Forward declaring type: IKMappingBone
  class IKMappingBone;
  // Forward declaring type: FullBodyBipedChain
  struct FullBodyBipedChain;
  // Forward declaring type: FullBodyBipedEffector
  struct FullBodyBipedEffector;
  // Forward declaring type: IKMappingSpine
  class IKMappingSpine;
  // Forward declaring type: IKConstraintBend
  class IKConstraintBend;
}
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BipedReferences
  class BipedReferences;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolverFullBodyBiped
  class IKSolverFullBodyBiped : public RootMotion::FinalIK::IKSolverFullBody {
    public:
    // public UnityEngine.Transform rootNode
    // Offset: 0xD0
    UnityEngine::Transform* rootNode;
    // public System.Single spineStiffness
    // Offset: 0xD8
    float spineStiffness;
    // public System.Single pullBodyVertical
    // Offset: 0xDC
    float pullBodyVertical;
    // public System.Single pullBodyHorizontal
    // Offset: 0xE0
    float pullBodyHorizontal;
    // private UnityEngine.Vector3 <pullBodyOffset>k__BackingField
    // Offset: 0xE4
    UnityEngine::Vector3 pullBodyOffset;
    // private UnityEngine.Vector3 offset
    // Offset: 0xF0
    UnityEngine::Vector3 offset;
    // public RootMotion.FinalIK.IKEffector get_bodyEffector()
    // Offset: 0x134C9C4
    RootMotion::FinalIK::IKEffector* get_bodyEffector();
    // public RootMotion.FinalIK.IKEffector get_leftShoulderEffector()
    // Offset: 0x134CB0C
    RootMotion::FinalIK::IKEffector* get_leftShoulderEffector();
    // public RootMotion.FinalIK.IKEffector get_rightShoulderEffector()
    // Offset: 0x134CB14
    RootMotion::FinalIK::IKEffector* get_rightShoulderEffector();
    // public RootMotion.FinalIK.IKEffector get_leftThighEffector()
    // Offset: 0x134CB1C
    RootMotion::FinalIK::IKEffector* get_leftThighEffector();
    // public RootMotion.FinalIK.IKEffector get_rightThighEffector()
    // Offset: 0x134CB24
    RootMotion::FinalIK::IKEffector* get_rightThighEffector();
    // public RootMotion.FinalIK.IKEffector get_leftHandEffector()
    // Offset: 0x134CB2C
    RootMotion::FinalIK::IKEffector* get_leftHandEffector();
    // public RootMotion.FinalIK.IKEffector get_rightHandEffector()
    // Offset: 0x134CB34
    RootMotion::FinalIK::IKEffector* get_rightHandEffector();
    // public RootMotion.FinalIK.IKEffector get_leftFootEffector()
    // Offset: 0x134CB3C
    RootMotion::FinalIK::IKEffector* get_leftFootEffector();
    // public RootMotion.FinalIK.IKEffector get_rightFootEffector()
    // Offset: 0x134CB44
    RootMotion::FinalIK::IKEffector* get_rightFootEffector();
    // public RootMotion.FinalIK.FBIKChain get_leftArmChain()
    // Offset: 0x134CB4C
    RootMotion::FinalIK::FBIKChain* get_leftArmChain();
    // public RootMotion.FinalIK.FBIKChain get_rightArmChain()
    // Offset: 0x134CB84
    RootMotion::FinalIK::FBIKChain* get_rightArmChain();
    // public RootMotion.FinalIK.FBIKChain get_leftLegChain()
    // Offset: 0x134CBBC
    RootMotion::FinalIK::FBIKChain* get_leftLegChain();
    // public RootMotion.FinalIK.FBIKChain get_rightLegChain()
    // Offset: 0x134CBF4
    RootMotion::FinalIK::FBIKChain* get_rightLegChain();
    // public RootMotion.FinalIK.IKMappingLimb get_leftArmMapping()
    // Offset: 0x134CC2C
    RootMotion::FinalIK::IKMappingLimb* get_leftArmMapping();
    // public RootMotion.FinalIK.IKMappingLimb get_rightArmMapping()
    // Offset: 0x134CC60
    RootMotion::FinalIK::IKMappingLimb* get_rightArmMapping();
    // public RootMotion.FinalIK.IKMappingLimb get_leftLegMapping()
    // Offset: 0x134CC98
    RootMotion::FinalIK::IKMappingLimb* get_leftLegMapping();
    // public RootMotion.FinalIK.IKMappingLimb get_rightLegMapping()
    // Offset: 0x134CCD0
    RootMotion::FinalIK::IKMappingLimb* get_rightLegMapping();
    // public RootMotion.FinalIK.IKMappingBone get_headMapping()
    // Offset: 0x134CD08
    RootMotion::FinalIK::IKMappingBone* get_headMapping();
    // public System.Void SetChainWeights(RootMotion.FinalIK.FullBodyBipedChain c, System.Single pull, System.Single reach)
    // Offset: 0x134CD3C
    void SetChainWeights(RootMotion::FinalIK::FullBodyBipedChain c, float pull, float reach);
    // public System.Void SetEffectorWeights(RootMotion.FinalIK.FullBodyBipedEffector effector, System.Single positionWeight, System.Single rotationWeight)
    // Offset: 0x134CE48
    void SetEffectorWeights(RootMotion::FinalIK::FullBodyBipedEffector effector, float positionWeight, float rotationWeight);
    // public RootMotion.FinalIK.FBIKChain GetChain(RootMotion.FinalIK.FullBodyBipedChain c)
    // Offset: 0x134CD90
    RootMotion::FinalIK::FBIKChain* GetChain(RootMotion::FinalIK::FullBodyBipedChain c);
    // public RootMotion.FinalIK.FBIKChain GetChain(RootMotion.FinalIK.FullBodyBipedEffector effector)
    // Offset: 0x134CF24
    RootMotion::FinalIK::FBIKChain* GetChain(RootMotion::FinalIK::FullBodyBipedEffector effector);
    // public RootMotion.FinalIK.IKEffector GetEffector(RootMotion.FinalIK.FullBodyBipedEffector effector)
    // Offset: 0x134C9CC
    RootMotion::FinalIK::IKEffector* GetEffector(RootMotion::FinalIK::FullBodyBipedEffector effector);
    // public RootMotion.FinalIK.IKEffector GetEndEffector(RootMotion.FinalIK.FullBodyBipedChain c)
    // Offset: 0x134CFF4
    RootMotion::FinalIK::IKEffector* GetEndEffector(RootMotion::FinalIK::FullBodyBipedChain c);
    // public RootMotion.FinalIK.IKMappingLimb GetLimbMapping(RootMotion.FinalIK.FullBodyBipedChain chain)
    // Offset: 0x134D0AC
    RootMotion::FinalIK::IKMappingLimb* GetLimbMapping(RootMotion::FinalIK::FullBodyBipedChain chain);
    // public RootMotion.FinalIK.IKMappingLimb GetLimbMapping(RootMotion.FinalIK.FullBodyBipedEffector effector)
    // Offset: 0x134D160
    RootMotion::FinalIK::IKMappingLimb* GetLimbMapping(RootMotion::FinalIK::FullBodyBipedEffector effector);
    // public RootMotion.FinalIK.IKMappingSpine GetSpineMapping()
    // Offset: 0x134D214
    RootMotion::FinalIK::IKMappingSpine* GetSpineMapping();
    // public RootMotion.FinalIK.IKMappingBone GetHeadMapping()
    // Offset: 0x134D21C
    RootMotion::FinalIK::IKMappingBone* GetHeadMapping();
    // public RootMotion.FinalIK.IKConstraintBend GetBendConstraint(RootMotion.FinalIK.FullBodyBipedChain limb)
    // Offset: 0x134D250
    RootMotion::FinalIK::IKConstraintBend* GetBendConstraint(RootMotion::FinalIK::FullBodyBipedChain limb);
    // public System.Void SetToReferences(RootMotion.BipedReferences references, UnityEngine.Transform rootNode)
    // Offset: 0x134D4AC
    void SetToReferences(RootMotion::BipedReferences* references, UnityEngine::Transform* rootNode);
    // static public UnityEngine.Transform DetectRootNodeBone(RootMotion.BipedReferences references)
    // Offset: 0x134E8AC
    static UnityEngine::Transform* DetectRootNodeBone(RootMotion::BipedReferences* references);
    // public System.Void SetLimbOrientations(RootMotion.BipedLimbOrientations o)
    // Offset: 0x134ED40
    void SetLimbOrientations(RootMotion::BipedLimbOrientations* o);
    // public UnityEngine.Vector3 get_pullBodyOffset()
    // Offset: 0x134EF94
    UnityEngine::Vector3 get_pullBodyOffset();
    // private System.Void set_pullBodyOffset(UnityEngine.Vector3 value)
    // Offset: 0x134EFA0
    void set_pullBodyOffset(UnityEngine::Vector3 value);
    // private System.Void SetLimbOrientation(RootMotion.FinalIK.FullBodyBipedChain chain, RootMotion.BipedLimbOrientations/LimbOrientation limbOrientation)
    // Offset: 0x134EDA0
    void SetLimbOrientation(RootMotion::FinalIK::FullBodyBipedChain chain, RootMotion::BipedLimbOrientations::LimbOrientation* limbOrientation);
    // static private UnityEngine.Transform GetLeftClavicle(RootMotion.BipedReferences references)
    // Offset: 0x134EBC0
    static UnityEngine::Transform* GetLeftClavicle(RootMotion::BipedReferences* references);
    // static private UnityEngine.Transform GetRightClavicle(RootMotion.BipedReferences references)
    // Offset: 0x134EC80
    static UnityEngine::Transform* GetRightClavicle(RootMotion::BipedReferences* references);
    // static private System.Boolean Contains(UnityEngine.Transform[] array, UnityEngine.Transform transform)
    // Offset: 0x134EFAC
    static bool Contains(::Array<UnityEngine::Transform*>* array, UnityEngine::Transform* transform);
    // private System.Void PullBody()
    // Offset: 0x134F1D0
    void PullBody();
    // private UnityEngine.Vector3 GetBodyOffset()
    // Offset: 0x134F360
    UnityEngine::Vector3 GetBodyOffset();
    // private UnityEngine.Vector3 GetHandBodyPull(RootMotion.FinalIK.IKEffector effector, RootMotion.FinalIK.FBIKChain arm, UnityEngine.Vector3 offset)
    // Offset: 0x134F560
    UnityEngine::Vector3 GetHandBodyPull(RootMotion::FinalIK::IKEffector* effector, RootMotion::FinalIK::FBIKChain* arm, UnityEngine::Vector3 offset);
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x134D318
    // Implemented from: RootMotion.FinalIK.IKSolverFullBody
    // Base method: System.Boolean IKSolverFullBody::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // protected override System.Void ReadPose()
    // Offset: 0x134F088
    // Implemented from: RootMotion.FinalIK.IKSolverFullBody
    // Base method: System.Void IKSolverFullBody::ReadPose()
    void ReadPose();
    // protected override System.Void ApplyBendConstraints()
    // Offset: 0x134F760
    // Implemented from: RootMotion.FinalIK.IKSolverFullBody
    // Base method: System.Void IKSolverFullBody::ApplyBendConstraints()
    void ApplyBendConstraints();
    // protected override System.Void WritePose()
    // Offset: 0x134FA94
    // Implemented from: RootMotion.FinalIK.IKSolverFullBody
    // Base method: System.Void IKSolverFullBody::WritePose()
    void WritePose();
    // public System.Void .ctor()
    // Offset: 0x134FB94
    // Implemented from: RootMotion.FinalIK.IKSolverFullBody
    // Base method: System.Void IKSolverFullBody::.ctor()
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    static IKSolverFullBodyBiped* New_ctor();
  }; // RootMotion.FinalIK.IKSolverFullBodyBiped
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverFullBodyBiped*, "RootMotion.FinalIK", "IKSolverFullBodyBiped");
#pragma pack(pop)
