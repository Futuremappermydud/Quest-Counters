// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelRestartController
#include "GlobalNamespace/ILevelRestartController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelRestartController
  class StandardLevelRestartController : public UnityEngine::MonoBehaviour, public GlobalNamespace::ILevelRestartController {
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    // Offset: 0x18
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData;
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Offset: 0x20
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void RestartLevel()
    // Offset: 0xBA5C98
    // Implemented from: ILevelRestartController
    // Base method: System.Void ILevelRestartController::RestartLevel()
    void RestartLevel();
    // public System.Void .ctor()
    // Offset: 0xBA5CE0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandardLevelRestartController* New_ctor();
  }; // StandardLevelRestartController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelRestartController*, "", "StandardLevelRestartController");
#pragma pack(pop)
