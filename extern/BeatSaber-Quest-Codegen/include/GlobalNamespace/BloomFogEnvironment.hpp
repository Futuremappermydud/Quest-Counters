// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomFogEnvironment
  class BloomFogEnvironment : public UnityEngine::MonoBehaviour {
    public:
    // private BloomFogSO _bloomFog
    // Offset: 0x18
    GlobalNamespace::BloomFogSO* bloomFog;
    // private BloomFogEnvironmentParams _fog0Params
    // Offset: 0x20
    GlobalNamespace::BloomFogEnvironmentParams* fog0Params;
    // private BloomFogEnvironmentParams _fog1Params
    // Offset: 0x28
    GlobalNamespace::BloomFogEnvironmentParams* fog1Params;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1824BE0
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x1824C58
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomFogEnvironment* New_ctor();
  }; // BloomFogEnvironment
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFogEnvironment*, "", "BloomFogEnvironment");
#pragma pack(pop)