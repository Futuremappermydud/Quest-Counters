#pragma once

#include "../../include/Main.hpp"

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


#include <iostream>
#include <string>
#include <vector>



static GameplayModifiers* RemovePositiveModifiers(GameplayModifiers* modifiers)
{
    GameplayModifiers* newModifiers = GameplayModifiers::New_ctor(modifiers);
    newModifiers->set_disappearingArrows(false);
    newModifiers->set_ghostNotes(false);
    GameplayModifiers::SongSpeed songSpeed = newModifiers->get_songSpeed();
    newModifiers->set_songSpeed((songSpeed == GameplayModifiers::SongSpeed::Faster) ? (GameplayModifiers::SongSpeed)GameplayModifiers::SongSpeed::Normal : songSpeed);
    return newModifiers;
}

static GameplayModifiers* RemoveNoFail(GameplayModifiers* modifiers)
{
    GameplayModifiers* newModifiers = GameplayModifiers::New_ctor(modifiers);
    newModifiers->set_noFail(false);
    return newModifiers;
}


void PPData_Init(std::map<std::string, RawPPData> PPData);

float GetPP(SongID songID);

bool IsRanked(SongID songID);

float CalculatePP(SongID songID, float accuracy);

void InitializePPUtils();

const float DA_ORIGINAL = 0.07f;
const float DA_SS = 0.02f;
const float GN_ORIGINAL = 0.11f;
const float GN_SS = 0.04f;
const float FS_ORIGINAL = 0.08f;
const float FS_SS = 0.08f;

static float CalculateMultiplier(GameplayModifiersModelSO* gameplayModifiersModelSO, GameplayModifiers* modifiers)
{
    float multiplier = gameplayModifiersModelSO->GetTotalMultiplier(modifiers);

    // ScoreSaber weights these multipliers differently
    if (modifiers->get_disappearingArrows())
        multiplier += (DA_SS - DA_ORIGINAL);
    if (modifiers->get_ghostNotes())
        multiplier += (GN_SS - GN_ORIGINAL);
    if (modifiers->get_songSpeed() == GameplayModifiers::SongSpeed::Faster)
        multiplier += (FS_SS - FS_ORIGINAL);

    return multiplier;
}

bool AllowedPositiveModifiers(SongID songID);