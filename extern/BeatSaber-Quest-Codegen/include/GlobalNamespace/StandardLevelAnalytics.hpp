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
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelAnalytics
  class StandardLevelAnalytics : public UnityEngine::MonoBehaviour {
    public:
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    // Offset: 0x18
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;
    // private IDifficultyBeatmap _difficultyBeatmap
    // Offset: 0x20
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // private IAnalyticsModel _analyticsModel
    // Offset: 0x28
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xB9D8A4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xB9D9D8
    void OnDestroy();
    // private System.Void HandleStandardLevelDidFinishEvent(StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0xB9DB0C
    void HandleStandardLevelDidFinishEvent(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0xB9DDA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandardLevelAnalytics* New_ctor();
  }; // StandardLevelAnalytics
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelAnalytics*, "", "StandardLevelAnalytics");
#pragma pack(pop)
