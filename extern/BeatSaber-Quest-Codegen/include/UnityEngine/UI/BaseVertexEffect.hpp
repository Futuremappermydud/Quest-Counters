// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.BaseVertexEffect
  class BaseVertexEffect : public ::Il2CppObject {
    public:
    // public System.Void ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex> vertices)
    // Offset: 0xFFFFFFFF
    void ModifyVertices(System::Collections::Generic::List_1<UnityEngine::UIVertex>* vertices);
    // protected System.Void .ctor()
    // Offset: 0xE06A1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BaseVertexEffect* New_ctor();
  }; // UnityEngine.UI.BaseVertexEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::BaseVertexEffect*, "UnityEngine.UI", "BaseVertexEffect");
#pragma pack(pop)
