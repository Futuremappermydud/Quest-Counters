// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.RotationLimit
#include "RootMotion/FinalIK/RotationLimit.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Keyframe
  struct Keyframe;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.RotationLimitSpline
  class RotationLimitSpline : public RootMotion::FinalIK::RotationLimit {
    public:
    // public System.Single twistLimit
    // Offset: 0x38
    float twistLimit;
    // public UnityEngine.AnimationCurve spline
    // Offset: 0x40
    UnityEngine::AnimationCurve* spline;
    // private System.Void OpenUserManual()
    // Offset: 0x123AF38
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x123AF84
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x123AFD0
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x123B01C
    void ASThread();
    // public System.Void SetSpline(UnityEngine.Keyframe[] keyframes)
    // Offset: 0x123B068
    void SetSpline(::Array<UnityEngine::Keyframe>* keyframes);
    // public UnityEngine.Quaternion LimitSwing(UnityEngine.Quaternion rotation)
    // Offset: 0x123B13C
    UnityEngine::Quaternion LimitSwing(UnityEngine::Quaternion rotation);
    // protected override UnityEngine.Quaternion LimitRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x123B084
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: UnityEngine.Quaternion RotationLimit::LimitRotation(UnityEngine.Quaternion rotation)
    UnityEngine::Quaternion LimitRotation(UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x123B468
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: System.Void RotationLimit::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RotationLimitSpline* New_ctor();
  }; // RootMotion.FinalIK.RotationLimitSpline
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimitSpline*, "RootMotion.FinalIK", "RotationLimitSpline");
#pragma pack(pop)