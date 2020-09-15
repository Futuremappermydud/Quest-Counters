#include "../../include/Main.hpp"

TextObject MissTextObject;
int MissedNotes = 0;

void Miss_Start(Il2CppObject* self)
{
 MissedNotes = 0;
 auto ScoreText = *GetFieldValue(self, "_scoreText");
 auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
 auto ScoreTextParentTransform = *GetPropertyValue(ScoreTextTransform, "parent");

 MissTextObject.parentTransform = ScoreTextParentTransform;
 MissTextObject.text = "\n\n\n\n<color=#FF0000>Missed</color> Notes: 0";
 MissTextObject.fontSize = 12.0F;
 MissTextObject.create();
  SetPropertyValue(MissTextObject.textMesh, "lineSpacing", 1);
}

void Miss_Update()
{
 if(MissTextObject.gameObj == nullptr) {return;}
 MissedNotes++;
 MissTextObject.set("\n\n\n\n<color=#FF0000>Missed</color> Notes: " + std::to_string(MissedNotes));
}