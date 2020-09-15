#include "../../include/Main.hpp"

TextObject PBTextObject;
float currentPercentage = 100.0f;
int currentScore = 1000;
int ModdedScore = 0;
bool PBDETECTED = false;

float calculatePercentage(int maxScore, int resultScore) {
  float resultPercentage = (float)(100 / (float)maxScore * (float)resultScore);
  float value = (int)(resultPercentage * 100 + .5);
  return (float)value / 100;
}

int calculateMaxScore(int blockCount) {
  int maxScore;
  if (blockCount < 14) {
    if (blockCount == 1) {
      maxScore = 115;
    } else if (blockCount < 5) {
      maxScore = (blockCount - 1) * 230 + 115;
    } else {
      maxScore = (blockCount - 5) * 460 + 1035;
    }
  } else {
    maxScore = (blockCount - 13) * 920 + 4715;
  }
  return maxScore;
}

std::string GetPercentFromHighScoreAndModdedScore(int Modded, int HighScore) {
  float currentPercentTemp =
      calculatePercentage(calculateMaxScore(Notes), currentScore);
  float ModdedPercentTemp =
      calculatePercentage(calculateMaxScore(Notes), Modded);
  float TotalPercent = (currentPercentTemp / ModdedPercentTemp);
  return std::to_string(TotalPercent).substr(0, 5);
}

void PB_Start(Il2CppObject *self) {
  auto ScoreText = *GetFieldValue(self, "_scoreText");
  auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
  auto ScoreTextParentTransform =
      *GetPropertyValue(ScoreTextTransform, "parent");

  PBTextObject.parentTransform = ScoreTextParentTransform;
  // PBDETECTED = currentScore != 0 ? true : false;
  if (currentScore != 0) {
    PBTextObject.text =
        "PB: " + std::to_string(currentPercentage).substr(0, 5) + "% (0.00%)";
  } else {

    PBTextObject.text = "No Personal Best Detected!";
  }

  PBTextObject.sizeDelta = {-140, 230};
  PBTextObject.fontSize = 12.0F;
  PBTextObject.create();
}

std::string GetColor(float percent) {
  std::string Out;
  if (percent < 50.0f)
    Out = "#FF0000";
  if (percent > 50.0f)
    Out = "#FFA500";
  if (percent > 80.0f)
    Out = "#9acd32";
  if (percent > 99.0f)
    Out = "#00FF00";
  return Out;
}

void PB_Update(float percent) {
  if (PBTextObject.gameObj == nullptr || currentScore == 0) {
    return;
  }
  float outPercent = (percent / currentPercentage) * 100.0f;
  float OutCurrentPercent = currentPercentage;
  if (OutCurrentPercent < 1) {
    OutCurrentPercent = outPercent;
  }
  PBTextObject.set("<color=" + GetColor(outPercent) + ">PB: " +
                   std::to_string(currentPercentage).substr(0, 5) + "% (" +
                   std::to_string(outPercent).substr(0, 5) + "%)</color>");
}