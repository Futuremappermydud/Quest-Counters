// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel
#include "UnityEngine/ProBuilder/MeshOperations/Bevel.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_1
  class Bevel::$$c__DisplayClass0_1 : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.EdgeLookup lup
    // Offset: 0x10
    UnityEngine::ProBuilder::EdgeLookup lup;
    // Creating conversion operator: operator UnityEngine::ProBuilder::EdgeLookup
    constexpr operator UnityEngine::ProBuilder::EdgeLookup() const noexcept {
      return lup;
    }
    // System.Boolean <BevelEdges>b__4(UnityEngine.ProBuilder.WingedEdge x)
    // Offset: 0xF08548
    bool $BevelEdges$b__4(UnityEngine::ProBuilder::WingedEdge* x);
    // public System.Void .ctor()
    // Offset: 0xF07740
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Bevel::$$c__DisplayClass0_1* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_1");
#pragma pack(pop)