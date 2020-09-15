#include "../include/Main.hpp"
#include "../extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "../extern/beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "../extern/beatsaber-hook/shared/utils/utils.h"
#include "../extern/BeatSaberQuestCustomUI-master/shared/customui.hpp"
using namespace il2cpp_utils;
using namespace CustomUI;

bool _360 = false;

Configuration& getConfig() {
  static Configuration configuration(modInfo);
  return configuration;
}

Logger& getLogger() {
    static Logger logger(modInfo);
    return logger;
}

int oneSaberType;

bool NoHud = false;

int Notes;

MAKE_HOOK_OFFSETLESS(UIStart, void, Il2CppObject* self) {
    UIStart(self);
    if(NoHud) return;
    if(getConfig().config["Accuracy Counter"].GetBool())
    {
        if(getConfig().config["Use Legacy Acc Counter"].GetBool())
        {
            Accuracy_Start(self);
        }
        else
        {
            New_Accuracy_Start(self);
        }
        
    }
    if(getConfig().config["Notes Left / Note Percentage"].GetBool())
    {
        NotesLeft_Start(self);
    }
    if(getConfig().config["Missed Notes Counter"].GetBool())
    {
        Miss_Start(self);
    }
    if(getConfig().config["Hit Notes Counter"].GetBool())
    {
        Hit_Start(self);
    }
    if(getConfig().config["Saber Speed Counter"].GetBool())
    {
        Speed_Start(self);
    }
    if(getConfig().config["Personal Best Counter"].GetBool())
    {
        PB_Start(self);
    }
    if(getConfig().config["Hit Bomb Counter"].GetBool())
    {
        Bomb_Start(self);
    }
    if(getConfig().config["Walls Left / Wall Percentage"].GetBool())
    {
        WallsLeft_Start(self);
    }
    if(getConfig().config["Play Count(er)"].GetBool())
    {
        PC_Start(self);
    }
}

MAKE_HOOK_OFFSETLESS(FinishScore, void, Il2CppObject* self, Il2CppObject* swingRatingCounter) {
    FinishScore(self, swingRatingCounter);
    if(NoHud) return;
    if(Config.useLegacyAcc)
    {
        Accuracy_FinishScore();
    }
    else
    {
        New_Accuracy_FinishScore();
    }
    
}

MAKE_HOOK_OFFSETLESS(RawScore, void, Il2CppObject* noteCutInfo, int* beforeCutRawScore, int* afterCutRawScore, int* cutDistanceRawScore) {
    RawScore(noteCutInfo, beforeCutRawScore, afterCutRawScore, cutDistanceRawScore);
    if(NoHud ) return;
    if(getConfig().config["Use Legacy Acc Counter"].GetBool())
    {
        Accuracy_RawScore(noteCutInfo, beforeCutRawScore, afterCutRawScore, cutDistanceRawScore);
    }
    else
    {
        New_Accuracy_RawScore(noteCutInfo, beforeCutRawScore, afterCutRawScore, cutDistanceRawScore);
    }
}

MAKE_HOOK_OFFSETLESS(SongStart, void, Il2CppObject* self, Il2CppObject* difficultyBeatmap, Il2CppObject* overrideEnvironmentSettings, Il2CppObject* overrideColorScheme, Il2CppObject* gameplayModifiers, Il2CppObject* playerSpecificSettings, Il2CppObject* practiceSettings, Il2CppString* backButtonText, bool useTestNoteCutSoundEffects) {
    ToggleButton.destroy();
    SwitchButton.destroy();

    NotesLeft_GetNotes(difficultyBeatmap);
    WallsLeft_GetWalls(difficultyBeatmap);
    NoHud = *GetPropertyValue<bool>(playerSpecificSettings, "noTextsAndHuds");
    SongStart(self, difficultyBeatmap, overrideEnvironmentSettings, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects);
}

MAKE_HOOK_OFFSETLESS(HandleNoteWasMissedEvent, void, Il2CppObject* self, Il2CppObject* noteController) {
    HandleNoteWasMissedEvent(self, noteController);
    if(NoHud) return;
    if(NotesLeft_CheckOk_Miss(noteController))
    {
        NotesLeft_Update();
        Miss_Update();
    }
}   
MAKE_HOOK_OFFSETLESS(HandleNoteWasCutEvent, void, Il2CppObject* self, Il2CppObject* noteController, Il2CppObject* noteCutInfo)
{
    HandleNoteWasCutEvent(self, noteController, noteCutInfo);
    if(NoHud) return;
    //Hit Counter
    auto NoteData = *il2cpp_utils::RunMethod<Il2CppObject*>( noteController, "get_noteData");
    int NoteType = *il2cpp_utils::RunMethod<int>( NoteData, "get_noteType");
    bool AllOkee = *GetPropertyValue<bool>(noteCutInfo, "allIsOK");
    if(NoteType == 0 || NoteType == 1)
    {
        NotesLeft_Update();
        if(AllOkee)
        {
            Hit_Update();
        }
        else
        {
            Miss_Update();
        }
    }
    if(NoteType == 3)
    {
        Bomb_Update();
    }
}
MAKE_HOOK_OFFSETLESS(Speed, void, Il2CppObject* self)
{
    oneSaberType = *GetFieldValue<int>(self, "_oneSaberType");
    Speed(self);
    Il2CppObject* LeftSaber = *GetFieldValue(self, "_leftSaber");
    float LeftSpeed = *GetPropertyValue<float>(LeftSaber, "bladeSpeed");
    Il2CppObject* RightSaber = *GetFieldValue(self, "_rightSaber");
    float RightSpeed = *GetPropertyValue<float>(RightSaber, "bladeSpeed");
    Speed_Update(LeftSpeed, RightSpeed);
}

