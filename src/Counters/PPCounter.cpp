#include "../../include/Main.hpp"
#include "../Utils/PPUtils.hpp"

TextObject PPTextObject;

void PP_Start(Il2CppObject *self) {
  auto ScoreText = *GetFieldValue(self, "_scoreText");
  auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
  auto ScoreTextParentTransform =
      *GetPropertyValue(ScoreTextTransform, "parent");

  PPTextObject.parentTransform = ScoreTextParentTransform;
  
  PPTextObject.text = ;

  PPTextObject.sizeDelta = {-140, 230};
  PPTextObject.fontSize = 12.0F;
  PPTextObject.create();
}



void PP_Update() {
  if (PPTextObject.gameObj == nullptr || currentScore == 0) {
    return;
  }
}