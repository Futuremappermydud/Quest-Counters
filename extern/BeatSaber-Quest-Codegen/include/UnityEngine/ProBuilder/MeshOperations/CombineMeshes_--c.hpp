// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.CombineMeshes
#include "UnityEngine/ProBuilder/MeshOperations/CombineMeshes.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.CombineMeshes/<>c
  class CombineMeshes::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.CombineMeshes/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.CombineMeshes/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__5_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, int>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__5_0
    static void _set_$$9__5_0(System::Func_2<UnityEngine::ProBuilder::Face*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0xF0B090
    static void _cctor();
    // System.Int32 <SplitByMaxVertexCount>b__5_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0xF0B100
    int $SplitByMaxVertexCount$b__5_0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0xF0B0F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CombineMeshes::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.CombineMeshes/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::CombineMeshes::$$c*, "UnityEngine.ProBuilder.MeshOperations", "CombineMeshes/<>c");
#pragma pack(pop)
