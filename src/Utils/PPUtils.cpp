#include "PPUtils.hpp"


//vscode doesnt like std::get so ignore the "errors"
std::map<std::string, RawPPData> ppData;

        std::vector< std::tuple<float, float> > ppCurve;// = {(0.0f, 0.0f), (.45f, .015f),(.50f, .03f),(.55f, .06f),(.60f, .105f),(.65f, .16f),(.68f, .24f),(.70f, .285f),(.80f, .563f),(.84f, .695f),(.88f, .826f),(.945f, 1.015f),(.95f, 1.046f),(1.00f, 1.12f),(1.10f, 1.18f),(1.14f, 1.25f)};

        static std::unordered_set<std::string> songsAllowingPositiveModifiers;

        // Pre-compute to save on division operator
        float slopes[15];

        void Initialize()
        {
			ppCurve.push_back(std::make_tuple(0.0f, 0.0f));
			ppCurve.push_back(std::make_tuple(.45f, .015f));
			ppCurve.push_back(std::make_tuple(.50f, .03f));
			ppCurve.push_back(std::make_tuple(.55f, .06f));
			ppCurve.push_back(std::make_tuple(.60f, .105f));
			ppCurve.push_back(std::make_tuple(.65f, .16f));
			ppCurve.push_back(std::make_tuple(.68f, .24f));
			ppCurve.push_back(std::make_tuple(.70f, .285f));
			ppCurve.push_back(std::make_tuple(.80f, .563f));
			ppCurve.push_back(std::make_tuple(.84f, .695f));
			ppCurve.push_back(std::make_tuple(.88f, .826f));
			ppCurve.push_back(std::make_tuple(.945f, 1.015f));
			ppCurve.push_back(std::make_tuple(.95f, 1.046f));
			ppCurve.push_back(std::make_tuple(1.00f, 1.12f));
			ppCurve.push_back(std::make_tuple(1.10f, 1.18f));
			ppCurve.push_back(std::make_tuple(1.14f, 1.25f));

			songsAllowingPositiveModifiers.insert("2FDDB136BDA7F9E29B4CB6621D6D8E0F8A43B126"); // Overkill Nuketime
			songsAllowingPositiveModifiers.insert("27FCBAB3FB731B16EABA14A5D039EEFFD7BD44C9"); // Overkill Kry
            getLogger().debug("Initializing PPUtils");
            for (auto i = 0; i < ppCurve.size() - 1; i++)
            {
                auto x1 = std::get<0>(ppCurve[i]);
                auto y1 = std::get<1>(ppCurve[i]);
                auto x2 = std::get<0>(ppCurve[i+1]);
                auto y2 = std::get<1>(ppCurve[i+1]);

                auto m = (y2 - y1) / (x2 - x1);
                slopes[i] = m;
            }
        }

        bool IsRanked(SongID songID)
        {
            return IsRanked(songID);
        }

        bool AllowedPositiveModifiers(SongID songID)
        {
            return songsAllowingPositiveModifiers.contains(songID.id);
        }

		float Lerp(float x1, float y1, float x2, float y2, float x3, int i)
        {
            float m;
            if (slopes != nullptr)
                m = slopes[i];
            else
                m = (y2 - y1) / (x2 - x1);
            return m * (x3 - x1) + y1;
        }

		float PPPercentage(float accuracy)
        {
            if (accuracy >= 1.14)
                return 1.25f;
            if (accuracy <= 0)
                return 0.0f;

            auto i = -1;
            for (int i = 0; i < ppCurve.size(); i++)
			{
				float score = std::get<0>(ppCurve[i]);
				float given = std::get<1>(ppCurve[i]);

			}
            auto lowerScore = std::get<0>(ppCurve[i]);
            auto higherScore = std::get<0>(ppCurve[i+1]);;
            auto lowerGiven = std::get<1>(ppCurve[i]);
            auto higherGiven = std::get<1>(ppCurve[i+1]);
            return Lerp(lowerScore, lowerGiven, higherScore, higherGiven, accuracy, i);
        }
        float CalculatePP(float rawPP, float accuracy)
        {
            return rawPP * PPPercentage(accuracy);
        }
		float CalculatePP(SongID songID, float accuracy)
        {
            auto rawPP = GetPP(songID);
            return CalculatePP(rawPP, accuracy);
        }