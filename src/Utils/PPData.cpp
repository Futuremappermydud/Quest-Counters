#include "PPUtils.hpp"

std::map<std::string, RawPPData> data;
bool Init = false;

void PPData_Init(std::map<std::string, RawPPData> PPData)
{
    getLogger().debug("Initializing PPData");
	data = PPData;
	Init = true;
}

std::string str_toupper(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), 
                   [](unsigned char c){ return std::toupper(c); } // correct
                  );
    return s;
}

float GetPP(SongID songID)
{
    std::string NewID = GetHash(str_toupper(songID.id));

    auto itr = data.find(NewID);
    if (itr == data.end()) {
        getLogger().debug("%s does not exist in data!", NewID.c_str());
        return 0.0f;
    }
    //for (auto& item : data) {
    //    getLogger().debug("item exists! key: %s value: %f", item.first.c_str(), item.second._Easy_SoloStandard);
    //}

    //getLogger().debug(NewID + " " + std::to_string(data.at(NewID)._Easy_SoloStandard));
    //getLogger().debug(NewID + " " + std::to_string(data.at(NewID)._Normal_SoloStandard));
    //getLogger().debug(NewID + " " + std::to_string(data.at(NewID)._Hard_SoloStandard));
    //getLogger().debug(NewID + " " + std::to_string(data.at(NewID)._Expert_SoloStandard));
    //getLogger().debug(NewID + " " + std::to_string(data.at(NewID)._ExpertPlus_SoloStandard));
    if (!Init)
    {
        getLogger().error("Tried to use PPData when it wasn't initialized, Did PPDownloader not get called?");
        return 0.0f;
    }

    switch (songID.difficulty.value)
    {
        case 0:
            return data.at(NewID)._Easy_SoloStandard;
        case 1:
            return data.at(NewID)._Normal_SoloStandard;
        case 2:
            return data.at(NewID)._Hard_SoloStandard;
        case 3:
            return data.at(NewID)._Expert_SoloStandard;
        case 4:
            return data.at(NewID)._ExpertPlus_SoloStandard;
        default:
            getLogger().error("Unknown beatmap difficulty");
			return data.at(NewID)._ExpertPlus_SoloStandard;
    }
}

bool IsRanked(SongID songID)
{
    std::string NewID = GetHash(str_toupper(songID.id));
    getLogger().debug("Is" + NewID + "Ranked?" + std::to_string(data.contains(NewID) && GetPP(songID) > 0));
    return data.contains(NewID) && GetPP(songID) > 0;
}