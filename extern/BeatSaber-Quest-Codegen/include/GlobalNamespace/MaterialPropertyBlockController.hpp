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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MaterialPropertyBlockController
  class MaterialPropertyBlockController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Renderer[] _renderers
    // Offset: 0x18
    ::Array<UnityEngine::Renderer*>* renderers;
    // private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    // Offset: 0x20
    UnityEngine::MaterialPropertyBlock* materialPropertyBlock;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Renderer[] get_renderers()
    // Offset: 0x182D3A0
    ::Array<UnityEngine::Renderer*>* get_renderers();
    // public UnityEngine.MaterialPropertyBlock get_materialPropertyBlock()
    // Offset: 0x1829974
    UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock();
    // public System.Void ApplyChanges()
    // Offset: 0x18299EC
    void ApplyChanges();
    // public System.Void .ctor()
    // Offset: 0x182D3A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MaterialPropertyBlockController* New_ctor();
  }; // MaterialPropertyBlockController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockController*, "", "MaterialPropertyBlockController");
#pragma pack(pop)
