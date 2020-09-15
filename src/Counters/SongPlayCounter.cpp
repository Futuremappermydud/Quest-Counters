#include "../../include/Main.hpp"

TextObject PlayCountTextObject;
int Plays;
void PC_Start(Il2CppObject* self)
{
	auto ScoreText = *GetFieldValue(self, "_scoreText");
	auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
	auto ScoreTextParentTransform = *GetPropertyValue(ScoreTextTransform, "parent");

	PlayCountTextObject.parentTransform = ScoreTextParentTransform;
	
	PlayCountTextObject.text = "Play Count: " + std::to_string(Plays);

 
	PlayCountTextObject.sizeDelta = { -360, 230};
	PlayCountTextObject.fontSize = 12.0F;
	PlayCountTextObject.create();
}