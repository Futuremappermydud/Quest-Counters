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

extern std::map<std::string, RawPPData> PPData;


#include <iostream>
#include <string>
#include <vector>

static GameplayModifiers* RemovePositiveModifiers(GameplayModifiers* modifiers)
{
    GameplayModifiers* newModifiers = GameplayModifiers::New_ctor(modifiers);
    newModifiers->set_disappearingArrows(false);
    newModifiers->set_ghostNotes(false);
    //newModifiers.songSpeed = newModifiers.songSpeed.Equals(GameplayModifiers.SongSpeed.Faster) ? GameplayModifiers.SongSpeed.Normal : newModifiers.songSpeed;
    //Unsure how to do this yet. Ignore for now?
    //newModifiers->set_songSpeed(newModifiers->songSpeed);
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