// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: PlayerAllOverallStatsData
  class PlayerAllOverallStatsData;
  // Forward declaring type: PlayerLevelStatsData
  class PlayerLevelStatsData;
  // Forward declaring type: PlayerMissionStatsData
  class PlayerMissionStatsData;
  // Forward declaring type: ColorSchemesSettings
  class ColorSchemesSettings;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: MissionHelpSO
  class MissionHelpSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerData
  class PlayerData : public ::Il2CppObject {
    public:
    // private System.String <playerId>k__BackingField
    // Offset: 0x10
    ::Il2CppString* playerId;
    // private System.String <playerName>k__BackingField
    // Offset: 0x18
    ::Il2CppString* playerName;
    // private System.Boolean <shouldShowTutorialPrompt>k__BackingField
    // Offset: 0x20
    bool shouldShowTutorialPrompt;
    // private System.Boolean <shouldShow360Warning>k__BackingField
    // Offset: 0x21
    bool shouldShow360Warning;
    // private System.Boolean <agreedToEula>k__BackingField
    // Offset: 0x22
    bool agreedToEula;
    // private BeatmapDifficulty <lastSelectedBeatmapDifficulty>k__BackingField
    // Offset: 0x24
    GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;
    // private BeatmapCharacteristicSO <lastSelectedBeatmapCharacteristic>k__BackingField
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic;
    // private GameplayModifiers <gameplayModifiers>k__BackingField
    // Offset: 0x30
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // private PlayerSpecificSettings <playerSpecificSettings>k__BackingField
    // Offset: 0x38
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // private PracticeSettings <practiceSettings>k__BackingField
    // Offset: 0x40
    GlobalNamespace::PracticeSettings* practiceSettings;
    // private PlayerAllOverallStatsData <playerAllOverallStatsData>k__BackingField
    // Offset: 0x48
    GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData;
    // private System.Collections.Generic.List`1<PlayerLevelStatsData> <levelsStatsData>k__BackingField
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData;
    // private System.Collections.Generic.List`1<PlayerMissionStatsData> <missionsStatsData>k__BackingField
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData;
    // private System.Collections.Generic.List`1<System.String> <showedMissionHelpIds>k__BackingField
    // Offset: 0x60
    System::Collections::Generic::List_1<::Il2CppString*>* showedMissionHelpIds;
    // private System.Collections.Generic.List`1<System.String> <guestPlayerNames>k__BackingField
    // Offset: 0x68
    System::Collections::Generic::List_1<::Il2CppString*>* guestPlayerNames;
    // private ColorSchemesSettings <colorSchemesSettings>k__BackingField
    // Offset: 0x70
    GlobalNamespace::ColorSchemesSettings* colorSchemesSettings;
    // private OverrideEnvironmentSettings <overrideEnvironmentSettings>k__BackingField
    // Offset: 0x78
    GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings;
    // private System.Collections.Generic.HashSet`1<System.String> <favoritesLevelIds>k__BackingField
    // Offset: 0x80
    System::Collections::Generic::HashSet_1<::Il2CppString*>* favoritesLevelIds;
    // private System.Action favoriteLevelsSetDidChangeEvent
    // Offset: 0x88
    System::Action* favoriteLevelsSetDidChangeEvent;
    // static field const value: static public System.Int32 kMaxGuestPlayers
    static constexpr const int kMaxGuestPlayers = 10;
    // Get static field: static public System.Int32 kMaxGuestPlayers
    static int _get_kMaxGuestPlayers();
    // Set static field: static public System.Int32 kMaxGuestPlayers
    static void _set_kMaxGuestPlayers(int value);
    // public System.String get_playerId()
    // Offset: 0xBDA52C
    ::Il2CppString* get_playerId();
    // private System.Void set_playerId(System.String value)
    // Offset: 0xBDA534
    void set_playerId(::Il2CppString* value);
    // public System.String get_playerName()
    // Offset: 0xBDA53C
    ::Il2CppString* get_playerName();
    // private System.Void set_playerName(System.String value)
    // Offset: 0xBDA544
    void set_playerName(::Il2CppString* value);
    // public System.Boolean get_shouldShowTutorialPrompt()
    // Offset: 0xBDA54C
    bool get_shouldShowTutorialPrompt();
    // private System.Void set_shouldShowTutorialPrompt(System.Boolean value)
    // Offset: 0xBDA554
    void set_shouldShowTutorialPrompt(bool value);
    // public System.Boolean get_shouldShow360Warning()
    // Offset: 0xBDA560
    bool get_shouldShow360Warning();
    // private System.Void set_shouldShow360Warning(System.Boolean value)
    // Offset: 0xBDA568
    void set_shouldShow360Warning(bool value);
    // public System.Boolean get_agreedToEula()
    // Offset: 0xBDA574
    bool get_agreedToEula();
    // private System.Void set_agreedToEula(System.Boolean value)
    // Offset: 0xBDA57C
    void set_agreedToEula(bool value);
    // public BeatmapDifficulty get_lastSelectedBeatmapDifficulty()
    // Offset: 0xBDA588
    GlobalNamespace::BeatmapDifficulty get_lastSelectedBeatmapDifficulty();
    // private System.Void set_lastSelectedBeatmapDifficulty(BeatmapDifficulty value)
    // Offset: 0xBDA590
    void set_lastSelectedBeatmapDifficulty(GlobalNamespace::BeatmapDifficulty value);
    // public BeatmapCharacteristicSO get_lastSelectedBeatmapCharacteristic()
    // Offset: 0xBDA598
    GlobalNamespace::BeatmapCharacteristicSO* get_lastSelectedBeatmapCharacteristic();
    // private System.Void set_lastSelectedBeatmapCharacteristic(BeatmapCharacteristicSO value)
    // Offset: 0xBDA5A0
    void set_lastSelectedBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0xBDA5A8
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // private System.Void set_gameplayModifiers(GameplayModifiers value)
    // Offset: 0xBDA5B0
    void set_gameplayModifiers(GlobalNamespace::GameplayModifiers* value);
    // public PlayerSpecificSettings get_playerSpecificSettings()
    // Offset: 0xBDA5B8
    GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();
    // private System.Void set_playerSpecificSettings(PlayerSpecificSettings value)
    // Offset: 0xBDA5C0
    void set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings* value);
    // public PracticeSettings get_practiceSettings()
    // Offset: 0xBDA5C8
    GlobalNamespace::PracticeSettings* get_practiceSettings();
    // private System.Void set_practiceSettings(PracticeSettings value)
    // Offset: 0xBDA5D0
    void set_practiceSettings(GlobalNamespace::PracticeSettings* value);
    // public PlayerAllOverallStatsData get_playerAllOverallStatsData()
    // Offset: 0xBDA5D8
    GlobalNamespace::PlayerAllOverallStatsData* get_playerAllOverallStatsData();
    // private System.Void set_playerAllOverallStatsData(PlayerAllOverallStatsData value)
    // Offset: 0xBDA5E0
    void set_playerAllOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData* value);
    // public System.Collections.Generic.List`1<PlayerLevelStatsData> get_levelsStatsData()
    // Offset: 0xBDA5E8
    System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData*>* get_levelsStatsData();
    // private System.Void set_levelsStatsData(System.Collections.Generic.List`1<PlayerLevelStatsData> value)
    // Offset: 0xBDA5F0
    void set_levelsStatsData(System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData*>* value);
    // public System.Collections.Generic.List`1<PlayerMissionStatsData> get_missionsStatsData()
    // Offset: 0xBDA5F8
    System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData*>* get_missionsStatsData();
    // private System.Void set_missionsStatsData(System.Collections.Generic.List`1<PlayerMissionStatsData> value)
    // Offset: 0xBDA600
    void set_missionsStatsData(System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData*>* value);
    // public System.Collections.Generic.List`1<System.String> get_showedMissionHelpIds()
    // Offset: 0xBDA608
    System::Collections::Generic::List_1<::Il2CppString*>* get_showedMissionHelpIds();
    // private System.Void set_showedMissionHelpIds(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0xBDA610
    void set_showedMissionHelpIds(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // public System.Collections.Generic.List`1<System.String> get_guestPlayerNames()
    // Offset: 0xBDA618
    System::Collections::Generic::List_1<::Il2CppString*>* get_guestPlayerNames();
    // private System.Void set_guestPlayerNames(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0xBDA620
    void set_guestPlayerNames(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // public ColorSchemesSettings get_colorSchemesSettings()
    // Offset: 0xBDA628
    GlobalNamespace::ColorSchemesSettings* get_colorSchemesSettings();
    // private System.Void set_colorSchemesSettings(ColorSchemesSettings value)
    // Offset: 0xBDA630
    void set_colorSchemesSettings(GlobalNamespace::ColorSchemesSettings* value);
    // public OverrideEnvironmentSettings get_overrideEnvironmentSettings()
    // Offset: 0xBDA638
    GlobalNamespace::OverrideEnvironmentSettings* get_overrideEnvironmentSettings();
    // private System.Void set_overrideEnvironmentSettings(OverrideEnvironmentSettings value)
    // Offset: 0xBDA640
    void set_overrideEnvironmentSettings(GlobalNamespace::OverrideEnvironmentSettings* value);
    // public System.Collections.Generic.HashSet`1<System.String> get_favoritesLevelIds()
    // Offset: 0xBDA648
    System::Collections::Generic::HashSet_1<::Il2CppString*>* get_favoritesLevelIds();
    // private System.Void set_favoritesLevelIds(System.Collections.Generic.HashSet`1<System.String> value)
    // Offset: 0xBDA650
    void set_favoritesLevelIds(System::Collections::Generic::HashSet_1<::Il2CppString*>* value);
    // public System.Void add_favoriteLevelsSetDidChangeEvent(System.Action value)
    // Offset: 0xBDA658
    void add_favoriteLevelsSetDidChangeEvent(System::Action* value);
    // public System.Void remove_favoriteLevelsSetDidChangeEvent(System.Action value)
    // Offset: 0xBDA6FC
    void remove_favoriteLevelsSetDidChangeEvent(System::Action* value);
    // public System.Void .ctor(System.String playerId, System.String playerName, BeatmapCharacteristicSO lastSelectedBeatmapCharacteristic, ColorSchemesSettings colorSchemesSettings, OverrideEnvironmentSettings overrideEnvironmentSettings)
    // Offset: 0xBDA7A0
    static PlayerData* New_ctor(::Il2CppString* playerId, ::Il2CppString* playerName, GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic, GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings);
    // public System.Void .ctor(System.String playerId, System.String playerName, System.Boolean shouldShowTutorialPrompt, System.Boolean shouldShow360Warning, System.Boolean agreedToEula, BeatmapDifficulty lastSelectedBeatmapDifficulty, BeatmapCharacteristicSO lastSelectedBeatmapCharacteristic, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, PlayerAllOverallStatsData playerAllOverallStatsData, System.Collections.Generic.List`1<PlayerLevelStatsData> levelsStatsData, System.Collections.Generic.List`1<PlayerMissionStatsData> missionsStatsData, System.Collections.Generic.List`1<System.String> showedMissionHelpIds, System.Collections.Generic.List`1<System.String> guestPlayerNames, ColorSchemesSettings colorSchemesSettings, OverrideEnvironmentSettings overrideEnvironmentSettings, System.Collections.Generic.List`1<System.String> favoritesLevelIds)
    // Offset: 0xBDA920
    static PlayerData* New_ctor(::Il2CppString* playerId, ::Il2CppString* playerName, bool shouldShowTutorialPrompt, bool shouldShow360Warning, bool agreedToEula, GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData, System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData, System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData, System::Collections::Generic::List_1<::Il2CppString*>* showedMissionHelpIds, System::Collections::Generic::List_1<::Il2CppString*>* guestPlayerNames, GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, System::Collections::Generic::List_1<::Il2CppString*>* favoritesLevelIds);
    // public PlayerLevelStatsData GetPlayerLevelStatsData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xBDAB2C
    GlobalNamespace::PlayerLevelStatsData* GetPlayerLevelStatsData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public PlayerLevelStatsData GetPlayerLevelStatsData(System.String levelId, BeatmapDifficulty difficulty, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xBDADA8
    GlobalNamespace::PlayerLevelStatsData* GetPlayerLevelStatsData(::Il2CppString* levelId, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public PlayerMissionStatsData GetPlayerMissionStatsData(System.String missionId)
    // Offset: 0xBDAFCC
    GlobalNamespace::PlayerMissionStatsData* GetPlayerMissionStatsData(::Il2CppString* missionId);
    // public System.Boolean WasMissionHelpShowed(MissionHelpSO missionHelp)
    // Offset: 0xBDB18C
    bool WasMissionHelpShowed(GlobalNamespace::MissionHelpSO* missionHelp);
    // public System.Void MissionHelpWasShowed(MissionHelpSO missionHelp)
    // Offset: 0xBDB1F8
    void MissionHelpWasShowed(GlobalNamespace::MissionHelpSO* missionHelp);
    // public System.Boolean IsLevelUserFavorite(IPreviewBeatmapLevel level)
    // Offset: 0xBDB294
    bool IsLevelUserFavorite(GlobalNamespace::IPreviewBeatmapLevel* level);
    // public System.Void AddLevelToFavorites(IPreviewBeatmapLevel level)
    // Offset: 0xBDB36C
    void AddLevelToFavorites(GlobalNamespace::IPreviewBeatmapLevel* level);
    // public System.Void RemoveLevelFromFavorites(IPreviewBeatmapLevel level)
    // Offset: 0xBDB474
    void RemoveLevelFromFavorites(GlobalNamespace::IPreviewBeatmapLevel* level);
    // public System.Void MarkTutorialAsShown()
    // Offset: 0xBDB57C
    void MarkTutorialAsShown();
    // public System.Void Mark360WarningAsShown()
    // Offset: 0xBDB584
    void Mark360WarningAsShown();
    // public System.Void MarkEulaAsAgreed()
    // Offset: 0xBDB58C
    void MarkEulaAsAgreed();
    // public System.Void AddGuestPlayerName(System.String playerName)
    // Offset: 0xBDB598
    void AddGuestPlayerName(::Il2CppString* playerName);
    // public System.Void DeleteAllGuestPlayers()
    // Offset: 0xBDB6F0
    void DeleteAllGuestPlayers();
    // public System.Void SetLastSelectedBeatmapDifficulty(BeatmapDifficulty beatmapDifficulty)
    // Offset: 0xBDB748
    void SetLastSelectedBeatmapDifficulty(GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // public System.Void SetLastSelectedBeatmapCharacteristic(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xBDB750
    void SetLastSelectedBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
  }; // PlayerData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerData*, "", "PlayerData");
#pragma pack(pop)