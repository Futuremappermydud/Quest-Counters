#include "../../include/Main.hpp"

TextObject BombTextObject;
int HitBombs = 0;

void Bomb_Start(Il2CppObject* self)
{
 HitBombs = 0;
 auto ScoreText = *GetFieldValue(self, "_scoreText");
 auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
 auto ScoreTextParentTransform = *GetPropertyValue(ScoreTextTransform, "parent");

 BombTextObject.parentTransform = ScoreTextParentTransform;
 BombTextObject.text = "\n\n\n\n\nHit <color=#545454>Bombs</color>: 0";
 BombTextObject.fontSize = 12.0F;
 BombTextObject.create();
}

void Bomb_Update()
{
 if(BombTextObject.gameObj == nullptr) {return;}
 HitBombs++;
 BombTextObject.set("\n\n\n\n\nHit <color=#545454>Bombs</color>: " + std::to_string(HitBombs));
}