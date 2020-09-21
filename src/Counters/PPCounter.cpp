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
  	
	GameplayModifiers* updatedModifiers = AllowedPositiveModifiers(songID) ? mods : RemovePositiveModifiers(mods);
	_multiplier = CalculateMultiplier(modifiersModel, updatedModifiers);

	PPTextObject.text = "0.00pp";
	Ranked = true;
	if(!IsRanked(songID))
	{
		PPTextObject.text = "Song Not Ranked!";
		Ranked = false;
	}
	PPTextObject.sizeDelta = {-300, -120};
	PPTextObject.fontSize = 4.0F;
	PPTextObject.create();
}

void PP_Update(float Percentage) {
	if (PPTextObject.gameObj == nullptr || !Ranked || modifiersModel == nullptr) {
		return;
	}
	getLogger().debug("Percentage %f", Percentage);
	float acc = Percentage * _multiplier;

	float pp = CalculatePP(songID, acc);

	Stats_PP = pp;

	PPTextObject.set(Round(pp) + "pp");
}