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
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: MainAudioEffects
  class MainAudioEffects;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HeadObstacleLowPassAudioEffect
  class HeadObstacleLowPassAudioEffect : public UnityEngine::MonoBehaviour {
    public:
    // private PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Offset: 0x18
    GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // private MainAudioEffects _mainAudioEffects
    // Offset: 0x20
    GlobalNamespace::MainAudioEffects* mainAudioEffects;
    // private System.Boolean _headWasInObstacle
    // Offset: 0x28
    bool headWasInObstacle;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Update()
    // Offset: 0xB43870
    void Update();
    // public System.Void .ctor()
    // Offset: 0xB43918
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HeadObstacleLowPassAudioEffect* New_ctor();
  }; // HeadObstacleLowPassAudioEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HeadObstacleLowPassAudioEffect*, "", "HeadObstacleLowPassAudioEffect");
#pragma pack(pop)
