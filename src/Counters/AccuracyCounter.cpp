#include "../../include/Main.hpp"

TextObject AccuracyText;

bool runScores = false;

int num = 0;
int num2 = 0;
int sum = 0;
int sum2 = 0;
int sumAcc = 0;
float average = 0.0f;
float averageAcc = 0.0f;
float sessionAverage = 0.0f; 

char averageFinal[40] = {0};
char averageAccFinal[40] = {0};
char averageSessionFinal[40] = {0};

int songs = 0;

void Accuracy_Start(Il2CppObject* self) {
 songs++;
 auto ScoreText = *GetFieldValue(self, "_scoreText");
 auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
 auto ScoreTextParentTransform = *GetPropertyValue(ScoreTextTransform, "parent");

 AccuracyText.parentTransform = ScoreTextParentTransform;
 AccuracyText.text = "Average Score : 0\nAverage Accuracy : 0\nAverage Session Score : " + std::string(averageSessionFinal);
 AccuracyText.fontSize = 12.0F;        
 AccuracyText.sizeDelta = {-615, 220};
 AccuracyText.create();

 if(songs > 1) 
 {
  num = 0;
  sumAcc = 0;
  sum = 0;
 }
}

void Accuracy_FinishScore() {
 runScores = true;
}

void Accuracy_RawScore(Il2CppObject* noteCutInfo, int* beforeCutRawScore, int* afterCutRawScore, int* cutDistanceRawScore) {
if(AccuracyText.gameObj == nullptr) {return;}
 if(runScores) {
  int beforeCut = *beforeCutRawScore;
  int afterCut = *afterCutRawScore;
  int cutDist = *cutDistanceRawScore;

  int totalScore = beforeCut+afterCut+cutDist;

  sumAcc += cutDist;
  sum += totalScore;
  sum2 += totalScore;
  num++;
  num2++;

  averageAcc = float(sumAcc) / float(num);
  average = float(sum) / float(num);
  sessionAverage = float(sum2) / float(num2);


  sprintf(averageFinal, "%.2f", average);
  sprintf(averageAccFinal, "%.2f", averageAcc);
  sprintf(averageSessionFinal, "%.2f", sessionAverage);
  AccuracyText.set(std::string("Average Score : ") + averageFinal + std::string("\nAverage Accuracy : ") + averageAccFinal + std::string("\nAverage Session Score : ") + averageSessionFinal);
  runScores = false;
 }
}