
#include "../../include/Main.hpp"
#include "../extern/mirror-develop/include/refltool/from_rapidjson.hpp"

extern std::map<std::string, RawPPData> PPData;

class SongID
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