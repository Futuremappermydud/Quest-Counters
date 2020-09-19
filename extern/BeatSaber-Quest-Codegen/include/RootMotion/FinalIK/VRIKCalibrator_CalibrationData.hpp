// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.VRIKCalibrator
#include "RootMotion/FinalIK/VRIKCalibrator.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.VRIKCalibrator/CalibrationData
  class VRIKCalibrator::CalibrationData : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target
    class Target;
    // public System.Single scale
    // Offset: 0x10
    float scale;
    // public RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target head
    // Offset: 0x18
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* head;
    // public RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target leftHand
    // Offset: 0x20
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* leftHand;
    // public RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target rightHand
    // Offset: 0x28
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* rightHand;
    // public RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target pelvis
    // Offset: 0x30
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* pelvis;
    // public RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target leftFoot
    // Offset: 0x38
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* leftFoot;
    // public RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target rightFoot
    // Offset: 0x40
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* rightFoot;
    // public RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target leftLegGoal
    // Offset: 0x48
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* leftLegGoal;
    // public RootMotion.FinalIK.VRIKCalibrator/CalibrationData/Target rightLegGoal
    // Offset: 0x50
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* rightLegGoal;
    // public UnityEngine.Vector3 pelvisTargetRight
    // Offset: 0x58
    UnityEngine::Vector3 pelvisTargetRight;
    // public System.Single pelvisPositionWeight
    // Offset: 0x64
    float pelvisPositionWeight;
    // public System.Single pelvisRotationWeight
    // Offset: 0x68
    float pelvisRotationWeight;
    // public System.Void .ctor()
    // Offset: 0x123F464
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRIKCalibrator::CalibrationData* New_ctor();
  }; // RootMotion.FinalIK.VRIKCalibrator/CalibrationData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKCalibrator::CalibrationData*, "RootMotion.FinalIK", "VRIKCalibrator/CalibrationData");
#pragma pack(pop)
