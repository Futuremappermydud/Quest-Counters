// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Autogenerated type: LIV.SDK.Unity.LIV
  class LIV : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Transform TrackedSpaceOrigin
    // Offset: 0x18
    UnityEngine::Transform* TrackedSpaceOrigin;
    // public UnityEngine.Camera HMDCamera
    // Offset: 0x20
    UnityEngine::Camera* HMDCamera;
    // public System.Boolean DisableStandardAssets
    // Offset: 0x28
    bool DisableStandardAssets;
    // public UnityEngine.LayerMask SpectatorLayerMask
    // Offset: 0x2C
    UnityEngine::LayerMask SpectatorLayerMask;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0x1983C24
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LIV* New_ctor();
  }; // LIV.SDK.Unity.LIV
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::LIV*, "LIV.SDK.Unity", "LIV");
#pragma pack(pop)