MAKE_HOOK_OFFSETLESS(CheckVersion, void, Il2CppObject* self, bool firstActivation, int activationType)
{
    Update_Update();
    CheckVersion(self, firstActivation, activationType);
}

MAKE_HOOK_OFFSETLESS(StartVersion, void, Il2CppObject* self, bool firstActivation, int activationType)
{
    StartVersion(self, firstActivation, activationType);
    Update_Start(self);
}

MAKE_HOOK_OFFSETLESS(StandardLevelDetailView_RefreshContent, void, Il2CppObject * self) {
    StandardLevelDetailView_RefreshContent(self);
    Il2CppObject* Level = *GetFieldValue(self, "_level");
    Il2CppString* LevelID = *GetPropertyValue<Il2CppString*>(Level, "levelID");

    Il2CppObject* SelectedBeatmapDifficulty = *GetFieldValue(self, "_selectedDifficultyBeatmap");
    int Difficulty = *GetPropertyValue<int>(SelectedBeatmapDifficulty, "difficulty");
    Il2CppObject* beatMapData = *GetPropertyValue(SelectedBeatmapDifficulty, "beatmapData");
    Il2CppObject* parentDifficultyBeatmapSet = *GetPropertyValue(SelectedBeatmapDifficulty, "parentDifficultyBeatmapSet");
    Il2CppObject* beatmapCharacteristic = *GetPropertyValue(parentDifficultyBeatmapSet, "beatmapCharacteristic");

    Il2CppObject* PlayerData = *GetFieldValue(self, "_playerData");
    Il2CppObject* playerLevelStatsData = *RunMethod(PlayerData, "GetPlayerLevelStatsData", LevelID, Difficulty, beatmapCharacteristic);
    currentScore = *GetPropertyValue<int>(playerLevelStatsData, "highScore");
    Plays = *GetPropertyValue<int>(playerLevelStatsData, "playCount");
    Notes = *GetPropertyValue<int>(beatMapData, "notesCount");
    currentPercentage = calculatePercentage(calculateMaxScore(Notes), currentScore);
}

MAKE_HOOK_OFFSETLESS(SpawnObstacle, void, Il2CppObject* self, Il2CppObject* obstacleData)
{
    SpawnObstacle(self, obstacleData);
    WallsLeft_Update();
}

MAKE_HOOK_OFFSETLESS(RelativeScoreAndImmediateRankCounter_Update, void, Il2CppObject* self, int score, int modifiedScore, int maxPossibleScore, int maxPossibleModifiedScore)
{
    RelativeScoreAndImmediateRankCounter_Update(self, score, modifiedScore, maxPossibleScore, maxPossibleModifiedScore);
    float num = (float)score / (float)maxPossibleScore;
    PB_Update(num * 100.0f);
}

MAKE_HOOK_OFFSETLESS(StartConfigUI, void, Il2CppObject* self)
{
    StartConfigUI(self);
    SettingsUI_Start(self);
}

extern "C" void setup(ModInfo& info) {
    info.id = "QuestCounters";
    info.version = "1.2.5";

    modInfo = info;
    
    getConfig().Load();
}

extern "C" void load() {
    if(!LoadConfig())
    {
        SaveConfig();
    }
    il2cpp_functions::Init();
    INSTALL_HOOK_OFFSETLESS(RawScore, il2cpp_utils::FindMethodUnsafe("", "ScoreModel", "RawScoreWithoutMultiplier", 4));
    INSTALL_HOOK_OFFSETLESS(FinishScore, il2cpp_utils::FindMethodUnsafe("", "CutScoreBuffer", "HandleSwingRatingCounterDidFinishEvent", 1));
    INSTALL_HOOK_OFFSETLESS(UIStart, il2cpp_utils::FindMethodUnsafe("", "ScoreUIController", "Start", 0));
    INSTALL_HOOK_OFFSETLESS(SongStart, il2cpp_utils::FindMethodUnsafe("", "StandardLevelScenesTransitionSetupDataSO", "Init", 8));
    INSTALL_HOOK_OFFSETLESS(HandleNoteWasMissedEvent, il2cpp_utils::FindMethodUnsafe("", "ScoreController", "HandleNoteWasMissedEvent", 1));
    INSTALL_HOOK_OFFSETLESS(HandleNoteWasCutEvent, il2cpp_utils::FindMethodUnsafe("", "ScoreController", "HandleNoteWasCutEvent", 2));
    INSTALL_HOOK_OFFSETLESS(CheckVersion, il2cpp_utils::FindMethodUnsafe("", "HealthWarningFlowCoordinator", "DidActivate", 2));
    INSTALL_HOOK_OFFSETLESS(StartVersion, il2cpp_utils::FindMethodUnsafe("", "MainMenuViewController", "DidActivate", 2));
    INSTALL_HOOK_OFFSETLESS(Speed, il2cpp_utils::FindMethodUnsafe("", "SaberManager", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(StandardLevelDetailView_RefreshContent, FindMethodUnsafe("", "StandardLevelDetailView", "RefreshContent", 0));
    INSTALL_HOOK_OFFSETLESS(SpawnObstacle, FindMethodUnsafe("", "BeatmapObjectSpawnController", "SpawnObstacle", 1));
    INSTALL_HOOK_OFFSETLESS(RelativeScoreAndImmediateRankCounter_Update, FindMethodUnsafe("", "RelativeScoreAndImmediateRankCounter", "UpdateRelativeScoreAndImmediateRank", 4));
    INSTALL_HOOK_OFFSETLESS(StartConfigUI, FindMethodUnsafe("", "PauseMenuManager", "Start", 0));

}