#include "PPUtils.hpp"

std::map<std::string, RawPPData> data;
bool Init = false;

void PPData_Init(std::map<std::string, RawPPData> PPData)
{
	data = PPData;
	Init = true;
}

float GetPP(SongID songID)
{
    if (!Init)
    {
        getLogger().error("Tried to use PPData when it wasn't initialized, Did PPDownloader not get called?");
    }

    switch (songID.difficulty)
    {
        case BeatmapDifficulty::Easy:
            return data.at(songID.id)._Easy_SoloStandard;
        case BeatmapDifficulty::Normal:
            return data.at(songID.id)._Normal_SoloStandard;
        case BeatmapDifficulty::Hard:
            return data.at(songID.id)._Hard_SoloStandard;
        case BeatmapDifficulty::Expert:
            return data.at(songID.id)._Expert_SoloStandard;
        case BeatmapDifficulty::ExpertPlus:
            return data.at(songID.id)._ExpertPlus_SoloStandard;
        default:
            getLogger().error("Unknown beatmap difficulty");
			return data.at(songID.id)._ExpertPlus_SoloStandard;
    }
}

bool IsRanked(SongID songID)
{
    return data.contains(songID.id) && GetPP(songID) > 0;
}