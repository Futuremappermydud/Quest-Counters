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
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.Amplifier
  class Amplifier : public RootMotion::FinalIK::OffsetModifier {
    public:
    // Nested type: RootMotion::FinalIK::Amplifier::Body
    class Body;
    // public RootMotion.FinalIK.Amplifier/Body[] bodies
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::Amplifier::Body*>* bodies;
    // protected override System.Void OnModifyOffset()
    // Offset: 0x13ACBA8
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
    // public System.Void .ctor()
    // Offset: 0x13AD14C
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Amplifier* New_ctor();
  }; // RootMotion.FinalIK.Amplifier
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Amplifier*, "RootMotion.FinalIK", "Amplifier");
#pragma pack(pop)
