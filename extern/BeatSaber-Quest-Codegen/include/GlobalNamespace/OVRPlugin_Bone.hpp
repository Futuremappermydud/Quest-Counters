// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/BoneId
#include "GlobalNamespace/OVRPlugin_BoneId.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Bone
  struct OVRPlugin::Bone : public System::ValueType {
    public:
    // public OVRPlugin/BoneId Id
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::BoneId Id;
    // public System.Int16 ParentBoneIndex
    // Offset: 0x4
    int16_t ParentBoneIndex;
    // public OVRPlugin/Posef Pose
    // Offset: 0x8
    GlobalNamespace::OVRPlugin::Posef Pose;
    // Creating value type constructor for type: Bone
    constexpr Bone(GlobalNamespace::OVRPlugin::BoneId Id_ = {}, int16_t ParentBoneIndex_ = {}, GlobalNamespace::OVRPlugin::Posef Pose_ = {}) noexcept : Id{Id_}, ParentBoneIndex{ParentBoneIndex_}, Pose{Pose_} {}
  }; // OVRPlugin/Bone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Bone, "", "OVRPlugin/Bone");
#pragma pack(pop)
