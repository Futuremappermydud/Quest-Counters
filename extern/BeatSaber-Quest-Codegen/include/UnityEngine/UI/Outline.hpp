// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Shadow
#include "UnityEngine/UI/Shadow.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.Outline
  class Outline : public UnityEngine::UI::Shadow {
    public:
    // protected System.Void .ctor()
    // Offset: 0x1206A74
    // Implemented from: UnityEngine.UI.Shadow
    // Base method: System.Void Shadow::.ctor()
    // Base method: System.Void BaseMeshEffect::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Outline* New_ctor();
    // public override System.Void ModifyMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x1206AF8
    // Implemented from: UnityEngine.UI.Shadow
    // Base method: System.Void Shadow::ModifyMesh(UnityEngine.UI.VertexHelper vh)
    void ModifyMesh(UnityEngine::UI::VertexHelper* vh);
  }; // UnityEngine.UI.Outline
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Outline*, "UnityEngine.UI", "Outline");
#pragma pack(pop)
