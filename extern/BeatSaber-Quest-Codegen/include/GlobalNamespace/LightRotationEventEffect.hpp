// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LightRotationEventEffect
  class LightRotationEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // private BeatmapEventType _event
    // Offset: 0x18
    GlobalNamespace::BeatmapEventType event;
    // private UnityEngine.Vector3 _rotationVector
    // Offset: 0x1C
    UnityEngine::Vector3 rotationVector;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private UnityEngine.Transform _transform
    // Offset: 0x30
    UnityEngine::Transform* transform;
    // private UnityEngine.Quaternion _startRotation
    // Offset: 0x38
    UnityEngine::Quaternion startRotation;
    // private System.Single _rotationSpeed
    // Offset: 0x48
    float rotationSpeed;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kSpeedMultiplier
    static constexpr const float kSpeedMultiplier = 20;
    // Get static field: static private System.Single kSpeedMultiplier
    static float _get_kSpeedMultiplier();
    // Set static field: static private System.Single kSpeedMultiplier
    static void _set_kSpeedMultiplier(float value);
    // protected System.Void Start()
    // Offset: 0xBFA310
    void Start();
    // protected System.Void Update()
    // Offset: 0xBFA3E8
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0xBFA450
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0xBFA528
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0xBFA664
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LightRotationEventEffect* New_ctor();
  }; // LightRotationEventEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightRotationEventEffect*, "", "LightRotationEventEffect");
#pragma pack(pop)
