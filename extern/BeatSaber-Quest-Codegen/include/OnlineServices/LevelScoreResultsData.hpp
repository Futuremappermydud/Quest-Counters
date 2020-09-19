// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.LevelScoreResultsData
  struct LevelScoreResultsData : public System::ValueType {
    public:
    // public readonly IDifficultyBeatmap difficultyBeatmap
    // Offset: 0x0
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // public readonly System.Int32 rawScore
    // Offset: 0x8
    int rawScore;
    // public readonly System.Int32 modifiedScore
    // Offset: 0xC
    int modifiedScore;
    // public readonly System.Boolean fullCombo
    // Offset: 0x10
    bool fullCombo;
    // public readonly System.Int32 goodCutsCount
    // Offset: 0x14
    int goodCutsCount;
    // public readonly System.Int32 badCutsCount
    // Offset: 0x18
    int badCutsCount;
    // public readonly System.Int32 missedCount
    // Offset: 0x1C
    int missedCount;
    // public readonly System.Int32 maxCombo
    // Offset: 0x20
    int maxCombo;
    // public readonly GameplayModifiers gameplayModifiers
    // Offset: 0x28
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Creating value type constructor for type: LevelScoreResultsData
    constexpr LevelScoreResultsData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, int rawScore_ = {}, int modifiedScore_ = {}, bool fullCombo_ = {}, int goodCutsCount_ = {}, int badCutsCount_ = {}, int missedCount_ = {}, int maxCombo_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}) noexcept : difficultyBeatmap{difficultyBeatmap_}, rawScore{rawScore_}, modifiedScore{modifiedScore_}, fullCombo{fullCombo_}, goodCutsCount{goodCutsCount_}, badCutsCount{badCutsCount_}, missedCount{missedCount_}, maxCombo{maxCombo_}, gameplayModifiers{gameplayModifiers_} {}
    // public System.Void .ctor(IDifficultyBeatmap difficultyBeatmap, System.Int32 rawScore, System.Int32 modifiedScore, System.Boolean fullCombo, System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCount, System.Int32 maxCombo, GameplayModifiers gameplayModifiers)
    // Offset: 0xA2C108
    static LevelScoreResultsData* New_ctor(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, int rawScore, int modifiedScore, bool fullCombo, int goodCutsCount, int badCutsCount, int missedCount, int maxCombo, GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public override System.String ToString()
    // Offset: 0xA2C184
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // OnlineServices.LevelScoreResultsData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::LevelScoreResultsData, "OnlineServices", "LevelScoreResultsData");
#pragma pack(pop)