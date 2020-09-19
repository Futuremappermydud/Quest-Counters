// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AsyncOperation
#include "UnityEngine/AsyncOperation.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundle
  class AssetBundle;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AssetBundleCreateRequest
  class AssetBundleCreateRequest : public UnityEngine::AsyncOperation {
    public:
    // public UnityEngine.AssetBundle get_assetBundle()
    // Offset: 0x197F15C
    UnityEngine::AssetBundle* get_assetBundle();
    // public System.Void .ctor()
    // Offset: 0x197F19C
    // Implemented from: UnityEngine.AsyncOperation
    // Base method: System.Void AsyncOperation::.ctor()
    // Base method: System.Void YieldInstruction::.ctor()
    // Base method: System.Void Object::.ctor()
    static AssetBundleCreateRequest* New_ctor();
  }; // UnityEngine.AssetBundleCreateRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundleCreateRequest*, "UnityEngine", "AssetBundleCreateRequest");
#pragma pack(pop)
