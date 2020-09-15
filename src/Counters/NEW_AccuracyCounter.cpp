#include "../../include/Main.hpp"

TextObject NewAccuracyText;

int FinalLeftHand_Average;
int FinalRightHand_Average;
int LeftHand_Average;
int RightHand_Average;
int Leftnum;
int Rightnum;
bool runScores2;

void New_Accuracy_Start(Il2CppObject* self) {	
	Leftnum = 0;
	Rightnum = 0;
	LeftHand_Average = 0;
	FinalLeftHand_Average = 0;
	RightHand_Average = 0;
	FinalRightHand_Average = 0;

	auto ScoreText = *GetFieldValue(self, "_scoreText");
 	auto ScoreTextTransform = *GetPropertyValue(ScoreText, "transform");
 	auto ScoreTextParentTransform = *GetPropertyValue(ScoreTextTransform, "parent");

 	NewAccuracyText.parentTransform = ScoreTextParentTransform;
 	NewAccuracyText.text = "Average Cut\n       " + std::to_string(FinalLeftHand_Average) + "  " + std::to_string(FinalRightHand_Average);	
 	NewAccuracyText.fontSize = 12.0F;        
 	NewAccuracyText.sizeDelta = {-615, 220};
 	NewAccuracyText.create();
}

void New_Accuracy_FinishScore() {
	runScores2 = true;
}

void Update_Text()
{
	getLogger().debug(std::to_string(LeftHand_Average));
	getLogger().debug(std::to_string(RightHand_Average));
	std::string text = "Average Cut\n       " + std::to_string(FinalLeftHand_Average) + "  " + std::to_string(FinalRightHand_Average);
	NewAccuracyText.set(text);
}

void New_Accuracy_RawScore(Il2CppObject* noteCutInfo, int* beforeCutRawScore, int* afterCutRawScore, int* cutDistanceRawScore) {
	if(!runScores2) return;
	int SaberType = CRASH_UNLESS(GetPropertyValue<int>(noteCutInfo, "saberType"));

	int beforeCut = *beforeCutRawScore;
  	int afterCut = *afterCutRawScore;
  	int cutDist = *cutDistanceRawScore;

  	int totalScore = beforeCut+afterCut+cutDist;

	if(SaberType == 0)
	{
		Leftnum++;
		LeftHand_Average += totalScore;

		FinalLeftHand_Average = LeftHand_Average / Leftnum;
	}
	else
	{
		Rightnum++;
		RightHand_Average += totalScore;

		FinalRightHand_Average = RightHand_Average / Rightnum;
	}
	runScores2 = false;
	Update_Text();
}