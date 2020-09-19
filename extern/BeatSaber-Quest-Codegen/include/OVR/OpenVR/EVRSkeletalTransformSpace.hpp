// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.EVRSkeletalTransformSpace
  struct EVRSkeletalTransformSpace : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EVRSkeletalTransformSpace
    constexpr EVRSkeletalTransformSpace(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRSkeletalTransformSpace Model
    static constexpr const int Model = 0;
    // Get static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Model
    static OVR::OpenVR::EVRSkeletalTransformSpace _get_Model();
    // Set static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Model
    static void _set_Model(OVR::OpenVR::EVRSkeletalTransformSpace value);
    // static field const value: static public OVR.OpenVR.EVRSkeletalTransformSpace Parent
    static constexpr const int Parent = 1;
    // Get static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Parent
    static OVR::OpenVR::EVRSkeletalTransformSpace _get_Parent();
    // Set static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Parent
    static void _set_Parent(OVR::OpenVR::EVRSkeletalTransformSpace value);
    // static field const value: static public OVR.OpenVR.EVRSkeletalTransformSpace Additive
    static constexpr const int Additive = 2;
    // Get static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Additive
    static OVR::OpenVR::EVRSkeletalTransformSpace _get_Additive();
    // Set static field: static public OVR.OpenVR.EVRSkeletalTransformSpace Additive
    static void _set_Additive(OVR::OpenVR::EVRSkeletalTransformSpace value);
  }; // OVR.OpenVR.EVRSkeletalTransformSpace
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRSkeletalTransformSpace, "OVR.OpenVR", "EVRSkeletalTransformSpace");
#pragma pack(pop)
