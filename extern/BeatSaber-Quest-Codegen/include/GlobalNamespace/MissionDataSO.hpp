// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: MissionHelpSO
  class MissionHelpSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionDataSO
  class MissionDataSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BeatmapLevelSO _level
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelSO* level;
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Offset: 0x20
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // private BeatmapDifficulty _beatmapDifficulty
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // private MissionObjective[] _missionObjectives
    // Offset: 0x30
    ::Array<GlobalNamespace::MissionObjective*>* missionObjectives;
    // private GameplayModifiers _gameplayModifiers
    // Offset: 0x38
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // private MissionHelpSO _missionHelp
    // Offset: 0x40
    GlobalNamespace::MissionHelpSO* missionHelp;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MissionObjective[] get_missionObjectives()
    // Offset: 0xC04364
    ::Array<GlobalNamespace::MissionObjective*>* get_missionObjectives();
    // public BeatmapLevelSO get_level()
    // Offset: 0xC0436C
    GlobalNamespace::BeatmapLevelSO* get_level();
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0xC04374
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public BeatmapDifficulty get_beatmapDifficulty()
    // Offset: 0xC0437C
    GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0xC04384
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // public MissionHelpSO get_missionHelp()
    // Offset: 0xC0438C
    GlobalNamespace::MissionHelpSO* get_missionHelp();
    // private System.Void OnValidate()
    // Offset: 0xC04394
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0xC04438
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionDataSO* New_ctor();
  }; // MissionDataSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionDataSO*, "", "MissionDataSO");
#pragma pack(pop)
