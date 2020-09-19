// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelDataExtensions
  class BeatmapLevelDataExtensions : public ::Il2CppObject {
    public:
    // static public IDifficultyBeatmap GetDifficultyBeatmap(IBeatmapLevelData beatmapLevelData, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty difficulty)
    // Offset: 0xB83E98
    static GlobalNamespace::IDifficultyBeatmap* GetDifficultyBeatmap(GlobalNamespace::IBeatmapLevelData* beatmapLevelData, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty difficulty);
    // static public IDifficultyBeatmapSet GetDifficultyBeatmapSet(IBeatmapLevelData beatmapLevelData, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xB96070
    static GlobalNamespace::IDifficultyBeatmapSet* GetDifficultyBeatmapSet(GlobalNamespace::IBeatmapLevelData* beatmapLevelData, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
  }; // BeatmapLevelDataExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataExtensions*, "", "BeatmapLevelDataExtensions");
#pragma pack(pop)