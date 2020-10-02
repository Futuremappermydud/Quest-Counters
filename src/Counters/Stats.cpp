#include "../../include/Main.hpp"
#include "extern/PP-Utils/shared/PPUtils.hpp"

TextObject StatsTextObject;
int Stats_HitNotes = 0;
float Stats_PP = 0;
int Stats_MissedNotes = 0;
int Stats_BombsHit = 0;
UnityEngine::GameObject* Parent;

void Destroy(Il2CppObject* obj)
{
	RunMethod("UnityEngine", "Object", "Destroy", obj);
}

void Stats_Start(ResultsViewController* self)
{
	return;
	Parent = UnityEngine::GameObject::New_ctor();
	if(StatsTextObject.gameObj != nullptr)
	{
		Destroy(StatsTextObject.gameObj);
		
	}
	if(self->levelCompletionResults->levelEndStateType.value == 1)
	{
		Parent->get_transform()->set_parent(self->clearedPanel->get_transform());
		StatsTextObject.parentTransform = (Il2CppObject*)Parent->get_transform();
		StatsTextObject.sizeDelta = {0, 0};
	}
	else
	{
		Parent->get_transform()->set_parent(self->failedPanel->get_transform());
		StatsTextObject.parentTransform = (Il2CppObject*)Parent->get_transform();
		StatsTextObject.sizeDelta = {0, 0};
	}
	std::string PPText = IsRanked(songID) ? Round(Stats_PP) + "pp" : "Not Ranked!";
	StatsTextObject.text = "<color=#00FF00>Hit</color> Notes: " + std::to_string(Stats_HitNotes) + "    <color=#FF0000>Missed</color> Notes: " + std::to_string(Stats_MissedNotes) + "\nPotential <color=blue>PP</color>: " + PPText + "    <color=#545454>Bombs</color> Hit: " + std::to_string(Stats_BombsHit);
	StatsTextObject.fontSize = 4.0F;



	StatsTextObject.create();
}