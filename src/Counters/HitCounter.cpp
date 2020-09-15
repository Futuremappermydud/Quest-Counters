#include "../../include/Main.hpp"

TextObject HitTextObject;
int HitNotes = 0;

void Hit_Start(Il2CppObject* self)
{
 HitNotes = 0;
 auto ScoreText = *GetFieldValue(self, "_scoreText");
 auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
 auto ScoreTextParentTransform = *GetPropertyValue(ScoreTextTransform, "parent");

 HitTextObject.parentTransform = ScoreTextParentTransform;
 HitTextObject.text = "\n\n\n<color=#00FF00>Hit</color> Notes: 0";
 HitTextObject.fontSize = 12.0F;
 HitTextObject.create();
}

void Hit_Update()
{
 if(HitTextObject.gameObj == nullptr) {return;}
 HitNotes++;
 HitTextObject.set("\n\n\n<color=#00FF00>Hit</color> Notes: " + std::to_string(HitNotes));
}