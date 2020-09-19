#include "../../include/Main.hpp"
#include "../Utils/PPUtils.hpp"

TextObject PPTextObject;

SongID songID = SongID(std::string("Wow"), BeatmapDifficulty::Easy);
GameplayModifiers* mods;


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

	PPTextObject.sizeDelta = {-140, 230};
	PPTextObject.fontSize = 12.0F;
	PPTextObject.create();
}



void PP_Update(float Percentage) {
  if (PPTextObject.gameObj == nullptr || Percentage == 0.0f) {
    return;
  }
	PPTextObject.set(std::to_string(CalculatePP(songID, Percentage)) + "pp");
}