#include "../../include/Main.hpp"

TextObject WallsLeftText;

int WallsLeft = 10;
int WallsCount = 40;

std::string GetPercentFromWallsLeftAndWalls(int WallsLeft, int Walls) {
  int X = (Walls - WallsLeft) * 100 / (float)Walls;
  return std::to_string(X);
}
float SafeDivideScore_2(int total, int count) {
  float result = round(((double)(total)) / (count));
  return result;
}
void WallsLeft_Update() {
  if (WallsLeftText.gameObj != nullptr) {
    WallsLeft -= 1;
    WallsLeftText.set("\n\n\nWalls Left: " + std::to_string(WallsLeft) + " (" +
                      GetPercentFromWallsLeftAndWalls(WallsLeft, WallsCount) +
                      "%)");
  }
}

void WallsLeft_GetWalls(Il2CppObject* difficultyBeatmap) {
  Il2CppObject* beatmapData = *il2cpp_utils::RunMethod<Il2CppObject*>(
      difficultyBeatmap, "get_beatmapData");
  WallsCount = *il2cpp_utils::RunMethod<int>(beatmapData, "get_obstaclesCount");
}

void WallsLeft_Start(Il2CppObject* self) {
  WallsLeft = WallsCount;
  auto ScoreText = *GetFieldValue(self, "_scoreText");
  auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
  auto ScoreTextParentTransform =
      *GetPropertyValue(ScoreTextTransform, "parent");
  WallsLeftText.fontSize = 13.0f;
  if (!_360) {
    WallsLeftText.sizeDelta = {-640, -20};
  } else {
    WallsLeftText.sizeDelta = {0, -18};
  }

  WallsLeftText.parentTransform = ScoreTextParentTransform;
  CRASH_UNLESS(WallsLeftText.create());
  WallsLeftText.set("\n\n\nWalls Left: " + std::to_string(WallsLeft) + " (" +
                    GetPercentFromWallsLeftAndWalls(WallsLeft, WallsCount) +
                    "%)");
}