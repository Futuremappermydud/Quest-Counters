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
    //getLogger().debug(songID.id + " " + std::to_string(data.at(songID.id)));
    if (!Init)
    {
        getLogger().error("Tried to use PPData when it wasn't initialized, Did PPDownloader not get called?");
        return 0.0f;
    }

    switch (songID.difficulty.value)
    {
        case 0:
            return data.at(songID.id)._Easy_SoloStandard;
        case 1:
            return data.at(songID.id)._Normal_SoloStandard;
        case 2:
            return data.at(songID.id)._Hard_SoloStandard;
        case 3:
            return data.at(songID.id)._Expert_SoloStandard;
        case 4:
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