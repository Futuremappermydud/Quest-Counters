#include "../../include/Main.hpp"
#include "../Utils/PPUtils.hpp"

TextObject PPTextObject;

SongID songID = SongID(std::string("Wow"), BeatmapDifficulty::Easy);
GameplayModifiers* mods;
bool Ranked;
GameplayModifiersModelSO* modifiersModel;
float _multiplier;


void PP_Init(IDifficultyBeatmap* diff, std::string SongID, GameplayModifiers* Mods)
{
	songID.difficulty = diff->get_difficulty();
	songID.id = SongID;
	mods = Mods;
}

void PP_Start(Il2CppObject *self) {
	
	auto ScoreText = *GetFieldValue(self, "_scoreText");
	auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
	auto ScoreTextParentTransform =
	*GetPropertyValue(ScoreTextTransform, "parent");

	PPTextObject.parentTransform = ScoreTextParentTransform;
  	
	//GameplayModifiers* updatedModifiers = AllowedPositiveModifiers(songID) ? mods : RemovePositiveModifiers(mods);
	//_multiplier = CalculateMultiplier(modifiersModel, updatedModifiers);

	PPTextObject.text = "0.00pp";
	Ranked = true;
	if(!IsRanked(songID))
	{
		PPTextObject.text = "Song Not Ranked!";
		Ranked = false;
	}
	PPTextObject.sizeDelta = {0, -20};
	PPTextObject.fontSize = 12.0F;
	PPTextObject.create();
}



void PP_Update(float relativeScore) {
	if (PPTextObject.gameObj == nullptr || !Ranked || modifiersModel == nullptr) {
		return;
	}

	float acc = relativeScore;// * _multiplier;


	PPTextObject.set(std::to_string(CalculatePP(songID, acc)) + "pp");
}