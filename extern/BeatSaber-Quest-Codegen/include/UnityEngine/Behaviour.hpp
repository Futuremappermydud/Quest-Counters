// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Behaviour
  class Behaviour : public UnityEngine::Component {
    public:
    // public System.Boolean get_enabled()
    // Offset: 0x1306A50
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x1306A90
    void set_enabled(bool value);
    // public System.Boolean get_isActiveAndEnabled()
    // Offset: 0x1306AE0
    bool get_isActiveAndEnabled();
    // public System.Void .ctor()
    // Offset: 0x1306B20
    // Implemented from: UnityEngine.Component
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Behaviour* New_ctor();
  }; // UnityEngine.Behaviour
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Behaviour*, "UnityEngine", "Behaviour");
#pragma pack(pop)
