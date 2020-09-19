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
  // Forward declaring type: PlayerController
  class PlayerController;
  // Forward declaring type: Saber
  class Saber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberClashChecker
  class SaberClashChecker : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _minDistanceToClash
    // Offset: 0x18
    float minDistanceToClash;
    // private PlayerController _playerController
    // Offset: 0x20
    GlobalNamespace::PlayerController* playerController;
    // private System.Boolean <sabersAreClashing>k__BackingField
    // Offset: 0x28
    bool sabersAreClashing;
    // private UnityEngine.Vector3 <clashingPoint>k__BackingField
    // Offset: 0x2C
    UnityEngine::Vector3 clashingPoint;
    // private Saber _leftSaber
    // Offset: 0x38
    GlobalNamespace::Saber* leftSaber;
    // private Saber _rightSaber
    // Offset: 0x40
    GlobalNamespace::Saber* rightSaber;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_sabersAreClashing()
    // Offset: 0xC27FEC
    bool get_sabersAreClashing();
    // private System.Void set_sabersAreClashing(System.Boolean value)
    // Offset: 0xC27FF4
    void set_sabersAreClashing(bool value);
    // public UnityEngine.Vector3 get_clashingPoint()
    // Offset: 0xC28000
    UnityEngine::Vector3 get_clashingPoint();
    // private System.Void set_clashingPoint(UnityEngine.Vector3 value)
    // Offset: 0xC2800C
    void set_clashingPoint(UnityEngine::Vector3 value);
    // protected System.Void Start()
    // Offset: 0xC28018
    void Start();
    // protected System.Void Update()
    // Offset: 0xC28068
    void Update();
    // protected System.Void OnDisable()
    // Offset: 0xC286F4
    void OnDisable();
    // private System.Single SegmentToSegmentDist(UnityEngine.Vector3 fromA, UnityEngine.Vector3 toA, UnityEngine.Vector3 fromB, UnityEngine.Vector3 toB, out UnityEngine.Vector3 inbetweenPoint)
    // Offset: 0xC28248
    float SegmentToSegmentDist(UnityEngine::Vector3 fromA, UnityEngine::Vector3 toA, UnityEngine::Vector3 fromB, UnityEngine::Vector3 toB, UnityEngine::Vector3& inbetweenPoint);
    // public System.Void .ctor()
    // Offset: 0xC286FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaberClashChecker* New_ctor();
  }; // SaberClashChecker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberClashChecker*, "", "SaberClashChecker");
#pragma pack(pop)