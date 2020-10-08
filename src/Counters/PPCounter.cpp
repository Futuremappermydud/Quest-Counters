#include "../../include/Main.hpp"
#include "../Utils/PPUtils.hpp"
#include <dlfcn.h>
#include <iomanip>
#include <sstream>

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
  	
	PPTextObject.text = "0.00pp";
	Ranked = true;
	if(!IsRanked(songID))
	{
		PPTextObject.text = "Song Not Ranked!";
		Ranked = false;
	}
	else
	{
		GameplayModifiers* updatedModifiers = AllowedPositiveModifiers(songID) ? mods : RemovePositiveModifiers(mods);
		_multiplier = CalculateMultiplier(modifiersModel, updatedModifiers);
	}
	
	PPTextObject.sizeDelta = {-325, -120};
	PPTextObject.fontSize = 12.0F;
	PPTextObject.create();
}

void PP_Update(float Percentage) {
	if(!Ranked) return;
	float acc = Percentage * _multiplier;

	float pp = CalculatePP(songID, acc);

	Stats_PP = pp;
	if (PPTextObject.gameObj == nullptr || modifiersModel == nullptr) {
		return;
	}

	PPTextObject.set(Round(pp) + "pp");
}