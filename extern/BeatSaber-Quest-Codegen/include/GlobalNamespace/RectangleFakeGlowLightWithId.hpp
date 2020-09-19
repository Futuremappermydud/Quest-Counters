// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithId
#include "GlobalNamespace/LightWithId.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RectangleFakeGlow
  class RectangleFakeGlow;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RectangleFakeGlowLightWithId
  class RectangleFakeGlowLightWithId : public GlobalNamespace::LightWithId {
    public:
    // private System.Single _minAlpha
    // Offset: 0x2C
    float minAlpha;
    // private System.Single _alphaMul
    // Offset: 0x30
    float alphaMul;
    // private RectangleFakeGlow _rectangleFakeGlow
    // Offset: 0x38
    GlobalNamespace::RectangleFakeGlow* rectangleFakeGlow;
    // public UnityEngine.Color get_color()
    // Offset: 0xC20884
    UnityEngine::Color get_color();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0xC208A4
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0xC208D0
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RectangleFakeGlowLightWithId* New_ctor();
  }; // RectangleFakeGlowLightWithId
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RectangleFakeGlowLightWithId*, "", "RectangleFakeGlowLightWithId");
#pragma pack(pop)