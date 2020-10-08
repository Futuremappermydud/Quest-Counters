#pragma once

#include "Codegen.hpp"

#include <unordered_set>
#include <map>
#include <list>
#include <tuple> // for tuple 
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>

#include "../extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"  
#include "../extern/beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "questui/shared/BeatSaberUI.hpp"
#include "custom-types/shared/macros.hpp"
#include "custom-types/shared/register.hpp"
#include "custom-types/shared/types.hpp"
#include "custom-ui/shared/customui.hpp"
#include "../extern/beatsaber-hook/shared/utils/utils.h"  
#include "../extern/beatsaber-hook/shared/config/rapidjson-utils.hpp"
#include "../extern/beatsaber-hook/shared/config/config-utils.hpp"
#include "../extern/modloader/shared/modloader.hpp"

using namespace il2cpp_utils;
using namespace GlobalNamespace;
using namespace UnityEngine;
using namespace TMPro;
using namespace CustomUI;

static ModInfo modInfo;

Configuration& getConfig();
extern Logger& getLogger();
static struct Config_t {
    bool Missed = true;
    bool Hits = true;
    bool NotesLeft = true;
    bool Acc = true;
    bool Speed = true;
    bool PB = true;
    bool BombHits = true;
    bool WallsLeft = true;
    bool playCount = true;
    bool useLegacyAcc = false;
    bool PPCounter = true;
} Config;


extern void SaveConfig();
extern bool LoadConfig();

//Accuracy
void Accuracy_Start(Il2CppObject* self);

void Accuracy_FinishScore();

void Accuracy_RawScore(Il2CppObject* noteCutInfo, int* beforeCutRawScore, int* afterCutRawScore, int* cutDistanceRawScore);

void New_Accuracy_Start(Il2CppObject* self);

void New_Accuracy_FinishScore();

void New_Accuracy_RawScore(Il2CppObject* noteCutInfo, int* beforeCutRawScore, int* afterCutRawScore, int* cutDistanceRawScore);

//Notes Left
void NotesLeft_GetNotes(IDifficultyBeatmap* difficultyBeatmap);

void NotesLeft_Start(Il2CppObject* self);

bool NotesLeft_CheckOk_Miss(Il2CppObject* noteController);

void NotesLeft_Update();

//Missed Notes
void Miss_Start(Il2CppObject* self);

void Miss_Update();

//Hit Notes
void Hit_Start(Il2CppObject* self);

void Hit_Update();

//Hit Bombs
void Bomb_Start(Il2CppObject* self);

void Bomb_Update();

//Speed
void Speed_Start(Il2CppObject* self);

void Speed_Update(float LeftSpeed, float RightSpeed);

//Update
extern std::string Ver;
extern std::string LATESTVer;
void Update_Update();
void Update_Start(Il2CppObject* self);

//PB
void PB_Start(Il2CppObject* self);
void PB_Update(float percent);
int calculateMaxScore(int blockCount);
float calculatePercentage(int maxScore, int resultScore);
extern float currentPercentage;
extern int currentScore;
extern int ModdedScore;

//Walls Left
void WallsLeft_Update();

void WallsLeft_GetWalls(IDifficultyBeatmap* difficultyBeatmap);

void WallsLeft_Start(Il2CppObject* self);

//Play Count
extern int Plays;

void PC_Start(Il2CppObject* self);


//Misc Vars
extern bool _360;
extern int Notes;
extern int WallsCount;
extern int oneSaberType;
extern bool oneSaber;
extern std::string version;

void PPDownloader_CompletedWebRequest();

void PPDownloader_WebRequest();

void PP_Init(IDifficultyBeatmap* diff, std::string SongID, GameplayModifiers* Mods);

void PP_Start(Il2CppObject *self);

void PP_Update(float Percentage);

static std::vector<std::string> split(std::string const &str, const char delim)
{
    std::vector<std::string> out;
	size_t start;
	size_t end = 0;

	while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
	{
		end = str.find(delim, start);
		out.push_back(str.substr(start, end - start));
	}
    return out;
}

static std::string GetHash(std::string levelId)
{
    getLogger().debug(levelId);
    if (levelId.find("custom_level_"))
    {
        auto splits = split(levelId, '_');
        return splits[2];
    }
    getLogger().debug(levelId);
    return levelId;
}

extern GameplayModifiersModelSO* modifiersModel;

static std::string Round (float val, int precision = 2)
{
	std::stringstream stream;
    stream << std::fixed << std::setprecision(precision) << val;
    std::string Out = stream.str();
	return Out;
}

struct SongID
{
    std::string id;
    BeatmapDifficulty difficulty;

    SongID(std::string _id, BeatmapDifficulty _difficulty)
    {
        id = _id;
        difficulty = _difficulty;
    }
};

struct RawPPData
{
    float _Easy_SoloStandard;
    float _Normal_SoloStandard;
    float _Hard_SoloStandard;
    float _Expert_SoloStandard;
    float _ExpertPlus_SoloStandard;
};

extern SongID songID;

extern int Stats_HitNotes;
extern float Stats_PP;
extern int Stats_MissedNotes;
extern int Stats_BombsHit;

void Stats_Start(ResultsViewController* self);