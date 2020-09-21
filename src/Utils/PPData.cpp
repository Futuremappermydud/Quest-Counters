#include "PPUtils.hpp"

std::map<std::string, RawPPData>& data;
bool Init = false;

void PPData_Init(std::map<std::string, RawPPData>& PPData)
{
    getLogger().debug("Initializing PPData");
	data = PPData;
	Init = true;
}

float GetPP(SongID songID)
{

    auto itr = data.find(songID.id);
    if (itr == data.end()) {
        getLogger().debug("%s does not exist in data!", songID.id.c_str());
    }
    for (auto& item : data) {
        getLogger().debug("item exists! key: %s value: %f", item.first.c_str(), item.second._Easy_SoloStandard);
    }

    getLogger().debug(songID.id + " " + std::to_string(data.at(songID.id)._Easy_SoloStandard));
    getLogger().debug(songID.id + " " + std::to_string(data.at(songID.id)._Normal_SoloStandard));
    getLogger().debug(songID.id + " " + std::to_string(data.at(songID.id)._Hard_SoloStandard));
    getLogger().debug(songID.id + " " + std::to_string(data.at(songID.id)._Expert_SoloStandard));
    getLogger().debug(songID.id + " " + std::to_string(data.at(songID.id)._ExpertPlus_SoloStandard));
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
    getLogger().debug("Is" + songID.id + "Ranked?" + std::to_string(data.contains(songID.id) && GetPP(songID) > 0));
    return data.contains(songID.id) && GetPP(songID) > 0;
}