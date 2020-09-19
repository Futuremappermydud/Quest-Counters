// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: IScriptableRuntimeReflectionSystem
  class IScriptableRuntimeReflectionSystem;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Autogenerated type: UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
  class ScriptableRuntimeReflectionSystemWrapper : public ::Il2CppObject {
    public:
    // private UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem <implementation>k__BackingField
    // Offset: 0x10
    UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* implementation;
    // Creating conversion operator: operator UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*
    constexpr operator UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*() const noexcept {
      return implementation;
    }
    // UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem get_implementation()
    // Offset: 0x1312F7C
    UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* get_implementation();
    // System.Void set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem value)
    // Offset: 0x1312F84
    void set_implementation(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value);
    // private System.Void Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(out System.Boolean result)
    // Offset: 0x1312F8C
    void Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(bool& result);
    // public System.Void .ctor()
    // Offset: 0x1312F74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ScriptableRuntimeReflectionSystemWrapper* New_ctor();
  }; // UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemWrapper");
#pragma pack(pop)