#include "../../include/Main.hpp"

TextObject LeftSpeedTextObject;
TextObject RightSpeedTextObject;
float LeftSpeed;
float RightSpeed;
Il2CppObject * LeftSaber;
Il2CppObject * RightSaber;

void Speed_Start(Il2CppObject *self)
{
	auto ScoreText = *GetFieldValue(self, "_scoreText");
	auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
	auto ScoreTextParentTransform = *GetPropertyValue(ScoreTextTransform, "parent");

	LeftSpeedTextObject.parentTransform = ScoreTextParentTransform;
	LeftSpeedTextObject.text = "\n\n\n\n\n\n<color=#ff6347>Left</color> Saber Speed: 0.0";
	LeftSpeedTextObject.fontSize = 12.0f;
	LeftSpeedTextObject.create();

	RightSpeedTextObject.parentTransform = ScoreTextParentTransform;
	RightSpeedTextObject.text = "\n\n\n\n\n\n\n<color=#ADD8E6>Right</color> Saber Speed: 0.0";
	RightSpeedTextObject.fontSize = 12.0f;
	RightSpeedTextObject.create();
}

void Speed_Update(float LeftSpeed, float RightSpeed)
{
	if(LeftSpeedTextObject.gameObj != nullptr)
	{
		LeftSpeedTextObject.set("\n\n\n\n\n\n<color=#ff6347>Left</color> Saber Speed: " + std::to_string((LeftSpeed *100) / 100).substr(0, 5));
	 RightSpeedTextObject.set("\n\n\n\n\n\n\n<color=#ADD8E6>Right</color> Saber Speed: " + std::to_string((RightSpeed *100) / 100).substr(0, 5));
	}
}