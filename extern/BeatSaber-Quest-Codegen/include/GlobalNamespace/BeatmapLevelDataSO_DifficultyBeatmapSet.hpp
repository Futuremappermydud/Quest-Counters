// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelDataSO
#include "GlobalNamespace/BeatmapLevelDataSO.hpp"
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelDataSO/DifficultyBeatmapSet
  class BeatmapLevelDataSO::DifficultyBeatmapSet : public ::Il2CppObject {
    public:
    // private System.String _beatmapCharacteristicSerializedName
    // Offset: 0x10
    ::Il2CppString* beatmapCharacteristicSerializedName;
    // private BeatmapLevelSO/DifficultyBeatmap[] _difficultyBeatmaps
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps;
    // public System.String get_beatmapCharacteristicSerializedName()
    // Offset: 0xB703BC
    ::Il2CppString* get_beatmapCharacteristicSerializedName();
    // public BeatmapLevelSO/DifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0xB703C4
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* get_difficultyBeatmaps();
    // public System.Void .ctor(System.String beatmapCharacteristicSerializedName, BeatmapLevelSO/DifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0xB703CC
    static BeatmapLevelDataSO::DifficultyBeatmapSet* New_ctor(::Il2CppString* beatmapCharacteristicSerializedName, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps);
  }; // BeatmapLevelDataSO/DifficultyBeatmapSet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*, "", "BeatmapLevelDataSO/DifficultyBeatmapSet");
#pragma pack(pop)
