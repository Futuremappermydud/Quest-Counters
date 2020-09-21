#include "PPUtils.hpp"

std::map<std::string, RawPPData> ppData;

const int CURVE_SIZE = 16;

float ppCurve[CURVE_SIZE][2] = {
    {0, 0},
    {.45f, .015f},
    {.50f, .03f},
    {.55f, .06f},
    {.60f, .105f},
    {.65f, .16f},
    {.68f, .24f},
    {.70f, .285f},
    {.80f, .563f},
    {.84f, .695f},
    {.88f, .826f},
    {.945f, 1.015f},
    {.95f, 1.046f},
    {1.00f, 1.12f},
    {1.10f, 1.18f},
    {1.14f, 1.25f}
};

static std::unordered_set<std::string> songsAllowingPositiveModifiers ({
    "2FDDB136BDA7F9E29B4CB6621D6D8E0F8A43B126", // Overkill Nuketime
    "27FCBAB3FB731B16EABA14A5D039EEFFD7BD44C9" // Overkill Kry
});

// Pre-compute slopes for a bit of performance savings
float slopes[15];

void InitializePPUtils()
{
    getLogger().debug("Initializing PPUtils");
    for (auto i = 0; i < CURVE_SIZE - 1; i++)
    {
        auto x1 = ppCurve[i][0];
        auto y1 = ppCurve[i][1];
        auto x2 = ppCurve[i+1][0];
        auto y2 = ppCurve[i+1][1];

        auto m = (y2 - y1) / (x2 - x1);
        slopes[i] = m;
        getLogger().debug("Initializing PPUtils X1: " + std::to_string(x1));
        getLogger().debug("Initializing PPUtils Y1: " + std::to_string(y1));
    }
}

bool AllowedPositiveModifiers(SongID songID)
{
    return songsAllowingPositiveModifiers.contains(songID.id);
}

float Lerp(float x1, float y1, float x2, float y2, float x3, int i)
{
    float m = slopes[i];
    getLogger().debug("Lerp Result: %f", (m * (x3 - x1) + y1));
    return m * (x3 - x1) + y1;
}

float PPPercentage(float accuracy)
{
    getLogger().debug("PPPercentage called!");
    if (accuracy >= 1.14)
        return 1.25f;
    if (accuracy <= 0)
        return 0.0f;

    int i = -1;
    for (; i < CURVE_SIZE; i++)
    {
        float curveAcc = ppCurve[i+1][0];
        getLogger().debug("Curve Acc: %f", curveAcc);
        if (curveAcc > accuracy)
            break;
    }
    getLogger().debug("Lower Score: %f", ppCurve[i][0]);
    getLogger().debug("Higher Score: %f", ppCurve[i+1][0]);
    getLogger().debug("Lower Given: %f", ppCurve[i][1]);
    getLogger().debug("Higher Given: %f", ppCurve[i+1][1]);
    auto lowerScore = ppCurve[i][0];
    auto higherScore = ppCurve[i+1][0];
    auto lowerGiven = ppCurve[i][1];
    auto higherGiven = ppCurve[i+1][1];
    return Lerp(lowerScore, lowerGiven, higherScore, higherGiven, accuracy, i);
}

float CalculatePP(float rawPP, float accuracy)
{
    getLogger().debug(std::to_string(rawPP) + std::string(" ") + std::to_string(accuracy));
    return rawPP * PPPercentage(accuracy);
}

float CalculatePP(SongID songID, float accuracy)
{
    getLogger().debug(songID.id + std::string(" ") + std::to_string(accuracy));
    auto rawPP = GetPP(songID);
    return CalculatePP(rawPP, accuracy);
}