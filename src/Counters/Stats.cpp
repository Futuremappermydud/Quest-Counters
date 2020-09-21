#include "../../include/Main.hpp"
#include "../Utils/PPUtils.hpp"

TextObject StatsTextObject;
int Stats_HitNotes = 0;
float Stats_PP = 0;
int Stats_MissedNotes = 0;
int Stats_BombsHit = 0;

void Stats_Start(ResultsViewController* self)
{
	if(self->levelCompletionResults->levelEndStateType.value == 1)
	{
		StatsTextObject.parentTransform = (Il2CppObject*)self->clearedDifficultyText->get_transform()->get_parent()->get_parent();
	}
	else
	{
		StatsTextObject.parentTransform = (Il2CppObject*)self->failedDifficultyText->get_transform()->get_parent()->get_parent();
	}
	std::string PPText = IsRanked(songID) ? Round(Stats_PP) : "Not Ranked!";
	StatsTextObject.text = "<color=#00FF00>Hit</color> Notes: " + std::to_string(Stats_HitNotes) + "\n<color=#FF0000>Missed</color> Notes: " + std::to_string(Stats_MissedNotes) + "\n<color=blue>PP</color>(Score Saber): " + PPText, "\n<color=#545454>Bombs</color> Hit: " + std::to_string(Stats_BombsHit);
	StatsTextObject.fontSize = 12.0F;
	StatsTextObject.create();
}